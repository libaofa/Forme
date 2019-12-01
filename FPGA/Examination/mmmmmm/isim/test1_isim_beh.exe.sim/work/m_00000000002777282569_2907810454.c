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
static const char *ng0 = "F:/git/FPGA/Examination/mmmmmm/state.v";
static unsigned int ng1[] = {1U, 0U};
static unsigned int ng2[] = {0U, 0U};



static void Always_54_0(char *t0)
{
    char t6[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;

LAB0:    t1 = (t0 + 4008U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 4040);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(54, ng0);

LAB5:    xsi_set_current_line(55, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(58, ng0);

LAB14:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 3088);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 3, 0LL);

LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(55, ng0);

LAB13:    xsi_set_current_line(56, ng0);
    t28 = (t0 + 472);
    t29 = *((char **)t28);
    t28 = (t0 + 2928);
    xsi_vlogvar_wait_assign_value(t28, t29, 0, 0, 3, 0LL);
    goto LAB12;

}

static void Always_64_1(char *t0)
{
    char t11[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t12;
    char *t13;
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
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;

LAB0:    t1 = (t0 + 4256U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4840);
    *((int *)t2) = 1;
    t3 = (t0 + 4288);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(64, ng0);

LAB5:    xsi_set_current_line(65, ng0);
    t4 = (t0 + 2928);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = (t0 + 472);
    t8 = *((char **)t7);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t8, 32);
    if (t9 == 1)
        goto LAB7;

LAB8:    t2 = (t0 + 608);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB9;

LAB10:    t2 = (t0 + 880);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB11;

LAB12:    t2 = (t0 + 1016);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB13;

LAB14:    t2 = (t0 + 744);
    t3 = *((char **)t2);
    t9 = xsi_vlog_unsigned_case_compare(t6, 3, t3, 32);
    if (t9 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(107, ng0);

LAB77:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 472);
    t3 = *((char **)t2);
    t2 = (t0 + 3088);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 3);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(66, ng0);

LAB20:    xsi_set_current_line(67, ng0);
    t7 = (t0 + 2048U);
    t10 = *((char **)t7);
    t7 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t12 = (t10 + 4);
    t13 = (t7 + 4);
    t14 = *((unsigned int *)t10);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t12);
    t18 = *((unsigned int *)t13);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t12);
    t22 = *((unsigned int *)t13);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB24;

LAB21:    if (t23 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t11) = 1;

LAB24:    t27 = (t11 + 4);
    t28 = *((unsigned int *)t27);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB25;

LAB26:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB32;

LAB29:    if (t23 != 0)
        goto LAB31;

LAB30:    *((unsigned int *)t11) = 1;

LAB32:    t8 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB33;

LAB34:    xsi_set_current_line(73, ng0);

LAB37:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB35:
LAB27:    goto LAB19;

LAB9:    xsi_set_current_line(77, ng0);

LAB38:    xsi_set_current_line(78, ng0);
    t2 = (t0 + 2208U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB42;

LAB39:    if (t23 != 0)
        goto LAB41;

LAB40:    *((unsigned int *)t11) = 1;

LAB42:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB43;

LAB44:    xsi_set_current_line(81, ng0);

LAB47:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB45:    goto LAB19;

LAB11:    xsi_set_current_line(85, ng0);

LAB48:    xsi_set_current_line(86, ng0);
    t2 = (t0 + 1016);
    t4 = *((char **)t2);
    t2 = (t0 + 3088);
    xsi_vlogvar_assign_value(t2, t4, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(88, ng0);

LAB49:    xsi_set_current_line(89, ng0);
    t2 = (t0 + 2368U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB53;

LAB50:    if (t23 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t11) = 1;

LAB53:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB54;

LAB55:    xsi_set_current_line(92, ng0);

LAB58:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB56:    goto LAB19;

LAB15:    xsi_set_current_line(96, ng0);

LAB59:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 2048U);
    t4 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t5 = (t4 + 4);
    t7 = (t2 + 4);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t5);
    t18 = *((unsigned int *)t7);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t5);
    t22 = *((unsigned int *)t7);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB63;

LAB60:    if (t23 != 0)
        goto LAB62;

LAB61:    *((unsigned int *)t11) = 1;

LAB63:    t10 = (t11 + 4);
    t28 = *((unsigned int *)t10);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB64;

LAB65:    xsi_set_current_line(100, ng0);
    t2 = (t0 + 2368U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng1)));
    memset(t11, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t14 = *((unsigned int *)t3);
    t15 = *((unsigned int *)t2);
    t16 = (t14 ^ t15);
    t17 = *((unsigned int *)t4);
    t18 = *((unsigned int *)t5);
    t19 = (t17 ^ t18);
    t20 = (t16 | t19);
    t21 = *((unsigned int *)t4);
    t22 = *((unsigned int *)t5);
    t23 = (t21 | t22);
    t24 = (~(t23));
    t25 = (t20 & t24);
    if (t25 != 0)
        goto LAB71;

LAB68:    if (t23 != 0)
        goto LAB70;

LAB69:    *((unsigned int *)t11) = 1;

LAB71:    t8 = (t11 + 4);
    t28 = *((unsigned int *)t8);
    t29 = (~(t28));
    t30 = *((unsigned int *)t11);
    t31 = (t30 & t29);
    t32 = (t31 != 0);
    if (t32 > 0)
        goto LAB72;

LAB73:    xsi_set_current_line(103, ng0);

LAB76:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3088);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 3);

LAB74:
LAB66:    goto LAB19;

LAB23:    t26 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t26) = 1;
    goto LAB24;

LAB25:    xsi_set_current_line(67, ng0);

LAB28:    xsi_set_current_line(68, ng0);
    t33 = (t0 + 608);
    t34 = *((char **)t33);
    t33 = (t0 + 3088);
    xsi_vlogvar_assign_value(t33, t34, 0, 0, 3);
    goto LAB27;

LAB31:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB32;

LAB33:    xsi_set_current_line(70, ng0);

LAB36:    xsi_set_current_line(71, ng0);
    t10 = (t0 + 880);
    t12 = *((char **)t10);
    t10 = (t0 + 3088);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB35;

LAB41:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB42;

LAB43:    xsi_set_current_line(78, ng0);

LAB46:    xsi_set_current_line(79, ng0);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    t12 = (t0 + 3088);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB45;

LAB52:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(89, ng0);

LAB57:    xsi_set_current_line(90, ng0);
    t12 = (t0 + 744);
    t13 = *((char **)t12);
    t12 = (t0 + 3088);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB56;

LAB62:    t8 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB63;

LAB64:    xsi_set_current_line(97, ng0);

LAB67:    xsi_set_current_line(98, ng0);
    t12 = (t0 + 608);
    t13 = *((char **)t12);
    t12 = (t0 + 3088);
    xsi_vlogvar_assign_value(t12, t13, 0, 0, 3);
    goto LAB66;

LAB70:    t7 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t7) = 1;
    goto LAB71;

LAB72:    xsi_set_current_line(100, ng0);

LAB75:    xsi_set_current_line(101, ng0);
    t10 = (t0 + 880);
    t12 = *((char **)t10);
    t10 = (t0 + 3088);
    xsi_vlogvar_assign_value(t10, t12, 0, 0, 3);
    goto LAB74;

}

static void Always_115_2(char *t0)
{
    char t13[8];
    char t22[8];
    char t40[8];
    char t55[8];
    char t63[8];
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
    char *t21;
    char *t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    char *t29;
    char *t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    char *t54;
    char *t56;
    unsigned int t57;
    unsigned int t58;
    unsigned int t59;
    unsigned int t60;
    unsigned int t61;
    char *t62;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    char *t67;
    char *t68;
    char *t69;
    unsigned int t70;
    unsigned int t71;
    unsigned int t72;
    unsigned int t73;
    unsigned int t74;
    unsigned int t75;
    unsigned int t76;
    char *t77;
    char *t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t81;
    int t82;
    unsigned int t83;
    unsigned int t84;
    unsigned int t85;
    int t86;
    unsigned int t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    char *t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    unsigned int t95;
    unsigned int t96;
    char *t97;
    char *t98;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(115, ng0);
    t2 = (t0 + 4856);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(115, ng0);

LAB5:    xsi_set_current_line(116, ng0);
    t4 = (t0 + 1888U);
    t5 = *((char **)t4);
    t4 = (t5 + 4);
    t6 = *((unsigned int *)t4);
    t7 = (~(t6));
    t8 = *((unsigned int *)t5);
    t9 = (t8 & t7);
    t10 = (t9 != 0);
    if (t10 > 0)
        goto LAB6;

LAB7:    xsi_set_current_line(119, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 608);
    t11 = *((char **)t5);
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t12 = (t11 + 4);
    t6 = *((unsigned int *)t4);
    t7 = *((unsigned int *)t11);
    t8 = (t6 ^ t7);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t12);
    t14 = (t9 ^ t10);
    t15 = (t8 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t12);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB13;

LAB10:    if (t18 != 0)
        goto LAB12;

LAB11:    *((unsigned int *)t13) = 1;

LAB13:    memset(t22, 0, 8);
    t23 = (t13 + 4);
    t24 = *((unsigned int *)t23);
    t25 = (~(t24));
    t26 = *((unsigned int *)t13);
    t27 = (t26 & t25);
    t28 = (t27 & 1U);
    if (t28 != 0)
        goto LAB14;

LAB15:    if (*((unsigned int *)t23) != 0)
        goto LAB16;

LAB17:    t30 = (t22 + 4);
    t31 = *((unsigned int *)t22);
    t32 = (!(t31));
    t33 = *((unsigned int *)t30);
    t34 = (t32 || t33);
    if (t34 > 0)
        goto LAB18;

LAB19:    memcpy(t63, t22, 8);

LAB20:    t91 = (t63 + 4);
    t92 = *((unsigned int *)t91);
    t93 = (~(t92));
    t94 = *((unsigned int *)t63);
    t95 = (t94 & t93);
    t96 = (t95 != 0);
    if (t96 > 0)
        goto LAB32;

LAB33:    xsi_set_current_line(122, ng0);

LAB36:    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 1, 0LL);

LAB34:
LAB8:    goto LAB2;

LAB6:    xsi_set_current_line(116, ng0);

LAB9:    xsi_set_current_line(117, ng0);
    t11 = ((char*)((ng2)));
    t12 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 1, 0LL);
    goto LAB8;

LAB12:    t21 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB13;

LAB14:    *((unsigned int *)t22) = 1;
    goto LAB17;

LAB16:    t29 = (t22 + 4);
    *((unsigned int *)t22) = 1;
    *((unsigned int *)t29) = 1;
    goto LAB17;

LAB18:    t35 = (t0 + 2928);
    t36 = (t35 + 56U);
    t37 = *((char **)t36);
    t38 = (t0 + 880);
    t39 = *((char **)t38);
    memset(t40, 0, 8);
    t38 = (t37 + 4);
    t41 = (t39 + 4);
    t42 = *((unsigned int *)t37);
    t43 = *((unsigned int *)t39);
    t44 = (t42 ^ t43);
    t45 = *((unsigned int *)t38);
    t46 = *((unsigned int *)t41);
    t47 = (t45 ^ t46);
    t48 = (t44 | t47);
    t49 = *((unsigned int *)t38);
    t50 = *((unsigned int *)t41);
    t51 = (t49 | t50);
    t52 = (~(t51));
    t53 = (t48 & t52);
    if (t53 != 0)
        goto LAB24;

LAB21:    if (t51 != 0)
        goto LAB23;

LAB22:    *((unsigned int *)t40) = 1;

LAB24:    memset(t55, 0, 8);
    t56 = (t40 + 4);
    t57 = *((unsigned int *)t56);
    t58 = (~(t57));
    t59 = *((unsigned int *)t40);
    t60 = (t59 & t58);
    t61 = (t60 & 1U);
    if (t61 != 0)
        goto LAB25;

LAB26:    if (*((unsigned int *)t56) != 0)
        goto LAB27;

LAB28:    t64 = *((unsigned int *)t22);
    t65 = *((unsigned int *)t55);
    t66 = (t64 | t65);
    *((unsigned int *)t63) = t66;
    t67 = (t22 + 4);
    t68 = (t55 + 4);
    t69 = (t63 + 4);
    t70 = *((unsigned int *)t67);
    t71 = *((unsigned int *)t68);
    t72 = (t70 | t71);
    *((unsigned int *)t69) = t72;
    t73 = *((unsigned int *)t69);
    t74 = (t73 != 0);
    if (t74 == 1)
        goto LAB29;

LAB30:
LAB31:    goto LAB20;

LAB23:    t54 = (t40 + 4);
    *((unsigned int *)t40) = 1;
    *((unsigned int *)t54) = 1;
    goto LAB24;

LAB25:    *((unsigned int *)t55) = 1;
    goto LAB28;

LAB27:    t62 = (t55 + 4);
    *((unsigned int *)t55) = 1;
    *((unsigned int *)t62) = 1;
    goto LAB28;

LAB29:    t75 = *((unsigned int *)t63);
    t76 = *((unsigned int *)t69);
    *((unsigned int *)t63) = (t75 | t76);
    t77 = (t22 + 4);
    t78 = (t55 + 4);
    t79 = *((unsigned int *)t77);
    t80 = (~(t79));
    t81 = *((unsigned int *)t22);
    t82 = (t81 & t80);
    t83 = *((unsigned int *)t78);
    t84 = (~(t83));
    t85 = *((unsigned int *)t55);
    t86 = (t85 & t84);
    t87 = (~(t82));
    t88 = (~(t86));
    t89 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t89 & t87);
    t90 = *((unsigned int *)t69);
    *((unsigned int *)t69) = (t90 & t88);
    goto LAB31;

LAB32:    xsi_set_current_line(119, ng0);

LAB35:    xsi_set_current_line(120, ng0);
    t97 = ((char*)((ng1)));
    t98 = (t0 + 2768);
    xsi_vlogvar_wait_assign_value(t98, t97, 0, 0, 1, 0LL);
    goto LAB34;

}


extern void work_m_00000000002777282569_2907810454_init()
{
	static char *pe[] = {(void *)Always_54_0,(void *)Always_64_1,(void *)Always_115_2};
	xsi_register_didat("work_m_00000000002777282569_2907810454", "isim/test1_isim_beh.exe.sim/work/m_00000000002777282569_2907810454.didat");
	xsi_register_executes(pe);
}
