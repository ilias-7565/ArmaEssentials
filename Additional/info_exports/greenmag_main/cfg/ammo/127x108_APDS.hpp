//12,7x108 APDS
class EGVAR(ammo,TRIPLES(127x108,APDS,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(127x108_APDS_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\127mm.paa);
};
class EGVAR(ammo,TRIPLES(127x108,APDS,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(127x108_APDS_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x108,APDS,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(127x108_APDS_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x108,APDS,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(127x108_APDS_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x108,APDS,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(127x108_APDS_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x108,APDS,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(127x108_APDS_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
class EGVAR(ammo,TRIPLES(127x108,APDS,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(127x108_APDS_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
};
