/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static unsigned int ng0[] = {1U, 0U};



static void Cont_28_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;

LAB0:    t1 = (t0 + 2344U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = ((char*)((ng0)));
    t3 = (t0 + 2728);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t7, 0, 8);
    t8 = 1U;
    t9 = t8;
    t10 = (t2 + 4);
    t11 = *((unsigned int *)t2);
    t8 = (t8 & t11);
    t12 = *((unsigned int *)t10);
    t9 = (t9 & t12);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t7);
    *((unsigned int *)t7) = (t14 | t8);
    t15 = *((unsigned int *)t13);
    *((unsigned int *)t13) = (t15 | t9);
    xsi_driver_vfirst_trans(t3, 0, 0);

LAB1:    return;
}


extern void simprims_ver_m_00000000000126354981_1080494567_3474402037_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3474402037", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3474402037.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2243816016_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2243816016", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2243816016.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2873869014_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2873869014", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2873869014.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2367281129_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2367281129", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2367281129.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1629636982_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1629636982", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1629636982.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0671806666_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0671806666", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0671806666.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1071701192_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1071701192", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1071701192.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3504175400_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3504175400", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3504175400.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0994871423_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0994871423", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0994871423.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3697610841_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3697610841", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3697610841.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3789619827_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3789619827", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3789619827.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_3457436059_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_3457436059", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_3457436059.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1173425555_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1173425555", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1173425555.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4241404256_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4241404256", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4241404256.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0632142040_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0632142040", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0632142040.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_4133939426_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_4133939426", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_4133939426.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_2940968894_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_2940968894", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_2940968894.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_1510280040_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_1510280040", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_1510280040.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_0925453338_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567_0925453338", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567_0925453338.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000000126354981_1080494567_init()
{
	static char *pe[] = {(void *)Cont_28_0};
	xsi_register_didat("simprims_ver_m_00000000000126354981_1080494567", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000000126354981_1080494567.didat");
	xsi_register_executes(pe);
}
