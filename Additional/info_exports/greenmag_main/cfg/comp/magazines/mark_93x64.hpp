class 150Rnd_93x64_Mag: CA_Magazine {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,93x64_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,93x64_basic);
};

class 10Rnd_93x64_DMR_05_Mag: 150Rnd_93x64_Mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(93x64,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(93x64,basic,1Rnd));
};