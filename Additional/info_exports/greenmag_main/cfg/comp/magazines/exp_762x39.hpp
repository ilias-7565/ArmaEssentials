class 30Rnd_762x39_Mag_F: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};

class 30Rnd_762x39_Mag_Tracer_F: 30Rnd_762x39_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x39,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};

class 30Rnd_762x39_AK12_Mag_F;
class 30Rnd_762x39_AK12_Mag_Tracer_F: 30Rnd_762x39_AK12_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x39,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x39,basic,1Rnd));
};