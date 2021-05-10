class 5Rnd_127x108_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x108,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x108,basic,1Rnd));
};

class 5Rnd_127x108_APDS_Mag: 5Rnd_127x108_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(127x108,APDS,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(127x108,basic,1Rnd));
};
