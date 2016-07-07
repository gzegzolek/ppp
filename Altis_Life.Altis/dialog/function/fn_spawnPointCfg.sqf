/*
	File: fn_spawnPointCfg.sqf
	Author: Bryan "Tonic" Boardwine
	
	Description:
	Master configuration for available spawn points depending on the units side.
	
	Return:
	[Spawn Marker,Spawn Name,Image Path]
*/
private["_side","_return"];
_side = [_this,0,civilian,[civilian]] call BIS_fnc_param;

//Spawn Marker, Spawn Name, PathToImage
switch (_side) do
{
	case west:
	{
		if(license_cop_sek && playerSide == west) then {
			_return = [
				["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
				["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_spawn_5","Sofia HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_jail_spawn","Więzienie","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_spawn_4","AT","\a3\ui_f\data\map\Markers\NATO\b_air.paa"]
			];
		};
		
		if(!license_cop_sek && playerSide == west) then {
		_return = [
				["cop_spawn_1","Kavala HQ","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
				["cop_spawn_2","Pyrgos HQ","\a3\ui_f\data\map\MapControl\fuelstation_ca.paa"],
				["cop_spawn_3","Athira HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_spawn_5","Sofia HQ","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"],
				["cop_jail_spawn","Więzienie","\a3\ui_f\data\map\GroupIcons\badge_rotate_0_gs.paa"]
			];
		};
	};
	
		
	case civilian:
	{
		_return = [
			["civ_spawn_1","Kavala","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_2","Pyrgos","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_3","Athira","\a3\ui_f\data\map\MapControl\watertower_ca.paa"],
			["civ_spawn_4","Sofia","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
		if(license_civ_donator1) then
		{
		_return = _return + [
			["donator_spawn","Rebelka0","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		if(license_civ_donator2) then
		{
		_return = _return + [
			["donator_spawn","Rebelka0","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
		if(license_civ_donator3) then
		{
		_return = _return + [
			["donator_spawn","Rebelka0","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
			];
		};
	
		if(count life_houses > 0) then {
			{
				_pos = call compile format["%1",_x select 0];
				_house = nearestBuilding _pos;
				_houseName = getText(configFile >> "CfgVehicles" >> (typeOf _house) >> "displayName");
				
				_return pushBack [format["house_%1",_house getVariable "uid"],_houseName,"\a3\ui_f\data\map\MapControl\lighthouse_ca.paa"];;
			} foreach life_houses;
		};	
	};
	
	case independent: {
		_return = [
			["medic_spawn_1","Szpital Kavala","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_2","Szpital Athira","\a3\ui_f\data\map\MapControl\hospital_ca.paa"],
			["medic_spawn_3","Szpital Pygros","\a3\ui_f\data\map\MapControl\hospital_ca.paa"]
		];
	};
	
	case east: {
		_return = [
			["ASF_spawn","Siedziba Ochrony","\a3\ui_f\data\map\MapControl\watertower_ca.paa"]
		];
	};
};

_return;