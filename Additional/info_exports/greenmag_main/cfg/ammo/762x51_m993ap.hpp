//7,62x51 m993ap
class EGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(762x51_m993ap_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\762mm.paa);
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(762x51_m993ap_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(762x51_m993ap_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(762x51_m993ap_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(762x51_m993ap_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(762x51_m993ap_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m993ap,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(762x51_m993ap_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m993ap,1Rnd));
};
