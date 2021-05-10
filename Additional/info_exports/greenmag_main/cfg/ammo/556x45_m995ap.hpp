//5,56x45 m995ap
class EGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(556x45_m995ap_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\556mm.paa);
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(556x45_m995ap_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(556x45_m995ap_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(556x45_m995ap_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(556x45_m995ap_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(556x45_m995ap_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
class EGVAR(ammo,TRIPLES(556x45,m995ap,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(556x45_m995ap_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
};
