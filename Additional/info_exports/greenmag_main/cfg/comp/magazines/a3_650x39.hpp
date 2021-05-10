class 30Rnd_65x39_caseless_mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
};

class 30Rnd_65x39_caseless_mag_Tracer: 30Rnd_65x39_caseless_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,tracer,1Rnd));
};

class 30Rnd_65x39_caseless_green;
class 30Rnd_65x39_caseless_green_mag_Tracer: 30Rnd_65x39_caseless_green {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
};

class 100Rnd_65x39_caseless_mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
};

class 100Rnd_65x39_caseless_mag_Tracer: 100Rnd_65x39_caseless_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,tracer,1Rnd));
};

//##
class 200Rnd_65x39_cased_Box: 100Rnd_65x39_caseless_mag {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,650x39_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,650x39_basic);
};

class 200Rnd_65x39_cased_Box_Tracer: 200Rnd_65x39_cased_Box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,650x39_tracer);
};

//##
class 200Rnd_65x39_cased_Box_Red: 100Rnd_65x39_caseless_mag {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,650x39_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,650x39_basic);
};

class 200Rnd_65x39_cased_Box_Tracer_Red: 200Rnd_65x39_cased_Box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,650x39_tracer);
};
