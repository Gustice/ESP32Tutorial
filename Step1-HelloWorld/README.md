# Notes to Hello World Example

## Init
- This exmaple is from `%IDF_PATH%\examples\get-started\hello_world`. 
- Note that all files except the bare minimum is removed.
``` text
Project
	+ main
		- CMakeLists.txt
		- Hello_world.c
	- CMakeLists.txt 		# <- TopLevel C-Make
```

## Execution
- Note preconditions in above readme (../ReadMe.md)
- Start terminal in project folder (folder of this readme)
- Execute `%IDF_PATH%\export.bat`, to have the environment initialized
- Execute `idf.py set-target <target>` (apply ESP32 or ESP32S2 for target)
- Execution of `menuconfig` is not neccessary in this case.
- Execute `idf.py build` to compile the project. Note that:
	- build-directory is created
	- project is compiled with it's dependencies to build
- Execute `idf.py -p COMx flash monitor` (insert connected COM-Port number) to flash the programm and to connect to target.
- Device Info and countdown will appear after downloading of the software is finished.

## Notable mentions
- CMakeLists.txt files comply to build-system documentation
- Note the function `app_main` in the main c-file. This function is the entry point for the underlaying OS.
