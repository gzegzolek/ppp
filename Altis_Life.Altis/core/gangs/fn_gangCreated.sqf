#include "..\..\script_macros.hpp"
/*
	File: fn_gangCreated.sqf
	Author: Bryan "Tonic" Boardwine

	Description:
	Tells the player that the gang is created and throws him into it.
*/
private "_group";
life_action_gangInUse = nil;

if(TTPBANK < (LIFE_SETTINGS(getNumber,"gang_price"))) exitWith {
	hint format[localize "STR_GNOTF_NotEnoughMoney",[((LIFE_SETTINGS(getNumber,"gang_price"))-TTPBANK)] call life_fnc_numberText];
	{grpPlayer SVAR [_x,nil,true];} forEach ["gang_id","gang_owner","gang_name","gang_members","gang_maxmembers","gang_bank"];
};

SUB(TTPBANK,(LIFE_SETTINGS(getNumber,"gang_price")));
[1] call SOCK_fnc_updatePartial;

hint format[localize "STR_GNOTF_CreateSuccess",(group player) getVariable "gang_name",[(LIFE_SETTINGS(getNumber,"gang_price"))] call life_fnc_numberText];
