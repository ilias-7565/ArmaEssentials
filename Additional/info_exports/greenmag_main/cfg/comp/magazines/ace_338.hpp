class ace_10rnd_338_300gr_hpbt_mag: 10rnd_338_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(338,300gr,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(338,basic,1Rnd));
};

class ace_10rnd_338_api526_mag: 10rnd_338_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(338,API526,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(338,basic,1Rnd));
};


class ace_130rnd_338_mag_green: 130rnd_338_mag {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,338_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,338_basic);
};
class ace_130rnd_338_mag_yellow: 130rnd_338_mag {
    GVARMAIN(canSpeedload) = 0;
    GVARMAIN(needBelt) = 1;
    GVARMAIN(ammo) = QEGVAR(beltlinked,338_basic);
    GVARMAIN(basicammo) = QEGVAR(beltlinked,338_basic);
};
