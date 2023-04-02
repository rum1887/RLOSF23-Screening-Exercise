// A C++ program to illustrate how to create a lua object in C++ and print from within Lua
//This program can be used as a referernce to "Add Lua to VW and print “[your name] says hello from VW Lua"

// include Lua headers
extern "C" {
    #include "lua.h"
    #include "lualib.h"
    #include "lauxlib.h"
}
#include <iostream>

int main() {
	//Creating a Lua object in C++
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);
	lua_getglobal(L, "package");
	lua_getfield(L, -1, "loaded");
	lua_getfield(L, -1, "io");
	if (!lua_isnil(L, -1)) {
    		lua_pop(L, 3);
    		lua_pushstring(L, "Ramya says hello");
    		lua_getglobal(L, "print");
    		lua_insert(L, -2);
    		lua_call(L, 1, 0);
	}
	else {
    		printf("Lua standard library not loaded correctly\n");
    		lua_pop(L, 3);
	}
 
    	// Close Lua state
    	lua_close(L);
   	return 0;
}

