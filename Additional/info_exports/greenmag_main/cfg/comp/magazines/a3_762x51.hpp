class 20Rnd_762x51_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
};

class 150Rnd_762x51_Box: CA_Magazine {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x51_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x51_basic);
};

class 150Rnd_762x51_Box_Tracer: 150Rnd_762x51_Box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x51_tracer);
};

class 10Rnd_762x51_Mag: 20Rnd_762x51_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x51,basic,1Rnd));
};
