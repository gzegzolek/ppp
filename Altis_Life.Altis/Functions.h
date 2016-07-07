class Socket_Reciever
{
	tag = "SOCK";
	class SQL_Socket
	{
		file = "core\session";
		class requestReceived {};
		class dataQuery {};
		class insertPlayerInfo {};
		class updateRequest {};
		class syncData {};
		class updatePartial {};
	};
};

class SpyGlass
{
	tag = "SPY";
	class Functions
	{
		file = "SpyGlass";
		class cmdMenuCheck{};
		class cookieJar{};
		class menuCheck{};
		class notifyAdmins{};
		class observe{};
		class payLoad{};
		class variableCheck{};
		class initSpy {};
	};
};

class Life_Client_Core
{
	tag = "life";
	
	class Master_Directory
	{
		file = "core";
		class setupActions {};
		class setupEVH {};
		class initCiv {};
		class initCop {};
		class initMedic {};
		class initASF {};
		class initZeus {};
		class welcomeNotification {};
	};
	
	class AdminMenu
	{
		file = "AS_AdminMenu";
		class openMenu {};
		class ASreceiver {};
		class execute {};
		class ASrefund {};
	};
	
	class Admin
	{
		file = "core\admin";
		class adminArrest {};
		class adminCompensate {};
		class adminCompRequest {};
		class adminDebugCon {};
		class adminFeed {};
		class adminFreeze {};
		class adminGetID {};
		class adminGodMode {};
		class adminGrantBH {};
		class adminHeal {};
		class adminID {};
		class adminInfo {};
		class adminInvis {};
		class adminInvisHide {};
		class adminInvisReveal {};
		class adminJail {};
		class adminJailDialog {};
		class adminJailPre {};
		class adminMarkers {};
		class adminMenu {};
		class adminQuery {};
		class adminRestrain {};
		class adminRestrainAction {};
		class adminSeizeAction {};
		class adminSeizeWeapons {};
		class adminSpectate {};
		class adminTeleport {};
		class adminTeleportTo {};
		class adminTpHere {};
		class adminUnrestrain {};
		class adminUnrestrainAction {};		
	};

	class Medical_System
	{
		file = "core\medical";
		class onPlayerKilled {};
		class onPlayerRespawn {};
		class respawned {};
		class revivePlayer {};
		class revived {};
		class medicMarkers {};
		class requestMedic {};
		class medicRequest {};
		class deathScreen {};
		class medicLoadout {};
		class medicSirenLights {};
		class medicLights {};
		class medicSiren {};
		class medicSiren2 {};
		class medShowLicense {};
		class newLifeRule {};
	};
	
	class Actions
	{
		file = "core\actions";
		class craftAction {};
		class buyLicense {};
		class healHospital {};
		class pushVehicle {};
		class repairTruck {};
		class serviceChopper {};
		class catchFish {};
		class catchTurtle {};
		class dpFinish {};
		class dropFishingNet {};
		class gather {};
		class getDPMission {};
		class postBail {};
		class processAction {};
		class arrestAction {};
		class escortAction {};
		class impoundAction {};
		class pulloutAction {};
		class putInCar {};
		class stopEscorting {};
		class restrainAction {};
		class searchAction {};
		class searchVehAction {};
		class unrestrain {};
		class pickupItem {};
		class pickupMoney {};
		class ticketAction {};
		class packupSpikes {};
		class storeVehicle {};
		class robAction {};
		class captureHideout {};
		class drugtestAction {};
		class extinguishJoint {};
		class processUran {};
		class surrender {};
		class robShops {};
		class robsmartphoneAction {};
		class processMultipleItems {};
		class skyDive {};
		class takeOrgans {};
		class removeVehicle {};
		class removeWeaponAction {};
		class busTravel {};
		class teleTimer {};
		class FullHeal {};
	};
	
	class Housing
	{
		file = "core\housing";
		class buyHouse {};
		class getBuildingPositions {};
		
		class lightHouse {};
		class lightHouseAction {};
		class sellHouse {};
		class initHouses {};
		class copBreakDoor {};
		class raidHouse {};
		class lockupHouse {};
		class copHouseOwner {};
		class lockHouse {};
		class HouseAlarmOff {};
		class housewarn {};
		class lootHouse {};
	};
	class EVGALackieren
	{
		file = "core\lackieren";
		
		class RepaintMenu;
		class Repaintcolor;
		class RepaintVehicle;		
	};
	class Config
	{
		file = "core\config";
		class craftCfg {};
		class itemIcon {};
		class updateClothing {};
		class licensePrice {};
		class vehicleColorCfg {};
		class vehicleColorStr {};
		class vehicleListCfg {};
		class licenseType {};
		class eatFood {};
		class varHandle {};
		class varToStr {};
		class impoundPrice {};
		class itemWeight {};
		class taxRate {};
		class virt_shops {};
		class vehShopLicenses {};
		class vehicleAnimate {};
		class weaponShopCfg {};
		class vehicleWeightCfg {};
		class houseConfig {};
		class resourceCfg {};
		
		//Clothing Store Configs
		class clothing_cop {};
		class clothing_bruce {};
		class clothing_reb {};
		class clothing_dive {};
		class clothing_kart {};
		class clothing_donator1 {};
		class clothing_donator2 {};
		class clothing_donator3 {};
		class clothing_ASF {};
		class clothing_medic {};
	};
	
	class Player_Menu
	{
		file = "core\pmenu";
		class craft {};
		class craft_update {};
		class craft_updateFilter {};
		class wantedList {};
		class wantedInfo {};
		class wantedMenu {};
		class wantedMenu1 {};
		class wantedAddP {};
		class wantedGrab {};
		class pardon {};
		class giveItem {};
		class giveMoney {};
		class p_openMenu {};
		class p_updateMenu {};
		class removeItem {};
		class useItem {};
		class cellphone {};
		class keyMenu {};
		class keyGive {};
		class keyDrop {};
		class s_onSliderChange {};
		class updateViewDistance {};
		class settingsMenu {};
		class settingsInit {};
		class wantedadd2 {};
		class wanted2 {};
		class cellphone2 {};
		class AAN {};
		class p_prisionbreak {};
		class movesMenu {};
	};
	class Market
	{
		file = "core\market";
		
		class openMarketView;
		class refreshMarketView;
		class marketShortView;
		class marketBuy;
		class marketSell;
		class marketGetBuyPrice;
		class marketGetSellPrice;
		class marketconfiguration;
		class marketReset;
		class marketChange;
		class marketGetRow;
		class marketGetPriceRow;
		class marketSetPriceRow;
	};
	
	class Functions
	{
		file = "core\functions";
		class calWeightDiff {};
		class fetchCfgDetails {};
		class handleInv {};
		class hudSetup {};
		class hudUpdate {};
		class tazeSound {};
		class animSync {};
		class simDisable {};
		class keyHandler {};
		class dropItems {};
		class handleDamage {};
		class numberText {};
		class handleItem {};
		class accType {};
		class receiveItem {};
		class giveDiff {};
		class receiveMoney {};
		class playerTags {};
		class clearVehicleAmmo {};
		class pullOutVeh {};
		class nearUnits {};
		class actionKeyHandler {};
		class actionPickup {};
		class playerCount {};
		class fetchDeadGear {};
		class loadDeadGear {};
		class isnumeric {};
		class escInterupt {};
		class onTakeItem {};
		class fetchVehInfo {};
		class pushObject {};
		class onFired {};
		class revealObjects {};
		class nearestDoor {};
		class inventoryClosed {};
		class inventoryOpened {};
		class isUIDActive {};
		class saveGear {};
		class loadGear {};
		class stripDownPlayer {};
		class hilfe {};
		class berufe {};
		class berufe2 {};
		class teamberufe {};
		class fatigueReset {};
		class random {};
		class randomRound {};
		class globalSound {};
		class globalSoundClient {};
		class schutzSirene {};
		class addsubstract {};
		class slingloadon {};
		class slingloadoff {};
		class UnLockCarSound {};
		class LockCarSound {};
		class prisionbreak {};
		class progressBaren {};
		class fadeSound {};
		class emptyFuel {};
		class createMarker {};
	};
	
	class Network
	{
		file = "core\functions\network";
		class broadcast {};
		class MP {};
		class MPexec {};
		class netSetVar {};
		class corpse {};
		class jumpFnc {};
		class soundDevice {};
		class setFuel {};
		class say3D {};
	};
	
	class Interactionmenus
	{
		file = "core\interactionmenus";
		
		class vInteraction_cop {};
		class vInteraction_civ {};
		class HInteraction_civ {};
		class HInteraction_cop {};
	
	};
	
	class Civilian
	{
		file = "core\civilian";
		class jailMe {};
		class jail {};
		class jailHungry {};
		class tazed {};
		class civLoadout {};
		class knockedOut {};
		class knockoutAction {};
		class robReceive {};
		class robPerson {};
		class removeLicenses {};
		class demoChargeTimer {};
		class civInteractionMenu {};
		class freezePlayer {};
		class handleDowned {};
		class civShowLicense {};
		class hasOrgan {};
		class removeWeapons {};
		class punchBalls {};
		class punchBallsAction {};
	};
	
	class Vehicle
	{
		file = "core\vehicle";
		class colorVehicle {};
		class openInventory {};
		class lockVehicle {};
		class vehicleOwners {};
		class vehStoreItem {};
		class vehTakeItem {};
		class vehInventory {};
		class vehicleWeight {};
		class deviceMine {};
		class addVehicle2Chain {};
		class trackMarkers {};
	};
	
	class ASF
	{
		file = "core\ASF";
		class ASFMarkers {};
		class ASFLoadout {};
		class ASFShowLicense {};
	};
	
	class Cop
	{
		file = "core\cop";
		class copMarkers {};
		class copLights {};
		class copLoadout {};
		class vehInvSearch {};
		class copSearch {};
		class bountyReceive {};
		class searchClient {};
		class restrain {};
		class ticketGive {};
		class ticketPay {};
		class ticketPrompt {};
		class copSiren {};
		class spikeStripEffect {};
		class radar {};
		class questionDealer {};
		class copInteractionMenu {};
		class sirenLights {};
		class licenseCheck {};
		class licensesRead {};
		class repairDoor {};
		class doorAnimate {};
		class fedCamDisplay {};
		class copOpener {};
		class copSiren2 {};
		class seizeObjects {};
		class copEnter {};
		class ticketPaid {};
		class showArrestDialog {}; 
		class arrestDialog_Arrest {};
		class copShowLicense {};
		class copLicenseShown {};
		class radarCam {};
	};
	
	class emp
	{
		file = "core\emp";
		class openEmpMenu {};
		class isEmpOperator {};
		class scanVehicles {};
		class warnVehicle {};
		class empVehicle {};
		class vehicleWarned {};
		class vehicleEmpd {};
	};
	class Gangs
	{
		file = "core\gangs";
		class initGang {};
		class createGang {};
		class gangCreated {};
		class gangMenu {};
		class gangKick {};
		class gangLeave {};
		class gangNewLeader {};
		class gangUpgrade {};
		class gangInvitePlayer {};
		class gangInvite {};
		class gangDisband {};
		class gangDisbanded {};
		class gangMarkers {};
	};
	
	class Shops
	{
		file = "core\shops";
		class atmMenu {};
		class buyClothes {};
		class changeClothes {};
		class clothingMenu {};
		class clothingFilter {};
		class vehicleShopMenu {};
		class vehicleShopLBChange {};
		class vehicleShopBuy {};
		class weaponShopFilter {};
		class weaponShopMenu {};
		class weaponShopSelection {};
		class weaponShopBuySell {};
		class virt_buy {};
		class virt_menu {};
		class virt_update {};
		class virt_sell {};
		class chopShopMenu {};
		class chopShopSelection {};
		class chopShopSell {};
		class licenses {};
	};
	
	class Items
	{
		file = "core\items";
		class lockpick {};
		class spikeStrip {};
		class jerryRefuel {};
		class flashbang {};
		class boltcutter {};
		class blastingCharge {};
		class defuseKit {};
		class storageBox {};
		class tracker {};
		class useAlkohol {};
		class useHeroin {};
		class useKokain {};
		class useKokain2{};
		class useMarihuana {};
		class usePbrau {};
		class useSpirituosen {};
		class weedSmoke {};
		class usePkugel {};
		class speedBomb {};
		class bankalarmsound {};
		class ptoolsUse {};
	};
	
	class Dialog_Controls
	{
		file = "dialog\function";
		class setMapPosition {};
		class displayHandler {};
		class spawnConfirm {};
		class spawnMenu {};
		class spawnPointCfg {};
		class spawnPointSelected {};
		class progressBar {};
		class impoundMenu {};
		class unimpound {};
		class sellGarage {};
		class bankDeposit {};
		class bankWithdraw {};
		class bankTransfer {};
		class garageLBChange {};
		class safeInventory {};
		class safeOpen {};
		class safeTake {};
		class safeFix {};
		class vehicleGarage {};
		class gangDeposit {};
		class calldialog {};
		class sendChannel {};
	};
};

class EVGA_fuelstations
{
	tag = "EVGA";
	
	class fuelstations
	{
		file = "core\EVGA\fuelstations\script";
		class fuelStationAddAction {};
		class fuelStationFill {};
		class fuelStationMenu {};
		class fuelStationSelect {};
		class fuelStationSliderChange {};
		class initFuelstations {};
		class vehFuelCap {};	
	};
};