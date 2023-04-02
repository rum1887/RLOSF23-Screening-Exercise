// C++ program to illustrate how to change the value of variables in lua and printing in C++.
// The following program can be used as an reference to change features and label using Lua and print it in VW

extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}

#include <iostream>
int main() {
    lua_State* L = luaL_newstate();
    luaL_openlibs(L);
    
    // Push integer variable onto stack
    int myInt = 42;
    lua_pushinteger(L, myInt);
    
    // Retrieve integer variable from stack and change its value
    lua_Integer luaInt = luaL_checkinteger(L, -1);
    //Modifying the data within lua
    luaInt += 10;
    lua_pop(L, 1);
    lua_pushinteger(L, luaInt);
    
    //store in a cpp variable
    myInt=luaInt;
    
    // Print new integer value
    std::cout<<"Printing out the value in C++ : "<< myInt<<std::endl;
    
    // Pop integer variable from stack
    lua_pop(L, 1);
    
    // Close Lua state
    lua_close(L);
    
    return 0;
}
