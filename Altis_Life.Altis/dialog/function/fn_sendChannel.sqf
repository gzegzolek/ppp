/*
	File: fn_sendChannel.sqf
	Author: alleskapot & Lifted
	Thanks again for all the help alleskapot!
	Description:
	Erm�glicht senden bzw. die Abfrage des Geschriebenen.

*/

private["_message"];
disableSerialization;

waitUntil {!isnull (findDisplay 9000)};

if (life_cash < 100000 ) exitWith { systemChat "Potrzebujesz 100,000$ aby wys�a� wiadomo��!"; };
if (playerSide != civilian ) exitWith { systemChat "Musisz by� cywilem!"; };
if (life_channel_send) exitWith { systemChat "Poczeka� 10 minut, zanim wy�lesz now� wiadomo��!"; };
life_cash = life_cash - 100000;

_message = ctrlText 9001;

[[3,format ["Altis News %1",_message]],"life_fnc_broadcast",true,false] call life_fnc_MP;
life_channel_send = true;

[] spawn
{
	sleep 600;
	life_channel_send = false;
};