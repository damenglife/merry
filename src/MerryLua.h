#ifndef _MERRY_LUA_H_
#define _MERRY_LUA_H_

extern "C" {
#include <lua.h>
#include <lualib.h>
#include <lauxlib.h>
}

#include "MerryWx.h"

class MerryLua
{
public:
	MerryLua();
	~MerryLua();

	lua_State* GetLua();

public:
	// events
	void OnClose();
	void OnUndefinedCommand(const wxString& commandName, const wxString& commandArg);

private:
	lua_State* L;
};

extern MerryLua* g_lua;

#endif
