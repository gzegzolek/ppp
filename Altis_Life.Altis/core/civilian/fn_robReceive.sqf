/*
	File: fn_robReceive.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_cash"];
_cash = [_this,0,0,[0]] call BIS_fnc_param;
if(_cash == 0) exitWith {titleText[localize "STR_Civ_RobFail","PLAIN"]};

life_cash = life_cash + _cash;
titleText[format[localize "STR_Civ_Robbed",[_cash] call life_fnc_numberText],"PLAIN"];
// Sync life_cash to DB:
[[getPlayerUID player,playerSide,life_cash,0],"DB_fnc_updatePartial",false,false] spawn life_fnc_MP;

// Sync life_atmcash to DB:
[[getPlayerUID player,playerSide,life_atmcash,1],"DB_fnc_updatePartial",false,false] spawn life_fnc_MP