//7,62x39 BASIC
class EGVAR(ammo,TRIPLES(762x39,basic,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(762x39_basic_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\762mm.paa);
};
class EGVAR(ammo,TRIPLES(762x39,basic,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(762x39_basic_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x39,basic,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(762x39_basic_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x39,basic,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(762x39_basic_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x39,basic,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(762x39_basic_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x39,basic,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(762x39_basic_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(762x39,basic,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(762x39_basic_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};
