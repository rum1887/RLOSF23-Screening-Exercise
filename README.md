# RLOSF23-ScreeningExercise

## Feature Engineering in VW using LUA
The following repository contains the files generated on completing the screening tasks for the project "Feature Engineering in VW using LUA". Highly interested to contribute to the project !

## System details
- System: MacBook Air (M1, 2020)
- OS: macOS Monetry Version 12.6
- Architecture: arm64
- Lua version: lua-5.4.4

## Exercise 1: Working with VW
### Tasks
1. _Compile and run VW_ <br><br>Output(1)<br><br><img width="414" alt="pic" src="https://user-images.githubusercontent.com/57267583/228522332-188248c1-21f4-4441-83a9-06fe548a2f40.png">

2. _Add some code to print “Hello world” when VW starts_ <br><br>
Output (1):<br><br><img width="319" alt="Screenshot 2023-03-31 at 4 10 43 AM" src="https://user-images.githubusercontent.com/57267583/228979409-b28ec5df-8960-403f-828c-9532a4c25429.png"><br>
Output (2):<br><br><img width="849" alt="Screenshot 2023-03-31 at 4 11 49 AM" src="https://user-images.githubusercontent.com/57267583/228979541-1c8412b6-e680-4af8-bcb6-eafe2b01b8c8.png"><br>
Output (3):<br><br><img width="434" alt="Screenshot 2023-03-31 at 4 12 54 AM" src="https://user-images.githubusercontent.com/57267583/228979796-345276c4-7c3f-4081-894d-e744a5d16772.png">

3. _Commit this to your own fork of the repo_<br>
https://github.com/rum1887/vowpal_wabbit/tree/hello-world 

### Instructions to build and run 
1. _Clone my fork of vowpal wabbit_ <br>` git clone https://github.com/rum1887/vowpal_wabbit`
2. _Follow the build and install instructions at_ <br> https://github.com/VowpalWabbit/vowpal_wabbit/wiki/Building 
3. _Add the build location to the `PATH` by replacing ramya with your user name_: <br>`export PATH="/Users/ramya/vowpal_wabbit/build/vowpalwabbit/cli:$PATH"`
4. _Run any vw command to see the output_.<br> `vw --version` <br>

## Exercise 2: Working with Lua

### Tasks

1. _Build Lua_<br><br>Output(1)<br><br><img width="401" alt="Screenshot 2023-03-29 at 5 50 28 PM" src="https://user-images.githubusercontent.com/57267583/228533664-4d483ef5-43cc-4e17-bcd5-ef1be58b7b05.png">

2. _Create Lua object in C++. Print “[your name] says hello” from within Lua_<br><br>Output(1)<br><br><img width="1224" alt="Screenshot 2023-03-31 at 3 20 14 AM" src="https://user-images.githubusercontent.com/57267583/228972417-47c5d560-5129-4ccf-89c8-42c0108941c7.png">

3. _Pass an int variable to Lua and print out the value in Lua_

4. _Change value of an int variable in Lua and print it out in C++_

### Instructions to build and run
1. _Clone the repository_ <br> ```git clone https://github.com/rum1887/RLOSF23-Screening-Exercise```
2. _Complile each task using gcc compliler on the command line by passing the following flags as arguments_: <br>
- -I flag includes path to the directory which contains "liblua.a" file and include directory in the OS 
- -L flag helps the linker find the header files located in the source folder of LUA.<br> ```gcc task1.cpp -I ~/lua-5.4.4/src -I /usr/local/include/lua5-4.4/ -L /usr/local/include/lua-5.4.4/lib -llua -o task1```

3. _Output the file_ <br> ```./task1``` <br>

Submitted by Ramyashri Padmanabhakumar<br>
Mail me at ramyapgk.tech@gmail.com is case of any queries.
