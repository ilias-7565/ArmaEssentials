class 30Rnd_580x42_Mag_F: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(580x42,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(580x42,basic,1Rnd));
};

class 30Rnd_580x42_Mag_Tracer_F: 30Rnd_580x42_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(580x42,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(580x42,basic,1Rnd));
};

class 100Rnd_580x42_Mag_F;
class 100Rnd_580x42_Mag_Tracer_F: 100Rnd_580x42_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(580x42,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(580x42,basic,1Rnd));
};