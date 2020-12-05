# ESP32Tutorial
StepByStep Tutorial for ESP32-Projects with VS-Code.

**Note**: Each part shows the result of the lection. The instruction is given in Readme.
I tried to describe also parts for completely new user. But it will certainly help if you also accomplish a VS-Code C/C++ [Tutorial](https://code.visualstudio.com/docs/cpp/config-mingw). This also describes most concepts i'm using to build and unit test my projects.

## Preconditions
Installed programs:
- Visual Studio Code with following extensions:
    - C/C++ (Microsoft)
    - CMake Tools
    - CMake (twxs)
- Installed Espressif toolchain with IDF (IoT-Development-Framework)
    - See [Getting started](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/get-started/index.html) for details
    - Register path to cloned IDF as Environment variable `%IDF_PATH%`
- To compile and run tests you need also to install on you machine
    - MinGW 
    - CMake

**Notes**
- You may use the [Espressif plugin](https://marketplace.visualstudio.com/items?itemName=espressif.esp-idf-extension) on VS Code but actually i wasn't able to get this thing to work.
- You may also use the [platform IO extension](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) (this would be great to start), but i suspect this leaves you less opportunities to maintain projects that relay on different IDF-Versions

## Gists
The following gist may help you.
- [EPS32 Gist](https://gist.github.com/Gustice/254cae5785788ccf500c755ccd079233)
- [ESP32 Snippets Gist](https://gist.github.com/a7fbd5954c25b6a2ef26952a2b36006a)

## Start a Project
To start a new project you generally search of a example that aims your target application.
Lets say you want to build a small web server. In this case on can copy the example in `%IDF_PATH%\examples\wifi\getting_started\softAP` and start to modify it. However one must be 
at least a little aware of the underlying build system in order to add components properly.
This is what this tutorial is about. 
Note that in this tutorial i use only the hello-world example, for no reasons. You can take any
project from examples for your targeted project.

## Reference 
The documentation for the API is pretty good and useful. See [API Reference](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-reference/index.html).

There are also useful guides to dig further into the whole system. [API Guides](https://docs.espressif.com/projects/esp-idf/en/latest/esp32/api-guides/index.html).


## Final notes
If you are using this tutorial please give me feedback so i can revise this tutorial.