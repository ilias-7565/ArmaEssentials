//12,7x99 API
class EGVAR(ammo,TRIPLES(127x99,API,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(127x99_API_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\127mm.paa);
};
class EGVAR(ammo,TRIPLES(127x99,API,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(127x99_API_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x99,API,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(127x99_API_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x99,API,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(127x99_API_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x99,API,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(127x99_API_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x99,API,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(127x99_API_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x99,API,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(127x99_API_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
};
