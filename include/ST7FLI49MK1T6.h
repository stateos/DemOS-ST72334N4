/* ST7FLI49MK1T6.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLI49MK1T6__
#define __ST7FLI49MK1T6__

/* ST7FLI49MK1T6 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLI49MK1T6 1
		#if (MCU_NAME != ST7FLI49MK1T6)
		#error "wrong include file ST7FLI49MK1T6.h for chosen MCU!"
		#endif
	#endif

	#define STVD7_EXTERN
	#ifdef __HIWARE__
	/* Required to avoid errors at link time, as the Metrowerks compiler   */
	/* prohibits multiple definitions of the same variable.                */
	/* In order to define once the registers, add                          */
	/* "#define __DEFINE_REGISTERS_STVD7_INCLUDE__"                        */
	/* before including this file in one of your application files.        */
		#ifndef __DEFINE_REGISTERS_STVD7_INCLUDE__
		#undef STVD7_EXTERN
		#define STVD7_EXTERN extern
		#endif
	#endif

	#ifdef __CSMC__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) volatile unsigned char NAME @ADDRESS
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) volatile unsigned int NAME @ADDRESS
	#endif

	#ifdef __HIWARE__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) STVD7_EXTERN volatile unsigned char NAME @ADDRESS
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) STVD7_EXTERN volatile unsigned int NAME @ADDRESS
	#endif

	#ifdef __RAISONANCE__
		#define DEF_8BIT_REG_AT(NAME,ADDRESS) at ADDRESS hreg NAME
		#define DEF_16BIT_REG_AT(NAME,ADDRESS) at ADDRESS hreg16 NAME
	#endif

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x00);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x01);

/* Option Register */
DEF_8BIT_REG_AT(PAOR,0x02);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x03);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x04);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x05);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x06);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x07);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x08);

/* Lite Timer */
/*****************************************************************/

/* Lite Timer Control/Status Register 2 */
DEF_8BIT_REG_AT(LTCSR2,0x0c);
#define LTCSR2_TB2F	0		/* Timebase 2 Interrupt Flag */
#define LTCSR2_TB2F_OR	(1 << LTCSR2_TB2F)
#define LTCSR2_TB2IE	1		/* Timebase 2 Interrupt enable */
#define LTCSR2_TB2IE_OR	(1 << LTCSR2_TB2IE)

/* Lite Timer Auto-Reload Register */
DEF_8BIT_REG_AT(LTARR,0x0d);
#define LTARR_AR0	0		/* Counter 2 Reload Value */
#define LTARR_AR0_OR	(1 << LTARR_AR0)
#define LTARR_AR1	1		/* Counter 2 Reload Value */
#define LTARR_AR1_OR	(1 << LTARR_AR1)
#define LTARR_AR2	2		/* Counter 2 Reload Value */
#define LTARR_AR2_OR	(1 << LTARR_AR2)
#define LTARR_AR3	3		/* Counter 2 Reload Value */
#define LTARR_AR3_OR	(1 << LTARR_AR3)
#define LTARR_AR4	4		/* Counter 2 Reload Value */
#define LTARR_AR4_OR	(1 << LTARR_AR4)
#define LTARR_AR5	5		/* Counter 2 Reload Value */
#define LTARR_AR5_OR	(1 << LTARR_AR5)
#define LTARR_AR6	6		/* Counter 2 Reload Value */
#define LTARR_AR6_OR	(1 << LTARR_AR6)
#define LTARR_AR7	7		/* Counter 2 Reload Value */
#define LTARR_AR7_OR	(1 << LTARR_AR7)
#define LTARR_AR_OR	((1 << LTARR_AR0)|(1 << LTARR_AR1)\
		|(1 << LTARR_AR2)|(1 << LTARR_AR3)|(1 << LTARR_AR4)|(1 << LTARR_AR5)\
		|(1 << LTARR_AR6)|(1 << LTARR_AR7))

/* Lite Timer Counter Register */
DEF_8BIT_REG_AT(LTCNTR,0x0e);
#define LTCNTR_CNT0	0		/* Counter 2 Reload Value */
#define LTCNTR_CNT0_OR	(1 << LTCNTR_CNT0)
#define LTCNTR_CNT1	1		/* Counter 2 Reload Value */
#define LTCNTR_CNT1_OR	(1 << LTCNTR_CNT1)
#define LTCNTR_CNT2	2		/* Counter 2 Reload Value */
#define LTCNTR_CNT2_OR	(1 << LTCNTR_CNT2)
#define LTCNTR_CNT3	3		/* Counter 2 Reload Value */
#define LTCNTR_CNT3_OR	(1 << LTCNTR_CNT3)
#define LTCNTR_CNT4	4		/* Counter 2 Reload Value */
#define LTCNTR_CNT4_OR	(1 << LTCNTR_CNT4)
#define LTCNTR_CNT5	5		/* Counter 2 Reload Value */
#define LTCNTR_CNT5_OR	(1 << LTCNTR_CNT5)
#define LTCNTR_CNT6	6		/* Counter 2 Reload Value */
#define LTCNTR_CNT6_OR	(1 << LTCNTR_CNT6)
#define LTCNTR_CNT7	7		/* Counter 2 Reload Value */
#define LTCNTR_CNT7_OR	(1 << LTCNTR_CNT7)
#define LTCNTR_CNT_OR	((1 << LTCNTR_CNT0)|(1 << LTCNTR_CNT1)\
		|(1 << LTCNTR_CNT2)|(1 << LTCNTR_CNT3)|(1 << LTCNTR_CNT4)\
		|(1 << LTCNTR_CNT5)|(1 << LTCNTR_CNT6)|(1 << LTCNTR_CNT7))

/* Lite Timer Control/Status Register 1 */
DEF_8BIT_REG_AT(LTCSR1,0x0f);
#define LTCSR1_TB1F	3		/* Timebase Interrupt Flag. */
#define LTCSR1_TB1F_OR	(1 << LTCSR1_TB1F)
#define LTCSR1_TB1IE	4		/* Timebase Interrupt enable. */
#define LTCSR1_TB1IE_OR	(1 << LTCSR1_TB1IE)
#define LTCSR1_TB	5		/* Timebase period selection. */
#define LTCSR1_TB_OR	(1 << LTCSR1_TB)
#define LTCSR1_ICF	6		/* Input Capture Flag. */
#define LTCSR1_ICF_OR	(1 << LTCSR1_ICF)
#define LTCSR1_ICIE	7		/* Input Capture Interrupt Enable */
#define LTCSR1_ICIE_OR	(1 << LTCSR1_ICIE)

/* Lite Timer Input Capture Register */
DEF_8BIT_REG_AT(LTICR,0x10);
#define LTICR_ICR0	0		/* Input Capture Value */
#define LTICR_ICR0_OR	(1 << LTICR_ICR0)
#define LTICR_ICR1	1		/* Input Capture Value */
#define LTICR_ICR1_OR	(1 << LTICR_ICR1)
#define LTICR_ICR2	2		/* Input Capture Value */
#define LTICR_ICR2_OR	(1 << LTICR_ICR2)
#define LTICR_ICR3	3		/* Input Capture Value */
#define LTICR_ICR3_OR	(1 << LTICR_ICR3)
#define LTICR_ICR4	4		/* Input Capture Value */
#define LTICR_ICR4_OR	(1 << LTICR_ICR4)
#define LTICR_ICR5	5		/* Input Capture Value */
#define LTICR_ICR5_OR	(1 << LTICR_ICR5)
#define LTICR_ICR6	6		/* Input Capture Value */
#define LTICR_ICR6_OR	(1 << LTICR_ICR6)
#define LTICR_ICR7	7		/* Input Capture Value */
#define LTICR_ICR7_OR	(1 << LTICR_ICR7)
#define LTICR_ICR_OR	((1 << LTICR_ICR0)|(1 << LTICR_ICR1)\
		|(1 << LTICR_ICR2)|(1 << LTICR_ICR3)|(1 << LTICR_ICR4)\
		|(1 << LTICR_ICR5)|(1 << LTICR_ICR6)|(1 << LTICR_ICR7))

/* Auto Reload Timer */
/*****************************************************************/

/* Timer Control/Status Register1 */
DEF_8BIT_REG_AT(ATCSR,0x11);
#define ATCSR_CMPIE	0		/* Compare Interrupt Enable */
#define ATCSR_CMPIE_OR	(1 << ATCSR_CMPIE)
#define ATCSR_OVFIE1	1		/* Overflow Interrupt Enable */
#define ATCSR_OVFIE1_OR	(1 << ATCSR_OVFIE1)
#define ATCSR_OVF1	2		/* Overflow Flag */
#define ATCSR_OVF1_OR	(1 << ATCSR_OVF1)
#define ATCSR_CK0	3		/* Counter Clock Selection */
#define ATCSR_CK0_OR	(1 << ATCSR_CK0)
#define ATCSR_CK1	4		/* Counter Clock Selection */
#define ATCSR_CK1_OR	(1 << ATCSR_CK1)
#define ATCSR_CK_OR	((1 << ATCSR_CK0)|(1 << ATCSR_CK1))
#define ATCSR_ICIE	5		/* Input Capture Interrupt Enable */
#define ATCSR_ICIE_OR	(1 << ATCSR_ICIE)
#define ATCSR_ICF	6		/* Input Capture Flag. */
#define ATCSR_ICF_OR	(1 << ATCSR_ICF)

/* Counter Register 1 */
DEF_16BIT_REG_AT(CNTR1,0x12);
/* Counter Value High */
DEF_8BIT_REG_AT(CNTR1H,0x12);
/* Counter Value Low */
DEF_8BIT_REG_AT(CNTR1L,0x13);

/* Auto-Reload Register 1 */
DEF_16BIT_REG_AT(ATR1,0x14);
/* Autoreload Register High */
DEF_8BIT_REG_AT(ATR1H,0x14);
/* Autoreload Register Low */
DEF_8BIT_REG_AT(ATR1L,0x15);

/* PWM Output Control Register */
DEF_8BIT_REG_AT(PWMCR,0x16);
#define PWMCR_OE0	0		/* PWM Mode Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	2		/* PWM Mode Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)
#define PWMCR_OE2	4		/* PWM Mode Enable */
#define PWMCR_OE2_OR	(1 << PWMCR_OE2)
#define PWMCR_OE3	6		/* PWM Mode Enable */
#define PWMCR_OE3_OR	(1 << PWMCR_OE3)

/* PWM 0 Control/Status Register */
DEF_8BIT_REG_AT(PWM0CSR,0x17);
#define PWM0CSR_CMPF0	0		/* PWM0 Compare Flag */
#define PWM0CSR_CMPF0_OR	(1 << PWM0CSR_CMPF0)
#define PWM0CSR_OP0	1		/* PWM0 Output Polarity */
#define PWM0CSR_OP0_OR	(1 << PWM0CSR_OP0)

/* PWM 1 Control/Status Register */
DEF_8BIT_REG_AT(PWM1CSR,0x18);
#define PWM1CSR_CMPF1	0		/* PWM1 Compare Flag */
#define PWM1CSR_CMPF1_OR	(1 << PWM1CSR_CMPF1)
#define PWM1CSR_OP1	1		/* PWM1 Output Polarity */
#define PWM1CSR_OP1_OR	(1 << PWM1CSR_OP1)

/* PWM 2 Control/Status Register */
DEF_8BIT_REG_AT(PWM2CSR,0x19);
#define PWM2CSR_CMPF2	0		/* PWM2 Compare Flag */
#define PWM2CSR_CMPF2_OR	(1 << PWM2CSR_CMPF2)
#define PWM2CSR_OP2	1		/* PWM2 Output Polarity */
#define PWM2CSR_OP2_OR	(1 << PWM2CSR_OP2)

/* PWM 3 Control/Status Register */
DEF_8BIT_REG_AT(PWM3CSR,0x1a);
#define PWM3CSR_CMPF3	0		/* PWM3 Compare Flag */
#define PWM3CSR_CMPF3_OR	(1 << PWM3CSR_CMPF3)
#define PWM3CSR_OP3	1		/* PWM3 Output Polarity */
#define PWM3CSR_OP3_OR	(1 << PWM3CSR_OP3)
#define PWM3CSR_OPEDGE	2		/* One Pulse Edge Selection */
#define PWM3CSR_OPEDGE_OR	(1 << PWM3CSR_OPEDGE)
#define PWM3CSR_OP_EN	3		/* One Pulse Mode Enable */
#define PWM3CSR_OP_EN_OR	(1 << PWM3CSR_OP_EN)

/* PWM 0 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR0,0x1b);
/* PWM0 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR0H,0x1b);
/* PWM0 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR0L,0x1c);

/* PWM 1 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR1,0x1d);
/* PWM1 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR1H,0x1d);
/* PWM1 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR1L,0x1e);

/* PWM 2 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR2,0x1f);
/* PWM2 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR2H,0x1f);
/* PWM2 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR2L,0x20);

/* PWM 3 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR3,0x21);
/* PWM3 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR3H,0x21);
/* PWM3 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR3L,0x22);

/* Input Capture Register */
DEF_16BIT_REG_AT(ATICR,0x23);
/* Input Capture Data High */
DEF_8BIT_REG_AT(ATICRH,0x23);
/* Input Capture Data Low */
DEF_8BIT_REG_AT(ATICRL,0x24);

/* Timer Control/Status Register 2 */
DEF_8BIT_REG_AT(ATCSR2,0x25);
#define ATCSR2_TRAN1	0		/* Transfer enable 1 */
#define ATCSR2_TRAN1_OR	(1 << ATCSR2_TRAN1)
#define ATCSR2_TRAN2	1		/* Transfer enable 2 */
#define ATCSR2_TRAN2_OR	(1 << ATCSR2_TRAN2)
#define ATCSR2_ENCNTR2	2		/* Enable counter 2 for PWM2/3 */
#define ATCSR2_ENCNTR2_OR	(1 << ATCSR2_ENCNTR2)
#define ATCSR2_OVF2	3		/* Overflow Flag */
#define ATCSR2_OVF2_OR	(1 << ATCSR2_OVF2)
#define ATCSR2_OVFIE2	4		/* Overflow interrupt 2 enable */
#define ATCSR2_OVFIE2_OR	(1 << ATCSR2_OVFIE2)
#define ATCSR2_ICS	5		/* Input Capture Shorted */
#define ATCSR2_ICS_OR	(1 << ATCSR2_ICS)
#define ATCSR2_FORCE1	6		/* Force Counter 1 Overflow */
#define ATCSR2_FORCE1_OR	(1 << ATCSR2_FORCE1)
#define ATCSR2_FORCE2	7		/* Force Counter 2 Overflow */
#define ATCSR2_FORCE2_OR	(1 << ATCSR2_FORCE2)

/* Break Control Register */
DEF_8BIT_REG_AT(BREAKCR,0x26);
#define BREAKCR_PWM0	0		/* Break Pattern */
#define BREAKCR_PWM0_OR	(1 << BREAKCR_PWM0)
#define BREAKCR_PWM1	1		/* Break Pattern */
#define BREAKCR_PWM1_OR	(1 << BREAKCR_PWM1)
#define BREAKCR_PWM2	2		/* Break Pattern */
#define BREAKCR_PWM2_OR	(1 << BREAKCR_PWM2)
#define BREAKCR_PWM3	3		/* Break Pattern */
#define BREAKCR_PWM3_OR	(1 << BREAKCR_PWM3)
#define BREAKCR_BPEN	4		/* Break Pin Enable */
#define BREAKCR_BPEN_OR	(1 << BREAKCR_BPEN)
#define BREAKCR_BA	5		/* Break Active */
#define BREAKCR_BA_OR	(1 << BREAKCR_BA)
#define BREAKCR_BREDGE	6		/* Break Input Edge Selection */
#define BREAKCR_BREDGE_OR	(1 << BREAKCR_BREDGE)
#define BREAKCR_BRSEL	7		/* Break Input Selection */
#define BREAKCR_BRSEL_OR	(1 << BREAKCR_BRSEL)

/* Auto-Reload Register 2 */
DEF_16BIT_REG_AT(ATR2,0x27);
/* Autoreload Register 2 High */
DEF_8BIT_REG_AT(ATR2H,0x27);
/* Autoreload Register 2 Low */
DEF_8BIT_REG_AT(ATR2L,0x28);

/* Dead Time Generator Register */
DEF_8BIT_REG_AT(DTGR,0x29);
#define DTGR_DT0	0		/* Dead Time Value */
#define DTGR_DT0_OR	(1 << DTGR_DT0)
#define DTGR_DT1	1		/* Dead Time Value */
#define DTGR_DT1_OR	(1 << DTGR_DT1)
#define DTGR_DT2	2		/* Dead Time Value */
#define DTGR_DT2_OR	(1 << DTGR_DT2)
#define DTGR_DT3	3		/* Dead Time Value */
#define DTGR_DT3_OR	(1 << DTGR_DT3)
#define DTGR_DT4	4		/* Dead Time Value */
#define DTGR_DT4_OR	(1 << DTGR_DT4)
#define DTGR_DT5	5		/* Dead Time Value */
#define DTGR_DT5_OR	(1 << DTGR_DT5)
#define DTGR_DT6	6		/* Dead Time Value */
#define DTGR_DT6_OR	(1 << DTGR_DT6)
#define DTGR_DT_OR	((1 << DTGR_DT0)|(1 << DTGR_DT1)\
		|(1 << DTGR_DT2)|(1 << DTGR_DT3)|(1 << DTGR_DT4)|(1 << DTGR_DT5)\
		|(1 << DTGR_DT6))
#define DTGR_DTE	7		/* Dead Time Enable */
#define DTGR_DTE_OR	(1 << DTGR_DTE)

/* Break Enable Register */
DEF_8BIT_REG_AT(BREAKEN,0x2a);
#define BREAKEN_BREN1	0		/* Break Enable for Counter 1 */
#define BREAKEN_BREN1_OR	(1 << BREAKEN_BREN1)
#define BREAKEN_BREN2	1		/* Break Enable for Counter 2 */
#define BREAKEN_BREN2_OR	(1 << BREAKEN_BREN2)

/* External Interrupt Control/Selection Register (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x2d);
#define ISPR0_I0_0	0		/* AWU IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* AWU IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* AVD IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* AVD IT Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External IT 0 Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External IT 0 Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External IT 1 Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External IT 1 Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x2e);
#define ISPR1_I0_4	0		/* External IT 2 Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT 2 Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* AT Timer Output Compare IT Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* AT Timer Output Compare IT Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* AT Timer Input Capture IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* AT Timer Input Capture IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* AT Timer Overflow 1 IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* AT Timer Overflow 1 IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x2f);
#define ISPR2_I0_8	0		/* AT Timer Overflow 2 IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* AT Timer Overflow 2 IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* I2C IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* I2C IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* Lite Timer RTC IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* Lite Timer RTC IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* Lite Timer Input Capture IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* Lite Timer Input Capture IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x30);
#define ISPR3_I0_12	0		/* Lite Timer RTC2 IT Priority Level */
#define ISPR3_I0_12_OR	(1 << ISPR3_I0_12)
#define ISPR3_I1_12	1		/* Lite Timer RTC2 IT Priority Level */
#define ISPR3_I1_12_OR	(1 << ISPR3_I1_12)
#define ISPR3_I_12_OR	((1 << ISPR3_I0_12)|(1 << ISPR3_I1_12))

/* External Interrupt Control Register */
DEF_8BIT_REG_AT(EICR,0x31);
#define EICR_IS00	0		/* EI0 Sensitivity */
#define EICR_IS00_OR	(1 << EICR_IS00)
#define EICR_IS01	1		/* EI0 Sensitivity */
#define EICR_IS01_OR	(1 << EICR_IS01)
#define EICR_IS0_OR	((1 << EICR_IS00)|(1 << EICR_IS01))
#define EICR_IS10	2		/* EI1 Sensitivity */
#define EICR_IS10_OR	(1 << EICR_IS10)
#define EICR_IS11	3		/* EI1 Sensitivity */
#define EICR_IS11_OR	(1 << EICR_IS11)
#define EICR_IS1_OR	((1 << EICR_IS10)|(1 << EICR_IS11))
#define EICR_IS20	4		/* EI2 Sensitivity */
#define EICR_IS20_OR	(1 << EICR_IS20)
#define EICR_IS21	5		/* EI2 Sensitivity */
#define EICR_IS21_OR	(1 << EICR_IS21)
#define EICR_IS2_OR	((1 << EICR_IS20)|(1 << EICR_IS21))

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x33);
#define WDGCR_WDGA	7		/* Activation Bit */
#define WDGCR_WDGA_OR	(1 << WDGCR_WDGA)
#define WDGCR_T0	0		/* 7-bit Timer */
#define WDGCR_T0_OR	(1 << WDGCR_T0)
#define WDGCR_T1	1		/* 7-bit Timer */
#define WDGCR_T1_OR	(1 << WDGCR_T1)
#define WDGCR_T2	2		/* 7-bit Timer */
#define WDGCR_T2_OR	(1 << WDGCR_T2)
#define WDGCR_T3	3		/* 7-bit Timer */
#define WDGCR_T3_OR	(1 << WDGCR_T3)
#define WDGCR_T4	4		/* 7-bit Timer */
#define WDGCR_T4_OR	(1 << WDGCR_T4)
#define WDGCR_T5	5		/* 7-bit Timer */
#define WDGCR_T5_OR	(1 << WDGCR_T5)
#define WDGCR_T6	6		/* 7-bit Timer */
#define WDGCR_T6_OR	(1 << WDGCR_T6)
#define WDGCR_T_OR	((1 << WDGCR_T0)|(1 << WDGCR_T1)\
		|(1 << WDGCR_T2)|(1 << WDGCR_T3)|(1 << WDGCR_T4)|(1 << WDGCR_T5)\
		|(1 << WDGCR_T6))

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x34);

/* EEPROM */
/*****************************************************************/

/* Data EEPROM Control Status Register */
DEF_8BIT_REG_AT(EECSR,0x35);
#define EECSR_E2PGM	0		/* Programming Control and status */
#define EECSR_E2PGM_OR	(1 << EECSR_E2PGM)
#define EECSR_E2LAT	1		/* Latch Access Transfer */
#define EECSR_E2LAT_OR	(1 << EECSR_E2LAT)

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* ADC Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x36);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH2	2		/* Channel Selection */
#define ADCCSR_CH2_OR	(1 << ADCCSR_CH2)
#define ADCCSR_CH3	3		/* Channel Selection */
#define ADCCSR_CH3_OR	(1 << ADCCSR_CH3)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2)|(1 << ADCCSR_CH3))
#define ADCCSR_ADON	5		/* ADC Converter On */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_SPEED	6		/* ADC clock selection */
#define ADCCSR_SPEED_OR	(1 << ADCCSR_SPEED)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* Data Register High */
DEF_8BIT_REG_AT(ADCDRH,0x37);
#define ADCDRH_D2	0		/* ADC Data High */
#define ADCDRH_D2_OR	(1 << ADCDRH_D2)
#define ADCDRH_D3	1		/* ADC Data High */
#define ADCDRH_D3_OR	(1 << ADCDRH_D3)
#define ADCDRH_D4	2		/* ADC Data High */
#define ADCDRH_D4_OR	(1 << ADCDRH_D4)
#define ADCDRH_D5	3		/* ADC Data High */
#define ADCDRH_D5_OR	(1 << ADCDRH_D5)
#define ADCDRH_D6	4		/* ADC Data High */
#define ADCDRH_D6_OR	(1 << ADCDRH_D6)
#define ADCDRH_D7	5		/* ADC Data High */
#define ADCDRH_D7_OR	(1 << ADCDRH_D7)
#define ADCDRH_D8	6		/* ADC Data High */
#define ADCDRH_D8_OR	(1 << ADCDRH_D8)
#define ADCDRH_D9	7		/* ADC Data High */
#define ADCDRH_D9_OR	(1 << ADCDRH_D9)
#define ADCDRH_D_OR	((1 << ADCDRH_D2)|(1 << ADCDRH_D3)\
		|(1 << ADCDRH_D4)|(1 << ADCDRH_D5)|(1 << ADCDRH_D6)|(1 << ADCDRH_D7)\
		|(1 << ADCDRH_D8)|(1 << ADCDRH_D9))

/* Data Register Low */
DEF_8BIT_REG_AT(ADCDRL,0x38);
#define ADCDRL_D0	0		/* ADC Data Low */
#define ADCDRL_D0_OR	(1 << ADCDRL_D0)
#define ADCDRL_D1	1		/* ADC Data Low */
#define ADCDRL_D1_OR	(1 << ADCDRL_D1)
#define ADCDRL_D_OR	((1 << ADCDRL_D0)|(1 << ADCDRL_D1))
#define ADCDRL_SLOW	3		/* ADC Slow Mode */
#define ADCDRL_SLOW_OR	(1 << ADCDRL_SLOW)

/* Main Clock Control/Status Register (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x3a);
#define MCCSR_SMS	0		/* Slow Mode Selection */
#define MCCSR_SMS_OR	(1 << MCCSR_SMS)
#define MCCSR_MCO	1		/* Main Clock Out Enable */
#define MCCSR_MCO_OR	(1 << MCCSR_MCO)

/* RC Control Register (RCCR) */
/*****************************************************************/

/* RC Control Register */
DEF_8BIT_REG_AT(RCCR,0x3b);

/* System Integrity Control/Status Register (SI) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x3c);
#define SICSR_AVDIE	0		/* Voltage Detector Interrupt Enable */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)
#define SICSR_AVDF	1		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_LVDRF	2		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_LOCKED	3		/* PLL Locked Flag */
#define SICSR_LOCKED_OR	(1 << SICSR_LOCKED)
#define SICSR_WDGRF	4		/* Watchdog Reset Flag */
#define SICSR_WDGRF_OR	(1 << SICSR_WDGRF)

/* Auto Wake Up from Halt Mode (AWU) */
/*****************************************************************/

/* Auto Wake Up from HALT Control/Status Register */
DEF_8BIT_REG_AT(AWUCSR,0x48);
#define AWUCSR_AWUEN	0		/* Auto Wake Up from HALT mode enable */
#define AWUCSR_AWUEN_OR	(1 << AWUCSR_AWUEN)
#define AWUCSR_AWUM	1		/* Auto Wake Up Measurement */
#define AWUCSR_AWUM_OR	(1 << AWUCSR_AWUM)
#define AWUCSR_AWUF	2		/* Auto Wake Up Flag */
#define AWUCSR_AWUF_OR	(1 << AWUCSR_AWUF)

/* Auto Wake Up from HALT prescaler Register */
DEF_8BIT_REG_AT(AWUPR,0x49);
#define AWUPR_AWUPR0	0		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR0_OR	(1 << AWUPR_AWUPR0)
#define AWUPR_AWUPR1	1		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR1_OR	(1 << AWUPR_AWUPR1)
#define AWUPR_AWUPR2	2		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR2_OR	(1 << AWUPR_AWUPR2)
#define AWUPR_AWUPR3	3		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR3_OR	(1 << AWUPR_AWUPR3)
#define AWUPR_AWUPR4	4		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR4_OR	(1 << AWUPR_AWUPR4)
#define AWUPR_AWUPR5	5		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR5_OR	(1 << AWUPR_AWUPR5)
#define AWUPR_AWUPR6	6		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR6_OR	(1 << AWUPR_AWUPR6)
#define AWUPR_AWUPR7	7		/* Auto Wake Up prescaler */
#define AWUPR_AWUPR7_OR	(1 << AWUPR_AWUPR7)
#define AWUPR_AWUPR_OR	((1 << AWUPR_AWUPR0)|(1 << AWUPR_AWUPR1)\
		|(1 << AWUPR_AWUPR2)|(1 << AWUPR_AWUPR3)|(1 << AWUPR_AWUPR4)\
		|(1 << AWUPR_AWUPR5)|(1 << AWUPR_AWUPR6)|(1 << AWUPR_AWUPR7))

/* Clock Controller Control/Status (CKCNTCSR) */
/*****************************************************************/

/* Clock Controller Control/Status Register */
DEF_8BIT_REG_AT(CKCNTCSR,0x51);
#define CKCNTCSR_RC_AWU	0		/* RC/AWU Selection */
#define CKCNTCSR_RC_AWU_OR	(1 << CKCNTCSR_RC_AWU)
#define CKCNTCSR_RC_FLAG	2		/* RC Selection */
#define CKCNTCSR_RC_FLAG_OR	(1 << CKCNTCSR_RC_FLAG)
#define CKCNTCSR_AWU_FLAG	3		/* AWU Selection */
#define CKCNTCSR_AWU_FLAG_OR	(1 << CKCNTCSR_AWU_FLAG)

/* I2C Bus Interface (I2C) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(I2CCR,0x64);
#define I2CCR_ITE	0		/* I2C Interrupt */
#define I2CCR_ITE_OR	(1 << I2CCR_ITE)
#define I2CCR_STOP	1		/* Generation of a Stop Condition */
#define I2CCR_STOP_OR	(1 << I2CCR_STOP)
#define I2CCR_ACK	2		/* Acknowledge */
#define I2CCR_ACK_OR	(1 << I2CCR_ACK)
#define I2CCR_START	3		/* Generation of a Start Condition */
#define I2CCR_START_OR	(1 << I2CCR_START)
#define I2CCR_ENGC	4		/* General Call */
#define I2CCR_ENGC_OR	(1 << I2CCR_ENGC)
#define I2CCR_PE	5		/* Peripheral I2C */
#define I2CCR_PE_OR	(1 << I2CCR_PE)

/* Status Register 1 */
DEF_8BIT_REG_AT(I2CSR1,0x65);
#define I2CSR1_SB	0		/* Start Bit */
#define I2CSR1_SB_OR	(1 << I2CSR1_SB)
#define I2CSR1_M_SL	1		/* Master/Slave Mode */
#define I2CSR1_M_SL_OR	(1 << I2CSR1_M_SL)
#define I2CSR1_ADSL	2		/* Address Matched */
#define I2CSR1_ADSL_OR	(1 << I2CSR1_ADSL)
#define I2CSR1_BTF	3		/* Byte Transfer */
#define I2CSR1_BTF_OR	(1 << I2CSR1_BTF)
#define I2CSR1_BUSY	4		/* Bus Busy */
#define I2CSR1_BUSY_OR	(1 << I2CSR1_BUSY)
#define I2CSR1_TRA	5		/* Transmitter/Receiver */
#define I2CSR1_TRA_OR	(1 << I2CSR1_TRA)
#define I2CSR1_ADD10	6		/* 10-Bit Addressing Mode */
#define I2CSR1_ADD10_OR	(1 << I2CSR1_ADD10)
#define I2CSR1_EVF	7		/* Event Flag */
#define I2CSR1_EVF_OR	(1 << I2CSR1_EVF)

/* Status Register 2 */
DEF_8BIT_REG_AT(I2CSR2,0x66);
#define I2CSR2_GCAL	0		/* General Call */
#define I2CSR2_GCAL_OR	(1 << I2CSR2_GCAL)
#define I2CSR2_BERR	1		/* Bus Error */
#define I2CSR2_BERR_OR	(1 << I2CSR2_BERR)
#define I2CSR2_ARLO	2		/* Arbitration Lost */
#define I2CSR2_ARLO_OR	(1 << I2CSR2_ARLO)
#define I2CSR2_STOPF	3		/* Stop Detection */
#define I2CSR2_STOPF_OR	(1 << I2CSR2_STOPF)
#define I2CSR2_AF	4		/* Acknowledge Failure */
#define I2CSR2_AF_OR	(1 << I2CSR2_AF)

/* Clock Control Register */
DEF_8BIT_REG_AT(I2CCCR,0x67);
#define I2CCCR_CC0	0		/* 7-bit Clock Divider */
#define I2CCCR_CC0_OR	(1 << I2CCCR_CC0)
#define I2CCCR_CC1	1		/* 7-bit Clock Divider */
#define I2CCCR_CC1_OR	(1 << I2CCCR_CC1)
#define I2CCCR_CC2	2		/* 7-bit Clock Divider */
#define I2CCCR_CC2_OR	(1 << I2CCCR_CC2)
#define I2CCCR_CC3	3		/* 7-bit Clock Divider */
#define I2CCCR_CC3_OR	(1 << I2CCCR_CC3)
#define I2CCCR_CC4	4		/* 7-bit Clock Divider */
#define I2CCCR_CC4_OR	(1 << I2CCCR_CC4)
#define I2CCCR_CC5	5		/* 7-bit Clock Divider */
#define I2CCCR_CC5_OR	(1 << I2CCCR_CC5)
#define I2CCCR_CC6	6		/* 7-bit Clock Divider */
#define I2CCCR_CC6_OR	(1 << I2CCCR_CC6)
#define I2CCCR_CC_OR	((1 << I2CCCR_CC0)|(1 << I2CCCR_CC1)\
		|(1 << I2CCCR_CC2)|(1 << I2CCCR_CC3)|(1 << I2CCCR_CC4)\
		|(1 << I2CCCR_CC5)|(1 << I2CCCR_CC6))
#define I2CCCR_FM_SM	7		/* Fast Mode Select */
#define I2CCCR_FM_SM_OR	(1 << I2CCCR_FM_SM)

/* Own Address Register 1 */
DEF_8BIT_REG_AT(I2COAR1,0x68);
#define I2COAR1_ADD0	0		/* Direction Bit (7-bit address) or Interface Address (10-bit address) */
#define I2COAR1_ADD0_OR	(1 << I2COAR1_ADD0)
#define I2COAR1_ADD1	1		/* Interface Address */
#define I2COAR1_ADD1_OR	(1 << I2COAR1_ADD1)
#define I2COAR1_ADD2	2		/* Interface Address */
#define I2COAR1_ADD2_OR	(1 << I2COAR1_ADD2)
#define I2COAR1_ADD3	3		/* Interface Address */
#define I2COAR1_ADD3_OR	(1 << I2COAR1_ADD3)
#define I2COAR1_ADD4	4		/* Interface Address */
#define I2COAR1_ADD4_OR	(1 << I2COAR1_ADD4)
#define I2COAR1_ADD5	5		/* Interface Address */
#define I2COAR1_ADD5_OR	(1 << I2COAR1_ADD5)
#define I2COAR1_ADD6	6		/* Interface Address */
#define I2COAR1_ADD6_OR	(1 << I2COAR1_ADD6)
#define I2COAR1_ADD7	7		/* Interface Address */
#define I2COAR1_ADD7_OR	(1 << I2COAR1_ADD7)
#define I2COAR1_ADD_OR	((1 << I2COAR1_ADD1)|(1 << I2COAR1_ADD2)\
		|(1 << I2COAR1_ADD3)|(1 << I2COAR1_ADD4)|(1 << I2COAR1_ADD5)\
		|(1 << I2COAR1_ADD6)|(1 << I2COAR1_ADD7))

/* Own Address Register 2 */
DEF_8BIT_REG_AT(I2COAR2,0x69);
#define I2COAR2_ADD8	1		/* Interface Address (10-bit addressing mode) */
#define I2COAR2_ADD8_OR	(1 << I2COAR2_ADD8)
#define I2COAR2_ADD9	2		/* Interface Address (10-bit addressing mode) */
#define I2COAR2_ADD9_OR	(1 << I2COAR2_ADD9)
#define I2COAR2_ADD_OR	((1 << I2COAR2_ADD8)|(1 << I2COAR2_ADD9))
#define I2COAR2_FR_1_0_	6		/* Frequency Bits */
#define I2COAR2_FR_1_0__OR	(1 << I2COAR2_FR_1_0_)

/* Data Register */
DEF_8BIT_REG_AT(I2CDR,0x6a);

#endif /* __ST7FLI49MK1T6__ */
