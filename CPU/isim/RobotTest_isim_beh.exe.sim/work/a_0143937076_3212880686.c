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
static const char *ng0 = "C:/Users/Khaled Said/Desktop/New folder (3)/CPU/GenericReg.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_436279890_3965413181(char *, char *, char *, char *, int );


static void work_a_0143937076_3212880686_p_0(char *t0)
{
    char t16[16];
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned int t17;
    unsigned int t18;
    char *t19;

LAB0:    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1152U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3840);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(43, ng0);
    t4 = (t0 + 1352U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    if (t10 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB12:    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB15;

LAB16:
LAB9:    goto LAB3;

LAB5:    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 1032U);
    t11 = *((char **)t4);
    t4 = (t0 + 3936);
    t12 = (t4 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t11, 32U);
    xsi_driver_first_trans_fast(t4);
    goto LAB9;

LAB11:    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1992U);
    t5 = *((char **)t2);
    t2 = (t0 + 6128U);
    t8 = ieee_p_3620187407_sub_436279890_3965413181(IEEE_P_3620187407, t16, t5, t2, 1);
    t11 = (t16 + 12U);
    t17 = *((unsigned int *)t11);
    t18 = (1U * t17);
    t6 = (32U != t18);
    if (t6 == 1)
        goto LAB13;

LAB14:    t12 = (t0 + 3936);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t19 = *((char **)t15);
    memcpy(t19, t8, 32U);
    xsi_driver_first_trans_fast(t12);
    goto LAB9;

LAB13:    xsi_size_not_matching(32U, t18, 0);
    goto LAB14;

LAB15:    xsi_set_current_line(48, ng0);
    t2 = xsi_get_transient_memory(32U);
    memset(t2, 0, 32U);
    t5 = t2;
    memset(t5, (unsigned char)2, 32U);
    t8 = (t0 + 3936);
    t11 = (t8 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 32U);
    xsi_driver_first_trans_fast(t8);
    goto LAB9;

}

static void work_a_0143937076_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(52, ng0);

LAB3:    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 4000);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3856);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_0143937076_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0143937076_3212880686_p_0,(void *)work_a_0143937076_3212880686_p_1};
	xsi_register_didat("work_a_0143937076_3212880686", "isim/RobotTest_isim_beh.exe.sim/work/a_0143937076_3212880686.didat");
	xsi_register_executes(pe);
}
