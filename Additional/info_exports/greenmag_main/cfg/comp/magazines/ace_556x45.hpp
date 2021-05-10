class ace_30rnd_556x45_stanag_m995_ap_mag: 30rnd_556x45_stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,m995ap,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_30rnd_556x45_stanag_mk262_mag: 30rnd_556x45_stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,mk262,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_30rnd_556x45_stanag_mk318_mag: 30rnd_556x45_stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,mk318,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_30rnd_556x45_stanag_tracer_dim: 30rnd_556x45_stanag_tracer_red {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,IRtracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_150rnd_556x45_drum_green: 150rnd_556x45_drum_mag_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_150rnd_556x45_drum_yellow: 150rnd_556x45_drum_mag_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_150rnd_556x45_drum_tracer_green: 150rnd_556x45_drum_mag_tracer_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
class ace_150rnd_556x45_drum_tracer_yellow: 150rnd_556x45_drum_mag_tracer_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};


class ace_200rnd_556x45_box_green: 200rnd_556x45_box_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(beltlinked,556x45_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,556x45_basic);
};
class ace_200rnd_556x45_box_tracer_green: 200rnd_556x45_box_tracer_f {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(beltlinked,556x45_tracer);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,556x45_basic);
};
