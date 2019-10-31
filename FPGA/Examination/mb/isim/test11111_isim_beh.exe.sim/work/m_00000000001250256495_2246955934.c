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
static const char *ng0 = "F:/git/FPGA/Examination/mb/seven_seg_controller.v";
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static unsigned int ng3[] = {14U, 0U};
static unsigned int ng4[] = {13U, 0U};
static unsigned int ng5[] = {2U, 0U};
static unsigned int ng6[] = {11U, 0U};
static unsigned int ng7[] = {3U, 0U};
static unsigned int ng8[] = {7U, 0U};
static unsigned int ng9[] = {15U, 0U};
static unsigned int ng10[] = {15U, 15U};
static unsigned int ng11[] = {64U, 0U};
static int ng12[] = {6, 0};
static int ng13[] = {0, 0};
static unsigned int ng14[] = {121U, 0U};
static unsigned int ng15[] = {36U, 0U};
static unsigned int ng16[] = {48U, 0U};
static unsigned int ng17[] = {4U, 0U};
static unsigned int ng18[] = {25U, 0U};
static unsigned int ng19[] = {5U, 0U};
static unsigned int ng20[] = {18U, 0U};
static unsigned int ng21[] = {6U, 0U};
static unsigned int ng22[] = {120U, 0U};
static unsigned int ng23[] = {8U, 0U};
static unsigned int ng24[] = {9U, 0U};
static unsigned int ng25[] = {16U, 0U};
static unsigned int ng26[] = {127U, 0U};
static int ng27[] = {7, 0};



static void Always_34_0(char *t0)
{
    char t13[8];
    char t30[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t31;

LAB0:    t1 = (t0 + 3328U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(34, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 3360);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(35, ng0);

LAB5:    xsi_set_current_line(36, ng0);
    t4 = (t0 + 1048U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(39, ng0);
    t2 = (t0 + 1368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t6 = *((unsigned int *)t3);
    t7 = *((unsigned int *)t2);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t5);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t5);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    t12 = (t13 + 4);
    t21 = *((unsigned int *)t12);
    t22 = (~(t21));
    t23 = *((unsigned int *)t13);
    t24 = (t23 & t22);
    t25 = (t24 != 0);
    if (t25 > 0)
        goto LAB14;

LAB15:
LAB16:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(36, ng0);

LAB9:    xsi_set_current_line(37, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 2, 0LL);
    goto LAB8;

LAB12:    t11 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB13;

LAB14:    xsi_set_current_line(39, ng0);

LAB17:    xsi_set_current_line(40, ng0);
    t26 = (t0 + 2248);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = ((char*)((ng2)));
    memset(t30, 0, 8);
    xsi_vlog_unsigned_add(t30, 2, t28, 2, t29, 2);
    t31 = (t0 + 2248);
    xsi_vlogvar_wait_assign_value(t31, t30, 0, 0, 2, 0LL);
    goto LAB16;

}

static void Always_45_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned int t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;

LAB0:    t1 = (t0 + 3576U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 4656);
    *((int *)t2) = 1;
    t3 = (t0 + 3608);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 1368U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(55, ng0);

LAB22:    xsi_set_current_line(56, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(46, ng0);

LAB9:    xsi_set_current_line(47, ng0);
    t11 = (t0 + 2248);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);

LAB10:    t14 = ((char*)((ng1)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t14, 2);
    if (t15 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng2)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng5)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng7)));
    t15 = xsi_vlog_unsigned_case_compare(t13, 2, t2, 2);
    if (t15 == 1)
        goto LAB17;

LAB18:
LAB20:
LAB19:    xsi_set_current_line(52, ng0);
    t2 = ((char*)((ng9)));
    t3 = (t0 + 2088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB21:    goto LAB8;

LAB11:    xsi_set_current_line(48, ng0);
    t16 = ((char*)((ng3)));
    t17 = (t0 + 2088);
    xsi_vlogvar_assign_value(t17, t16, 0, 0, 4);
    goto LAB21;

LAB13:    xsi_set_current_line(49, ng0);
    t3 = ((char*)((ng4)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB21;

LAB15:    xsi_set_current_line(50, ng0);
    t3 = ((char*)((ng6)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB21;

LAB17:    xsi_set_current_line(51, ng0);
    t3 = ((char*)((ng8)));
    t4 = (t0 + 2088);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 4);
    goto LAB21;

}

static void Always_60_2(char *t0)
{
    char t9[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    t1 = (t0 + 3824U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 4672);
    *((int *)t2) = 1;
    t3 = (t0 + 3856);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(60, ng0);

LAB5:    xsi_set_current_line(61, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng10)));
    t3 = (t0 + 2408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 4);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(62, ng0);
    t10 = (t0 + 1528U);
    t11 = *((char **)t10);
    memset(t9, 0, 8);
    t10 = (t9 + 4);
    t12 = (t11 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (t13 >> 0);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t12);
    t16 = (t15 >> 0);
    *((unsigned int *)t10) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t10);
    *((unsigned int *)t10) = (t18 & 15U);
    t19 = (t0 + 2408);
    xsi_vlogvar_assign_value(t19, t9, 0, 0, 4);
    goto LAB17;

LAB9:    xsi_set_current_line(63, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 4);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 4);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    goto LAB17;

LAB11:    xsi_set_current_line(64, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 8);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 8);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    goto LAB17;

LAB13:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 1528U);
    t4 = *((char **)t3);
    memset(t9, 0, 8);
    t3 = (t9 + 4);
    t5 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t14 = (t13 >> 12);
    *((unsigned int *)t9) = t14;
    t15 = *((unsigned int *)t5);
    t16 = (t15 >> 12);
    *((unsigned int *)t3) = t16;
    t17 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t17 & 15U);
    t18 = *((unsigned int *)t3);
    *((unsigned int *)t3) = (t18 & 15U);
    t7 = (t0 + 2408);
    xsi_vlogvar_assign_value(t7, t9, 0, 0, 4);
    goto LAB17;

}

static void Always_71_3(char *t0)
{
    char t11[8];
    char t12[8];
    char t13[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned int t20;
    int t21;
    char *t22;
    unsigned int t23;
    int t24;
    int t25;
    char *t26;
    unsigned int t27;
    int t28;
    int t29;
    unsigned int t30;
    int t31;
    unsigned int t32;
    unsigned int t33;
    int t34;
    int t35;

LAB0:    t1 = (t0 + 4072U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 4688);
    *((int *)t2) = 1;
    t3 = (t0 + 4104);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(71, ng0);

LAB5:    xsi_set_current_line(72, ng0);
    t4 = (t0 + 2408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t7, 4);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng7)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng17)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng19)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng21)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng23)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng24)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 4, t2, 4);
    if (t8 == 1)
        goto LAB25;

LAB26:
LAB28:
LAB27:    xsi_set_current_line(83, ng0);
    t2 = ((char*)((ng26)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t7 = *((char **)t5);
    t9 = ((char*)((ng12)));
    t10 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t7)), 2, t9, 32, 1, t10, 32, 1);
    t14 = (t11 + 4);
    t20 = *((unsigned int *)t14);
    t8 = (!(t20));
    t15 = (t12 + 4);
    t23 = *((unsigned int *)t15);
    t21 = (!(t23));
    t24 = (t8 && t21);
    t16 = (t13 + 4);
    t27 = *((unsigned int *)t16);
    t25 = (!(t27));
    t28 = (t24 && t25);
    if (t28 == 1)
        goto LAB50;

LAB51:
LAB29:    goto LAB2;

LAB7:    xsi_set_current_line(73, ng0);
    t9 = ((char*)((ng11)));
    t10 = (t0 + 1928);
    t14 = (t0 + 1928);
    t15 = (t14 + 72U);
    t16 = *((char **)t15);
    t17 = ((char*)((ng12)));
    t18 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t16)), 2, t17, 32, 1, t18, 32, 1);
    t19 = (t11 + 4);
    t20 = *((unsigned int *)t19);
    t21 = (!(t20));
    t22 = (t12 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t26 = (t13 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB30;

LAB31:    goto LAB29;

LAB9:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng14)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB32;

LAB33:    goto LAB29;

LAB11:    xsi_set_current_line(75, ng0);
    t3 = ((char*)((ng15)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB34;

LAB35:    goto LAB29;

LAB13:    xsi_set_current_line(76, ng0);
    t3 = ((char*)((ng16)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB36;

LAB37:    goto LAB29;

LAB15:    xsi_set_current_line(77, ng0);
    t3 = ((char*)((ng18)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB38;

LAB39:    goto LAB29;

LAB17:    xsi_set_current_line(78, ng0);
    t3 = ((char*)((ng20)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB40;

LAB41:    goto LAB29;

LAB19:    xsi_set_current_line(79, ng0);
    t3 = ((char*)((ng5)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB42;

LAB43:    goto LAB29;

LAB21:    xsi_set_current_line(80, ng0);
    t3 = ((char*)((ng22)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB44;

LAB45:    goto LAB29;

LAB23:    xsi_set_current_line(81, ng0);
    t3 = ((char*)((ng1)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB46;

LAB47:    goto LAB29;

LAB25:    xsi_set_current_line(82, ng0);
    t3 = ((char*)((ng25)));
    t4 = (t0 + 1928);
    t5 = (t0 + 1928);
    t7 = (t5 + 72U);
    t9 = *((char **)t7);
    t10 = ((char*)((ng12)));
    t14 = ((char*)((ng13)));
    xsi_vlog_convert_partindices(t11, t12, t13, ((int*)(t9)), 2, t10, 32, 1, t14, 32, 1);
    t15 = (t11 + 4);
    t20 = *((unsigned int *)t15);
    t21 = (!(t20));
    t16 = (t12 + 4);
    t23 = *((unsigned int *)t16);
    t24 = (!(t23));
    t25 = (t21 && t24);
    t17 = (t13 + 4);
    t27 = *((unsigned int *)t17);
    t28 = (!(t27));
    t29 = (t25 && t28);
    if (t29 == 1)
        goto LAB48;

LAB49:    goto LAB29;

LAB30:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t10, t9, t31, *((unsigned int *)t12), t35);
    goto LAB31;

LAB32:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB33;

LAB34:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB35;

LAB36:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB37;

LAB38:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB39;

LAB40:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB41;

LAB42:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB43;

LAB44:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB45;

LAB46:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB47;

LAB48:    t30 = *((unsigned int *)t13);
    t31 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t34 = (t32 - t33);
    t35 = (t34 + 1);
    xsi_vlogvar_assign_value(t4, t3, t31, *((unsigned int *)t12), t35);
    goto LAB49;

LAB50:    t30 = *((unsigned int *)t13);
    t29 = (t30 + 0);
    t32 = *((unsigned int *)t11);
    t33 = *((unsigned int *)t12);
    t31 = (t32 - t33);
    t34 = (t31 + 1);
    xsi_vlogvar_assign_value(t3, t2, t29, *((unsigned int *)t12), t34);
    goto LAB51;

}

static void Always_88_4(char *t0)
{
    char t8[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    unsigned int t38;
    int t39;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 4704);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);

LAB5:    xsi_set_current_line(89, ng0);
    t4 = (t0 + 2248);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng5)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 1928);
    t4 = (t0 + 1928);
    t5 = (t4 + 72U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng27)));
    xsi_vlog_generic_convert_bit_index(t8, t6, 2, t7, 32, 1);
    t9 = (t8 + 4);
    t11 = *((unsigned int *)t9);
    t39 = (!(t11));
    if (t39 == 1)
        goto LAB15;

LAB16:
LAB12:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(90, ng0);
    t30 = ((char*)((ng1)));
    t31 = (t0 + 1928);
    t33 = (t0 + 1928);
    t34 = (t33 + 72U);
    t35 = *((char **)t34);
    t36 = ((char*)((ng27)));
    xsi_vlog_generic_convert_bit_index(t32, t35, 2, t36, 32, 1);
    t37 = (t32 + 4);
    t38 = *((unsigned int *)t37);
    t39 = (!(t38));
    if (t39 == 1)
        goto LAB13;

LAB14:    goto LAB12;

LAB13:    xsi_vlogvar_assign_value(t31, t30, 0, *((unsigned int *)t32), 1);
    goto LAB14;

LAB15:    xsi_vlogvar_assign_value(t3, t2, 0, *((unsigned int *)t8), 1);
    goto LAB16;

}


extern void work_m_00000000001250256495_2246955934_init()
{
	static char *pe[] = {(void *)Always_34_0,(void *)Always_45_1,(void *)Always_60_2,(void *)Always_71_3,(void *)Always_88_4};
	xsi_register_didat("work_m_00000000001250256495_2246955934", "isim/test11111_isim_beh.exe.sim/work/m_00000000001250256495_2246955934.didat");
	xsi_register_executes(pe);
}
