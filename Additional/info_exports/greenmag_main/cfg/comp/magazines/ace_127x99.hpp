class ace_5rnd_127x99_mag: 5rnd_127x108_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
};

class ace_5rnd_127x99_api_mag: 5rnd_127x108_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x99,API,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
};

class ace_5rnd_127x99_amax_mag: 5rnd_127x108_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x99,AMAX,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x99,basic,1Rnd));
};

class 100rnd_127x99_mag;
class ace_csw_100rnd_127x99_mag: 100rnd_127x99_mag {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,127x99_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,127x99_basic);
};
class 100rnd_127x99_mag_tracer_red;
class ace_csw_100rnd_127x99_mag_red: 100rnd_127x99_mag_tracer_red {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,127x99_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,127x99_basic);
};
class 100rnd_127x99_mag_tracer_green;
class ace_csw_100rnd_127x99_mag_green: 100rnd_127x99_mag_tracer_green {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,127x99_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,127x99_basic);
};
class 100rnd_127x99_mag_tracer_yellow;
class ace_csw_100rnd_127x99_mag_yellow: 100rnd_127x99_mag_tracer_yellow {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,127x99_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,127x99_basic);
};
