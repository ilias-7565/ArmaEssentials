//Core Items
class EGVAR(CoreBelt,127x99_basic): CBA_MiscItem {
	author = CSTRING(Author);
	scope = 1;
	scopeArsenal = 1;
	scopeCurator = 1;
	displayName = CSTRING(corebelt_127x99_basic);
	picture = QPATHTOF(data\belt.paa);
	model = "\A3\weapons_F\ammo\mag_univ.p3d";
	descriptionShort = "";
	icon = "iconObject_circle";
	mapSize = 0.034;

	GVARMAIN(item) = QEGVAR(beltlinked,127x99_basic);
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
    GVARMAIN(typeName) = "127x99_basic";

	class ItemInfo: CBA_MiscItem_ItemInfo {
		mass = 0.15;
	};
};

//5.56x45
class EGVAR(beltlinked,127x99_basic_1): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_1);
    GVARMAIN(bullets) = 1;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.15;
    };
};
class EGVAR(beltlinked,127x99_basic_2): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_2);
    GVARMAIN(bullets) = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.30;
    };
};
class EGVAR(beltlinked,127x99_basic_3): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_3);
    GVARMAIN(bullets) = 3;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.45;
    };
};
class EGVAR(beltlinked,127x99_basic_4): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_4);
    GVARMAIN(bullets) = 4;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.60;
    };
};
class EGVAR(beltlinked,127x99_basic_5): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_5);
    GVARMAIN(bullets) = 5;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.75;
    };
};
class EGVAR(beltlinked,127x99_basic_6): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_6);
    GVARMAIN(bullets) = 6;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 0.90;
    };
};
class EGVAR(beltlinked,127x99_basic_7): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_7);
    GVARMAIN(bullets) = 7;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.05;
    };
};
class EGVAR(beltlinked,127x99_basic_8): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_8);
    GVARMAIN(bullets) = 8;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.20;
    };
};
class EGVAR(beltlinked,127x99_basic_9): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_9);
    GVARMAIN(bullets) = 9;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.35;
    };
};
class EGVAR(beltlinked,127x99_basic_10): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_10);
    GVARMAIN(bullets) = 10;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.50;
    };
};
class EGVAR(beltlinked,127x99_basic_11): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_11);
    GVARMAIN(bullets) = 11;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.65;
    };
};
class EGVAR(beltlinked,127x99_basic_12): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_12);
    GVARMAIN(bullets) = 12;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.80;
    };
};
class EGVAR(beltlinked,127x99_basic_13): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_13);
    GVARMAIN(bullets) = 13;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 1.95;
    };
};
class EGVAR(beltlinked,127x99_basic_14): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_14);
    GVARMAIN(bullets) = 14;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.10;
    };
};
class EGVAR(beltlinked,127x99_basic_15): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_15);
    GVARMAIN(bullets) = 15;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.25;
    };
};
class EGVAR(beltlinked,127x99_basic_16): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_16);
    GVARMAIN(bullets) = 16;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.40;
    };
};
class EGVAR(beltlinked,127x99_basic_17): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_17);
    GVARMAIN(bullets) = 17;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.55;
    };
};
class EGVAR(beltlinked,127x99_basic_18): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_18);
    GVARMAIN(bullets) = 18;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.70;
    };
};
class EGVAR(beltlinked,127x99_basic_19): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_19);
    GVARMAIN(bullets) = 19;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 2.85;
    };
};
class EGVAR(beltlinked,127x99_basic_20): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_20);
    GVARMAIN(bullets) = 20;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.00;
    };
};
class EGVAR(beltlinked,127x99_basic_21): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_21);
    GVARMAIN(bullets) = 21;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.15;
    };
};
class EGVAR(beltlinked,127x99_basic_22): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_22);
    GVARMAIN(bullets) = 22;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.30;
    };
};
class EGVAR(beltlinked,127x99_basic_23): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_23);
    GVARMAIN(bullets) = 23;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.45;
    };
};
class EGVAR(beltlinked,127x99_basic_24): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_24);
    GVARMAIN(bullets) = 24;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.60;
    };
};
class EGVAR(beltlinked,127x99_basic_25): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_25);
    GVARMAIN(bullets) = 25;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.75;
    };
};
class EGVAR(beltlinked,127x99_basic_26): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_26);
    GVARMAIN(bullets) = 26;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 3.90;
    };
};
class EGVAR(beltlinked,127x99_basic_27): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_27);
    GVARMAIN(bullets) = 27;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.05;
    };
};
class EGVAR(beltlinked,127x99_basic_28): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_28);
    GVARMAIN(bullets) = 28;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.20;
    };
};
class EGVAR(beltlinked,127x99_basic_29): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_29);
    GVARMAIN(bullets) = 29;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.35;
    };
};
class EGVAR(beltlinked,127x99_basic_30): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_30);
    GVARMAIN(bullets) = 30;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.50;
    };
};
class EGVAR(beltlinked,127x99_basic_31): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_31);
    GVARMAIN(bullets) = 31;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.65;
    };
};
class EGVAR(beltlinked,127x99_basic_32): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_32);
    GVARMAIN(bullets) = 32;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.80;
    };
};
class EGVAR(beltlinked,127x99_basic_33): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_33);
    GVARMAIN(bullets) = 33;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 4.95;
    };
};
class EGVAR(beltlinked,127x99_basic_34): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_34);
    GVARMAIN(bullets) = 34;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.10;
    };
};
class EGVAR(beltlinked,127x99_basic_35): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_35);
    GVARMAIN(bullets) = 35;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.25;
    };
};
class EGVAR(beltlinked,127x99_basic_36): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_36);
    GVARMAIN(bullets) = 36;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.40;
    };
};
class EGVAR(beltlinked,127x99_basic_37): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_37);
    GVARMAIN(bullets) = 37;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.55;
    };
};
class EGVAR(beltlinked,127x99_basic_38): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_38);
    GVARMAIN(bullets) = 38;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.70;
    };
};
class EGVAR(beltlinked,127x99_basic_39): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_39);
    GVARMAIN(bullets) = 39;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 5.85;
    };
};
class EGVAR(beltlinked,127x99_basic_40): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_40);
    GVARMAIN(bullets) = 40;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.00;
    };
};
class EGVAR(beltlinked,127x99_basic_41): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_41);
    GVARMAIN(bullets) = 41;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.15;
    };
};
class EGVAR(beltlinked,127x99_basic_42): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_42);
    GVARMAIN(bullets) = 42;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.30;
    };
};
class EGVAR(beltlinked,127x99_basic_43): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_43);
    GVARMAIN(bullets) = 43;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.45;
    };
};
class EGVAR(beltlinked,127x99_basic_44): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_44);
    GVARMAIN(bullets) = 44;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.60;
    };
};
class EGVAR(beltlinked,127x99_basic_45): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_45);
    GVARMAIN(bullets) = 45;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.75;
    };
};
class EGVAR(beltlinked,127x99_basic_46): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_46);
    GVARMAIN(bullets) = 46;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 6.90;
    };
};
class EGVAR(beltlinked,127x99_basic_47): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_47);
    GVARMAIN(bullets) = 47;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.05;
    };
};
class EGVAR(beltlinked,127x99_basic_48): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_48);
    GVARMAIN(bullets) = 48;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.20;
    };
};
class EGVAR(beltlinked,127x99_basic_49): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_49);
    GVARMAIN(bullets) = 49;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.35;
    };
};
class EGVAR(beltlinked,127x99_basic_50): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_50);
    GVARMAIN(bullets) = 50;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.50;
    };
};
class EGVAR(beltlinked,127x99_basic_51): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_51);
    GVARMAIN(bullets) = 51;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.65;
    };
};
class EGVAR(beltlinked,127x99_basic_52): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_52);
    GVARMAIN(bullets) = 52;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.80;
    };
};
class EGVAR(beltlinked,127x99_basic_53): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_53);
    GVARMAIN(bullets) = 53;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 7.95;
    };
};
class EGVAR(beltlinked,127x99_basic_54): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_54);
    GVARMAIN(bullets) = 54;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.10;
    };
};
class EGVAR(beltlinked,127x99_basic_55): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_55);
    GVARMAIN(bullets) = 55;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.25;
    };
};
class EGVAR(beltlinked,127x99_basic_56): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_56);
    GVARMAIN(bullets) = 56;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.40;
    };
};
class EGVAR(beltlinked,127x99_basic_57): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_57);
    GVARMAIN(bullets) = 57;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.55;
    };
};
class EGVAR(beltlinked,127x99_basic_58): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_58);
    GVARMAIN(bullets) = 58;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.70;
    };
};
class EGVAR(beltlinked,127x99_basic_59): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_59);
    GVARMAIN(bullets) = 59;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 8.85;
    };
};
class EGVAR(beltlinked,127x99_basic_60): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_60);
    GVARMAIN(bullets) = 60;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.00;
    };
};
class EGVAR(beltlinked,127x99_basic_61): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_61);
    GVARMAIN(bullets) = 61;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.15;
    };
};
class EGVAR(beltlinked,127x99_basic_62): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_62);
    GVARMAIN(bullets) = 62;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.30;
    };
};
class EGVAR(beltlinked,127x99_basic_63): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_63);
    GVARMAIN(bullets) = 63;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.45;
    };
};
class EGVAR(beltlinked,127x99_basic_64): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_64);
    GVARMAIN(bullets) = 64;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.60;
    };
};
class EGVAR(beltlinked,127x99_basic_65): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_65);
    GVARMAIN(bullets) = 65;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.75;
    };
};
class EGVAR(beltlinked,127x99_basic_66): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_66);
    GVARMAIN(bullets) = 66;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 9.90;
    };
};
class EGVAR(beltlinked,127x99_basic_67): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_67);
    GVARMAIN(bullets) = 67;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.05;
    };
};
class EGVAR(beltlinked,127x99_basic_68): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_68);
    GVARMAIN(bullets) = 68;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.20;
    };
};
class EGVAR(beltlinked,127x99_basic_69): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_69);
    GVARMAIN(bullets) = 69;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.35;
    };
};
class EGVAR(beltlinked,127x99_basic_70): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_70);
    GVARMAIN(bullets) = 70;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.50;
    };
};
class EGVAR(beltlinked,127x99_basic_71): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_71);
    GVARMAIN(bullets) = 71;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.65;
    };
};
class EGVAR(beltlinked,127x99_basic_72): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_72);
    GVARMAIN(bullets) = 72;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.80;
    };
};
class EGVAR(beltlinked,127x99_basic_73): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_73);
    GVARMAIN(bullets) = 73;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 10.95;
    };
};
class EGVAR(beltlinked,127x99_basic_74): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_74);
    GVARMAIN(bullets) = 74;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.10;
    };
};
class EGVAR(beltlinked,127x99_basic_75): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_75);
    GVARMAIN(bullets) = 75;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.25;
    };
};
class EGVAR(beltlinked,127x99_basic_76): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_76);
    GVARMAIN(bullets) = 76;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.40;
    };
};
class EGVAR(beltlinked,127x99_basic_77): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_77);
    GVARMAIN(bullets) = 77;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.55;
    };
};
class EGVAR(beltlinked,127x99_basic_78): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_78);
    GVARMAIN(bullets) = 78;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.70;
    };
};
class EGVAR(beltlinked,127x99_basic_79): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_79);
    GVARMAIN(bullets) = 79;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 11.85;
    };
};
class EGVAR(beltlinked,127x99_basic_80): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_80);
    GVARMAIN(bullets) = 80;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.00;
    };
};
class EGVAR(beltlinked,127x99_basic_81): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_81);
    GVARMAIN(bullets) = 81;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.15;
    };
};
class EGVAR(beltlinked,127x99_basic_82): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_82);
    GVARMAIN(bullets) = 82;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.30;
    };
};
class EGVAR(beltlinked,127x99_basic_83): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_83);
    GVARMAIN(bullets) = 83;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.45;
    };
};
class EGVAR(beltlinked,127x99_basic_84): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_84);
    GVARMAIN(bullets) = 84;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.60;
    };
};
class EGVAR(beltlinked,127x99_basic_85): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_85);
    GVARMAIN(bullets) = 85;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.75;
    };
};
class EGVAR(beltlinked,127x99_basic_86): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_86);
    GVARMAIN(bullets) = 86;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 12.90;
    };
};
class EGVAR(beltlinked,127x99_basic_87): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_87);
    GVARMAIN(bullets) = 87;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.05;
    };
};
class EGVAR(beltlinked,127x99_basic_88): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_88);
    GVARMAIN(bullets) = 88;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.20;
    };
};
class EGVAR(beltlinked,127x99_basic_89): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_89);
    GVARMAIN(bullets) = 89;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.35;
    };
};
class EGVAR(beltlinked,127x99_basic_90): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_90);
    GVARMAIN(bullets) = 90;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.50;
    };
};
class EGVAR(beltlinked,127x99_basic_91): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_91);
    GVARMAIN(bullets) = 91;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.65;
    };
};
class EGVAR(beltlinked,127x99_basic_92): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_92);
    GVARMAIN(bullets) = 92;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.80;
    };
};
class EGVAR(beltlinked,127x99_basic_93): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_93);
    GVARMAIN(bullets) = 93;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 13.95;
    };
};
class EGVAR(beltlinked,127x99_basic_94): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_94);
    GVARMAIN(bullets) = 94;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.10;
    };
};
class EGVAR(beltlinked,127x99_basic_95): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_95);
    GVARMAIN(bullets) = 95;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.25;
    };
};
class EGVAR(beltlinked,127x99_basic_96): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_96);
    GVARMAIN(bullets) = 96;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.40;
    };
};
class EGVAR(beltlinked,127x99_basic_97): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_97);
    GVARMAIN(bullets) = 97;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.55;
    };
};
class EGVAR(beltlinked,127x99_basic_98): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_98);
    GVARMAIN(bullets) = 98;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.70;
    };
};
class EGVAR(beltlinked,127x99_basic_99): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_99);
    GVARMAIN(bullets) = 99;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 14.85;
    };
};
class EGVAR(beltlinked,127x99_basic_100): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_100);
    GVARMAIN(bullets) = 100;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.00;
    };
};
class EGVAR(beltlinked,127x99_basic_101): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_101);
    GVARMAIN(bullets) = 101;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.15;
    };
};
class EGVAR(beltlinked,127x99_basic_102): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_102);
    GVARMAIN(bullets) = 102;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.30;
    };
};
class EGVAR(beltlinked,127x99_basic_103): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_103);
    GVARMAIN(bullets) = 103;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.45;
    };
};
class EGVAR(beltlinked,127x99_basic_104): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_104);
    GVARMAIN(bullets) = 104;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.60;
    };
};
class EGVAR(beltlinked,127x99_basic_105): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_105);
    GVARMAIN(bullets) = 105;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.75;
    };
};
class EGVAR(beltlinked,127x99_basic_106): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_106);
    GVARMAIN(bullets) = 106;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 15.90;
    };
};
class EGVAR(beltlinked,127x99_basic_107): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_107);
    GVARMAIN(bullets) = 107;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.05;
    };
};
class EGVAR(beltlinked,127x99_basic_108): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_108);
    GVARMAIN(bullets) = 108;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.20;
    };
};
class EGVAR(beltlinked,127x99_basic_109): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_109);
    GVARMAIN(bullets) = 109;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.35;
    };
};
class EGVAR(beltlinked,127x99_basic_110): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_110);
    GVARMAIN(bullets) = 110;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.50;
    };
};
class EGVAR(beltlinked,127x99_basic_111): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_111);
    GVARMAIN(bullets) = 111;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.65;
    };
};
class EGVAR(beltlinked,127x99_basic_112): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_112);
    GVARMAIN(bullets) = 112;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.80;
    };
};
class EGVAR(beltlinked,127x99_basic_113): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_113);
    GVARMAIN(bullets) = 113;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 16.95;
    };
};
class EGVAR(beltlinked,127x99_basic_114): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_114);
    GVARMAIN(bullets) = 114;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.10;
    };
};
class EGVAR(beltlinked,127x99_basic_115): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_115);
    GVARMAIN(bullets) = 115;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.25;
    };
};
class EGVAR(beltlinked,127x99_basic_116): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_116);
    GVARMAIN(bullets) = 116;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.40;
    };
};
class EGVAR(beltlinked,127x99_basic_117): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_117);
    GVARMAIN(bullets) = 117;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.55;
    };
};
class EGVAR(beltlinked,127x99_basic_118): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_118);
    GVARMAIN(bullets) = 118;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.70;
    };
};
class EGVAR(beltlinked,127x99_basic_119): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_119);
    GVARMAIN(bullets) = 119;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 17.85;
    };
};
class EGVAR(beltlinked,127x99_basic_120): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_120);
    GVARMAIN(bullets) = 120;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.00;
    };
};
class EGVAR(beltlinked,127x99_basic_121): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_121);
    GVARMAIN(bullets) = 121;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.15;
    };
};
class EGVAR(beltlinked,127x99_basic_122): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_122);
    GVARMAIN(bullets) = 122;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.30;
    };
};
class EGVAR(beltlinked,127x99_basic_123): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_123);
    GVARMAIN(bullets) = 123;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.45;
    };
};
class EGVAR(beltlinked,127x99_basic_124): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_124);
    GVARMAIN(bullets) = 124;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.60;
    };
};
class EGVAR(beltlinked,127x99_basic_125): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_125);
    GVARMAIN(bullets) = 125;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.75;
    };
};
class EGVAR(beltlinked,127x99_basic_126): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_126);
    GVARMAIN(bullets) = 126;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 18.90;
    };
};
class EGVAR(beltlinked,127x99_basic_127): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_127);
    GVARMAIN(bullets) = 127;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.05;
    };
};
class EGVAR(beltlinked,127x99_basic_128): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_128);
    GVARMAIN(bullets) = 128;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.20;
    };
};
class EGVAR(beltlinked,127x99_basic_129): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_129);
    GVARMAIN(bullets) = 129;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.35;
    };
};
class EGVAR(beltlinked,127x99_basic_130): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_130);
    GVARMAIN(bullets) = 130;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.50;
    };
};
class EGVAR(beltlinked,127x99_basic_131): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_131);
    GVARMAIN(bullets) = 131;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.65;
    };
};
class EGVAR(beltlinked,127x99_basic_132): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_132);
    GVARMAIN(bullets) = 132;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.80;
    };
};
class EGVAR(beltlinked,127x99_basic_133): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_133);
    GVARMAIN(bullets) = 133;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 19.95;
    };
};
class EGVAR(beltlinked,127x99_basic_134): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_134);
    GVARMAIN(bullets) = 134;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.10;
    };
};
class EGVAR(beltlinked,127x99_basic_135): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_135);
    GVARMAIN(bullets) = 135;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.25;
    };
};
class EGVAR(beltlinked,127x99_basic_136): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_136);
    GVARMAIN(bullets) = 136;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.40;
    };
};
class EGVAR(beltlinked,127x99_basic_137): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_137);
    GVARMAIN(bullets) = 137;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.55;
    };
};
class EGVAR(beltlinked,127x99_basic_138): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_138);
    GVARMAIN(bullets) = 138;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.70;
    };
};
class EGVAR(beltlinked,127x99_basic_139): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_139);
    GVARMAIN(bullets) = 139;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 20.85;
    };
};
class EGVAR(beltlinked,127x99_basic_140): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_140);
    GVARMAIN(bullets) = 140;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.00;
    };
};
class EGVAR(beltlinked,127x99_basic_141): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_141);
    GVARMAIN(bullets) = 141;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.15;
    };
};
class EGVAR(beltlinked,127x99_basic_142): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_142);
    GVARMAIN(bullets) = 142;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.30;
    };
};
class EGVAR(beltlinked,127x99_basic_143): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_143);
    GVARMAIN(bullets) = 143;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.45;
    };
};
class EGVAR(beltlinked,127x99_basic_144): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_144);
    GVARMAIN(bullets) = 144;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.60;
    };
};
class EGVAR(beltlinked,127x99_basic_145): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_145);
    GVARMAIN(bullets) = 145;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.75;
    };
};
class EGVAR(beltlinked,127x99_basic_146): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_146);
    GVARMAIN(bullets) = 146;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 21.90;
    };
};
class EGVAR(beltlinked,127x99_basic_147): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_147);
    GVARMAIN(bullets) = 147;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.05;
    };
};
class EGVAR(beltlinked,127x99_basic_148): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_148);
    GVARMAIN(bullets) = 148;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.20;
    };
};
class EGVAR(beltlinked,127x99_basic_149): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_149);
    GVARMAIN(bullets) = 149;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.35;
    };
};
class EGVAR(beltlinked,127x99_basic_150): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_150);
    GVARMAIN(bullets) = 150;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.50;
    };
};
class EGVAR(beltlinked,127x99_basic_151): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_151);
    GVARMAIN(bullets) = 151;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.65;
    };
};
class EGVAR(beltlinked,127x99_basic_152): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_152);
    GVARMAIN(bullets) = 152;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.80;
    };
};
class EGVAR(beltlinked,127x99_basic_153): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_153);
    GVARMAIN(bullets) = 153;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 22.95;
    };
};
class EGVAR(beltlinked,127x99_basic_154): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_154);
    GVARMAIN(bullets) = 154;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.10;
    };
};
class EGVAR(beltlinked,127x99_basic_155): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_155);
    GVARMAIN(bullets) = 155;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.25;
    };
};
class EGVAR(beltlinked,127x99_basic_156): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_156);
    GVARMAIN(bullets) = 156;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.40;
    };
};
class EGVAR(beltlinked,127x99_basic_157): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_157);
    GVARMAIN(bullets) = 157;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.55;
    };
};
class EGVAR(beltlinked,127x99_basic_158): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_158);
    GVARMAIN(bullets) = 158;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.70;
    };
};
class EGVAR(beltlinked,127x99_basic_159): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_159);
    GVARMAIN(bullets) = 159;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 23.85;
    };
};
class EGVAR(beltlinked,127x99_basic_160): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_160);
    GVARMAIN(bullets) = 160;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.00;
    };
};
class EGVAR(beltlinked,127x99_basic_161): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_161);
    GVARMAIN(bullets) = 161;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.15;
    };
};
class EGVAR(beltlinked,127x99_basic_162): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_162);
    GVARMAIN(bullets) = 162;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.30;
    };
};
class EGVAR(beltlinked,127x99_basic_163): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_163);
    GVARMAIN(bullets) = 163;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.45;
    };
};
class EGVAR(beltlinked,127x99_basic_164): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_164);
    GVARMAIN(bullets) = 164;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.60;
    };
};
class EGVAR(beltlinked,127x99_basic_165): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_165);
    GVARMAIN(bullets) = 165;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.75;
    };
};
class EGVAR(beltlinked,127x99_basic_166): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_166);
    GVARMAIN(bullets) = 166;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 24.90;
    };
};
class EGVAR(beltlinked,127x99_basic_167): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_167);
    GVARMAIN(bullets) = 167;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.05;
    };
};
class EGVAR(beltlinked,127x99_basic_168): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_168);
    GVARMAIN(bullets) = 168;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.20;
    };
};
class EGVAR(beltlinked,127x99_basic_169): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_169);
    GVARMAIN(bullets) = 169;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.35;
    };
};
class EGVAR(beltlinked,127x99_basic_170): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_170);
    GVARMAIN(bullets) = 170;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.50;
    };
};
class EGVAR(beltlinked,127x99_basic_171): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_171);
    GVARMAIN(bullets) = 171;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.65;
    };
};
class EGVAR(beltlinked,127x99_basic_172): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_172);
    GVARMAIN(bullets) = 172;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.80;
    };
};
class EGVAR(beltlinked,127x99_basic_173): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_173);
    GVARMAIN(bullets) = 173;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 25.95;
    };
};
class EGVAR(beltlinked,127x99_basic_174): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_174);
    GVARMAIN(bullets) = 174;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.10;
    };
};
class EGVAR(beltlinked,127x99_basic_175): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_175);
    GVARMAIN(bullets) = 175;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.25;
    };
};
class EGVAR(beltlinked,127x99_basic_176): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_176);
    GVARMAIN(bullets) = 176;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.40;
    };
};
class EGVAR(beltlinked,127x99_basic_177): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_177);
    GVARMAIN(bullets) = 177;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.55;
    };
};
class EGVAR(beltlinked,127x99_basic_178): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_178);
    GVARMAIN(bullets) = 178;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.70;
    };
};
class EGVAR(beltlinked,127x99_basic_179): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_179);
    GVARMAIN(bullets) = 179;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 26.85;
    };
};
class EGVAR(beltlinked,127x99_basic_180): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_180);
    GVARMAIN(bullets) = 180;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.00;
    };
};
class EGVAR(beltlinked,127x99_basic_181): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_181);
    GVARMAIN(bullets) = 181;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.15;
    };
};
class EGVAR(beltlinked,127x99_basic_182): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_182);
    GVARMAIN(bullets) = 182;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.30;
    };
};
class EGVAR(beltlinked,127x99_basic_183): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_183);
    GVARMAIN(bullets) = 183;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.45;
    };
};
class EGVAR(beltlinked,127x99_basic_184): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_184);
    GVARMAIN(bullets) = 184;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.60;
    };
};
class EGVAR(beltlinked,127x99_basic_185): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_185);
    GVARMAIN(bullets) = 185;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.75;
    };
};
class EGVAR(beltlinked,127x99_basic_186): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_186);
    GVARMAIN(bullets) = 186;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 27.90;
    };
};
class EGVAR(beltlinked,127x99_basic_187): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_187);
    GVARMAIN(bullets) = 187;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.05;
    };
};
class EGVAR(beltlinked,127x99_basic_188): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_188);
    GVARMAIN(bullets) = 188;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.20;
    };
};
class EGVAR(beltlinked,127x99_basic_189): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_189);
    GVARMAIN(bullets) = 189;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.35;
    };
};
class EGVAR(beltlinked,127x99_basic_190): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_190);
    GVARMAIN(bullets) = 190;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.50;
    };
};
class EGVAR(beltlinked,127x99_basic_191): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_191);
    GVARMAIN(bullets) = 191;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.65;
    };
};
class EGVAR(beltlinked,127x99_basic_192): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_192);
    GVARMAIN(bullets) = 192;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.80;
    };
};
class EGVAR(beltlinked,127x99_basic_193): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_193);
    GVARMAIN(bullets) = 193;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 28.95;
    };
};
class EGVAR(beltlinked,127x99_basic_194): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_194);
    GVARMAIN(bullets) = 194;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.10;
    };
};
class EGVAR(beltlinked,127x99_basic_195): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_195);
    GVARMAIN(bullets) = 195;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.25;
    };
};
class EGVAR(beltlinked,127x99_basic_196): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_196);
    GVARMAIN(bullets) = 196;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.40;
    };
};
class EGVAR(beltlinked,127x99_basic_197): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_197);
    GVARMAIN(bullets) = 197;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.55;
    };
};
class EGVAR(beltlinked,127x99_basic_198): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_198);
    GVARMAIN(bullets) = 198;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.70;
    };
};
class EGVAR(beltlinked,127x99_basic_199): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_199);
    GVARMAIN(bullets) = 199;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 29.85;
    };
};
class EGVAR(beltlinked,127x99_basic_200): EGVAR(CoreBelt,127x99_basic) {
    displayName = CSTRING(beltlinked_127x99_basic_200);
    GVARMAIN(bullets) = 200;
    scope = 2;
    scopeArsenal = 2;
    scopeCurator = 2;

    class ItemInfo: CBA_MiscItem_ItemInfo {
        mass = 30.00;
    };
};
