//Core Items
class EGVAR(CoreBelt,762x54_tracer): CBA_MiscItem {
	author = CSTRING(Author);
	scope = 1;
	scopeArsenal = 1;
	scopeCurator = 1;
	displayName = CSTRING(corebelt_762x54_tracer);
	picture = QPATHTOF(data\belt.paa);
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	descriptionShort = "";
	icon = "iconObject_circle";
	mapSize = 0.034;

	GVARMAIN(item) = QEGVAR(beltlinked,762x54_tracer);
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x54,tracer,1Rnd));
    GVARMAIN(typeName) = "762x54_tracer";

	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.15;
	};
};

//5.56x45
class EGVAR(beltlinked,762x54_tracer_1): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_1);
    GVARMAIN(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_2): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_2);
    GVARMAIN(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_3): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_3);
    GVARMAIN(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_4): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_4);
    GVARMAIN(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_5): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_5);
    GVARMAIN(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_6): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_6);
    GVARMAIN(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_7): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_7);
    GVARMAIN(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_8): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_8);
    GVARMAIN(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_9): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_9);
    GVARMAIN(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_10): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_10);
    GVARMAIN(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_11): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_11);
    GVARMAIN(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_12): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_12);
    GVARMAIN(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_13): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_13);
    GVARMAIN(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_14): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_14);
    GVARMAIN(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_15): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_15);
    GVARMAIN(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_16): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_16);
    GVARMAIN(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_17): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_17);
    GVARMAIN(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_18): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_18);
    GVARMAIN(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_19): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_19);
    GVARMAIN(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_20): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_20);
    GVARMAIN(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_21): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_21);
    GVARMAIN(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_22): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_22);
    GVARMAIN(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_23): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_23);
    GVARMAIN(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_24): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_24);
    GVARMAIN(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_25): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_25);
    GVARMAIN(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_26): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_26);
    GVARMAIN(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_27): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_27);
    GVARMAIN(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_28): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_28);
    GVARMAIN(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_29): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_29);
    GVARMAIN(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_30): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_30);
    GVARMAIN(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_31): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_31);
    GVARMAIN(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_32): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_32);
    GVARMAIN(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_33): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_33);
    GVARMAIN(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_34): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_34);
    GVARMAIN(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_35): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_35);
    GVARMAIN(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_36): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_36);
    GVARMAIN(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_37): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_37);
    GVARMAIN(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_38): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_38);
    GVARMAIN(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_39): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_39);
    GVARMAIN(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_40): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_40);
    GVARMAIN(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_41): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_41);
    GVARMAIN(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_42): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_42);
    GVARMAIN(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_43): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_43);
    GVARMAIN(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_44): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_44);
    GVARMAIN(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_45): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_45);
    GVARMAIN(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_46): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_46);
    GVARMAIN(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_47): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_47);
    GVARMAIN(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_48): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_48);
    GVARMAIN(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_49): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_49);
    GVARMAIN(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_50): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_50);
    GVARMAIN(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_51): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_51);
    GVARMAIN(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_52): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_52);
    GVARMAIN(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_53): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_53);
    GVARMAIN(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_54): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_54);
    GVARMAIN(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_55): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_55);
    GVARMAIN(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_56): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_56);
    GVARMAIN(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_57): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_57);
    GVARMAIN(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_58): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_58);
    GVARMAIN(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_59): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_59);
    GVARMAIN(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_60): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_60);
    GVARMAIN(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_61): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_61);
    GVARMAIN(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_62): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_62);
    GVARMAIN(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_63): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_63);
    GVARMAIN(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_64): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_64);
    GVARMAIN(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_65): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_65);
    GVARMAIN(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_66): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_66);
    GVARMAIN(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_67): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_67);
    GVARMAIN(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_68): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_68);
    GVARMAIN(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_69): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_69);
    GVARMAIN(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_70): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_70);
    GVARMAIN(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_71): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_71);
    GVARMAIN(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_72): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_72);
    GVARMAIN(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_73): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_73);
    GVARMAIN(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_74): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_74);
    GVARMAIN(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_75): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_75);
    GVARMAIN(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_76): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_76);
    GVARMAIN(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_77): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_77);
    GVARMAIN(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_78): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_78);
    GVARMAIN(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_79): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_79);
    GVARMAIN(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_80): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_80);
    GVARMAIN(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_81): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_81);
    GVARMAIN(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_82): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_82);
    GVARMAIN(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_83): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_83);
    GVARMAIN(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_84): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_84);
    GVARMAIN(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_85): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_85);
    GVARMAIN(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_86): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_86);
    GVARMAIN(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_87): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_87);
    GVARMAIN(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_88): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_88);
    GVARMAIN(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_89): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_89);
    GVARMAIN(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_90): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_90);
    GVARMAIN(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_91): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_91);
    GVARMAIN(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_92): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_92);
    GVARMAIN(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_93): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_93);
    GVARMAIN(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_94): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_94);
    GVARMAIN(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_95): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_95);
    GVARMAIN(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_96): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_96);
    GVARMAIN(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_97): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_97);
    GVARMAIN(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_98): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_98);
    GVARMAIN(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_99): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_99);
    GVARMAIN(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_100): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_100);
    GVARMAIN(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_101): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_101);
    GVARMAIN(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_102): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_102);
    GVARMAIN(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_103): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_103);
    GVARMAIN(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_104): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_104);
    GVARMAIN(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_105): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_105);
    GVARMAIN(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_106): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_106);
    GVARMAIN(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_107): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_107);
    GVARMAIN(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_108): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_108);
    GVARMAIN(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_109): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_109);
    GVARMAIN(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_110): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_110);
    GVARMAIN(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_111): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_111);
    GVARMAIN(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_112): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_112);
    GVARMAIN(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_113): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_113);
    GVARMAIN(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_114): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_114);
    GVARMAIN(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_115): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_115);
    GVARMAIN(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_116): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_116);
    GVARMAIN(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_117): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_117);
    GVARMAIN(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_118): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_118);
    GVARMAIN(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_119): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_119);
    GVARMAIN(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_120): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_120);
    GVARMAIN(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_121): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_121);
    GVARMAIN(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_122): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_122);
    GVARMAIN(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_123): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_123);
    GVARMAIN(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_124): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_124);
    GVARMAIN(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_125): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_125);
    GVARMAIN(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_126): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_126);
    GVARMAIN(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_127): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_127);
    GVARMAIN(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_128): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_128);
    GVARMAIN(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_129): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_129);
    GVARMAIN(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_130): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_130);
    GVARMAIN(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_131): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_131);
    GVARMAIN(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_132): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_132);
    GVARMAIN(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_133): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_133);
    GVARMAIN(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_134): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_134);
    GVARMAIN(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_135): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_135);
    GVARMAIN(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_136): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_136);
    GVARMAIN(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_137): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_137);
    GVARMAIN(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_138): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_138);
    GVARMAIN(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_139): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_139);
    GVARMAIN(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_140): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_140);
    GVARMAIN(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_141): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_141);
    GVARMAIN(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_142): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_142);
    GVARMAIN(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_143): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_143);
    GVARMAIN(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_144): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_144);
    GVARMAIN(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_145): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_145);
    GVARMAIN(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_146): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_146);
    GVARMAIN(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_147): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_147);
    GVARMAIN(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_148): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_148);
    GVARMAIN(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_149): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_149);
    GVARMAIN(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_150): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_150);
    GVARMAIN(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_151): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_151);
    GVARMAIN(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_152): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_152);
    GVARMAIN(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_153): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_153);
    GVARMAIN(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_154): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_154);
    GVARMAIN(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_155): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_155);
    GVARMAIN(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_156): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_156);
    GVARMAIN(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_157): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_157);
    GVARMAIN(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_158): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_158);
    GVARMAIN(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_159): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_159);
    GVARMAIN(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_160): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_160);
    GVARMAIN(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_161): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_161);
    GVARMAIN(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_162): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_162);
    GVARMAIN(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_163): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_163);
    GVARMAIN(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_164): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_164);
    GVARMAIN(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_165): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_165);
    GVARMAIN(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_166): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_166);
    GVARMAIN(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_167): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_167);
    GVARMAIN(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_168): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_168);
    GVARMAIN(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_169): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_169);
    GVARMAIN(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_170): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_170);
    GVARMAIN(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_171): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_171);
    GVARMAIN(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_172): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_172);
    GVARMAIN(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_173): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_173);
    GVARMAIN(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_174): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_174);
    GVARMAIN(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_175): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_175);
    GVARMAIN(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_176): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_176);
    GVARMAIN(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_177): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_177);
    GVARMAIN(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_178): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_178);
    GVARMAIN(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_179): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_179);
    GVARMAIN(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_180): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_180);
    GVARMAIN(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class EGVAR(beltlinked,762x54_tracer_181): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_181);
    GVARMAIN(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class EGVAR(beltlinked,762x54_tracer_182): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_182);
    GVARMAIN(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class EGVAR(beltlinked,762x54_tracer_183): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_183);
    GVARMAIN(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class EGVAR(beltlinked,762x54_tracer_184): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_184);
    GVARMAIN(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class EGVAR(beltlinked,762x54_tracer_185): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_185);
    GVARMAIN(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class EGVAR(beltlinked,762x54_tracer_186): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_186);
    GVARMAIN(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class EGVAR(beltlinked,762x54_tracer_187): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_187);
    GVARMAIN(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class EGVAR(beltlinked,762x54_tracer_188): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_188);
    GVARMAIN(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class EGVAR(beltlinked,762x54_tracer_189): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_189);
    GVARMAIN(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class EGVAR(beltlinked,762x54_tracer_190): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_190);
    GVARMAIN(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class EGVAR(beltlinked,762x54_tracer_191): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_191);
    GVARMAIN(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class EGVAR(beltlinked,762x54_tracer_192): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_192);
    GVARMAIN(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class EGVAR(beltlinked,762x54_tracer_193): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_193);
    GVARMAIN(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class EGVAR(beltlinked,762x54_tracer_194): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_194);
    GVARMAIN(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class EGVAR(beltlinked,762x54_tracer_195): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_195);
    GVARMAIN(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class EGVAR(beltlinked,762x54_tracer_196): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_196);
    GVARMAIN(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class EGVAR(beltlinked,762x54_tracer_197): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_197);
    GVARMAIN(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class EGVAR(beltlinked,762x54_tracer_198): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_198);
    GVARMAIN(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class EGVAR(beltlinked,762x54_tracer_199): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_199);
    GVARMAIN(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class EGVAR(beltlinked,762x54_tracer_200): EGVAR(CoreBelt,762x54_tracer) {
    displayName = CSTRING(beltlinked_762x54_tracer_200);
    GVARMAIN(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
