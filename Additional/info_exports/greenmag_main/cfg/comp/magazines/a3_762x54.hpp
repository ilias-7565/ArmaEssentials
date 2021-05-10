class 150Rnd_762x54_Box: 150Rnd_762x51_Box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x54_basic);
};

class 150Rnd_762x54_Box_Tracer: 150Rnd_762x54_Box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_tracer);
};

class 10Rnd_762x54_Mag: 10Rnd_762x51_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
};
