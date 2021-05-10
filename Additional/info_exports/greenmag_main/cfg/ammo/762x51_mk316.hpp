//7,62x51 mk316
class EGVAR(ammo,TRIPLES(762x51,mk316,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(762x51_mk316_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\762mm.paa);
};
class EGVAR(ammo,TRIPLES(762x51,mk316,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(762x51_mk316_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,mk316,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(762x51_mk316_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,mk316,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(762x51_mk316_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,mk316,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(762x51_mk316_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,mk316,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(762x51_mk316_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,mk316,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(762x51_mk316_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,mk316,1Rnd));
};
