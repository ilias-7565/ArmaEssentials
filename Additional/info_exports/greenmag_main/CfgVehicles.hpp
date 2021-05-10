class CfgVehicles {
    class Man;
    class CAManBase: Man {
        class ACE_SelfActions {
            //All player GreenMag actions

            class GVAR(refill) {
                displayName = CSTRING(refill);
                condition = QGVAR(CBAS_enable);
                exceptions[] = {"isNotInside","isNotSitting"};
                statement = "";
                icon = QPATHTOF(data\reload_small.paa);
                insertChildren = QUOTE([ARR_3(_target, _player, _actionParams)] call FUNC(createRefill));
                enableInside = 1;
            };
            class GVAR(unload) {
                displayName = CSTRING(unload);
                condition = QGVAR(CBAS_enable);
                exceptions[] = {"isNotInside","isNotSitting"};
                statement = "";
                icon = QPATHTOF(data\unload.paa);
                insertChildren = QUOTE([ARR_3(_target, _player, _actionParams)] call FUNC(createUnload));
                enableInside = 1;
            };
            class GVAR(unpack) {
                displayName = CSTRING(unpack);
                condition = QGVAR(CBAS_enable);
                exceptions[] = {"isNotInside","isNotSitting"};
                statement = "";
                icon = QPATHTOF(data\unpack.paa);
                insertChildren = QUOTE([ARR_3(_target, _player, _actionParams)] call FUNC(createUnpack));
                enableInside = 1;
            };
            class GVAR(connectBelt) {
                displayName = CSTRING(combineBelts);
                condition = QGVAR(CBAS_enable);
                exceptions[] = {"isNotInside","isNotSitting"};
                statement = "";
                icon = QPATHTOF(data\belt_icon_w.paa);
                insertChildren = QUOTE([ARR_3(_target, _player, _actionParams)] call FUNC(beltactions));
                enableInside = 1;
            };

            class ACE_RepackMagazines {
                condition = QUOTE(!GVAR(CBAS_enable));
            };
        };
    };
};
