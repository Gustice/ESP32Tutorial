## Install Tools
	- Install ToolChain from Espressif homepage
	- Create System Variable IDF_PATH to Idf clone repository
- Note There is a VS-Plugin but i didn't manage to get it work


NOTE: This are just fast notes which i can bring in final form later
## Step 1 - Hello World - Get familiar with toolchain
- Copy `%IDF_PATH%/examples/get-started/hello_world`
- Note Parts of projekt
- Initializing:
	- %IDF_PATH%\export.bat
	- `idf.py set-target esp32`
		- Note new sdkconfig 
		- This can be basis for `sdkconfig.defaults`
	- `idf.py menuconfig`
	- `idf.py build`
		- Note hint after compilation -> flash-command
	- idf.py -p COMx flash monitor

