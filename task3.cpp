// C++ program to illustrate the use of
// LuaCpp library
//#include <LuaCpp.hpp>
// include Lua headers
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
    luaInt += 10;
    lua_pop(L, 1);
    lua_pushinteger(L, luaInt);
    myInt=luaInt;
    
    // Print new integer value
    std::cout<<"Printing out the value in C++ : "<< myInt<<std::endl;
    
    // Pop integer variable from stack
    lua_pop(L, 1);
    
    // Close Lua state
    lua_close(L);
    
    return 0;
}
