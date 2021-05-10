//7,62x51 m118lr
class EGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(762x51_m118lr_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\762mm.paa);
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(762x51_m118lr_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(762x51_m118lr_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(762x51_m118lr_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(762x51_m118lr_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(762x51_m118lr_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,m118lr,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(762x51_m118lr_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,m118lr,1Rnd));
};
