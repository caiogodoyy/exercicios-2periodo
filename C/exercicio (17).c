#include <stdio.h>

int peao(int p1, int p2, int p3) {
    int xeque = 0;
    if (p1 == 'p') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            xeque = 1;
        }
    }
    return (xeque);
}

int cavalo(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) {
    int xeque = 0;
    if (p1 == 'c') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            xeque = 1;
        }
        else if (p4 == 'K') {
            xeque = 1;
        }
        else if (p5 == 'K') {
            xeque = 1;
        }
        else if (p6 == 'K') {
            xeque = 1;
        }
        else if (p7 == 'K') {
            xeque = 1;
        }
        else if (p8 == 'K') {
             xeque = 1;
        }
        else if (p9 == 'K') {
             xeque = 1;
        }
    }
    return (xeque);
}

int torre(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19, int p20, int p21, int p22, int p23, int p24, int p25, int p26, int p27, int p28, int p29) {
    int xeque = 0;
    if (p1 == 't') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            if (p2 == '-') {
                xeque = 1;
            }
        }
        else if (p4 == 'K') {
            if (p3 == '-') {
                if (p2 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p5 == 'K') {
            if (p4 == '-') {
                if (p3 == '-') {
                    if (p2 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p6 == 'K') {
            if (p5 == '-') {
                if (p4 == '-') {
                    if (p3 == '-') {
                        if (p2 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p7 == 'K') {
            if (p6 == '-') {
                if (p5 == '-') {
                    if (p4 == '-') {
                        if (p3 == '-') {
                            if (p2 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p8 == 'K') {
            if (p7 == '-') {
                if (p6 == '-') {
                    if (p5 == '-') {
                        if (p4 == '-') {
                            if (p3 == '-') {
                                if (p2 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p9 == 'K') {
            xeque = 1;
        }
        else if (p10 == 'K') {
            if (p9 == '-') {
                xeque = 1;
            }
        }
        else if (p11 == 'K') {
            if (p10 == '-') {
                if (p9 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p12 == 'K') {
            if (p11 == '-') {
                if (p10 == '-') {
                    if (p9 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p13 == 'K') {
            if (p12 == '-') {
                if (p11 == '-') {
                    if (p10 == '-') {
                        if (p9 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p14 == 'K') {
            if (p13 == '-') {
                if (p12 == '-') {
                    if (p11 == '-') {
                        if (p10 == '-') {
                            if (p9 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p15 == 'K') {
            if (p14 == '-') {
                if (p13 == '-') {
                    if (p12 == '-') {
                        if (p11 == '-') {
                            if (p10 == '-') {
                                if (p9 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p16 == 'K') {
            xeque = 1;
        }
        else if (p17 == 'K') {
            if (p16 == '-') {
                xeque = 1;
            }
        }
        else if (p18 == 'K') {
            if (p17 == '-') {
                if (p16 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p19 == 'K') {
            if (p18 == '-') {
                if (p17 == '-') {
                    if (p16 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p20 == 'K') {
            if (p19 == '-') {
                if (p18 == '-') {
                    if (p17 == '-') {
                        if (p16 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p21 == 'K') {
            if (p20 == '-') {
                if (p18 == '-') {
                    if (p18 == '-') {
                        if (p17 == '-') {
                            if (p16 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p22 == 'K') {
            if (p21 == '-') {
                if (p20 == '-') {
                    if (p19 == '-') {
                        if (p18 == '-') {
                            if (p17 == '-') {
                                if (p16 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p23 == 'K') {
            xeque = 1;
        }
        else if (p24 == 'K') {
            if (p23 == '-') {
                xeque = 1;
            }
        }
        else if (p25 == 'K') {
            if (p24 == '-') {
                if (p23 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p26 == 'K') {
            if (p25 == '-') {
                if (p24 == '-') {
                    if (p23 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p27 == 'K') {
            if (p26 == '-') {
                if (p25 == '-') {
                    if (p24 == '-') {
                        if (p23 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p28 == 'K') {
            if (p27 == '-') {
                if (p26 == '-') {
                    if (p25 == '-') {
                        if (p24 == '-') {
                            if (p23 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p29 == 'K') {
            if (p28 == '-') {
                if (p27 == '-') {
                    if (p26 == '-') {
                        if (p25 == '-') {
                            if (p24 == '-') {
                                if (p23 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (xeque);
}

int bispo(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19, int p20, int p21, int p22, int p23, int p24, int p25, int p26, int p27, int p28, int p29) {
    int xeque = 0;
    if (p1 == 'b') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            if (p2 == '-') {
                xeque = 1;
            }
        }
        else if (p4 == 'K') {
            if (p3 == '-') {
                if (p2 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p5 == 'K') {
            if (p4 == '-') {
                if (p3 == '-') {
                    if (p2 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p6 == 'K') {
            if (p5 == '-') {
                if (p4 == '-') {
                    if (p3 == '-') {
                        if (p2 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p7 == 'K') {
            if (p6 == '-') {
                if (p5 == '-') {
                    if (p4 == '-') {
                        if (p3 == '-') {
                            if (p2 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p8 == 'K') {
            if (p7 == '-') {
                if (p6 == '-') {
                    if (p5 == '-') {
                        if (p4 == '-') {
                            if (p3 == '-') {
                                if (p2 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p9 == 'K') {
            xeque = 1;
        }
        else if (p10 == 'K') {
            if (p9 == '-') {
                xeque = 1;
            }
        }
        else if (p11 == 'K') {
            if (p10 == '-') {
                if (p9 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p12 == 'K') {
            if (p11 == '-') {
                if (p10 == '-') {
                    if (p9 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p13 == 'K') {
            if (p12 == '-') {
                if (p11 == '-') {
                    if (p10 == '-') {
                        if (p9 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p14 == 'K') {
            if (p13 == '-') {
                if (p12 == '-') {
                    if (p11 == '-') {
                        if (p10 == '-') {
                            if (p9 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p15 == 'K') {
            if (p14 == '-') {
                if (p13 == '-') {
                    if (p12 == '-') {
                        if (p11 == '-') {
                            if (p10 == '-') {
                                if (p9 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p16 == 'K') {
            xeque = 1;
        }
        else if (p17 == 'K') {
            if (p16 == '-') {
                xeque = 1;
            }
        }
        else if (p18 == 'K') {
            if (p17 == '-') {
                if (p16 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p19 == 'K') {
            if (p18 == '-') {
                if (p17 == '-') {
                    if (p16 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p20 == 'K') {
            if (p19 == '-') {
                if (p18 == '-') {
                    if (p17 == '-') {
                        if (p16 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p21 == 'K') {
            if (p20 == '-') {
                if (p18 == '-') {
                    if (p18 == '-') {
                        if (p17 == '-') {
                            if (p16 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p22 == 'K') {
            if (p21 == '-') {
                if (p20 == '-') {
                    if (p19 == '-') {
                        if (p18 == '-') {
                            if (p17 == '-') {
                                if (p16 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p23 == 'K') {
            xeque = 1;
        }
        else if (p24 == 'K') {
            if (p23 == '-') {
                xeque = 1;
            }
        }
        else if (p25 == 'K') {
            if (p24 == '-') {
                if (p23 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p26 == 'K') {
            if (p25 == '-') {
                if (p24 == '-') {
                    if (p23 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p27 == 'K') {
            if (p26 == '-') {
                if (p25 == '-') {
                    if (p24 == '-') {
                        if (p23 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p28 == 'K') {
            if (p27 == '-') {
                if (p26 == '-') {
                    if (p25 == '-') {
                        if (p24 == '-') {
                            if (p23 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p29 == 'K') {
            if (p28 == '-') {
                if (p27 == '-') {
                    if (p26 == '-') {
                        if (p25 == '-') {
                            if (p24 == '-') {
                                if (p23 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (xeque);
}

int rei(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9) {
    int xeque = 0;
    if (p1 == 'k') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            xeque = 1;
        }
        else if (p4 == 'K') {
            xeque = 1;
        }
        else if (p5 == 'K') {
            xeque = 1;
        }
        else if (p6 == 'K') {
            xeque = 1;
        }
        else if (p7 == 'K') {
            xeque = 1;
        }
        else if (p8 == 'K') {
            xeque = 1;
        }
        else if (p9 == 'K') {
            xeque = 1;
        }
    }
    return (xeque);
}

int rainha(int p1, int p2, int p3, int p4, int p5, int p6, int p7, int p8, int p9, int p10, int p11, int p12, int p13, int p14, int p15, int p16, int p17, int p18, int p19, int p20, int p21, int p22, int p23, int p24, int p25, int p26, int p27, int p28, int p29, int p30, int p31, int p32, int p33, int p34, int p35, int p36, int p37, int p38, int p39, int p40, int p41, int p42, int p43, int p44, int p45, int p46, int p47, int p48, int p49, int p50, int p51, int p52, int p53, int p54, int p55, int p56, int p57) {
    int xeque = 0;
    if (p1 == 'q') {
        if (p2 == 'K') {
            xeque = 1;
        }
        else if (p3 == 'K') {
            if (p2 == '-') {
                xeque = 1;
            }
        }
        else if (p4 == 'K') {
            if (p3 == '-') {
                if (p2 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p5 == 'K') {
            if (p4 == '-') {
                if (p3 == '-') {
                    if (p2 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p6 == 'K') {
            if (p5 == '-') {
                if (p4 == '-') {
                    if (p3 == '-') {
                        if (p2 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p7 == 'K') {
            if (p6 == '-') {
                if (p5 == '-') {
                    if (p4 == '-') {
                        if (p3 == '-') {
                            if (p2 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p8 == 'K') {
            if (p7 == '-') {
                if (p6 == '-') {
                    if (p5 == '-') {
                        if (p4 == '-') {
                            if (p3 == '-') {
                                if (p2 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p9 == 'K') {
            xeque = 1;
        }
        else if (p10 == 'K') {
            if (p9 == '-') {
                xeque = 1;
            }
        }
        else if (p11 == 'K') {
            if (p10 == '-') {
                if (p9 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p12 == 'K') {
            if (p11 == '-') {
                if (p10 == '-') {
                    if (p9 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p13 == 'K') {
            if (p12 == '-') {
                if (p11 == '-') {
                    if (p10 == '-') {
                        if (p9 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p14 == 'K') {
            if (p13 == '-') {
                if (p12 == '-') {
                    if (p11 == '-') {
                        if (p10 == '-') {
                            if (p9 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p15 == 'K') {
            if (p14 == '-') {
                if (p13 == '-') {
                    if (p12 == '-') {
                        if (p11 == '-') {
                            if (p10 == '-') {
                                if (p9 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p16 == 'K') {
            xeque = 1;
        }
        else if (p17 == 'K') {
            if (p16 == '-') {
                xeque = 1;
            }
        }
        else if (p18 == 'K') {
            if (p17 == '-') {
                if (p16 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p19 == 'K') {
            if (p18 == '-') {
                if (p17 == '-') {
                    if (p16 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p20 == 'K') {
            if (p19 == '-') {
                if (p18 == '-') {
                    if (p17 == '-') {
                        if (p16 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p21 == 'K') {
            if (p20 == '-') {
                if (p18 == '-') {
                    if (p18 == '-') {
                        if (p17 == '-') {
                            if (p16 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p22 == 'K') {
            if (p21 == '-') {
                if (p20 == '-') {
                    if (p19 == '-') {
                        if (p18 == '-') {
                            if (p17 == '-') {
                                if (p16 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p23 == 'K') {
            xeque = 1;
        }
        else if (p24 == 'K') {
            if (p23 == '-') {
                xeque = 1;
            }
        }
        else if (p25 == 'K') {
            if (p24 == '-') {
                if (p23 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p26 == 'K') {
            if (p25 == '-') {
                if (p24 == '-') {
                    if (p23 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p27 == 'K') {
            if (p26 == '-') {
                if (p25 == '-') {
                    if (p24 == '-') {
                        if (p23 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p28 == 'K') {
            if (p27 == '-') {
                if (p26 == '-') {
                    if (p25 == '-') {
                        if (p24 == '-') {
                            if (p23 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p29 == 'K') {
            if (p28 == '-') {
                if (p27 == '-') {
                    if (p26 == '-') {
                        if (p25 == '-') {
                            if (p24 == '-') {
                                if (p23 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    
        else if (p30 == 'K') {
            xeque = 1;
        }
        else if (p31 == 'K') {
            if (p2 == '-') {
                xeque = 1;
            }
        }
        else if (p32 == 'K') {
            if (p3 == '-') {
                if (p2 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p33 == 'K') {
            if (p4 == '-') {
                if (p3 == '-') {
                    if (p2 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p34 == 'K') {
            if (p5 == '-') {
                if (p4 == '-') {
                    if (p3 == '-') {
                        if (p2 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p35 == 'K') {
            if (p6 == '-') {
                if (p5 == '-') {
                    if (p4 == '-') {
                        if (p3 == '-') {
                            if (p2 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p36 == 'K') {
            if (p7 == '-') {
                if (p6 == '-') {
                    if (p5 == '-') {
                        if (p4 == '-') {
                            if (p3 == '-') {
                                if (p2 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p37 == 'K') {
            xeque = 1;
        }
        else if (p38 == 'K') {
            if (p9 == '-') {
                xeque = 1;
            }
        }
        else if (p39 == 'K') {
            if (p10 == '-') {
                if (p9 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p40 == 'K') {
            if (p11 == '-') {
                if (p10 == '-') {
                    if (p9 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p41 == 'K') {
            if (p12 == '-') {
                if (p11 == '-') {
                    if (p10 == '-') {
                        if (p9 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p42 == 'K') {
            if (p13 == '-') {
                if (p12 == '-') {
                    if (p11 == '-') {
                        if (p10 == '-') {
                            if (p9 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p43 == 'K') {
            if (p14 == '-') {
                if (p13 == '-') {
                    if (p12 == '-') {
                        if (p11 == '-') {
                            if (p10 == '-') {
                                if (p9 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p44 == 'K') {
            xeque = 1;
        }
        else if (p45 == 'K') {
            if (p16 == '-') {
                xeque = 1;
            }
        }
        else if (p46 == 'K') {
            if (p17 == '-') {
                if (p16 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p47 == 'K') {
            if (p18 == '-') {
                if (p17 == '-') {
                    if (p16 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p48 == 'K') {
            if (p19 == '-') {
                if (p18 == '-') {
                    if (p17 == '-') {
                        if (p16 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p49 == 'K') {
            if (p20 == '-') {
                if (p18 == '-') {
                    if (p18 == '-') {
                        if (p17 == '-') {
                            if (p16 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p50 == 'K') {
            if (p21 == '-') {
                if (p20 == '-') {
                    if (p19 == '-') {
                        if (p18 == '-') {
                            if (p17 == '-') {
                                if (p16 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }

        else if (p51 == 'K') {
            xeque = 1;
        }
        else if (p52 == 'K') {
            if (p23 == '-') {
                xeque = 1;
            }
        }
        else if (p53 == 'K') {
            if (p24 == '-') {
                if (p23 == '-') {
                    xeque = 1;
                }
            }
        }
        else if (p54 == 'K') {
            if (p25 == '-') {
                if (p24 == '-') {
                    if (p23 == '-') {
                        xeque = 1;
                    }
                }
            }
        }
        else if (p55 == 'K') {
            if (p26 == '-') {
                if (p25 == '-') {
                    if (p24 == '-') {
                        if (p23 == '-') {
                            xeque = 1;
                        }
                    }
                }
            }
        }
        else if (p56 == 'K') {
            if (p27 == '-') {
                if (p26 == '-') {
                    if (p25 == '-') {
                        if (p24 == '-') {
                            if (p23 == '-') {
                                xeque = 1;
                            }
                        }
                    }
                }
            }
        }
        else if (p57 == 'K') {
            if (p28 == '-') {
                if (p27 == '-') {
                    if (p26 == '-') {
                        if (p25 == '-') {
                            if (p24 == '-') {
                                if (p23 == '-') {
                                    xeque = 1;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (xeque);
}

int main(int argc, char const *argv[])
{
    int i, x, xeque = 0;

    char tabuleiro[8][8];

    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            scanf(" %c", &tabuleiro[i][x]);
        }
    }

    //PEAO
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = peao(tabuleiro[i][x], tabuleiro[i+1][x+1], tabuleiro[i+1][x-1]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    //CAVALO
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = cavalo(tabuleiro[i][x], tabuleiro[i+2][x+1], tabuleiro[i+2][x-1], tabuleiro[i-2][x+1], tabuleiro[i-2][x-1], tabuleiro[i+1][x+2], tabuleiro[i-1][x+2], tabuleiro[i+1][x-2], tabuleiro[i-1][x-2]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    //TORRE
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = torre(tabuleiro[i][x], tabuleiro[i-1][x], tabuleiro[i-2][x], tabuleiro[i-3][x], tabuleiro[i-4][x], tabuleiro[i-5][x], tabuleiro[i-6][x], tabuleiro[i-7][x], tabuleiro[i+1][x], tabuleiro[i+2][x], tabuleiro[i+3][x], tabuleiro[i+4][x], tabuleiro[i+5][x], tabuleiro[i+6][x], tabuleiro[i+7][x], tabuleiro[i][x-1], tabuleiro[i][x-2], tabuleiro[i][x-3], tabuleiro[i][x-4], tabuleiro[i][x-5], tabuleiro[i][x-6], tabuleiro[i][x-7], tabuleiro[i][x+1], tabuleiro[i][x+2], tabuleiro[i][x+3], tabuleiro[i][x+4], tabuleiro[i][x+5], tabuleiro[i][x+6], tabuleiro[i][x+7]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    //BISPO
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = bispo(tabuleiro[i][x], tabuleiro[i-1][x+1], tabuleiro[i-2][x+2], tabuleiro[i-3][x+3], tabuleiro[i-4][x+4], tabuleiro[i-5][x+5], tabuleiro[i-6][x+6], tabuleiro[i-7][x+7], tabuleiro[i+1][x+1], tabuleiro[i+2][x+2], tabuleiro[i+3][x+3], tabuleiro[i+4][x+4], tabuleiro[i+5][x+5], tabuleiro[i+6][x+6], tabuleiro[i+7][x+7], tabuleiro[i-1][x-1], tabuleiro[i-2][x-2], tabuleiro[i-3][x-3], tabuleiro[i-4][x-4], tabuleiro[i-5][x-5], tabuleiro[i-6][x-6], tabuleiro[i-7][x-7], tabuleiro[i+1][x-1], tabuleiro[i+2][x-2], tabuleiro[i+3][x-3], tabuleiro[i+4][x-4], tabuleiro[i+5][x-5], tabuleiro[i+6][x-6], tabuleiro[i+7][x-7]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    //REI
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = rei(tabuleiro[i][x], tabuleiro[i+1][x], tabuleiro[i-1][x], tabuleiro[i][x+1], tabuleiro[i][x-1], tabuleiro[i+1][x-1], tabuleiro[i+1][x+1], tabuleiro[i-1][x-1], tabuleiro[i-1][x+1]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    //RAINHA    
    if (xeque == 0) {
    for (i = 0; i < 8; i++) {
        for (x = 0; x < 8; x++) {
            xeque = rainha(tabuleiro[i][x], tabuleiro[i-1][x], tabuleiro[i-2][x], tabuleiro[i-3][x], tabuleiro[i-4][x], tabuleiro[i-5][x], tabuleiro[i-6][x], tabuleiro[i-7][x], tabuleiro[i+1][x], tabuleiro[i+2][x], tabuleiro[i+3][x], tabuleiro[i+4][x], tabuleiro[i+5][x], tabuleiro[i+6][x], tabuleiro[i+7][x], tabuleiro[i][x-1], tabuleiro[i][x-2], tabuleiro[i][x-3], tabuleiro[i][x-4], tabuleiro[i][x-5], tabuleiro[i][x-6], tabuleiro[i][x-7], tabuleiro[i][x+1], tabuleiro[i][x+2], tabuleiro[i][x+3], tabuleiro[i][x+4], tabuleiro[i][x+5], tabuleiro[i][x+6], tabuleiro[i][x+7], tabuleiro[i-1][x+1], tabuleiro[i-2][x+2], tabuleiro[i-3][x+3], tabuleiro[i-4][x+4], tabuleiro[i-5][x+5], tabuleiro[i-6][x+6], tabuleiro[i-7][x+7], tabuleiro[i+1][x+1], tabuleiro[i+2][x+2], tabuleiro[i+3][x+3], tabuleiro[i+4][x+4], tabuleiro[i+5][x+5], tabuleiro[i+6][x+6], tabuleiro[i+7][x+7], tabuleiro[i-1][x-1], tabuleiro[i-2][x-2], tabuleiro[i-3][x-3], tabuleiro[i-4][x-4], tabuleiro[i-5][x-5], tabuleiro[i-6][x-6], tabuleiro[i-7][x-7], tabuleiro[i+1][x-1], tabuleiro[i+2][x-2], tabuleiro[i+3][x-3], tabuleiro[i+4][x-4], tabuleiro[i+5][x-5], tabuleiro[i+6][x-6], tabuleiro[i+7][x-7]);
            if (xeque == 1) {
                break;
            }
        }
        if (xeque == 1) {
                break;
        }
    }
    }

    if (xeque == 1) {
        printf("XEQUE");
    }
    else {
        printf("NAO XEQUE");
    }

    return 0;
}