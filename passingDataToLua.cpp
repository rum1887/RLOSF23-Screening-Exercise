// Program to illustrate how to pass an int variable to Lua and print out the value in Lua
// This program can be used as a reference to complete the following task "Pass feature data and label into Lua and print to console from Lua"

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
    
    // Check that variable is an integer
    if (!lua_isinteger(L, -1)) {
        printf("Error: value on stack is not an integer\n");
        lua_pop(L, 1);
        return 1;
    }
    std::cout<<"Lua Integer value: ";
    lua_getglobal(L, "print"); // Get the 'print' function from the global table
    lua_pushvalue(L, -2); // Push the integer value back onto the stack (just above 'print')
    lua_call(L, 1, 0); // Call 'print' with 1 argument (the integer value) and 0 return values
    
    // Close Lua state
    lua_close(L);
    
    return 0;
}

