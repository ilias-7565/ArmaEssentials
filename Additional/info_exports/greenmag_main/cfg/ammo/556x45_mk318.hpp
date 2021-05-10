//5,56x45 mk318
class EGVAR(ammo,TRIPLES(556x45,mk318,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(556x45_mk318_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\556mm.paa);
};
class EGVAR(ammo,TRIPLES(556x45,mk318,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(556x45_mk318_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk318,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(556x45_mk318_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk318,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(556x45_mk318_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk318,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(556x45_mk318_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk318,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(556x45_mk318_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk318,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(556x45_mk318_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
};
