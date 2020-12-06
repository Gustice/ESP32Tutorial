# Notes to Component Example
Note preconditions in above readme (../ReadMe.md)

## Init
- Prepare the project like in previous step
- Create also the component folder.
``` text
Project
	+ main
		- CMakeLists.txt
		- Hello_world.c
	+ components
        + Module
            + include
                module.h
        - CMakeLists.txt
        - module.c
    - CMakeLists.txt 		# <- TopLevel C-Make
```
- Note that the top root CMakeLists and the main-CMakeLists doesn't change if you add a component ... this is very convenient.

## Execution
Execution runs just like in the previous step with the difference that the components are also compiled and linked if everything was done correctly

## Known Issues
- The problems in the problems view that result from parsed compiler error messages are not clickable the problem is because of the implementation the  links are dislocated. The fancy formatted view helps to locate the position of the problem though. 


