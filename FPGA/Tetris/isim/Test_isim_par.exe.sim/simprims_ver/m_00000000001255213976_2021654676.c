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



static void Gate_29_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;

LAB0:    t1 = (t0 + 2504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    t2 = (t0 + 1344U);
    t3 = *((char **)t2);
    t2 = (t0 + 2904);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 4);
    t9 = (t3 + 4);
    if (*((unsigned int *)t9) == 1)
        goto LAB4;

LAB5:    t10 = *((unsigned int *)t3);
    t11 = (t10 & 1);
    *((unsigned int *)t7) = t11;
    t12 = *((unsigned int *)t9);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;

LAB6:    t14 = (t0 + 2904);
    xsi_driver_vfirst_trans(t14, 0, 0);
    t15 = (t0 + 2824);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    *((unsigned int *)t7) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB6;

}


extern void simprims_ver_m_00000000001255213976_2021654676_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1882512879_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1882512879", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1882512879.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1733935451_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1733935451", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1733935451.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_3644452940_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_3644452940", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_3644452940.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_4200339088_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_4200339088", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_4200339088.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_3277228084_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_3277228084", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_3277228084.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1841498041_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1841498041", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1841498041.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_0134896529_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_0134896529", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_0134896529.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_2319630428_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_2319630428", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_2319630428.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_2636642844_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_2636642844", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_2636642844.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1104579931_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1104579931", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1104579931.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1897686147_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1897686147", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1897686147.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_2841855768_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_2841855768", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_2841855768.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_4044357337_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_4044357337", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_4044357337.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1760401624_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1760401624", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1760401624.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_0243856390_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_0243856390", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_0243856390.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_3938003180_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_3938003180", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_3938003180.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_3627346778_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_3627346778", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_3627346778.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_2153271963_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_2153271963", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_2153271963.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_1271668636_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_1271668636", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_1271668636.didat");
	xsi_register_executes(pe);
}

extern void simprims_ver_m_00000000001255213976_2021654676_0431633562_init()
{
	static char *pe[] = {(void *)Gate_29_0};
	xsi_register_didat("simprims_ver_m_00000000001255213976_2021654676_0431633562", "isim/Test_isim_par.exe.sim/simprims_ver/m_00000000001255213976_2021654676_0431633562.didat");
	xsi_register_executes(pe);
}
