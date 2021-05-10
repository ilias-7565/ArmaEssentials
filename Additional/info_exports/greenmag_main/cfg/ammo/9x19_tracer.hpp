//9x19 TRACER
class EGVAR(ammo,TRIPLES(9x19,tracer,1Rnd)): EGVAR(core,1Rnd) {
	displayName = CSTRING(9x19_tracer_1Rnd);
	scope = 2;
	picture = QPATHTOF(data\9mm.paa);
};
class EGVAR(ammo,TRIPLES(9x19,tracer,10Rnd)): EGVAR(core,10Rnd) {
	displayName = CSTRING(9x19_tracer_10Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
class EGVAR(ammo,TRIPLES(9x19,tracer,20Rnd)): EGVAR(core,20Rnd) {
	displayName = CSTRING(9x19_tracer_20Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
class EGVAR(ammo,TRIPLES(9x19,tracer,30Rnd)): EGVAR(core,30Rnd) {
	displayName = CSTRING(9x19_tracer_30Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
class EGVAR(ammo,TRIPLES(9x19,tracer,40Rnd)): EGVAR(core,40Rnd) {
	displayName = CSTRING(9x19_tracer_40Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
class EGVAR(ammo,TRIPLES(9x19,tracer,50Rnd)): EGVAR(core,50Rnd) {
	displayName = CSTRING(9x19_tracer_50Rnd);
	scope = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
class EGVAR(ammo,TRIPLES(9x19,tracer,60Rnd)): EGVAR(core,60Rnd) {
	displayName = CSTRING(9x19_tracer_60Rnd);
	scope = 2;
	scopeArsenal = 2;
	scopeCurator = 2;
	GVARMAIN(ammotype) = QEGVAR(ammo,TRIPLES(9x19,tracer,1Rnd));
};
