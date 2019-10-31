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
static const char *ng0 = "F:/git/FPGA/Examination/door/door.v";
static int ng1[] = {1, 0};
static int ng2[] = {0, 0};



static int sp_BB(char *t1, char *t2)
{
    char t7[8];
    int t0;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned int t13;
    int t14;

LAB0:    t0 = 1;
    t3 = (t2 + 48U);
    t4 = *((char **)t3);
    if (t4 == 0)
        goto LAB2;

LAB3:    goto *t4;

LAB2:    t4 = (t1 + 848);
    xsi_vlog_subprogram_setdisablestate(t4, &&LAB4);
    xsi_set_current_line(34, ng0);

LAB5:    xsi_set_current_line(35, ng0);
    t5 = ((char*)((ng1)));
    t6 = (t1 + 2360);
    t8 = (t1 + 2360);
    t9 = (t8 + 72U);
    t10 = *((char **)t9);
    t11 = (t1 + 1480U);
    t12 = *((char **)t11);
    xsi_vlog_generic_convert_bit_index(t7, t10, 2, t12, 4, 2);
    t11 = (t7 + 4);
    t13 = *((unsigned int *)t11);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB6;

LAB7:    xsi_set_current_line(36, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2360);
    t6 = (t1 + 2360);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t1 + 1640U);
    t11 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t11, 4, 2);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB8;

LAB9:    xsi_set_current_line(37, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2360);
    t6 = (t1 + 2360);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t1 + 1800U);
    t11 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t11, 4, 2);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB10;

LAB11:    xsi_set_current_line(38, ng0);
    t4 = ((char*)((ng1)));
    t5 = (t1 + 2360);
    t6 = (t1 + 2360);
    t8 = (t6 + 72U);
    t9 = *((char **)t8);
    t10 = (t1 + 1960U);
    t11 = *((char **)t10);
    xsi_vlog_generic_convert_bit_index(t7, t9, 2, t11, 4, 2);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t10);
    t14 = (!(t13));
    if (t14 == 1)
        goto LAB12;

LAB13:
LAB4:    xsi_vlog_dispose_subprogram_invocation(t2);
    t4 = (t2 + 48U);
    *((char **)t4) = &&LAB2;
    t0 = 0;

LAB1:    return t0;
LAB6:    xsi_vlogvar_wait_assign_value(t6, t5, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB7;

LAB8:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB9;

LAB10:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB11;

LAB12:    xsi_vlogvar_wait_assign_value(t5, t4, 0, *((unsigned int *)t7), 1, 0LL);
    goto LAB13;

}

static void Initial_29_0(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(29, ng0);

LAB2:    xsi_set_current_line(30, ng0);
    t1 = ((char*)((ng2)));
    t2 = (t0 + 2360);
    xsi_vlogvar_wait_assign_value(t2, t1, 0, 0, 8, 0LL);

LAB1:    return;
}

static void Always_42_1(char *t0)
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
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;

LAB0:    t1 = (t0 + 3528U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 3848);
    *((int *)t2) = 1;
    t3 = (t0 + 3560);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(42, ng0);

LAB5:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 3336);
    t5 = (t0 + 848);
    t6 = xsi_create_subprogram_invocation(t4, 0, t0, t5, 0, 0);
    xsi_vlog_subprogram_pushinvocation(t5, t6);

LAB8:    t7 = (t0 + 3432);
    t8 = *((char **)t7);
    t9 = (t8 + 80U);
    t10 = *((char **)t9);
    t11 = (t10 + 272U);
    t12 = *((char **)t11);
    t13 = (t12 + 0U);
    t14 = *((char **)t13);
    t15 = ((int  (*)(char *, char *))t14)(t0, t8);

LAB10:    if (t15 != 0)
        goto LAB11;

LAB6:    t8 = (t0 + 848);
    xsi_vlog_subprogram_popinvocation(t8);

LAB7:    t16 = (t0 + 3432);
    t17 = *((char **)t16);
    t16 = (t0 + 848);
    t18 = (t0 + 3336);
    t19 = 0;
    xsi_delete_subprogram_invocation(t16, t17, t0, t18, t19);
    goto LAB2;

LAB9:;
LAB11:    t7 = (t0 + 3528U);
    *((char **)t7) = &&LAB8;
    goto LAB1;

}


extern void work_m_00000000002004601228_0616766566_init()
{
	static char *pe[] = {(void *)Initial_29_0,(void *)Always_42_1};
	static char *se[] = {(void *)sp_BB};
	xsi_register_didat("work_m_00000000002004601228_0616766566", "isim/ACS_isim_beh.exe.sim/work/m_00000000002004601228_0616766566.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
