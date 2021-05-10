//,408 205gr
class EGVAR(ammo,TRIPLES(408,205gr,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(408_205gr_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\lcal.paa);
};
class EGVAR(ammo,TRIPLES(408,205gr,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(408_205gr_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
class EGVAR(ammo,TRIPLES(408,205gr,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(408_205gr_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
class EGVAR(ammo,TRIPLES(408,205gr,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(408_205gr_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
class EGVAR(ammo,TRIPLES(408,205gr,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(408_205gr_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
class EGVAR(ammo,TRIPLES(408,205gr,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(408_205gr_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
class EGVAR(ammo,TRIPLES(408,205gr,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(408_205gr_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(408,205gr,1Rnd));
};
