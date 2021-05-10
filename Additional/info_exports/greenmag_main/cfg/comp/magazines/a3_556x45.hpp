class 30Rnd_556x45_Stanag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

class 30Rnd_556x45_Stanag_Tracer_Red: 30Rnd_556x45_Stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
};

class 30Rnd_556x45_Stanag_Tracer_Green: 30Rnd_556x45_Stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
};

class 30Rnd_556x45_Stanag_Tracer_Yellow: 30Rnd_556x45_Stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
};

//##
class 30Rnd_556x45_Stanag_Sand: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(556x45,basic,1Rnd));
};

class 30Rnd_556x45_Stanag_Sand_Tracer_Red: 30Rnd_556x45_Stanag_Sand {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,tracer,1Rnd));
};

//##
class 20Rnd_556x45_UW_mag: 30Rnd_556x45_Stanag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(556x45,dual,1Rnd));
};
