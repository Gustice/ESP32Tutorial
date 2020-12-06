# Toolchain Notes
In order to understand better the next tutorial step this is a small comparison between to approaches of building a software

In both cases the source consists of the same files. The main calls two modules that are integrated differently (at least from linkers point of view).
The output should yield in following text in both cases:
``` text
########################
Entering main ...       
########################
    ## DynLib: Core initialized
    ## DynLib: Core stated
    Core util triggered
    Process Module is called
Returned from call 1
## Static Library is used
    ## StatLib: Helper called
Error: Too little arguments
```

## 0-BareGnu 
This project utilizes only gnu tools to compile the source. 
Just inspect the bat-file in order to understand which steps must be conducted each time to be able to build the project.

Note that becaus app.exe relies on a dll the dll must be also placed in the same output file in order to execute app.exe

## 1-CMake
This project utilizes the cMake tool to somewhat automate the build process. Build scripts must be generated first though.
It also supports cross compilation which is not shown here. 

To run the project you must start code in the root of the 1-CMake-Project. Then execute `CMake: Configure` and select target platform (lets say GNU).
Then you can execute `CMake: Build` to build the project. 

**The same approach will be used at creating of unit tests because, it allows to compile source and tests separately from each other and save time during development, without trying to figure out each time which file must be compiled now to stay in synch.**

### Known issues
By using the CMake tool somehow the app.exe and shared library are dislocated and i cannot fix it by a certain command. Problem is that you have to copy the output dll from "dynLib" to app.exe location to make app.exe run.
Ich you know how to fix it, please contact me.