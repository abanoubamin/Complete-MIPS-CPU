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
static const char *ng0 = "C:/Users/Khaled Said/Desktop/New folder (3)/CPU/Datamem.V4.vhd";
extern char *IEEE_P_2592010699;
extern char *IEEE_P_3620187407;

unsigned char ieee_p_2592010699_sub_1258338084_503743352(char *, char *, unsigned int , unsigned int );
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);


static void work_a_1215300100_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    int t12;
    int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;

LAB0:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1952U);
    t3 = ieee_p_2592010699_sub_1258338084_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t3 != 0)
        goto LAB35;

LAB37:
LAB36:
LAB3:    t1 = (t0 + 5464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 11364);
    t6 = (32U != 32U);
    if (t6 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 5608);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 32U);
    xsi_driver_first_trans_delta(t7, 0U, 32U, 0LL);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 11396);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB7;

LAB8:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 32U, 32U, 0LL);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 11428);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB9;

LAB10:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 64U, 32U, 0LL);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 11460);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB11;

LAB12:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 96U, 32U, 0LL);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 11492);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB13;

LAB14:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 128U, 32U, 0LL);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 11524);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB15;

LAB16:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 160U, 32U, 0LL);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 11556);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB17;

LAB18:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 192U, 32U, 0LL);
    xsi_set_current_line(40, ng0);
    t1 = (t0 + 11588);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB19;

LAB20:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 224U, 32U, 0LL);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 11620);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB21;

LAB22:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 256U, 32U, 0LL);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 11652);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB23;

LAB24:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 288U, 32U, 0LL);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 11684);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB25;

LAB26:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 320U, 32U, 0LL);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 11716);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB27;

LAB28:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 352U, 32U, 0LL);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 11748);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB29;

LAB30:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 384U, 32U, 0LL);
    xsi_set_current_line(46, ng0);
    t1 = (t0 + 11780);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB31;

LAB32:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 416U, 32U, 0LL);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 11812);
    t3 = (32U != 32U);
    if (t3 == 1)
        goto LAB33;

LAB34:    t5 = (t0 + 5608);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 32U);
    xsi_driver_first_trans_delta(t5, 448U, 32U, 0LL);
    goto LAB3;

LAB5:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB8;

LAB9:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB10;

LAB11:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB12;

LAB13:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB14;

LAB15:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB16;

LAB17:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB18;

LAB19:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB20;

LAB21:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB22;

LAB23:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB24;

LAB25:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB26;

LAB27:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB28;

LAB29:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB32;

LAB33:    xsi_size_not_matching(32U, 32U, 0);
    goto LAB34;

LAB35:    xsi_set_current_line(51, ng0);
    t2 = (t0 + 1672U);
    t5 = *((char **)t2);
    t4 = *((unsigned char *)t5);
    t6 = (t4 == (unsigned char)3);
    if (t6 != 0)
        goto LAB38;

LAB40:
LAB39:    goto LAB36;

LAB38:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1192U);
    t7 = *((char **)t2);
    t2 = (t0 + 2632U);
    t8 = *((char **)t2);
    t12 = *((int *)t8);
    t13 = (t12 - 0);
    t14 = (t13 * 1);
    t15 = (32U * t14);
    t16 = (0U + t15);
    t2 = (t0 + 5608);
    t9 = (t2 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t17 = *((char **)t11);
    memcpy(t17, t7, 32U);
    xsi_driver_first_trans_delta(t2, t16, 32U, 0LL);
    goto LAB39;

}

static void work_a_1215300100_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned int t3;
    unsigned int t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(59, ng0);

LAB3:    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t3 = (31 - 31);
    t4 = (t3 * 1U);
    t5 = (0 + t4);
    t1 = (t2 + t5);
    t6 = (t0 + 5672);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t1, 30U);
    xsi_driver_first_trans_fast(t6);

LAB2:    t11 = (t0 + 5480);
    *((int *)t11) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1215300100_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(60, ng0);

LAB3:    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 9144U);
    t3 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t2, t1);
    t4 = (t0 + 5736);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((int *)t8) = t3;
    xsi_driver_first_trans_fast(t4);

LAB2:    t9 = (t0 + 5496);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1215300100_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    char *t10;
    int t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;

LAB0:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t4 = *((unsigned char *)t3);
    t5 = (t4 == (unsigned char)3);
    if (t5 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 1512U);
    t22 = *((char **)t21);
    t23 = *((unsigned char *)t22);
    t24 = (t23 == (unsigned char)2);
    if (t24 != 0)
        goto LAB8;

LAB9:
LAB2:    t31 = (t0 + 5512);
    *((int *)t31) = 1;

LAB1:    return;
LAB3:    t2 = (t0 + 2152U);
    t9 = *((char **)t2);
    t2 = (t0 + 2632U);
    t10 = *((char **)t2);
    t11 = *((int *)t10);
    t12 = (t11 - 0);
    t13 = (t12 * 1);
    xsi_vhdl_check_range_of_index(0, 63, 1, t11);
    t14 = (32U * t13);
    t15 = (0 + t14);
    t2 = (t9 + t15);
    t16 = (t0 + 5800);
    t17 = (t16 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    memcpy(t20, t2, 32U);
    xsi_driver_first_trans_fast(t16);
    goto LAB2;

LAB5:    t2 = (t0 + 2632U);
    t6 = *((char **)t2);
    t7 = *((int *)t6);
    t8 = (t7 < 64);
    t1 = t8;
    goto LAB7;

LAB8:    t21 = xsi_get_transient_memory(32U);
    memset(t21, 0, 32U);
    t25 = t21;
    memset(t25, (unsigned char)4, 32U);
    t26 = (t0 + 5800);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t21, 32U);
    xsi_driver_first_trans_fast(t26);
    goto LAB2;

}

static void work_a_1215300100_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(64, ng0);

LAB3:    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t1 = (t0 + 5864);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 32U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 5528);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1215300100_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1215300100_3212880686_p_0,(void *)work_a_1215300100_3212880686_p_1,(void *)work_a_1215300100_3212880686_p_2,(void *)work_a_1215300100_3212880686_p_3,(void *)work_a_1215300100_3212880686_p_4};
	xsi_register_didat("work_a_1215300100_3212880686", "isim/RobotTest_isim_beh.exe.sim/work/a_1215300100_3212880686.didat");
	xsi_register_executes(pe);
}
