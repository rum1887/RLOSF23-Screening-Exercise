# Reinforcement Learning Open-Source Fest Screening Task 2023

## Feature Engineering in VW using LUA
The following repository contains the files generated on completing the screening tasks for the project <b>Feature Engineering in Vowpal Wabbit using Lua</b>.
For best experience view on dark mode.<br>
## System details
- System: MacBook Air (M1, 2020)
- OS: macOS Monetry Version 12.6
- Architecture: arm64
- Lua version: lua-5.4.4

## Exercise 1: Working with VW
### Tasks
1. Compile and run VW <br><br>Output (1):<br><br><img width="414" alt="pic" src="https://user-images.githubusercontent.com/57267583/228522332-188248c1-21f4-4441-83a9-06fe548a2f40.png">

2. Add some code to print “Hello world” when VW starts<br><br>
Output (1):<br><br><img width="319" alt="Screenshot 2023-03-31 at 4 10 43 AM" src="https://user-images.githubusercontent.com/57267583/228979409-b28ec5df-8960-403f-828c-9532a4c25429.png"><br><br>
Output (2):<br><br><img width="849" alt="Screenshot 2023-03-31 at 4 11 49 AM" src="https://user-images.githubusercontent.com/57267583/228979541-1c8412b6-e680-4af8-bcb6-eafe2b01b8c8.png"><br><br>
Output (3):<br><br><img width="434" alt="Screenshot 2023-03-31 at 4 12 54 AM" src="https://user-images.githubusercontent.com/57267583/228979796-345276c4-7c3f-4081-894d-e744a5d16772.png"><br>

3. Commit this to your own fork of the repo and [here's](https://github.com/rum1887/vowpal_wabbit/blob/hello-world/vowpalwabbit/cli/src/main.cc) the file modified<br>
https://github.com/rum1887/vowpal_wabbit/tree/hello-world <br>

### Instructions to build and run 
1. Clone my fork of vowpal wabbit <br>`git clone --recursive https://github.com/rum1887/vowpal_wabbit`<br>`git checkout hello-world`<br>
2. Follow the build and install instructions at <br> https://github.com/VowpalWabbit/vowpal_wabbit/wiki/Building<br>
3. Add the build location to the `PATH` by replacing "ramya" with your user name in the bash script:<br>
- `vi ./zshrc`. Opens the bash/zsh shell
- `export PATH="/Users/ramya/vowpal_wabbit/build/vowpalwabbit/cli:$PATH"`. Paste the build location to the shell
- `Source ./zshrc`. Refresh the shell to record the changes
4. Run any vw command to see the output<br> `vw --version` <br>

## Exercise 2: Working with Lua
### Tasks
1. Build Lua<br><br>Output (1):<br><br><img width="401" alt="Screenshot 2023-03-29 at 5 50 28 PM" src="https://user-images.githubusercontent.com/57267583/228533664-4d483ef5-43cc-4e17-bcd5-ef1be58b7b05.png">

2. Create Lua object in C++. Print “[your name] says hello” from within Lua. Here's the file created: [createLuaObject.cpp](https://github.com/rum1887/RLOSF23-Screening-Exercise/blob/main/createLuaObject.cpp)<br><br>Output (1):<br><br><img width="1430" alt="Screenshot 2023-04-02 at 1 53 58 PM" src="https://user-images.githubusercontent.com/57267583/229341464-31a35917-5208-4aee-bb4e-3fff1b8607ba.png">

3. Pass an int variable to Lua and print out the value in Lua. Here's the file created: [passingDataToLua.cpp](https://github.com/rum1887/RLOSF23-Screening-Exercise/blob/main/passingDataToLua.cpp)<br><br>Output (1):<br><br><img width="1430" alt="Screenshot 2023-04-02 at 1 56 07 PM" src="https://user-images.githubusercontent.com/57267583/229341493-3c9a02e4-5a51-45f3-a3fb-bcf944eb8744.png">

4. Change value of an int variable in Lua and print it out in C++. Here's the file created: [changeDataLua.cpp](https://github.com/rum1887/RLOSF23-Screening-Exercise/blob/main/changeDataLua.cpp)<br><br>Output (1):<br><br><img width="1428" alt="Screenshot 2023-04-02 at 1 52 16 PM" src="https://user-images.githubusercontent.com/57267583/229341511-ab5852d3-687f-43a7-8915-c239db06ec77.png">

### Instructions to build and run<br>
1. Download Lua and follow the build instructions at https://www.lua.org.
2. Clone the repository <br> ```git clone https://github.com/rum1887/RLOSF23-Screening-Exercise```
3. Move into the project repository<br>
```cd RLOSF23-Screening-Exercise```
4. Complile each file using g++ compliler on the command line by passing the file name and the following flags as arguments inside the project folder: <br>
- -I flag includes path to the directory of the source code and the header files 
- -L flag helps the linker find thedirectory which contains "liblua.a" file.
- -llua
- -lstdc++ <br>
Here's the command to compile the createLuaObject.cpp file :<br>
```g++ createLuaObject.cpp -I ~/lua-5.4.4/src -I /usr/local/include/lua5-4.4/ -L /usr/local/include/lua-5.4.4/lib -llua -lstdc++ -o createLuaObject```
4. Command to run the compiled file <br> ```./createLuaObject``` <br>

## References
[Programming In Lua - Lua Quick Start Guide [Book]](https://www.oreilly.com/library/view/lua-quick-start/9781789343229/e839a89f-d773-4f06-aa24-171fee62aa3f.xhtml#:~:text=The%20first%20edition%20of%20Programming,and%20nearly%20200%20top%20publishers.)
<hr><br>

Submitted by <b>Ramyashri Padmanabhakumar</b><br>Feel free to mail me at ramyapgk.tech@gmail.com incase of any queries <br> Have a nice day!
