//5,56x45 dual
class EGVAR(ammo,TRIPLES(556x45,dual,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(556x45_dual_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\556mm.paa);
};
class EGVAR(ammo,TRIPLES(556x45,dual,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(556x45_dual_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,dual,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(556x45_dual_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,dual,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(556x45_dual_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,dual,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(556x45_dual_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,dual,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(556x45_dual_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,dual,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(556x45_dual_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
