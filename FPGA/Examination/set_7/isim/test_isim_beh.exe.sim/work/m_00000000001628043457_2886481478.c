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
static const char *ng0 = "F:/git/FPGA/Examination/set_7/set_7.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {79U, 0U};
static unsigned int ng4[] = {2U, 0U};
static unsigned int ng5[] = {18U, 0U};
static unsigned int ng6[] = {3U, 0U};
static unsigned int ng7[] = {6U, 0U};
static unsigned int ng8[] = {4U, 0U};
static unsigned int ng9[] = {76U, 0U};
static unsigned int ng10[] = {5U, 0U};
static unsigned int ng11[] = {36U, 0U};
static unsigned int ng12[] = {32U, 0U};
static unsigned int ng13[] = {7U, 0U};
static unsigned int ng14[] = {15U, 0U};
static unsigned int ng15[] = {8U, 0U};
static unsigned int ng16[] = {9U, 0U};
static unsigned int ng17[] = {127U, 0U};



static void Always_37_0(char *t0)
{
    char t4[8];
    char *t1;
    char *t2;
    char *t3;
    char *t5;
    char *t6;
    unsigned int t7;
    unsigned int t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;
    int t21;

LAB0:    t1 = (t0 + 3888U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4208);
    *((int *)t2) = 1;
    t3 = (t0 + 3920);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(38, ng0);
    t5 = (t0 + 2568U);
    t6 = *((char **)t5);
    memset(t4, 0, 8);
    t5 = (t6 + 4);
    t7 = *((unsigned int *)t5);
    t8 = (~(t7));
    t9 = *((unsigned int *)t6);
    t10 = (t9 & t8);
    t11 = (t10 & 1U);
    if (t11 != 0)
        goto LAB9;

LAB7:    if (*((unsigned int *)t5) == 0)
        goto LAB6;

LAB8:    t12 = (t4 + 4);
    *((unsigned int *)t4) = 1;
    *((unsigned int *)t12) = 1;

LAB9:    t13 = (t4 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t4);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(41, ng0);

LAB14:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 2408U);
    t3 = *((char **)t2);

LAB15:    t2 = ((char*)((ng2)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB16;

LAB17:    t2 = ((char*)((ng1)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB18;

LAB19:    t2 = ((char*)((ng4)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB20;

LAB21:    t2 = ((char*)((ng6)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB22;

LAB23:    t2 = ((char*)((ng8)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB24;

LAB25:    t2 = ((char*)((ng10)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB26;

LAB27:    t2 = ((char*)((ng7)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB28;

LAB29:    t2 = ((char*)((ng13)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB30;

LAB31:    t2 = ((char*)((ng15)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB32;

LAB33:    t2 = ((char*)((ng16)));
    t21 = xsi_vlog_unsigned_case_compare(t3, 4, t2, 4);
    if (t21 == 1)
        goto LAB34;

LAB35:
LAB37:
LAB36:    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng17)));
    t5 = (t0 + 2968);
    xsi_vlogvar_assign_value(t5, t2, 0, 0, 7);

LAB38:
LAB12:    goto LAB2;

LAB6:    *((unsigned int *)t4) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(38, ng0);

LAB13:    xsi_set_current_line(39, ng0);
    t19 = ((char*)((ng1)));
    t20 = (t0 + 2968);
    xsi_vlogvar_assign_value(t20, t19, 0, 0, 7);
    goto LAB12;

LAB16:    xsi_set_current_line(43, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB18:    xsi_set_current_line(44, ng0);
    t5 = ((char*)((ng3)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB20:    xsi_set_current_line(45, ng0);
    t5 = ((char*)((ng5)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB22:    xsi_set_current_line(46, ng0);
    t5 = ((char*)((ng7)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB24:    xsi_set_current_line(47, ng0);
    t5 = ((char*)((ng9)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB26:    xsi_set_current_line(48, ng0);
    t5 = ((char*)((ng11)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB28:    xsi_set_current_line(49, ng0);
    t5 = ((char*)((ng12)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB30:    xsi_set_current_line(50, ng0);
    t5 = ((char*)((ng14)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB32:    xsi_set_current_line(51, ng0);
    t5 = ((char*)((ng2)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

LAB34:    xsi_set_current_line(52, ng0);
    t5 = ((char*)((ng8)));
    t6 = (t0 + 2968);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 7);
    goto LAB38;

}


extern void work_m_00000000001628043457_2886481478_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_00000000001628043457_2886481478", "isim/test_isim_beh.exe.sim/work/m_00000000001628043457_2886481478.didat");
	xsi_register_executes(pe);
}
