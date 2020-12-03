@echo off

echo Compiling small base with gnu c++ 

:: Compiling static library
g++ -c -o _build\statLib.o statLib\statLib.cpp
ar rcs statLib.lib _build\statLib.o 

:: Compiling dynamic library
g++ -c -o _build\dynLib.o dynLib\dynLib.cpp
g++ -c -o _build\util.o dynLib\util.cpp
g++ -shared -o dynLib.dll _build\dynLib.o _build\util.o
:: Note that all cpp files must compiled seperately

:: Compiling app
g++ -o app.exe app\main.cpp app\process.cpp -I statLib -I dynLib _build\statLib.lib dynLib.dll
echo 
app.exe 2
:: Note: If dynLib.dll is missing app.exe won't run
