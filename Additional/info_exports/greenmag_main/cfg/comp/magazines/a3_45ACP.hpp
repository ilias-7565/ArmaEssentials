class 30Rnd_45ACP_Mag_SMG_01: 30Rnd_9x21_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
};

class 30Rnd_45ACP_Mag_SMG_01_Tracer_Green: 30Rnd_9x21_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,tracer,1Rnd));
};

class 30Rnd_45ACP_Mag_SMG_01_Tracer_Red: 30Rnd_9x21_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,tracer,1Rnd));
};

class 30Rnd_45ACP_Mag_SMG_01_Tracer_Yellow: 30Rnd_9x21_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,tracer,1Rnd));
};

class 11Rnd_45ACP_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
};

class 6Rnd_45ACP_Cylinder: 11Rnd_45ACP_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(45ACP,basic,1Rnd));
};
