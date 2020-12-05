# Notes to UnitTest-Example
Note preconditions in above readme (../ReadMe.md)

## Init
- Prepare the project like in previous step
- Create also components like in previous step, you may also create a 
- Besides the project you must create a test-project directory to place all units tests
- Prepare the test-project as cMake-project similar to previous cMake example
``` text
Project
	+ main
		- CMakeLists.txt
		- Hello_world.cpp
	+ components
        + CModule
            + include
                cModule.h
        - CMakeLists.txt
        - cModule.cpp
        + CppModule
            + include
                cppModule.h
        - CMakeLists.txt
        - cppModule.cpp
    + unitTests
        + ModuleTests
            + tests
                - cPart.cpp
                - cppPart.cpp
            + include
                - catch.hpp
                - TestUtils.h
                - CMakeLists.txt
            - CMakeLists.txt
            - TestMain.cpp  # <- this contains the test-runner
    - CMakeLists.txt 		# <- TopLevel C-Make (but it spares the unitTest folder)
```
- Lets say we create a folder called `unitTests` on root level. 
    Note: This makes sure your IntelliSense can easily configured to separate them from the rest of your project.
    So you won't navigate permanently in Mock-objects created in unitTest folders.
- Note that the cModule must be placed in switched `extern "C"{ ... }`-block 
    in order to make the module available also for the unit tests 
    (even if your main project is a c project).


## Execution
Execution of the project runs just like in the previous steps
The Execution of the test project is conducted in following steps:
    - VS Code in the root of the ModuleTests-project 
    - Execute `CMake: Configure` and select target platform (lets say GNU).
    - Then you can execute `CMake: Build` to build the project. 
    - Execute the output exe to run all tests
    - Note that you can also define Tasks to shortcut the cMake and test-runner commands
    - Note that you can also debug if the project is setup correctly
