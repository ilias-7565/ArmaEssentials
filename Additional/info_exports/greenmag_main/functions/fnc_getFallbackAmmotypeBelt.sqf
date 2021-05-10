#include "script_component.hpp"
params ["_currMagID"];

switch true do {
	//5.56 BAF (is 5.56x45)
	case ("BAF_556" in _currMagID);
	//5.56x45
	case ("556x45" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,556x45_basic);
	};
	//6.5x39
	case ("650x39" in _currMagID);
	case ("65x39" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,650x39_basic);
	};
	//7.62 BAF (is 7.62x51)
	case ("BAF_762" in _currMagID);
	//7.62x51
	case ("762x51" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,762x51_basic);
	};
	//7.62x54
	case ("762x54" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,762x54_basic);
	};
	//9.3x64
	case ("93x64" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,93x64_basic);
	};
	//12.7x99
	case ("127x99" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,127x99_basic);
	};
	//12.7x108
	case ("127x108" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,127x108_basic);
	};
	//.338
	case ("338" in _currMagID):
	{
		_usedAmmo = QEGVAR(beltlinked,338_basic);
	};
	default
	{
		_usedAmmo = "";
	};
};
