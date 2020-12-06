# Notes to Editor Example
Note preconditions in above readme (../ReadMe.md)

## Init
- Prepare the project like in previous step
- Start terminal in project folder (folder of this readme)
- Execute `%IDF_PATH%\export.bat`, to have the environment initialized
- Execute `code .` in root path, after you executed `export.bat`. This makes the exported environment available for VS-Code.
- Execute `C/C++: Edit Configurations (JSON)` to create `c_cpp_properties.json`. You can also copy it from a template
- Execute `Tasks: Configure Task` to create `tasks.json`. You can also copy it from a template

## Execution
- You can type the `idf.py` commands into the build in terminal.
- But you can also use defined tasks now: Hit `Ctrl+Shift+P` and type `Tasks: Run Task` and hit enter. This will display you all options defined in `tasks.json`. (Note `idf.py set-target <target>` is still to be input in shell)
	- `idf.py set-target <target>`
	- Run `>Tasks: Run Task` -> Select `Menuconfig` instead of typing `idf.py menuconfig` (this might be buggy in this case execute it again in terminal)
	- Press `Ctrl+Shift+B` or run `>Tasks: Run Task` -> select `Build Project` instead of typing `idf.py build`
	- Run `>Tasks: Run Task` -> select `Flash & Monitor` instead of typing `idf.py -p COMx flash monitor`
- Note that this project contains config files for VS Code 
	- `c_cpp_properties.json` configures the IntelliSense engine (also to navigate to definition)
	- `tasks.json` configures shortcuts for common IDF-tasks
	- The default build task can also run by shortcut (normally `Ctrl+Shift+B`)
	- If you use the defined task to build the app you will note that the build problems are displayed in the problems view.

## Known Issues
- The problems in the problems view that result from parsed compiler error messages are not clickable the problem is because of the implementation the  links are dislocated. The fancy formatted view helps to locate the position of the problem though. 
