class 30Rnd_65x39_caseless_msbs_mag: 30Rnd_65x39_caseless_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
    GVARMAIN(basicammo) = QEGVAR(ammo,TRIPLES(650x39,basic,1Rnd));
};

class 30Rnd_65x39_caseless_msbs_mag_Tracer: 30Rnd_65x39_caseless_msbs_mag {
    GVARMAIN(canSpeedload) = 1;
    GVARMAIN(needBelt) = 0;
    GVARMAIN(ammo) = QEGVAR(ammo,TRIPLES(650x39,tracer,1Rnd));
};