//5,56x45 mk262
class EGVAR(ammo,TRIPLES(556x45,mk262,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(556x45_mk262_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\556mm.paa);
};
class EGVAR(ammo,TRIPLES(556x45,mk262,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(556x45_mk262_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk262,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(556x45_mk262_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk262,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(556x45_mk262_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk262,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(556x45_mk262_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk262,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(556x45_mk262_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,mk262,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(556x45_mk262_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
};
