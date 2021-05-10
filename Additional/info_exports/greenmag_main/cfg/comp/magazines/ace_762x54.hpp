class ace_10rnd_762x54_tracer_mag: 10rnd_762x54_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(762x54,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(762x54,basic,1Rnd));
};

class ace_150rnd_762x54_box_red: 150rnd_762x54_box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x54_basic);
};
class ace_150rnd_762x54_box_yellow: 150rnd_762x54_box {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x54_basic);
};
class ace_150rnd_762x54_box_tracer_red: 150rnd_762x54_box_tracer {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_tracer);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x54_basic);
};
class ace_150rnd_762x54_box_tracer_yellow: 150rnd_762x54_box_tracer {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,762x54_tracer);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,762x54_basic);
};