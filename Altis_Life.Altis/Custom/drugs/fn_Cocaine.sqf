
closeDialog 0;player setVariable["Druged",true,true];[player,"Cocaine_sound", 54] call life_fnc_globalSound;"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [0];"dynamicBlur" ppEffectCommit 20;20 fadeSound 1;player setDamage (0.2 + (damage player));"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [9];"dynamicBlur" ppEffectCommit 3;enableCamShake true;addCamShake [20, 100, 10];player setFatigue 1;5 fadeSound 0.1;sleep 50;"dynamicBlur" ppEffectEnable true;"dynamicBlur" ppEffectAdjust [0];"dynamicBlur" ppEffectCommit 20;20 fadeSound 1;player setVariable["Druged",false,true];
