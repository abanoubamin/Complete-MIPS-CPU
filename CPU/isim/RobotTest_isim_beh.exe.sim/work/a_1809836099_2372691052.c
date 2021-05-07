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
static const char *ng0 = "C:/Users/Khaled Said/Desktop/New folder (3)/CPU/RobotTest.vhd";



static void work_a_1809836099_2372691052_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;

LAB0:    t1 = (t0 + 3272U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(87, ng0);
    t2 = (t0 + 3904);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(88, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3080);
    xsi_process_wait(t2, t8);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    goto LAB2;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

}

static void work_a_1809836099_2372691052_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    int64 t7;
    int64 t8;
    unsigned char t9;
    unsigned char t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t23;
    unsigned int t24;
    char *t25;
    char *t26;
    char *t27;
    int64 t29;

LAB0:    t1 = (t0 + 3520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(97, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(98, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 * 2);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t8);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 3968);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_fast(t2);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 6656);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6661);
    t11 = 1;
    if (32U == 32U)
        goto LAB16;

LAB17:    t11 = 0;

LAB18:    if (t11 == 1)
        goto LAB13;

LAB14:    t10 = (unsigned char)0;

LAB15:    if (t10 == 1)
        goto LAB10;

LAB11:    t9 = (unsigned char)0;

LAB12:    if (t9 == 0)
        goto LAB8;

LAB9:    xsi_set_current_line(104, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (t7 / 2);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t8);

LAB36:    *((char **)t1) = &&LAB37;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    t27 = (t0 + 6757);
    xsi_report(t27, 6U, (unsigned char)2);
    goto LAB9;

LAB10:    t20 = (t0 + 1672U);
    t21 = *((char **)t20);
    t20 = (t0 + 6725);
    t23 = 1;
    if (32U == 32U)
        goto LAB28;

LAB29:    t23 = 0;

LAB30:    t9 = t23;
    goto LAB12;

LAB13:    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 6693);
    t16 = 1;
    if (32U == 32U)
        goto LAB22;

LAB23:    t16 = 0;

LAB24:    t10 = t16;
    goto LAB15;

LAB16:    t12 = 0;

LAB19:    if (t12 < 32U)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB17;

LAB21:    t12 = (t12 + 1);
    goto LAB19;

LAB22:    t17 = 0;

LAB25:    if (t17 < 32U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t18 = (t14 + t17);
    t19 = (t13 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB23;

LAB27:    t17 = (t17 + 1);
    goto LAB25;

LAB28:    t24 = 0;

LAB31:    if (t24 < 32U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t25 = (t21 + t24);
    t26 = (t20 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB29;

LAB33:    t24 = (t24 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t7);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB35:    goto LAB34;

LAB37:    goto LAB35;

LAB38:    xsi_set_current_line(108, ng0);
    t2 = (t0 + 6763);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6768);
    t9 = 1;
    if (32U == 32U)
        goto LAB44;

LAB45:    t9 = 0;

LAB46:    if (t9 == 0)
        goto LAB42;

LAB43:    xsi_set_current_line(112, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (11 * t7);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t8);

LAB52:    *((char **)t1) = &&LAB53;
    goto LAB1;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

LAB42:    t13 = (t0 + 6800);
    xsi_report(t13, 6U, (unsigned char)2);
    goto LAB43;

LAB44:    t12 = 0;

LAB47:    if (t12 < 32U)
        goto LAB48;
    else
        goto LAB46;

LAB48:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB45;

LAB49:    t12 = (t12 + 1);
    goto LAB47;

LAB50:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 6806);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6811);
    t9 = 1;
    if (32U == 32U)
        goto LAB56;

LAB57:    t9 = 0;

LAB58:    if (t9 == 0)
        goto LAB54;

LAB55:    xsi_set_current_line(117, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (9 * t7);
    t29 = (t8 * 9);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t29);

LAB64:    *((char **)t1) = &&LAB65;
    goto LAB1;

LAB51:    goto LAB50;

LAB53:    goto LAB51;

LAB54:    t13 = (t0 + 6843);
    xsi_report(t13, 6U, (unsigned char)2);
    goto LAB55;

LAB56:    t12 = 0;

LAB59:    if (t12 < 32U)
        goto LAB60;
    else
        goto LAB58;

LAB60:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB57;

LAB61:    t12 = (t12 + 1);
    goto LAB59;

LAB62:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 6849);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 6854);
    t9 = 1;
    if (32U == 32U)
        goto LAB68;

LAB69:    t9 = 0;

LAB70:    if (t9 == 0)
        goto LAB66;

LAB67:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (12 * t7);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t8);

LAB76:    *((char **)t1) = &&LAB77;
    goto LAB1;

LAB63:    goto LAB62;

LAB65:    goto LAB63;

LAB66:    t13 = (t0 + 6886);
    xsi_report(t13, 6U, (unsigned char)2);
    goto LAB67;

LAB68:    t12 = 0;

LAB71:    if (t12 < 32U)
        goto LAB72;
    else
        goto LAB70;

LAB72:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB69;

LAB73:    t12 = (t12 + 1);
    goto LAB71;

LAB74:    xsi_set_current_line(124, ng0);
    t2 = (t0 + 6892);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(125, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6897);
    t9 = 1;
    if (32U == 32U)
        goto LAB80;

LAB81:    t9 = 0;

LAB82:    if (t9 == 0)
        goto LAB78;

LAB79:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (7 * t7);
    t29 = (t8 * 11);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t29);

LAB88:    *((char **)t1) = &&LAB89;
    goto LAB1;

LAB75:    goto LAB74;

LAB77:    goto LAB75;

LAB78:    t13 = (t0 + 6929);
    xsi_report(t13, 6U, (unsigned char)2);
    goto LAB79;

LAB80:    t12 = 0;

LAB83:    if (t12 < 32U)
        goto LAB84;
    else
        goto LAB82;

LAB84:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB81;

LAB85:    t12 = (t12 + 1);
    goto LAB83;

LAB86:    xsi_set_current_line(129, ng0);
    t2 = (t0 + 6935);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 6940);
    t9 = 1;
    if (32U == 32U)
        goto LAB92;

LAB93:    t9 = 0;

LAB94:    if (t9 == 0)
        goto LAB90;

LAB91:    xsi_set_current_line(134, ng0);
    t2 = (t0 + 2288U);
    t3 = *((char **)t2);
    t7 = *((int64 *)t3);
    t8 = (7 * t7);
    t2 = (t0 + 3328);
    xsi_process_wait(t2, t8);

LAB100:    *((char **)t1) = &&LAB101;
    goto LAB1;

LAB87:    goto LAB86;

LAB89:    goto LAB87;

LAB90:    t13 = (t0 + 6972);
    xsi_report(t13, 6U, (unsigned char)2);
    goto LAB91;

LAB92:    t12 = 0;

LAB95:    if (t12 < 32U)
        goto LAB96;
    else
        goto LAB94;

LAB96:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB93;

LAB97:    t12 = (t12 + 1);
    goto LAB95;

LAB98:    xsi_set_current_line(135, ng0);
    t2 = (t0 + 6978);
    xsi_report(t2, 5U, 0);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6983);
    t11 = 1;
    if (32U == 32U)
        goto LAB110;

LAB111:    t11 = 0;

LAB112:    if (t11 == 1)
        goto LAB107;

LAB108:    t10 = (unsigned char)0;

LAB109:    if (t10 == 1)
        goto LAB104;

LAB105:    t9 = (unsigned char)0;

LAB106:    if (t9 == 0)
        goto LAB102;

LAB103:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 7085);
    xsi_report(t2, 13U, 0);
    xsi_set_current_line(140, ng0);

LAB130:    *((char **)t1) = &&LAB131;
    goto LAB1;

LAB99:    goto LAB98;

LAB101:    goto LAB99;

LAB102:    t27 = (t0 + 7079);
    xsi_report(t27, 6U, (unsigned char)2);
    goto LAB103;

LAB104:    t20 = (t0 + 1672U);
    t21 = *((char **)t20);
    t20 = (t0 + 7047);
    t23 = 1;
    if (32U == 32U)
        goto LAB122;

LAB123:    t23 = 0;

LAB124:    t9 = t23;
    goto LAB106;

LAB107:    t13 = (t0 + 1512U);
    t14 = *((char **)t13);
    t13 = (t0 + 7015);
    t16 = 1;
    if (32U == 32U)
        goto LAB116;

LAB117:    t16 = 0;

LAB118:    t10 = t16;
    goto LAB109;

LAB110:    t12 = 0;

LAB113:    if (t12 < 32U)
        goto LAB114;
    else
        goto LAB112;

LAB114:    t5 = (t3 + t12);
    t6 = (t2 + t12);
    if (*((unsigned char *)t5) != *((unsigned char *)t6))
        goto LAB111;

LAB115:    t12 = (t12 + 1);
    goto LAB113;

LAB116:    t17 = 0;

LAB119:    if (t17 < 32U)
        goto LAB120;
    else
        goto LAB118;

LAB120:    t18 = (t14 + t17);
    t19 = (t13 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB117;

LAB121:    t17 = (t17 + 1);
    goto LAB119;

LAB122:    t24 = 0;

LAB125:    if (t24 < 32U)
        goto LAB126;
    else
        goto LAB124;

LAB126:    t25 = (t21 + t24);
    t26 = (t20 + t24);
    if (*((unsigned char *)t25) != *((unsigned char *)t26))
        goto LAB123;

LAB127:    t24 = (t24 + 1);
    goto LAB125;

LAB128:    goto LAB2;

LAB129:    goto LAB128;

LAB131:    goto LAB129;

}


extern void work_a_1809836099_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1809836099_2372691052_p_0,(void *)work_a_1809836099_2372691052_p_1};
	xsi_register_didat("work_a_1809836099_2372691052", "isim/RobotTest_isim_beh.exe.sim/work/a_1809836099_2372691052.didat");
	xsi_register_executes(pe);
}
