@echo off
start /b "" "C:\Program Files (x86)\Steam\steamapps\common\Rocket Arena\Mariner\Binaries\Win64\Mariner-Win64-Shipping.exe" "-log"
timeout /t 8 /nobreak
.\Injector.exe --process-name Mariner-Win64-Shipping.exe --inject C:\Users\gregorym\Documents\rocketforever\x64\Release\rocketforever.dll