# ESP32 Notes


## Devkits for prototyping:
Development kits are listed at [Dev-Kits](https://www.espressif.com/en/products/devkits)


## Available module classes
All Module options are listed at [Modules Overview](https://www.espressif.com/en/products/modules)
- PICO: SIP (looks like a chip)
	- Integrates RAM and Flash. 
	- Only separate antenna needed
- SOLO: SOIC option.
	- Based on: `ESP32-S0WD`
- WROOM: Module with integrated Flash for Wifi / BT-Applications
	- Based on: `ESP32-D0WD`
	- Integrates SPI-connected Flash
	- Often with build-in Antenna
- WROVER: Module with integrated Flash and RAM for IOT-Applications
	- Based on: `ESP32-D0WD`
	- Integrates SPI-connected Flash
	- Integrates SPI-connected RAM
	- Often with build-in Antenna


## References:
Since i concentrate on the classic ESP32 platform (because of Ethernet, WiFi and Bluetooth), only links to appropriate datasheets are 
provide initially. 
[WROOM-Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32-wroom-32_datasheet_en.pdf)
[WROVER-Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32-wrover_datasheet_en.pdf)
[PICO-Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32-pico-d4_datasheet_en.pdf)
[ESP32-Datasheet](https://www.espressif.com/sites/default/files/documentation/esp32_datasheet_en.pdf)
[ESP32-Reference-Manual](https://www.espressif.com/sites/default/files/documentation/esp32_technical_reference_manual_en.pdf)

of corse you can also look up all datasheets from the manufacturer.

## Available Platforms
The overview of available SoC is listed at [SoC Overview](https://www.espressif.com/en/products/socs). These SoCs are the basis of available modules and Dev-Kits
The following sections sum up the highlight of each system.

### ESP3266
- 32-bit 
- 160 MHz single Core
- 160 kB RAM
- WiFi
- UART, GPIO, I2C, I2S, SDIO, PWM, ADC and SPI

| Chip		| Flash  | Modules DevBoard 	   |
| --------- | ------ | ----------------------- |
| ESP8266EX	| N/A    | WROOM-02D -02U 02 -S2   |
| ESP8285	| 160 kB | 1.2 MB | N/A 	       |

### ESP32
- 32-bit 
- 80-**240** MHz 
- 16kB SRAM on RTC (Real-Time-Controller)
- 520 kB SRAM for SoIC
- 448 kB ROM
- 1kbit eFuse-ROM (768bit for customer application)
- 1-**2 Cores**
- WiFi + **Bluetooth**
- UART, GPIO, I2C, I2S, SDIO, PWM, ADC, SPI and RMT
- Touch + SensorAmp + SD-card + **Ethernet**

| Chip			   | Core | Flash | PSRAM  | Modules 						|
| ---------------- | ---- | ----- | ------ | ------------------------------ |
| **ESP32-D0WD**   | 2    |  N/A  | N/A    | WROOM-32D /-32U WROVER-B /-IB	|
| ESP32-D0WD-V3    | 2    |  N/A  | N/A    | WROOM-32E /-32UE WROVER-E /-IE |
| **ESP32-S0WD**   | 1    |  N/A  | N/A    | SOLO-1							|
| ESP32-D0WDQ6     | 2 	  |  N/A  | N/A    | WROOM-32 WROVER WROVER-I		|
| ESP32-D0WDQ6-V3  | 2    |  N/A  | N/A    |								|
| ESP32-D2WD	   | 2 	  |  2 MB | N/A    |								|
| ESP32-U4WDH	   | 1    |  4 MB | N/A    | MINI-1							|
| ESP32-PICO-D4	   | 2	  |  4 MB | 2 MB   |								|
| ESP32-PICO-V3    | 2 	  |  4 MB | N/A    |								|
| ESP32-PICO-V3-02 | 2 	  |  8 MB | N/A    | PICO-MINI-02 					|

### ESP32-S2
- 32-bit 
- 240 MHz (single core)
- 16kB SRAM on RTC (Real-Time-Controller)
- 320 kB SRAM for SoIC
- 128 kB ROM
- WiFi
- **1 full-speed USB OTG interface**, 
- SPI, I2S, UART, I2C, LED PWM, LCD interface, camera interface, ADC, DAC, touch sensor, temperature sensor

| Chip			   | Core | Flash    | PSRAM  | Modules 					|
| ---------------- | ---- | -------- | ------ | --------------------------- |
| **ESP32-S2**     | 1    |  N/A     | N/A    | S2-WROVER /-I S2-WROOM /-I 	|
| ESP32-S2F        | 1    |  2-4 MB  | 2 MB   | S2-MINI-1 /-1U 				|

### ESP32-C3
- 32-bit **RISC-V**
- 160 MHz (single core)
- 8kB SRAM on RTC (Real-Time-Controller)
- 400 kB SRAM for SoIC
- 384 kB ROM
- WiFi + Bluetooth

| Chip			   | Core | Flash | PSRAM  | Modules 			|
| ---------------- | ---- | ----- | ------ | ------------------ |
| **ESP32-C3**     | 1    |  N/A  | N/A    | ESP32-C3-WROOM-1 	|
| ESP32-C2F        | 1    |  4 MB | N/A    | ESP32-C3-MINI-1	|


## ESP32-Platform components

### Xtensa-Processor
The core of the SoC is 1-2 Xtensia-Processors. 
- These are originally developed by Tensilica as configurable IP-core (Tensilica is now bougth by Cadance Design Systems)
- Their DPUs-IP-cores (Dataplane Processors) try to combines advantages of processors and digital signal processors. 
- Xtensa is a configurable Processor, that can be produced according to specific needs. Especially SIMD-commands (single instruction / multiple data) can be added easily.
- The toolchain is based on GNU

### Hardware
#### Processor
- bis 240 MHz
- 7-Stage Pipeline
- FPU
- DSP support for 32bit multiplier / 32bit divider
- 32 interrupt-vectors / 70 sources
- JTAG-Support

#### ClockTree
- internal 8 MHz oscillator
- internal RC-oscillator
- 2-60 MHz crystal oscillator (40 MHz if in WiFi/BT-application)
- 2 Groups of 2x 64bit Timer and Watchdog
- RTC-timer and watchdog

### Peripheral interfaces
Note: Most digital Interfaces can be connected to arbitrary pins. JTAG / SD / SDIO / QSPI / MII have to be connected to certain ports.
- GPIO
- 18x 12bit-SAR ADC
- 2x 8bit DAC
- 10x touch inputs
- temp sensor
- Hall-sensor (compass)
- 4x SPI
- 2x I2C/I2S
- 3x UART
- 1x Host for 
	- SD: Secure digital memory
	- SDIO: Secure digital IO
	- MMC: Multimedia Cards
- 1x Slave SDIO / SPI
- Ethernet MAC interface (17pins-MII or 9pins-RMII)
- CAN 2.0
- IR (Tx/Rx)
- Motor PWM
- 16x LED-PWM


## ToolChain
Follow the instructions on [Getting started](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html) 
to get the appropriate toolchain for your ESP-projects

https://osdn.net/projects/mingw/downloads/68260/mingw-get-setup.exe/

