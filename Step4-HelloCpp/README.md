# Notes to C++ Example
Note preconditions in above readme (../ReadMe.md)

## Init
- Prepare the project like in previous step
- Rename main c file to cpp
- Create also the cpp component folder.
``` text
Project
	+ main
		- CMakeLists.txt
		- Hello_world.cpp
	+ components
        + Module
            + include
                module.h
        - CMakeLists.txt
        - module.cpp
    - CMakeLists.txt 		# <- TopLevel C-Make
```
- note that the app_main is the entry point for the RTOS which is compiled in c. Hence you must add a following snippet in main.cpp in order to make it visible for the linker.
``` C++
extern "C" { // This switch allows the ROS C-implementation to find this main
void app_main(void);
}
```
## Execution
Execution runs just like in the previous step with the difference that the project is now a c++ Project.

## Known Issues
- The problems in the problems view that result from parsed compiler error messages are not clickable the problem is because of the implementation the  links are dislocated. The fancy formatted view helps to locate the position of the problem though. 


