#include "script_component.hpp"
params ["_currMagID"];

switch true do {
	//5.45x39
	case ("545x39" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(545x39,basic,1Rnd));
	};
	//5.56 BAF (is 5.56x45)
	case ("BAF_556" in _currMagID);
	//5.56x45
	case ("556x45" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
	};
	//5.7x28
	case ("570x28" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(570x28,basic,1Rnd));
	};
	//5.8x42
	case ("580x42" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(580x42,basic,1Rnd));
	};
	//6.5x39
	case ("650x39" in _currMagID);
	case ("65x39" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
	};
	//7.62x39
	case ("762x39" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
	};
	//7.62 BAF (is 7.62x51)
	case ("BAF_762" in _currMagID);
	//7.62x51
	case ("762x51" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
	};
	//7.62x54
	case ("762x54" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
	};
	//9x19
	case ("9x19" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(9x19,basic,1Rnd));
	};
	//9x21
	case ("9x21" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(9x21,basic,1Rnd));
	};
	//.45 ACP
	case ("45ACP" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
	};
	//9.3x64
	case ("93x64" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(93x64,basic,1Rnd));
	};
	//12.7x99
	case ("127x99" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
	};
	//12.7x108
	case ("127x108" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(127x108,basic,1Rnd));
	};
	//.338
	case ("338" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(338,basic,1Rnd));
	};
	//.408
	case ("408" in _currMagID):
	{
		_usedAmmo = QEGVAR(ammo,TRIPLES(408,basic,1Rnd));
	};
	default
	{
		_usedAmmo = "";
	};
};
