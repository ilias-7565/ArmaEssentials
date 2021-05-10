/*
class 30Rnd_556x45_Stanag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};
*/

class 150Rnd_556x45_Drum_Mag_F: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

class 150Rnd_556x45_Drum_Sand_Mag_F;
class 150Rnd_556x45_Drum_Sand_Mag_Tracer_F: 150Rnd_556x45_Drum_Sand_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

class 150Rnd_556x45_Drum_Green_Mag_F;
class 150Rnd_556x45_Drum_Green_Mag_Tracer_F: 150Rnd_556x45_Drum_Green_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

class 150Rnd_556x45_Drum_Mag_Tracer_F: 150Rnd_556x45_Drum_Mag_F {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

//###
class 200Rnd_556x45_Box_F: CA_Magazine {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,556x45_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,556x45_basic);
};

class 200Rnd_556x45_Box_Tracer_F: 200Rnd_556x45_Box_F {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,556x45_tracer);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,556x45_basic);
};