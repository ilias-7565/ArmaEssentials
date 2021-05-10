//7,62x51 sd
class EGVAR(ammo,TRIPLES(762x51,sd,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(762x51_sd_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\762mm.paa);
};
class EGVAR(ammo,TRIPLES(762x51,sd,10nd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(762x51_sd_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,sd,20nd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(762x51_sd_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,sd,30nd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(762x51_sd_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,sd,40nd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(762x51_sd_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,sd,50nd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(762x51_sd_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x51,sd,60nd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(762x51_sd_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x51,sd,1Rnd));
};
