class 10Rnd_338_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(338,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(338,basic,1Rnd));
};

class 130Rnd_338_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,338_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,338_basic);
};
