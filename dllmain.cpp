// dllmain.cpp : Defines the entry point for the DLL application.
#include "SDK.hpp"

#include<ranges>
#include<vector>
#include<iostream>
#include<map>
#include <format>

#include "includes.h"

#include "kiero/minhook/include/MinHook.h"

extern LRESULT ImGui_ImplWin32_WndProcHandler(HWND hWnd, UINT msg, WPARAM wParam, LPARAM lParam);

Present oPresent;
HWND window = NULL;
WNDPROC oWndProc;
ID3D11Device* pDevice = NULL;
ID3D11DeviceContext* pContext = NULL;
ID3D11RenderTargetView* mainRenderTargetView;

void InitImGui()
{
	ImGui::CreateContext();
	ImGuiIO& io = ImGui::GetIO();
	io.ConfigFlags = ImGuiConfigFlags_NoMouseCursorChange;
	ImGui_ImplWin32_Init(window);
	ImGui_ImplDX11_Init(pDevice, pContext);
}

LRESULT __stdcall WndProc(const HWND hWnd, UINT uMsg, WPARAM wParam, LPARAM lParam) {

	if (true && ImGui_ImplWin32_WndProcHandler(hWnd, uMsg, wParam, lParam))
		return true;

	return CallWindowProc(oWndProc, hWnd, uMsg, wParam, lParam);
}

void ListAllObjectsOfClass(SDK::UClass* theClass, bool includeDefault) {
	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (Obj->IsDefaultObject() && !includeDefault)
			continue;

		if (Obj->IsA(theClass))
		{
			std::cout << Obj->GetFullName() << std::endl;
		}
	}
}

uintptr_t global_baseaddress = 0;

void* FMemoryMalloc(int size) {
	return reinterpret_cast<void* (*)(size_t size, size_t alignment)>(global_baseaddress + 0xe4ed20)(size, 0);
}

void ExecuteConsoleCommand(const wchar_t* cmd) {
	SDK::UWorld* world = SDK::UWorld::GetWorld();

	SDK::APlayerController* pc = world->OwningGameInstance->LocalPlayers[0]->PlayerController;

	SDK::UKismetSystemLibrary::ExecuteConsoleCommand(world, SDK::FString(cmd), pc);
}

bool menuEnabled = true;
char* command = new char[50];

std::map<std::string, std::string> mapMap;
const char* maps[] = {"Hypersonic Heights", "Apogee Acres", "Temples of Jaquaa", "Ruined City", "Grand Harbor", "Lagoon of Doom", "Unfinished Pirate Map", "Stompy's Refuge", "Megadon Junction", "Kayo Canyon", "Shimmering Depths", "Star of Crater", "Icefall Keep", "Frostwind Grove", "Golden Zephyr", "Conjura", "Unfinished Pillar Map", "Slightly Different Unfinished Pillar Map"};

std::map<std::string, std::string> modeMap;
const char* modes[] = { "1v1 Duel", "Free For All Elimination", "Free For All Knockout", "Knockout", "MegaRocket", "Rocketball", "Rocketbot Attack", "Team Deathmatch", "Treasure Hunt", "Yeti Attack (Unfinished)" };

std::map<std::string, std::string> characterMap;
const char* characters[] = { "Amphora", "Jayto", "Izelle", "Plink", "Kayi", "Blastbeard", "Mysteen", "Topnotch", "Flux", "Boone", "Rev", "Leef", "Gant", "Grenadier (Unreleased)", "Splitgun (Unreleased)", "Boomguy (Unreleased)"};

const char* characterCodenames[] = {"Diver", "Maverick", "Stinger", "Dash", "Slider", "Blastbeard", "Merlin", "Nimbus", "Flux", "Boone", "Rudi", "Poe", "Gant"};

std::string characterToLock = "";

bool init = false;
HRESULT __stdcall hkPresent(IDXGISwapChain* pSwapChain, UINT SyncInterval, UINT Flags)
{
	if (!init)
	{
		if (SUCCEEDED(pSwapChain->GetDevice(__uuidof(ID3D11Device), (void**)&pDevice)))
		{
			pDevice->GetImmediateContext(&pContext);
			DXGI_SWAP_CHAIN_DESC sd;
			pSwapChain->GetDesc(&sd);
			window = sd.OutputWindow;
			ID3D11Texture2D* pBackBuffer;
			pSwapChain->GetBuffer(0, __uuidof(ID3D11Texture2D), (LPVOID*)&pBackBuffer);
			pDevice->CreateRenderTargetView(pBackBuffer, NULL, &mainRenderTargetView);
			pBackBuffer->Release();
			oWndProc = (WNDPROC)SetWindowLongPtr(window, GWLP_WNDPROC, (LONG_PTR)WndProc);
			InitImGui();
			init = true;
		}

		else
			return oPresent(pSwapChain, SyncInterval, Flags);
	}

	ImGui_ImplDX11_NewFrame();
	ImGui_ImplWin32_NewFrame();
	ImGui::NewFrame();

	if (menuEnabled) {
		ImGui::Begin("Rocket Forever! (F1 to Toggle Menu)", &menuEnabled, ImGuiWindowFlags_::ImGuiWindowFlags_NoResize);
		ImGui::SetWindowSize(ImVec2(500, 550));

		static int currentCharacter = 0;
		static bool excessiveNumBots = false;

		ImGui::ListBox("Character Select", &currentCharacter, characters, IM_ARRAYSIZE(characters));
		characterToLock = characterMap[characters[currentCharacter]];

		ImGui::BeginTabBar("tabs");
		if (ImGui::BeginTabItem("Singleplayer")) {
			static int currentMap = 0;
			static int currentMode = 0;
			static int numBots = 0;
			static int botDifficulty = 0;
			static std::string botDifficultyString = "Easy";

			ImGui::ListBox("Map Select", &currentMap, maps, IM_ARRAYSIZE(maps));

			ImGui::ListBox("Mode Select", &currentMode, modes, IM_ARRAYSIZE(modes));

			if (excessiveNumBots) {
				ImGui::SliderInt("Number of Bots", &numBots, 0, 50);
			}
			else {
				ImGui::SliderInt("Number of Bots", &numBots, 0, 5);
			}

			if (ImGui::BeginCombo("Bot Difficulty", botDifficultyString.c_str())) {
				if (ImGui::Selectable("Easy", botDifficulty == 0)) {
					botDifficulty = 0;
					botDifficultyString = "Easy";
				}
				if (ImGui::Selectable("Normal", botDifficulty == 1)) {
					botDifficulty = 1;
					botDifficultyString = "Normal";
				}
				if (ImGui::Selectable("Hard", botDifficulty == 2)) {
					botDifficulty = 2;
					botDifficultyString = "Hard";
				}
				if (ImGui::Selectable("Extreme", botDifficulty == 3)) {
					botDifficulty = 3;
					botDifficultyString = "Extreme";
				}

				ImGui::EndCombo();
			}

			if (ImGui::Button("Start Match!")) {
				menuEnabled = false;

				std::string formatString = std::format("open {}?game={}?Bots={}?BotDifficulty={}", mapMap[maps[currentMap]], modeMap[modes[currentMode]], numBots, botDifficulty);

				std::wstring wFormatString = std::wstring(formatString.begin(), formatString.end());

				ExecuteConsoleCommand(wFormatString.c_str());
			}
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Settings")) {
			//ImGui::InputText("Player Name", playerName, 50);
			ImGui::Checkbox("Allow Excessive Numbers of Bots (May cause lag!)", &excessiveNumBots);
			ImGui::EndTabItem();
		}
		if (ImGui::BeginTabItem("Developer")) {
			ImGui::InputTextWithHint("Console Command", "Enter Console Command...", command, 50);
			if (ImGui::Button("Execute!")) {
				menuEnabled = false;

				std::string stdCommand(command);

				std::wstring wCommand(stdCommand.begin(), stdCommand.end());

				ExecuteConsoleCommand(wCommand.c_str());
			}
			ImGui::EndTabItem();
		}
		ImGui::EndTabBar();
		ImGui::End();
	}
	
	ImGui::Render();

	pContext->OMSetRenderTargets(1, &mainRenderTargetView, NULL);
	ImGui_ImplDX11_RenderDrawData(ImGui::GetDrawData());
	return oPresent(pSwapChain, SyncInterval, Flags);
}

typedef __int64(__thiscall* CharacterPreselect)(SDK::UObject*, SDK::UObject*);

CharacterPreselect origCharacterPreselect = 0;

bool bCreatedBots = false;

bool CharacterPreselectHook(SDK::UObject* param1, SDK::UObject* param2) {
	return param2->GetFullName().find(characterToLock) != std::string::npos;
}

typedef void(__thiscall* ChangeBotCharacterFunction)(SDK::UObject*);

ChangeBotCharacterFunction origChangeBotCharacterFunction = 0;

void ChangeBotCharacterFunctionHook(SDK::UObject* param1) {
	std::cout << "Selecting Random Characters!" << std::endl;
	for (int i = 0; i < SDK::UObject::GObjects->Num(); i++)
	{
		SDK::UObject* Obj = SDK::UObject::GObjects->GetByIndex(i);

		if (!Obj)
			continue;

		if (Obj->IsDefaultObject())
			continue;

		if (Obj == SDK::UWorld::GetWorld()->OwningGameInstance->LocalPlayers[0]->PlayerController->PlayerState)
			continue;

		if (Obj->IsA(SDK::AMarinerPlayerState::StaticClass()) && ((SDK::AMarinerPlayerState*)Obj)->bIsABot)
		{
			int charNum = std::rand() % 12;
			std::string charString = std::string(characterCodenames[charNum]);
			std::wstring charWString(charString.begin(), charString.end());
			std::wstring fmtString;
			if (charWString.find(L"Nimbus") != std::string::npos) {
				fmtString = std::format(L"/Game/Objects/Characters/Marshal/Nimbus.Nimbus_C");
			}
			else {
				fmtString = std::format(L"/Game/Objects/Characters/{}/{}.{}_C", charWString, charWString, charWString);
			}
			
			((SDK::AMarinerPlayerState*)Obj)->Server_SoftSelectPawnClass(SDK::FString(fmtString.c_str()));
		}
	}
	return;
}

void InitHooks() {
	uintptr_t base_address = (uintptr_t)GetModuleHandleA("Mariner-Win64-Shipping.exe");

	global_baseaddress = base_address;

	MH_Initialize();

	CharacterPreselect hookFunc = (CharacterPreselect)(base_address + 0x093a500);

	MH_CreateHook(hookFunc, CharacterPreselectHook, reinterpret_cast<LPVOID*>(&origCharacterPreselect));

	MH_EnableHook(hookFunc);

	//094d110

	ChangeBotCharacterFunction changeBotCharacterFunction = (ChangeBotCharacterFunction)(base_address + 0x094d110);

	MH_CreateHook(changeBotCharacterFunction, ChangeBotCharacterFunctionHook, reinterpret_cast<LPVOID*>(&origChangeBotCharacterFunction));

	MH_EnableHook(changeBotCharacterFunction);
}

void InitConsole() {
	AllocConsole();

	FILE* fDummy;
	freopen_s(&fDummy, "CONIN$", "r", stdin);
	freopen_s(&fDummy, "CONOUT$", "w", stderr);
	freopen_s(&fDummy, "CONOUT$", "w", stdout);
}

void InitGUI() {
	bool init_hook = false;
	do
	{
		if (kiero::init(kiero::RenderType::D3D11) == kiero::Status::Success)
		{
			kiero::bind(8, (void**)&oPresent, hkPresent);
			init_hook = true;
		}
	} while (!init_hook);
}

void InitMaps() {
	mapMap["Hypersonic Heights"] = "A1V3_main";
	mapMap["Apogee Acres"] = "A1V4_main";
	mapMap["Temples of Jaquaa"] = "A2V1_main";
	mapMap["Ruined City"] = "A2V2_main";
	mapMap["Grand Harbor"] = "A3V1_main";
	mapMap["Lagoon of Doom"] = "A3V3_main";
	mapMap["Unfinished Pirate Map"] = "A3V4_main";
	mapMap["Stompy's Refuge"] = "A4V1_main";
	mapMap["Megadon Junction"] = "A4V2_main";
	mapMap["Kayo Canyon"] = "A4V3_TarPit_main";
	mapMap["Shimmering Depths"] = "A5V1_main";
	mapMap["Star of Crater"] = "A5V2_main";
	mapMap["Icefall Keep"] = "A6V1_main";
	mapMap["Frostwind Grove"] = "A6V2_main";
	mapMap["Golden Zephyr"] = "A7V1_main";
	mapMap["Conjura"] = "A8V1_Conjura_main";
	mapMap["Unfinished Pillar Map"] = "A8V2_main";
	mapMap["Slightly Different Unfinished Pillar Map"] = "A9V1_main";

	modeMap["1v1 Duel"] = "GM_Duel";
	modeMap["Free For All Elimination"] = "GM_FFA_Elimination";
	modeMap["Free For All Knockout"] = "GM_FFA_Knockout";
	modeMap["Knockout"] = "GM_Knockout";
	modeMap["MegaRocket"] = "GM_MegaRocket";
	modeMap["Rocketball"] = "GM_Rocketball";
	modeMap["Rocketbot Attack"] = "GM_RocketbotAttack";
	modeMap["Team Deathmatch"] = "GM_TDM";
	modeMap["Treasure Hunt"] = "GM_TreasureHunt";
	modeMap["Yeti Attack (Unfinished)"] = "GM_YetiAttack";

	characterMap["Amphora"] = "MarinerPlayableCharacter DiverCharacterData.DiverCharacterData";
	characterMap["Jayto"] = "MarinerPlayableCharacter MaverickCharacterData.MaverickCharacterData";
	characterMap["Izelle"] = "MarinerPlayableCharacter StingerCharacterData.StingerCharacterData";
	characterMap["Plink"] = "MarinerPlayableCharacter DashCharacterData.DashCharacterData";
	characterMap["Kayi"] = "MarinerPlayableCharacter SliderCharacterData.SliderCharacterData";
	characterMap["Blastbeard"] = "MarinerPlayableCharacter BlastbeardCharacterData.BlastbeardCharacterData";
	characterMap["Mysteen"] = "MarinerPlayableCharacter MerlinCharacterData.MerlinCharacterData";
	characterMap["Topnotch"] = "MarinerPlayableCharacter NimbusCharacterData.NimbusCharacterData";
	characterMap["Flux"] = "MarinerPlayableCharacter FluxCharacterData.FluxCharacterData";
	characterMap["Boone"] = "MarinerPlayableCharacter BooneCharacterData.BooneCharacterData";
	characterMap["Rev"] = "MarinerPlayableCharacter RudiCharacterData.RudiCharacterData";
	characterMap["Leef"] = "MarinerPlayableCharacter PoeCharacterData.PoeCharacterData";
	characterMap["Gant"] = "MarinerPlayableCharacter GantCharacterData.GantCharacterData";
	characterMap["Grenadier (Unreleased)"] = "MarinerPlayableCharacter Grenadier_CharacterData.Grenadier_CharacterData";
	characterMap["Splitgun (Unreleased)"] = "MarinerPlayableCharacter Splitgun_CharacterData.Splitgun_CharacterData";
	characterMap["Boomguy (Unreleased)"] = "MarinerPlayableCharacter Boomguy_CharacterData.Boomguy_CharacterData";
}

bool menuToggledThisKeypress = false;

void MainLoop() {
	if (GetAsyncKeyState(VK_F1)) {
		if (!menuToggledThisKeypress) {
			menuEnabled = !menuEnabled;
			menuToggledThisKeypress = true;
		}
	}
	else {
		menuToggledThisKeypress = false;
	}
}

void RocketForeverMainThread() {
	InitConsole();
	InitHooks();
	InitMaps();
	InitGUI();

	while (true) {
		MainLoop();
	}
}

BOOL APIENTRY DllMain(HMODULE hModule, DWORD ulReasonForCall, LPVOID lpReserved)
{
	DisableThreadLibraryCalls(hModule);

	if (ulReasonForCall != DLL_PROCESS_ATTACH)
		return TRUE;

	HANDLE hThread = CreateThread(nullptr, 0,
		(LPTHREAD_START_ROUTINE)RocketForeverMainThread, hModule, 0, 0);
	if (hThread != nullptr)
		CloseHandle(hThread);

	// TODO: Fill your code here

	return TRUE;
}

