class CfgWeapons {
    class CBA_MiscItem;
    class CBA_MiscItem_ItemInfo;

    //Core Items
    class GVARMAIN(core): CBA_MiscItem {
        author = CSTRING(Author);
        scope = 1;
        scopeArsenal = 1;
        scopeCurator = 1;
        displayName = "";
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        descriptionShort = "";
        icon = "iconObject_circle";
        mapSize = 0.034;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 1;
        };
    };
    class EGVAR(core,box): GVARMAIN(core) {
    };
    class EGVAR(core,1Rnd): GVARMAIN(core) {
        model = "\A3\weapons_F\ammo\mag_univ.p3d";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 0.15;
        };
    };
    class EGVAR(core,10Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_10rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 10;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };
    class EGVAR(core,20Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_20rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 20;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 3.5;
        };
    };
    class EGVAR(core,30Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_30rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 30;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 5;
        };
    };
    class EGVAR(core,40Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_40rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 40;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 6.5;
        };
    };
    class EGVAR(core,50Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_50rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 50;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
    class EGVAR(core,60Rnd): EGVAR(core,box) {
        picture = QPATHTOF(data\box_60rnd.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        GVARMAIN(bullets) = 60;

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 9.5;
        };
    };

    class EGVAR(item,speedloader): GVARMAIN(core) {
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        displayName = CSTRING(speedloader);
        picture = QPATHTOF(data\reload_large.paa);
        model = "\A3\weapons_F\ammo\mag_univ.p3d";
        descriptionShort = "$STR_GM_speedloader_D";

        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 2;
        };
    };

    //regular ammo
    #include "cfg\ammo\545x39_basic.hpp"
    #include "cfg\ammo\545x39_tracer.hpp"

    #include "cfg\ammo\556x45_basic.hpp"
    #include "cfg\ammo\556x45_dual.hpp"
    #include "cfg\ammo\556x45_tracer.hpp"
    #include "cfg\ammo\556x45_IRtracer.hpp"
    #include "cfg\ammo\556x45_m995ap.hpp"
    #include "cfg\ammo\556x45_mk262.hpp"
    #include "cfg\ammo\556x45_mk318.hpp"

    #include "cfg\ammo\570x28_basic.hpp"

    #include "cfg\ammo\580x42_basic.hpp"
    #include "cfg\ammo\580x42_tracer.hpp"

    #include "cfg\ammo\650x39_basic.hpp"
    #include "cfg\ammo\650x39_tracer.hpp"
    #include "cfg\ammo\650x39_IRtracer.hpp"

    #include "cfg\ammo\762x39_basic.hpp"
    #include "cfg\ammo\762x39_tracer.hpp"

    #include "cfg\ammo\762x51_basic.hpp"
    #include "cfg\ammo\762x51_tracer.hpp"
    #include "cfg\ammo\762x51_IRtracer.hpp"
    #include "cfg\ammo\762x51_m118lr.hpp"
    #include "cfg\ammo\762x51_m993ap.hpp"
    #include "cfg\ammo\762x51_mk316.hpp"
    #include "cfg\ammo\762x51_mk319.hpp"
    #include "cfg\ammo\762x51_sd.hpp"

    #include "cfg\ammo\762x54_basic.hpp"
    #include "cfg\ammo\762x54_tracer.hpp"

    #include "cfg\ammo\9x19_basic.hpp"
    #include "cfg\ammo\9x19_tracer.hpp"

    #include "cfg\ammo\9x21_basic.hpp"
    #include "cfg\ammo\9x21_tracer.hpp"

    #include "cfg\ammo\45ACP_basic.hpp"
    #include "cfg\ammo\45ACP_tracer.hpp"

    #include "cfg\ammo\93x64_basic.hpp"

    #include "cfg\ammo\338_basic.hpp"
    #include "cfg\ammo\338_API526.hpp"
    #include "cfg\ammo\338_300gr.hpp"

    #include "cfg\ammo\408_basic.hpp"
    #include "cfg\ammo\408_205gr.hpp"

    #include "cfg\ammo\50BW_basic.hpp"

    #include "cfg\ammo\127x54_basic.hpp"

    #include "cfg\ammo\127x99_basic.hpp"
    #include "cfg\ammo\127x99_AMAX.hpp"
    #include "cfg\ammo\127x99_API.hpp"

    #include "cfg\ammo\127x108_basic.hpp"
    #include "cfg\ammo\127x108_APDS.hpp"

    //MG belt
    #include "cfg\belts\belts_556x45_basic.hpp"
    #include "cfg\belts\belts_556x45_tracer.hpp"

    #include "cfg\belts\belts_650x39_basic.hpp"
    #include "cfg\belts\belts_650x39_tracer.hpp"
    #include "cfg\belts\belts_650x39_IRtracer.hpp"

    #include "cfg\belts\belts_762x51_basic.hpp"
    #include "cfg\belts\belts_762x51_tracer.hpp"

    #include "cfg\belts\belts_762x54_basic.hpp"
    #include "cfg\belts\belts_762x54_tracer.hpp"

    #include "cfg\belts\belts_93x64_basic.hpp"

    #include "cfg\belts\belts_338_basic.hpp"

    #include "cfg\belts\belts_127x99_basic.hpp"

    #include "cfg\belts\belts_127x108_basic.hpp"
};
