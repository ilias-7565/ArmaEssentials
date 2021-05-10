//,338 API526
class EGVAR(ammo,TRIPLES(300,API526,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(338_API526_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\lcal.paa);
};
class EGVAR(ammo,TRIPLES(300,API526,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(338_API526_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
class EGVAR(ammo,TRIPLES(300,API526,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(338_API526_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
class EGVAR(ammo,TRIPLES(300,API526,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(338_API526_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
class EGVAR(ammo,TRIPLES(300,API526,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(338_API526_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
class EGVAR(ammo,TRIPLES(300,API526,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(338_API526_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
class EGVAR(ammo,TRIPLES(300,API526,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(338_API526_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(300,API526,1Rnd));
};
