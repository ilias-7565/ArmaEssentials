//5,56x45 BASIC
class EGVAR(ammo,TRIPLES(556x45,basic,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(556x45_basic_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\556mm.paa);
};
class EGVAR(ammo,TRIPLES(556x45,basic,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(556x45_basic_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,basic,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(556x45_basic_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,basic,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(556x45_basic_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,basic,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(556x45_basic_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,basic,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(556x45_basic_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,basic,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(556x45_basic_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
