/* ST72_F_561J4.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72_F_561J4__
#define __ST72_F_561J4__

/* ST72(F)561J4 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72_F_561J4 1
		#if (MCU_NAME != ST72_F_561J4)
		#error "wrong include file ST72_F_561J4.h for chosen MCU!"
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

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x09);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x0a);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x0b);

/* Port E */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PEDR,0x0c);

/* Data Direction Register */
DEF_8BIT_REG_AT(PEDDR,0x0d);

/* Option Register */
DEF_8BIT_REG_AT(PEOR,0x0e);

/* Port F */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PFDR,0x0f);

/* Data Direction Register */
DEF_8BIT_REG_AT(PFDDR,0x10);

/* Option Register */
DEF_8BIT_REG_AT(PFOR,0x11);

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x21);

/* Control Register */
DEF_8BIT_REG_AT(SPICR,0x22);
#define SPICR_SPR0	0		/* Baud Rate */
#define SPICR_SPR0_OR	(1 << SPICR_SPR0)
#define SPICR_SPR1	1		/* Baud Rate */
#define SPICR_SPR1_OR	(1 << SPICR_SPR1)
#define SPICR_SPR2	5		/* Baud Rate */
#define SPICR_SPR2_OR	(1 << SPICR_SPR2)
#define SPICR_SPR_OR	((1 << SPICR_SPR0)|(1 << SPICR_SPR1)\
		|(1 << SPICR_SPR2))
#define SPICR_CPHA	2		/* Clock Phase */
#define SPICR_CPHA_OR	(1 << SPICR_CPHA)
#define SPICR_CPOL	3		/* Clock Polarity */
#define SPICR_CPOL_OR	(1 << SPICR_CPOL)
#define SPICR_MSTR	4		/* Master Bit */
#define SPICR_MSTR_OR	(1 << SPICR_MSTR)
#define SPICR_SPE	6		/* Serial Peripheral Output */
#define SPICR_SPE_OR	(1 << SPICR_SPE)
#define SPICR_SPIE	7		/* Serial Peripheral Interrupt */
#define SPICR_SPIE_OR	(1 << SPICR_SPIE)

/* Control/Status Register */
DEF_8BIT_REG_AT(SPICSR,0x23);
#define SPICSR_SSI	0		/* SS Internal Mode */
#define SPICSR_SSI_OR	(1 << SPICSR_SSI)
#define SPICSR_SSM	1		/* SS Management */
#define SPICSR_SSM_OR	(1 << SPICSR_SSM)
#define SPICSR_SOD	2		/* SPI Output Disable */
#define SPICSR_SOD_OR	(1 << SPICSR_SOD)
#define SPICSR_MODF	4		/* Mode Fault Flag */
#define SPICSR_MODF_OR	(1 << SPICSR_MODF)
#define SPICSR_OVR	5		/* SPI Overrun error */
#define SPICSR_OVR_OR	(1 << SPICSR_OVR)
#define SPICSR_WCOL	6		/* Write Collision Status */
#define SPICSR_WCOL_OR	(1 << SPICSR_WCOL)
#define SPICSR_SPIF	7		/* Data Transfer Flag */
#define SPICSR_SPIF_OR	(1 << SPICSR_SPIF)

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x24);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x25);
#define ISPR0_I0_0	0		/* TLI IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* TLI IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* CLKM IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* CLKM IT Priority Level */
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
DEF_8BIT_REG_AT(ISPR1,0x26);
#define ISPR1_I0_4	0		/* External IT 2 Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT 2 Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* External IT 3 Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* External IT 3 Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* CAN RX IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* CAN RX IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* CAN TX ER SC IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* CAN TX ER SC IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x27);
#define ISPR2_I0_8	0		/* SPI IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* SPI IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* Timer 8 IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* Timer 8 IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* Timer 16 IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* Timer 16 IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* LINSCI2 IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* LINSCI2 IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x28);
#define ISPR3_I0_12	0		/* LINSCI1 IT Priority Level */
#define ISPR3_I0_12_OR	(1 << ISPR3_I0_12)
#define ISPR3_I1_12	1		/* LINSCI1 IT Priority Level */
#define ISPR3_I1_12_OR	(1 << ISPR3_I1_12)
#define ISPR3_I_12_OR	((1 << ISPR3_I0_12)|(1 << ISPR3_I1_12))
#define ISPR3_I0_13	2		/* PWM ART IT Priority Level */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* PWM ART IT Priority Level */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* External Interrupt Control Register 0 */
DEF_8BIT_REG_AT(EICR0,0x29);
#define EICR0_IS00	0		/* EI0 Sensitivity */
#define EICR0_IS00_OR	(1 << EICR0_IS00)
#define EICR0_IS01	1		/* EI0 Sensitivity */
#define EICR0_IS01_OR	(1 << EICR0_IS01)
#define EICR0_IS0_OR	((1 << EICR0_IS00)|(1 << EICR0_IS01))
#define EICR0_IS10	2		/* EI1 Sensitivity */
#define EICR0_IS10_OR	(1 << EICR0_IS10)
#define EICR0_IS11	3		/* EI1 Sensitivity */
#define EICR0_IS11_OR	(1 << EICR0_IS11)
#define EICR0_IS1_OR	((1 << EICR0_IS10)|(1 << EICR0_IS11))
#define EICR0_IS20	4		/* EI2 Sensitivity */
#define EICR0_IS20_OR	(1 << EICR0_IS20)
#define EICR0_IS21	5		/* EI2 Sensitivity */
#define EICR0_IS21_OR	(1 << EICR0_IS21)
#define EICR0_IS2_OR	((1 << EICR0_IS20)|(1 << EICR0_IS21))
#define EICR0_IS30	6		/* EI3 Sensitivity */
#define EICR0_IS30_OR	(1 << EICR0_IS30)
#define EICR0_IS31	7		/* EI3 Sensitivity */
#define EICR0_IS31_OR	(1 << EICR0_IS31)
#define EICR0_IS3_OR	((1 << EICR0_IS30)|(1 << EICR0_IS31))

/* External Interrupt Control Register 1 */
DEF_8BIT_REG_AT(EICR1,0x2a);
#define EICR1_TLIE	0		/* TLI Enable */
#define EICR1_TLIE_OR	(1 << EICR1_TLIE)
#define EICR1_TLIS	1		/* TLI Sensitivity */
#define EICR1_TLIS_OR	(1 << EICR1_TLIS)

/* Auto Wake-Up */
/*****************************************************************/

/* Control/Status Register */
DEF_8BIT_REG_AT(AWUCSR,0x2b);
#define AWUCSR_AWUEN	0		/* Auto Wake Up From Halt Enabled */
#define AWUCSR_AWUEN_OR	(1 << AWUCSR_AWUEN)
#define AWUCSR_AWUM	1		/* Auto Wake Up Measurement */
#define AWUCSR_AWUM_OR	(1 << AWUCSR_AWUM)
#define AWUCSR_AWUF	2		/* Auto Wake Up Flag */
#define AWUCSR_AWUF_OR	(1 << AWUCSR_AWUF)

/* Prescaler Register */
DEF_8BIT_REG_AT(AWUPR,0x2c);
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

/* Main Clock Controller (MCC) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x2d);
#define SICSR_WDGRF	0		/* Watchdog Reset Flag */
#define SICSR_WDGRF_OR	(1 << SICSR_WDGRF)
#define SICSR_LVDRF	4		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_AVDF	5		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_AVDIE	6		/* Voltage Detector Interrupt */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x2e);
#define MCCSR_OIF	0		/* Oscillator Interrupt Flag */
#define MCCSR_OIF_OR	(1 << MCCSR_OIF)
#define MCCSR_OIE	1		/* Oscillator Interrupt */
#define MCCSR_OIE_OR	(1 << MCCSR_OIE)
#define MCCSR_TB0	2		/* Time Base Control */
#define MCCSR_TB0_OR	(1 << MCCSR_TB0)
#define MCCSR_TB1	3		/* Time Base Control */
#define MCCSR_TB1_OR	(1 << MCCSR_TB1)
#define MCCSR_TB_OR	((1 << MCCSR_TB0)|(1 << MCCSR_TB1))
#define MCCSR_SMS	4		/* Slow Mode Select */
#define MCCSR_SMS_OR	(1 << MCCSR_SMS)
#define MCCSR_CP0	5		/* CPU Clock Prescaler */
#define MCCSR_CP0_OR	(1 << MCCSR_CP0)
#define MCCSR_CP1	6		/* CPU Clock Prescaler */
#define MCCSR_CP1_OR	(1 << MCCSR_CP1)
#define MCCSR_CP_OR	((1 << MCCSR_CP0)|(1 << MCCSR_CP1))
#define MCCSR_MCO	7		/* Main Clock Out */
#define MCCSR_MCO_OR	(1 << MCCSR_MCO)

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x2f);
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

/* Window Register */
DEF_8BIT_REG_AT(WDGWR,0x30);
#define WDGWR_W0	0		/* 7-bit window value */
#define WDGWR_W0_OR	(1 << WDGWR_W0)
#define WDGWR_W1	1		/* 7-bit window value */
#define WDGWR_W1_OR	(1 << WDGWR_W1)
#define WDGWR_W2	2		/* 7-bit window value */
#define WDGWR_W2_OR	(1 << WDGWR_W2)
#define WDGWR_W3	3		/* 7-bit window value */
#define WDGWR_W3_OR	(1 << WDGWR_W3)
#define WDGWR_W4	4		/* 7-bit window value */
#define WDGWR_W4_OR	(1 << WDGWR_W4)
#define WDGWR_W5	5		/* 7-bit window value */
#define WDGWR_W5_OR	(1 << WDGWR_W5)
#define WDGWR_W6	6		/* 7-bit window value */
#define WDGWR_W6_OR	(1 << WDGWR_W6)
#define WDGWR_W_OR	((1 << WDGWR_W0)|(1 << WDGWR_W1)\
		|(1 << WDGWR_W2)|(1 << WDGWR_W3)|(1 << WDGWR_W4)|(1 << WDGWR_W5)\
		|(1 << WDGWR_W6))

/* Pwm Auto-Reload Timer (ART) */
/*****************************************************************/

/* Duty Cycle Register 3 */
DEF_8BIT_REG_AT(PWMDCR3,0x31);

/* Duty Cycle Register 2 */
DEF_8BIT_REG_AT(PWMDCR2,0x32);

/* Duty Cycle Register 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x33);

/* Duty Cycle Register 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x34);

/* PWM Control Register */
DEF_8BIT_REG_AT(PWMCR,0x35);
#define PWMCR_OP0	0		/* PWM Output Polarity */
#define PWMCR_OP0_OR	(1 << PWMCR_OP0)
#define PWMCR_OP1	1		/* PWM Output Polarity */
#define PWMCR_OP1_OR	(1 << PWMCR_OP1)
#define PWMCR_OP2	2		/* PWM Output Polarity */
#define PWMCR_OP2_OR	(1 << PWMCR_OP2)
#define PWMCR_OP3	3		/* PWM Output Polarity */
#define PWMCR_OP3_OR	(1 << PWMCR_OP3)
#define PWMCR_OP_OR	((1 << PWMCR_OP0)|(1 << PWMCR_OP1)\
		|(1 << PWMCR_OP2)|(1 << PWMCR_OP3))
#define PWMCR_OE0	4		/* PWM Output Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	5		/* PWM Output Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)
#define PWMCR_OE2	6		/* PWM Output Enable */
#define PWMCR_OE2_OR	(1 << PWMCR_OE2)
#define PWMCR_OE3	7		/* PWM Output Enable */
#define PWMCR_OE3_OR	(1 << PWMCR_OE3)
#define PWMCR_OE_OR	((1 << PWMCR_OE0)|(1 << PWMCR_OE1)\
		|(1 << PWMCR_OE2)|(1 << PWMCR_OE3))

/* ART Control/Status Register */
DEF_8BIT_REG_AT(ARTCSR,0x36);
#define ARTCSR_OVF	0		/* Overflow Flag */
#define ARTCSR_OVF_OR	(1 << ARTCSR_OVF)
#define ARTCSR_OIE	1		/* Overflow Interrupt Enable */
#define ARTCSR_OIE_OR	(1 << ARTCSR_OIE)
#define ARTCSR_FCRL	2		/* Force Counter Re-Load */
#define ARTCSR_FCRL_OR	(1 << ARTCSR_FCRL)
#define ARTCSR_TCE	3		/* Timer Counter Enable */
#define ARTCSR_TCE_OR	(1 << ARTCSR_TCE)
#define ARTCSR_CC0	4		/* Counter Clock Control */
#define ARTCSR_CC0_OR	(1 << ARTCSR_CC0)
#define ARTCSR_CC1	5		/* Counter Clock Control */
#define ARTCSR_CC1_OR	(1 << ARTCSR_CC1)
#define ARTCSR_CC2	6		/* Counter Clock Control */
#define ARTCSR_CC2_OR	(1 << ARTCSR_CC2)
#define ARTCSR_CC_OR	((1 << ARTCSR_CC0)|(1 << ARTCSR_CC1)\
		|(1 << ARTCSR_CC2))
#define ARTCSR_EXCL	7		/* External Clock */
#define ARTCSR_EXCL_OR	(1 << ARTCSR_EXCL)

/* ART Counter Access Register */
DEF_8BIT_REG_AT(ARTCAR,0x37);

/* ART Auto-Reload Register */
DEF_8BIT_REG_AT(ARTARR,0x38);

/* ART Input Capture Control/Status Register */
DEF_8BIT_REG_AT(ARTICCSR,0x39);
#define ARTICCSR_CF0	0		/* Capture Flag */
#define ARTICCSR_CF0_OR	(1 << ARTICCSR_CF0)
#define ARTICCSR_CF1	1		/* Capture Flag */
#define ARTICCSR_CF1_OR	(1 << ARTICCSR_CF1)
#define ARTICCSR_CF_OR	((1 << ARTICCSR_CF0)|(1 << ARTICCSR_CF1))
#define ARTICCSR_CIE0	2		/* Capture Interrupt Enable */
#define ARTICCSR_CIE0_OR	(1 << ARTICCSR_CIE0)
#define ARTICCSR_CIE1	3		/* Capture Interrupt Enable */
#define ARTICCSR_CIE1_OR	(1 << ARTICCSR_CIE1)
#define ARTICCSR_CIE_OR	((1 << ARTICCSR_CIE0)|(1 << ARTICCSR_CIE1))
#define ARTICCSR_CS0	4		/* Capture Sensitivity */
#define ARTICCSR_CS0_OR	(1 << ARTICCSR_CS0)
#define ARTICCSR_CS1	5		/* Capture Sensitivity */
#define ARTICCSR_CS1_OR	(1 << ARTICCSR_CS1)
#define ARTICCSR_CS_OR	((1 << ARTICCSR_CS0)|(1 << ARTICCSR_CS1))

/* ART Input Capture Register 1 */
DEF_8BIT_REG_AT(ARTICR1,0x3a);

/* ART Input Capture Register 2 */
DEF_8BIT_REG_AT(ARTICR2,0x3b);

/* 8-Bit Timer (TIM8) */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(T8CR2,0x3c);
#define T8CR2_IEDG2	1		/* Input Edge 2 */
#define T8CR2_IEDG2_OR	(1 << T8CR2_IEDG2)
#define T8CR2_CC0	2		/* Clock Control */
#define T8CR2_CC0_OR	(1 << T8CR2_CC0)
#define T8CR2_CC1	3		/* Clock Control */
#define T8CR2_CC1_OR	(1 << T8CR2_CC1)
#define T8CR2_CC_OR	((1 << T8CR2_CC0)|(1 << T8CR2_CC1))
#define T8CR2_PWM	4		/* Pulse Width Modulation */
#define T8CR2_PWM_OR	(1 << T8CR2_PWM)
#define T8CR2_OPM	5		/* One Pulse Mode */
#define T8CR2_OPM_OR	(1 << T8CR2_OPM)
#define T8CR2_OC2E	6		/* Output Compare 2 Output Pin */
#define T8CR2_OC2E_OR	(1 << T8CR2_OC2E)
#define T8CR2_OC1E	7		/* Output Compare 1 Output Pin */
#define T8CR2_OC1E_OR	(1 << T8CR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(T8CR1,0x3d);
#define T8CR1_OLVL1	0		/* Output Level 1 */
#define T8CR1_OLVL1_OR	(1 << T8CR1_OLVL1)
#define T8CR1_IEDG1	1		/* Input Edge 1 */
#define T8CR1_IEDG1_OR	(1 << T8CR1_IEDG1)
#define T8CR1_OLVL2	2		/* Output Level 2 */
#define T8CR1_OLVL2_OR	(1 << T8CR1_OLVL2)
#define T8CR1_FOLV1	3		/* Forced Output Compare 1 */
#define T8CR1_FOLV1_OR	(1 << T8CR1_FOLV1)
#define T8CR1_FOLV2	4		/* Forced Output Compare 2 */
#define T8CR1_FOLV2_OR	(1 << T8CR1_FOLV2)
#define T8CR1_TOIE	5		/* Timer Overflow Interrupt */
#define T8CR1_TOIE_OR	(1 << T8CR1_TOIE)
#define T8CR1_OCIE	6		/* Output Compare Interrupt */
#define T8CR1_OCIE_OR	(1 << T8CR1_OCIE)
#define T8CR1_ICIE	7		/* Input Capture Interrupt */
#define T8CR1_ICIE_OR	(1 << T8CR1_ICIE)

/* Control/Status Register */
DEF_8BIT_REG_AT(T8CSR,0x3e);
#define T8CSR_TIMD	2		/* Timer Disable */
#define T8CSR_TIMD_OR	(1 << T8CSR_TIMD)
#define T8CSR_OCF2	3		/* Output Compare Flag 2 */
#define T8CSR_OCF2_OR	(1 << T8CSR_OCF2)
#define T8CSR_ICF2	4		/* Input Capture Flag 2 */
#define T8CSR_ICF2_OR	(1 << T8CSR_ICF2)
#define T8CSR_TOF	5		/* Timer Overflow */
#define T8CSR_TOF_OR	(1 << T8CSR_TOF)
#define T8CSR_OCF1	6		/* Output Compare Flag 1 */
#define T8CSR_OCF1_OR	(1 << T8CSR_OCF1)
#define T8CSR_ICF1	7		/* Input Capture Flag 1 */
#define T8CSR_ICF1_OR	(1 << T8CSR_ICF1)

/* Input Capture 1 Register */
DEF_8BIT_REG_AT(T8IC1R,0x3f);
#define T8IC1R_IC1R0	0		/* Input Capture 1 Register */
#define T8IC1R_IC1R0_OR	(1 << T8IC1R_IC1R0)
#define T8IC1R_IC1R1	1		/* Input Capture 1 Register */
#define T8IC1R_IC1R1_OR	(1 << T8IC1R_IC1R1)
#define T8IC1R_IC1R2	2		/* Input Capture 1 Register */
#define T8IC1R_IC1R2_OR	(1 << T8IC1R_IC1R2)
#define T8IC1R_IC1R3	3		/* Input Capture 1 Register */
#define T8IC1R_IC1R3_OR	(1 << T8IC1R_IC1R3)
#define T8IC1R_IC1R4	4		/* Input Capture 1 Register */
#define T8IC1R_IC1R4_OR	(1 << T8IC1R_IC1R4)
#define T8IC1R_IC1R5	5		/* Input Capture 1 Register */
#define T8IC1R_IC1R5_OR	(1 << T8IC1R_IC1R5)
#define T8IC1R_IC1R6	6		/* Input Capture 1 Register */
#define T8IC1R_IC1R6_OR	(1 << T8IC1R_IC1R6)
#define T8IC1R_IC1R7	7		/* Input Capture 1 Register */
#define T8IC1R_IC1R7_OR	(1 << T8IC1R_IC1R7)
#define T8IC1R_IC1R_OR	((1 << T8IC1R_IC1R0)|(1 << T8IC1R_IC1R1)\
		|(1 << T8IC1R_IC1R2)|(1 << T8IC1R_IC1R3)|(1 << T8IC1R_IC1R4)\
		|(1 << T8IC1R_IC1R5)|(1 << T8IC1R_IC1R6)|(1 << T8IC1R_IC1R7))

/* Output Compare 1 Register */
DEF_8BIT_REG_AT(T8OC1R,0x40);
#define T8OC1R_OC1R0	0		/* Output Compare 1 Register */
#define T8OC1R_OC1R0_OR	(1 << T8OC1R_OC1R0)
#define T8OC1R_OC1R1	1		/* Output Compare 1 Register */
#define T8OC1R_OC1R1_OR	(1 << T8OC1R_OC1R1)
#define T8OC1R_OC1R2	2		/* Output Compare 1 Register */
#define T8OC1R_OC1R2_OR	(1 << T8OC1R_OC1R2)
#define T8OC1R_OC1R3	3		/* Output Compare 1 Register */
#define T8OC1R_OC1R3_OR	(1 << T8OC1R_OC1R3)
#define T8OC1R_OC1R4	4		/* Output Compare 1 Register */
#define T8OC1R_OC1R4_OR	(1 << T8OC1R_OC1R4)
#define T8OC1R_OC1R5	5		/* Output Compare 1 Register */
#define T8OC1R_OC1R5_OR	(1 << T8OC1R_OC1R5)
#define T8OC1R_OC1R6	6		/* Output Compare 1 Register */
#define T8OC1R_OC1R6_OR	(1 << T8OC1R_OC1R6)
#define T8OC1R_OC1R7	7		/* Output Compare 1 Register */
#define T8OC1R_OC1R7_OR	(1 << T8OC1R_OC1R7)
#define T8OC1R_OC1R_OR	((1 << T8OC1R_OC1R0)|(1 << T8OC1R_OC1R1)\
		|(1 << T8OC1R_OC1R2)|(1 << T8OC1R_OC1R3)|(1 << T8OC1R_OC1R4)\
		|(1 << T8OC1R_OC1R5)|(1 << T8OC1R_OC1R6)|(1 << T8OC1R_OC1R7))

/* Counter Register */
DEF_8BIT_REG_AT(T8CTR,0x41);
#define T8CTR_CTR0	0		/* Counter Register */
#define T8CTR_CTR0_OR	(1 << T8CTR_CTR0)
#define T8CTR_CTR1	1		/* Counter Register */
#define T8CTR_CTR1_OR	(1 << T8CTR_CTR1)
#define T8CTR_CTR2	2		/* Counter Register */
#define T8CTR_CTR2_OR	(1 << T8CTR_CTR2)
#define T8CTR_CTR3	3		/* Counter Register */
#define T8CTR_CTR3_OR	(1 << T8CTR_CTR3)
#define T8CTR_CTR4	4		/* Counter Register */
#define T8CTR_CTR4_OR	(1 << T8CTR_CTR4)
#define T8CTR_CTR5	5		/* Counter Register */
#define T8CTR_CTR5_OR	(1 << T8CTR_CTR5)
#define T8CTR_CTR6	6		/* Counter Register */
#define T8CTR_CTR6_OR	(1 << T8CTR_CTR6)
#define T8CTR_CTR7	7		/* Counter Register */
#define T8CTR_CTR7_OR	(1 << T8CTR_CTR7)
#define T8CTR_CTR_OR	((1 << T8CTR_CTR0)|(1 << T8CTR_CTR1)\
		|(1 << T8CTR_CTR2)|(1 << T8CTR_CTR3)|(1 << T8CTR_CTR4)\
		|(1 << T8CTR_CTR5)|(1 << T8CTR_CTR6)|(1 << T8CTR_CTR7))

/* Alternate Counter Register */
DEF_8BIT_REG_AT(T8ACTR,0x42);
#define T8ACTR_ACTR0	0		/* Alternate Counter Low Register */
#define T8ACTR_ACTR0_OR	(1 << T8ACTR_ACTR0)
#define T8ACTR_ACTR1	1		/* Alternate Counter Low Register */
#define T8ACTR_ACTR1_OR	(1 << T8ACTR_ACTR1)
#define T8ACTR_ACTR2	2		/* Alternate Counter Low Register */
#define T8ACTR_ACTR2_OR	(1 << T8ACTR_ACTR2)
#define T8ACTR_ACTR3	3		/* Alternate Counter Low Register */
#define T8ACTR_ACTR3_OR	(1 << T8ACTR_ACTR3)
#define T8ACTR_ACTR4	4		/* Alternate Counter Low Register */
#define T8ACTR_ACTR4_OR	(1 << T8ACTR_ACTR4)
#define T8ACTR_ACTR5	5		/* Alternate Counter Low Register */
#define T8ACTR_ACTR5_OR	(1 << T8ACTR_ACTR5)
#define T8ACTR_ACTR6	6		/* Alternate Counter Low Register */
#define T8ACTR_ACTR6_OR	(1 << T8ACTR_ACTR6)
#define T8ACTR_ACTR7	7		/* Alternate Counter Low Register */
#define T8ACTR_ACTR7_OR	(1 << T8ACTR_ACTR7)
#define T8ACTR_ACTR_OR	((1 << T8ACTR_ACTR0)|(1 << T8ACTR_ACTR1)\
		|(1 << T8ACTR_ACTR2)|(1 << T8ACTR_ACTR3)|(1 << T8ACTR_ACTR4)\
		|(1 << T8ACTR_ACTR5)|(1 << T8ACTR_ACTR6)|(1 << T8ACTR_ACTR7))

/* Input Capture 2 Register */
DEF_8BIT_REG_AT(T8IC2R,0x43);
#define T8IC2R_IC2R0	0		/* Input Capture 2 Register */
#define T8IC2R_IC2R0_OR	(1 << T8IC2R_IC2R0)
#define T8IC2R_IC2R1	1		/* Input Capture 2 Register */
#define T8IC2R_IC2R1_OR	(1 << T8IC2R_IC2R1)
#define T8IC2R_IC2R2	2		/* Input Capture 2 Register */
#define T8IC2R_IC2R2_OR	(1 << T8IC2R_IC2R2)
#define T8IC2R_IC2R3	3		/* Input Capture 2 Register */
#define T8IC2R_IC2R3_OR	(1 << T8IC2R_IC2R3)
#define T8IC2R_IC2R4	4		/* Input Capture 2 Register */
#define T8IC2R_IC2R4_OR	(1 << T8IC2R_IC2R4)
#define T8IC2R_IC2R5	5		/* Input Capture 2 Register */
#define T8IC2R_IC2R5_OR	(1 << T8IC2R_IC2R5)
#define T8IC2R_IC2R6	6		/* Input Capture 2 Register */
#define T8IC2R_IC2R6_OR	(1 << T8IC2R_IC2R6)
#define T8IC2R_IC2R7	7		/* Input Capture 2 Register */
#define T8IC2R_IC2R7_OR	(1 << T8IC2R_IC2R7)
#define T8IC2R_IC2R_OR	((1 << T8IC2R_IC2R0)|(1 << T8IC2R_IC2R1)\
		|(1 << T8IC2R_IC2R2)|(1 << T8IC2R_IC2R3)|(1 << T8IC2R_IC2R4)\
		|(1 << T8IC2R_IC2R5)|(1 << T8IC2R_IC2R6)|(1 << T8IC2R_IC2R7))

/* Output Compare 2 Register */
DEF_8BIT_REG_AT(T8OC2R,0x44);
#define T8OC2R_OC2R0	0		/* Output Compare 2 Register */
#define T8OC2R_OC2R0_OR	(1 << T8OC2R_OC2R0)
#define T8OC2R_OC2R1	1		/* Output Compare 2 Register */
#define T8OC2R_OC2R1_OR	(1 << T8OC2R_OC2R1)
#define T8OC2R_OC2R2	2		/* Output Compare 2 Register */
#define T8OC2R_OC2R2_OR	(1 << T8OC2R_OC2R2)
#define T8OC2R_OC2R3	3		/* Output Compare 2 Register */
#define T8OC2R_OC2R3_OR	(1 << T8OC2R_OC2R3)
#define T8OC2R_OC2R4	4		/* Output Compare 2 Register */
#define T8OC2R_OC2R4_OR	(1 << T8OC2R_OC2R4)
#define T8OC2R_OC2R5	5		/* Output Compare 2 Register */
#define T8OC2R_OC2R5_OR	(1 << T8OC2R_OC2R5)
#define T8OC2R_OC2R6	6		/* Output Compare 2 Register */
#define T8OC2R_OC2R6_OR	(1 << T8OC2R_OC2R6)
#define T8OC2R_OC2R7	7		/* Output Compare 2 Register */
#define T8OC2R_OC2R7_OR	(1 << T8OC2R_OC2R7)
#define T8OC2R_OC2R_OR	((1 << T8OC2R_OC2R0)|(1 << T8OC2R_OC2R1)\
		|(1 << T8OC2R_OC2R2)|(1 << T8OC2R_OC2R3)|(1 << T8OC2R_OC2R4)\
		|(1 << T8OC2R_OC2R5)|(1 << T8OC2R_OC2R6)|(1 << T8OC2R_OC2R7))

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x45);
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
#define ADCCSR_ClkSel0	4		/* A/D Clock Selection */
#define ADCCSR_ClkSel0_OR	(1 << ADCCSR_ClkSel0)
#define ADCCSR_ClkSel1	6		/* A/D Clock Selection */
#define ADCCSR_ClkSel1_OR	(1 << ADCCSR_ClkSel1)
#define ADCCSR_ClkSel_OR	((1 << ADCCSR_ClkSel0)|(1 << ADCCSR_ClkSel1))
#define ADCCSR_ADON	5		/* A/D Start Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* Data High Register */
DEF_8BIT_REG_AT(ADCDRH,0x46);

/* Data low Register */
DEF_8BIT_REG_AT(ADCDRL,0x47);

/* Serial Communication Interface (LinMasterSlave) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCI1SR,0x48);
#define SCI1SR_PE	0		/* Parity Error */
#define SCI1SR_PE_OR	(1 << SCI1SR_PE)
#define SCI1SR_FE	1		/* Framing Error */
#define SCI1SR_FE_OR	(1 << SCI1SR_FE)
#define SCI1SR_NF	2		/* Noise Flag */
#define SCI1SR_NF_OR	(1 << SCI1SR_NF)
#define SCI1SR_OR	3		/* Overrun Error */
#define SCI1SR_OR_OR	(1 << SCI1SR_OR)
#define SCI1SR_IDLE	4		/* Idle line detect */
#define SCI1SR_IDLE_OR	(1 << SCI1SR_IDLE)
#define SCI1SR_RDRF	5		/* Received Data Ready Flag */
#define SCI1SR_RDRF_OR	(1 << SCI1SR_RDRF)
#define SCI1SR_TC	6		/* Transmission Complete */
#define SCI1SR_TC_OR	(1 << SCI1SR_TC)
#define SCI1SR_TDRE	7		/* Transmission Data Register Empty */
#define SCI1SR_TDRE_OR	(1 << SCI1SR_TDRE)

/* Data Register */
DEF_8BIT_REG_AT(SCI1DR,0x49);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCI1BRR,0x4a);
#define SCI1BRR_SCR0	0		/* Receiver Rate Divisor */
#define SCI1BRR_SCR0_OR	(1 << SCI1BRR_SCR0)
#define SCI1BRR_SCR1	1		/* Receiver Rate Divisor */
#define SCI1BRR_SCR1_OR	(1 << SCI1BRR_SCR1)
#define SCI1BRR_SCR2	2		/* Receiver Rate Divisor */
#define SCI1BRR_SCR2_OR	(1 << SCI1BRR_SCR2)
#define SCI1BRR_SCR_OR	((1 << SCI1BRR_SCR0)|(1 << SCI1BRR_SCR1)\
		|(1 << SCI1BRR_SCR2))
#define SCI1BRR_SCT0	3		/* Transmitter Rate Divisor */
#define SCI1BRR_SCT0_OR	(1 << SCI1BRR_SCT0)
#define SCI1BRR_SCT1	4		/* Transmitter Rate Divisor */
#define SCI1BRR_SCT1_OR	(1 << SCI1BRR_SCT1)
#define SCI1BRR_SCT2	5		/* Transmitter Rate Divisor */
#define SCI1BRR_SCT2_OR	(1 << SCI1BRR_SCT2)
#define SCI1BRR_SCT_OR	((1 << SCI1BRR_SCT0)|(1 << SCI1BRR_SCT1)\
		|(1 << SCI1BRR_SCT2))
#define SCI1BRR_SCP0	6		/* First SCI Prescaler */
#define SCI1BRR_SCP0_OR	(1 << SCI1BRR_SCP0)
#define SCI1BRR_SCP1	7		/* First SCI Prescaler */
#define SCI1BRR_SCP1_OR	(1 << SCI1BRR_SCP1)
#define SCI1BRR_SCP_OR	((1 << SCI1BRR_SCP0)|(1 << SCI1BRR_SCP1))

/* Control Register 1 */
DEF_8BIT_REG_AT(SCI1CR1,0x4b);
#define SCI1CR1_PIE	0		/* Parity Interrupt Enable */
#define SCI1CR1_PIE_OR	(1 << SCI1CR1_PIE)
#define SCI1CR1_PS	1		/* Parity Selection */
#define SCI1CR1_PS_OR	(1 << SCI1CR1_PS)
#define SCI1CR1_PCE	2		/* Parity Control Enable */
#define SCI1CR1_PCE_OR	(1 << SCI1CR1_PCE)
#define SCI1CR1_WAKE	3		/* Wake-up Method */
#define SCI1CR1_WAKE_OR	(1 << SCI1CR1_WAKE)
#define SCI1CR1_M	4		/* Word Length */
#define SCI1CR1_M_OR	(1 << SCI1CR1_M)
#define SCI1CR1_SCID	5		/* Sci prescaler and outputs enable/disable bit */
#define SCI1CR1_SCID_OR	(1 << SCI1CR1_SCID)
#define SCI1CR1_T8	6		/* Transmit Data Bit 8 */
#define SCI1CR1_T8_OR	(1 << SCI1CR1_T8)
#define SCI1CR1_R8	7		/* Receive Data Bit 8 */
#define SCI1CR1_R8_OR	(1 << SCI1CR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCI1CR2,0x4c);
#define SCI1CR2_SBK	0		/* Send Break */
#define SCI1CR2_SBK_OR	(1 << SCI1CR2_SBK)
#define SCI1CR2_RWU	1		/* Receiver Wake-up Mode */
#define SCI1CR2_RWU_OR	(1 << SCI1CR2_RWU)
#define SCI1CR2_RE	2		/* Receiver */
#define SCI1CR2_RE_OR	(1 << SCI1CR2_RE)
#define SCI1CR2_TE	3		/* Transmitter */
#define SCI1CR2_TE_OR	(1 << SCI1CR2_TE)
#define SCI1CR2_ILIE	4		/* Idle Line Interrupt */
#define SCI1CR2_ILIE_OR	(1 << SCI1CR2_ILIE)
#define SCI1CR2_RIE	5		/* Receiver Interrupt */
#define SCI1CR2_RIE_OR	(1 << SCI1CR2_RIE)
#define SCI1CR2_TCIE	6		/* Transmission Complete Interrupt */
#define SCI1CR2_TCIE_OR	(1 << SCI1CR2_TCIE)
#define SCI1CR2_TIE	7		/* Transmitter Interrupt */
#define SCI1CR2_TIE_OR	(1 << SCI1CR2_TIE)

/* Control Register 3 */
DEF_8BIT_REG_AT(SCI1CR3,0x4d);
#define SCI1CR3_LSF	0		/* Synch Field State */
#define SCI1CR3_LSF_OR	(1 << SCI1CR3_LSF)
#define SCI1CR3_LHDF	1		/* Header Detection Flag */
#define SCI1CR3_LHDF_OR	(1 << SCI1CR3_LHDF)
#define SCI1CR3_LHIE	2		/* Header Interrup Enable */
#define SCI1CR3_LHIE_OR	(1 << SCI1CR3_LHIE)
#define SCI1CR3_LHDM	3		/* Header Detection Method */
#define SCI1CR3_LHDM_OR	(1 << SCI1CR3_LHDM)
#define SCI1CR3_LASE	4		/* Auto Synch Enable */
#define SCI1CR3_LASE_OR	(1 << SCI1CR3_LASE)
#define SCI1CR3_Model0	5		/* Mode Enable Bits */
#define SCI1CR3_Model0_OR	(1 << SCI1CR3_Model0)
#define SCI1CR3_Model1	6		/* Mode Enable Bits */
#define SCI1CR3_Model1_OR	(1 << SCI1CR3_Model1)
#define SCI1CR3_Model_OR	((1 << SCI1CR3_Model0)|(1 << SCI1CR3_Model1))
#define SCI1CR3_LDUM	7		/* Diveder Update Mathod */
#define SCI1CR3_LDUM_OR	(1 << SCI1CR3_LDUM)

/* Ext. Receive Prescaler Reg. */
DEF_8BIT_REG_AT(SCI1ERPR,0x4e);

/* Ext. Transmit Prescaler Reg. */
DEF_8BIT_REG_AT(SCI1ETPR,0x4f);

/* 16-Bit Timer (TIM16) */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(T16CR2,0x51);
#define T16CR2_EXEDG	0		/* External Clock Edge */
#define T16CR2_EXEDG_OR	(1 << T16CR2_EXEDG)
#define T16CR2_IEDG2	1		/* Input Edge 2 */
#define T16CR2_IEDG2_OR	(1 << T16CR2_IEDG2)
#define T16CR2_CC0	2		/* Clock Control */
#define T16CR2_CC0_OR	(1 << T16CR2_CC0)
#define T16CR2_CC1	3		/* Clock Control */
#define T16CR2_CC1_OR	(1 << T16CR2_CC1)
#define T16CR2_CC_OR	((1 << T16CR2_CC0)|(1 << T16CR2_CC1))
#define T16CR2_PWM	4		/* Pulse Width Modulation */
#define T16CR2_PWM_OR	(1 << T16CR2_PWM)
#define T16CR2_OPM	5		/* One Pulse Mode */
#define T16CR2_OPM_OR	(1 << T16CR2_OPM)
#define T16CR2_OC2E	6		/* Output Compare 2 Output Pin */
#define T16CR2_OC2E_OR	(1 << T16CR2_OC2E)
#define T16CR2_OC1E	7		/* Output Compare 1 Output Pin */
#define T16CR2_OC1E_OR	(1 << T16CR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(T16CR1,0x52);
#define T16CR1_OLVL1	0		/* Output Level 1 */
#define T16CR1_OLVL1_OR	(1 << T16CR1_OLVL1)
#define T16CR1_IEDG1	1		/* Input Edge 1 */
#define T16CR1_IEDG1_OR	(1 << T16CR1_IEDG1)
#define T16CR1_OLVL2	2		/* Output Level 2 */
#define T16CR1_OLVL2_OR	(1 << T16CR1_OLVL2)
#define T16CR1_FOLV1	3		/* Forced Output Compare 1 */
#define T16CR1_FOLV1_OR	(1 << T16CR1_FOLV1)
#define T16CR1_FOLV2	4		/* Forced Output Compare 2 */
#define T16CR1_FOLV2_OR	(1 << T16CR1_FOLV2)
#define T16CR1_TOIE	5		/* Timer Overflow Interrupt */
#define T16CR1_TOIE_OR	(1 << T16CR1_TOIE)
#define T16CR1_OCIE	6		/* Output Compare Interrupt */
#define T16CR1_OCIE_OR	(1 << T16CR1_OCIE)
#define T16CR1_ICIE	7		/* Input Capture Interrupt */
#define T16CR1_ICIE_OR	(1 << T16CR1_ICIE)

/* Control/Status Register */
DEF_8BIT_REG_AT(T16CSR,0x53);
#define T16CSR_TIMD	2		/* Timer Disable */
#define T16CSR_TIMD_OR	(1 << T16CSR_TIMD)
#define T16CSR_OCF2	3		/* Output Compare Flag 2 */
#define T16CSR_OCF2_OR	(1 << T16CSR_OCF2)
#define T16CSR_ICF2	4		/* Input Capture Flag 2 */
#define T16CSR_ICF2_OR	(1 << T16CSR_ICF2)
#define T16CSR_TOF	5		/* Timer Overflow */
#define T16CSR_TOF_OR	(1 << T16CSR_TOF)
#define T16CSR_OCF1	6		/* Output Compare Flag 1 */
#define T16CSR_OCF1_OR	(1 << T16CSR_OCF1)
#define T16CSR_ICF1	7		/* Input Capture Flag 1 */
#define T16CSR_ICF1_OR	(1 << T16CSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(T16IC1R,0x54);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(T16IC1HR,0x54);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(T16IC1LR,0x55);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(T16OC1R,0x56);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TA16C1HR,0x56);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TA16C1LR,0x57);

/* Counter Register */
DEF_16BIT_REG_AT(T16CR,0x58);
/* Counter High Register */
DEF_8BIT_REG_AT(T16CHR,0x58);
/* Counter Low Register */
DEF_8BIT_REG_AT(T16CLR,0x59);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(T16ACR,0x5a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(T16ACHR,0x5a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(T16ACLR,0x5b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(T16IC2R,0x5c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(T16IC2HR,0x5c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(T16IC2LR,0x5d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(T16OC2R,0x5e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(T16OC2HR,0x5e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(T16OC2LR,0x5f);

/* Serial Communication Interface (LinMaster) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCI2SR,0x60);
#define SCI2SR_PE	0		/* Parity Error */
#define SCI2SR_PE_OR	(1 << SCI2SR_PE)
#define SCI2SR_FE	1		/* Framing Error */
#define SCI2SR_FE_OR	(1 << SCI2SR_FE)
#define SCI2SR_NF	2		/* Noise Flag */
#define SCI2SR_NF_OR	(1 << SCI2SR_NF)
#define SCI2SR_OR	3		/* Overrun Error */
#define SCI2SR_OR_OR	(1 << SCI2SR_OR)
#define SCI2SR_IDLE	4		/* Idle line detect */
#define SCI2SR_IDLE_OR	(1 << SCI2SR_IDLE)
#define SCI2SR_RDRF	5		/* Received Data Ready Flag */
#define SCI2SR_RDRF_OR	(1 << SCI2SR_RDRF)
#define SCI2SR_TC	6		/* Transmission Complete */
#define SCI2SR_TC_OR	(1 << SCI2SR_TC)
#define SCI2SR_TDRE	7		/* Transmission Data Register Empty */
#define SCI2SR_TDRE_OR	(1 << SCI2SR_TDRE)

/* Data Register */
DEF_8BIT_REG_AT(SCI2DR,0x61);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCI2BRR,0x62);
#define SCI2BRR_SCR0	0		/* Receiver Rate Divisor */
#define SCI2BRR_SCR0_OR	(1 << SCI2BRR_SCR0)
#define SCI2BRR_SCR1	1		/* Receiver Rate Divisor */
#define SCI2BRR_SCR1_OR	(1 << SCI2BRR_SCR1)
#define SCI2BRR_SCR2	2		/* Receiver Rate Divisor */
#define SCI2BRR_SCR2_OR	(1 << SCI2BRR_SCR2)
#define SCI2BRR_SCR_OR	((1 << SCI2BRR_SCR0)|(1 << SCI2BRR_SCR1)\
		|(1 << SCI2BRR_SCR2))
#define SCI2BRR_SCT0	3		/* Transmitter Rate Divisor */
#define SCI2BRR_SCT0_OR	(1 << SCI2BRR_SCT0)
#define SCI2BRR_SCT1	4		/* Transmitter Rate Divisor */
#define SCI2BRR_SCT1_OR	(1 << SCI2BRR_SCT1)
#define SCI2BRR_SCT2	5		/* Transmitter Rate Divisor */
#define SCI2BRR_SCT2_OR	(1 << SCI2BRR_SCT2)
#define SCI2BRR_SCT_OR	((1 << SCI2BRR_SCT0)|(1 << SCI2BRR_SCT1)\
		|(1 << SCI2BRR_SCT2))
#define SCI2BRR_SCP0	6		/* First SCI Prescaler */
#define SCI2BRR_SCP0_OR	(1 << SCI2BRR_SCP0)
#define SCI2BRR_SCP1	7		/* First SCI Prescaler */
#define SCI2BRR_SCP1_OR	(1 << SCI2BRR_SCP1)
#define SCI2BRR_SCP_OR	((1 << SCI2BRR_SCP0)|(1 << SCI2BRR_SCP1))

/* Control Register 1 */
DEF_8BIT_REG_AT(SCI2CR1,0x63);
#define SCI2CR1_PIE	0		/* Parity Interrupt Enable */
#define SCI2CR1_PIE_OR	(1 << SCI2CR1_PIE)
#define SCI2CR1_PS	1		/* Parity Selection */
#define SCI2CR1_PS_OR	(1 << SCI2CR1_PS)
#define SCI2CR1_PCE	2		/* Parity Control Enable */
#define SCI2CR1_PCE_OR	(1 << SCI2CR1_PCE)
#define SCI2CR1_WAKE	3		/* Wake-up Method */
#define SCI2CR1_WAKE_OR	(1 << SCI2CR1_WAKE)
#define SCI2CR1_M	4		/* Word Length */
#define SCI2CR1_M_OR	(1 << SCI2CR1_M)
#define SCI2CR1_SCID	5		/* Sci prescaler and outputs enable/disable bit */
#define SCI2CR1_SCID_OR	(1 << SCI2CR1_SCID)
#define SCI2CR1_T8	6		/* Transmit Data Bit 8 */
#define SCI2CR1_T8_OR	(1 << SCI2CR1_T8)
#define SCI2CR1_R8	7		/* Receive Data Bit 8 */
#define SCI2CR1_R8_OR	(1 << SCI2CR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCI2CR2,0x64);
#define SCI2CR2_SBK	0		/* Send Break */
#define SCI2CR2_SBK_OR	(1 << SCI2CR2_SBK)
#define SCI2CR2_RWU	1		/* Receiver Wake-up Mode */
#define SCI2CR2_RWU_OR	(1 << SCI2CR2_RWU)
#define SCI2CR2_RE	2		/* Receiver */
#define SCI2CR2_RE_OR	(1 << SCI2CR2_RE)
#define SCI2CR2_TE	3		/* Transmitter */
#define SCI2CR2_TE_OR	(1 << SCI2CR2_TE)
#define SCI2CR2_ILIE	4		/* Idle Line Interrupt */
#define SCI2CR2_ILIE_OR	(1 << SCI2CR2_ILIE)
#define SCI2CR2_RIE	5		/* Receiver Interrupt */
#define SCI2CR2_RIE_OR	(1 << SCI2CR2_RIE)
#define SCI2CR2_TCIE	6		/* Transmission Complete Interrupt */
#define SCI2CR2_TCIE_OR	(1 << SCI2CR2_TCIE)
#define SCI2CR2_TIE	7		/* Transmitter Interrupt */
#define SCI2CR2_TIE_OR	(1 << SCI2CR2_TIE)

/* Control Register 3 */
DEF_8BIT_REG_AT(SCI2CR3,0x65);
#define SCI2CR3_LBCL	0		/* Last bit clock pulse */
#define SCI2CR3_LBCL_OR	(1 << SCI2CR3_LBCL)
#define SCI2CR3_CPHA	1		/* Clock Phase */
#define SCI2CR3_CPHA_OR	(1 << SCI2CR3_CPHA)
#define SCI2CR3_CPOL	2		/* Clock Polarity */
#define SCI2CR3_CPOL_OR	(1 << SCI2CR3_CPOL)
#define SCI2CR3_CLKEN	3		/* Clock Enable */
#define SCI2CR3_CLKEN_OR	(1 << SCI2CR3_CLKEN)
#define SCI2CR3_LINE	6		/* Mode Enable */
#define SCI2CR3_LINE_OR	(1 << SCI2CR3_LINE)

/* Ext. Receive Prescaler Reg. */
DEF_8BIT_REG_AT(SCI2ERPR,0x66);

/* Ext. Transmit Prescaler Reg. */
DEF_8BIT_REG_AT(SCI2ETPR,0x67);

/* Controller Area Network (CAN) */
/*****************************************************************/

/* Master Control Register */
DEF_8BIT_REG_AT(CMCR,0x68);
#define CMCR_INRQ	0		/* Initialization Request */
#define CMCR_INRQ_OR	(1 << CMCR_INRQ)
#define CMCR_SLEEP	1		/* Sleep Mode Request */
#define CMCR_SLEEP_OR	(1 << CMCR_SLEEP)
#define CMCR_TXFP	2		/* Transmit Fifo Priority */
#define CMCR_TXFP_OR	(1 << CMCR_TXFP)
#define CMCR_RFLM	3		/* Receive Fifo Lock Mode */
#define CMCR_RFLM_OR	(1 << CMCR_RFLM)
#define CMCR_NART	4		/* No Automatic Retransmission */
#define CMCR_NART_OR	(1 << CMCR_NART)
#define CMCR_AWUM	5		/* Automatic Wake-Up Mode */
#define CMCR_AWUM_OR	(1 << CMCR_AWUM)
#define CMCR_ABOM	6		/* Automatic Bus-Off Management */
#define CMCR_ABOM_OR	(1 << CMCR_ABOM)
#define CMCR_TTCM	7		/* Time Triggered Communication Mode */
#define CMCR_TTCM_OR	(1 << CMCR_TTCM)

/* Master Status Register */
DEF_8BIT_REG_AT(CMSR,0x69);
#define CMSR_INAK	0		/* Initialization Acknowledge */
#define CMSR_INAK_OR	(1 << CMSR_INAK)
#define CMSR_SLAK	1		/* Sleep Acknowledge */
#define CMSR_SLAK_OR	(1 << CMSR_SLAK)
#define CMSR_ERRI	2		/* Error Interrupt */
#define CMSR_ERRI_OR	(1 << CMSR_ERRI)
#define CMSR_WKUI	3		/* Wake-Up Interrupt */
#define CMSR_WKUI_OR	(1 << CMSR_WKUI)
#define CMSR_TX	4		/* Transmit */
#define CMSR_TX_OR	(1 << CMSR_TX)
#define CMSR_RX	5		/* Receive */
#define CMSR_RX_OR	(1 << CMSR_RX)

/* Transmit Status Register */
DEF_8BIT_REG_AT(CTSR,0x6a);
#define CTSR_RQCP0	0		/* Request Completed for mailbox 0 */
#define CTSR_RQCP0_OR	(1 << CTSR_RQCP0)
#define CTSR_RQCP1	1		/* Request Completed for mailbox 1 */
#define CTSR_RQCP1_OR	(1 << CTSR_RQCP1)
#define CTSR_TXOK0	4		/* Transmission OK for mailbox 0 */
#define CTSR_TXOK0_OR	(1 << CTSR_TXOK0)
#define CTSR_TXOK1	5		/* Transmission OK for mailbox 1 */
#define CTSR_TXOK1_OR	(1 << CTSR_TXOK1)

/* Transmit Priority Register */
DEF_8BIT_REG_AT(CTPR,0x6b);
#define CTPR_CODE	0		/* Mailbox Code */
#define CTPR_CODE_OR	(1 << CTPR_CODE)
#define CTPR_TME0	2		/* Transmit Mailbox 0 Empty */
#define CTPR_TME0_OR	(1 << CTPR_TME0)
#define CTPR_TME1	3		/* Transmit Mailbox 1 Empty */
#define CTPR_TME1_OR	(1 << CTPR_TME1)
#define CTPR_LOW0	5		/* Lowest Priority Flag for Mailbox 0 */
#define CTPR_LOW0_OR	(1 << CTPR_LOW0)
#define CTPR_LOW1	6		/* Lowest Priority Flag for Mailbox 1 */
#define CTPR_LOW1_OR	(1 << CTPR_LOW1)

/* Receive FIFO Register */
DEF_8BIT_REG_AT(CRFR,0x6c);
#define CRFR_FMP0	0		/* FIFO Message Pending */
#define CRFR_FMP0_OR	(1 << CRFR_FMP0)
#define CRFR_FMP1	1		/* FIFO Message Pending */
#define CRFR_FMP1_OR	(1 << CRFR_FMP1)
#define CRFR_FMP_OR	((1 << CRFR_FMP0)|(1 << CRFR_FMP1))
#define CRFR_FULL	3		/* FIFO Full */
#define CRFR_FULL_OR	(1 << CRFR_FULL)
#define CRFR_FOVR	4		/* FIFO	Overrun */
#define CRFR_FOVR_OR	(1 << CRFR_FOVR)
#define CRFR_RFOM	5		/* Release FIFO	Output Mailbox */
#define CRFR_RFOM_OR	(1 << CRFR_RFOM)

/* Interrupt Enable Register */
DEF_8BIT_REG_AT(CIER,0x6d);
#define CIER_TMEIE	0		/* Transmit Mailbox Empty Interrupt */
#define CIER_TMEIE_OR	(1 << CIER_TMEIE)
#define CIER_FMPIE	1		/* FIFO Message Pending Interrupt */
#define CIER_FMPIE_OR	(1 << CIER_FMPIE)
#define CIER_FFIE	2		/* FIFO Full Interrupt Enable */
#define CIER_FFIE_OR	(1 << CIER_FFIE)
#define CIER_FOVIE	3		/* FIFO Overun Interrupt Enable */
#define CIER_FOVIE_OR	(1 << CIER_FOVIE)
#define CIER_WKUIE	7		/* Wake-Up Interrupt Enable */
#define CIER_WKUIE_OR	(1 << CIER_WKUIE)

/* Diagnosis Register */
DEF_8BIT_REG_AT(CDGR,0x6e);
#define CDGR_LBKM	0		/* Loop Back Mode */
#define CDGR_LBKM_OR	(1 << CDGR_LBKM)
#define CDGR_SILM	1		/* Silent Mode */
#define CDGR_SILM_OR	(1 << CDGR_SILM)

/* Filter Page Select Register */
DEF_8BIT_REG_AT(CPSR,0x6f);
#define CPSR_FPS0	0		/* Page Select */
#define CPSR_FPS0_OR	(1 << CPSR_FPS0)
#define CPSR_FPS1	1		/* Page Select */
#define CPSR_FPS1_OR	(1 << CPSR_FPS1)
#define CPSR_FPS2	2		/* Page Select */
#define CPSR_FPS2_OR	(1 << CPSR_FPS2)
#define CPSR_FPS_OR	((1 << CPSR_FPS0)|(1 << CPSR_FPS1)\
		|(1 << CPSR_FPS2))

/* MCSRTX0, MCSRTX1, CF0R0, CF2R0, CF4R0, CESR, MFMI - CAN Paged Register */
DEF_8BIT_REG_AT(MCSRTX0,0x70);
DEF_8BIT_REG_AT(MCSRTX1,0x70);
DEF_8BIT_REG_AT(CF0R0,0x70);
DEF_8BIT_REG_AT(CF2R0,0x70);
DEF_8BIT_REG_AT(CF4R0,0x70);
DEF_8BIT_REG_AT(CESR,0x70);
DEF_8BIT_REG_AT(MFMI,0x70);

/* MDLCTX0, MDLCTX1, CF0R1, CF2R1, CF4R1, CEIER, MDLC - CAN Paged Register */
DEF_8BIT_REG_AT(MDLCTX0,0x71);
DEF_8BIT_REG_AT(MDLCTX1,0x71);
DEF_8BIT_REG_AT(CF0R1,0x71);
DEF_8BIT_REG_AT(CF2R1,0x71);
DEF_8BIT_REG_AT(CF4R1,0x71);
DEF_8BIT_REG_AT(CEIER,0x71);
DEF_8BIT_REG_AT(MDLC,0x71);

/* MIDR0TX0, MIDR0TX1, CF0R2, CF2R2, CF4R2, TECR, MIDR0 - CAN Paged Register */
DEF_8BIT_REG_AT(MIDR0TX0,0x72);
DEF_8BIT_REG_AT(MIDR0TX1,0x72);
DEF_8BIT_REG_AT(CF0R2,0x72);
DEF_8BIT_REG_AT(CF2R2,0x72);
DEF_8BIT_REG_AT(CF4R2,0x72);
DEF_8BIT_REG_AT(TECR,0x72);
DEF_8BIT_REG_AT(MIDR0,0x72);

/* MIDR1TX0, MIDR1TX1, CF0R3, CF2R3, CF4R3, RECR, MIDR1 - CAN Paged Register */
DEF_8BIT_REG_AT(MIDR1TX0,0x73);
DEF_8BIT_REG_AT(MIDR1TX1,0x73);
DEF_8BIT_REG_AT(CF0R3,0x73);
DEF_8BIT_REG_AT(CF2R3,0x73);
DEF_8BIT_REG_AT(CF4R3,0x73);
DEF_8BIT_REG_AT(RECR,0x73);
DEF_8BIT_REG_AT(MIDR1,0x73);

/* MIDR2TX0, MIDR2TX1, CF0R4, CF2R4, CF4R4, BTCR0,MIDR2 - CAN Paged Register */
DEF_8BIT_REG_AT(MIDR2TX0,0x74);
DEF_8BIT_REG_AT(MIDR2TX1,0x74);
DEF_8BIT_REG_AT(CF0R4,0x74);
DEF_8BIT_REG_AT(CF2R4,0x74);
DEF_8BIT_REG_AT(CF4R4,0x74);
DEF_8BIT_REG_AT(BTCR0_MIDR2,0x74);

/* MIDR3TX0, MIDR3TX1, CF0R5, CF2R5, CF4R5, BTCR1,MIDR3 - CAN Paged Register */
DEF_8BIT_REG_AT(MIDR3TX0,0x75);
DEF_8BIT_REG_AT(MIDR3TX1,0x75);
DEF_8BIT_REG_AT(CF0R5,0x75);
DEF_8BIT_REG_AT(CF2R5,0x75);
DEF_8BIT_REG_AT(CF4R5,0x75);
DEF_8BIT_REG_AT(BTCR1_MIDR3,0x75);

/* MDAR0TX0, MDAR0TX1, CF0R6, CF2R6, CF4R6, nu0, MDAR0 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR0TX0,0x76);
DEF_8BIT_REG_AT(MDAR0TX1,0x76);
DEF_8BIT_REG_AT(CF0R6,0x76);
DEF_8BIT_REG_AT(CF2R6,0x76);
DEF_8BIT_REG_AT(CF4R6,0x76);
DEF_8BIT_REG_AT(nu0,0x76);
DEF_8BIT_REG_AT(MDAR0,0x76);

/* MDAR1TX0, MDAR1TX1, CF0R7, CF2R7, CF4R7, nu1, MDAR1 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR1TX0,0x77);
DEF_8BIT_REG_AT(MDAR1TX1,0x77);
DEF_8BIT_REG_AT(CF0R7,0x77);
DEF_8BIT_REG_AT(CF2R7,0x77);
DEF_8BIT_REG_AT(CF4R7,0x77);
DEF_8BIT_REG_AT(nu1,0x77);
DEF_8BIT_REG_AT(MDAR1,0x77);

/* MDAR2TX0, MDAR2TX1, CF1R0, CF3R0, CF5R0, CFMR0, MDAR2 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR2TX0,0x78);
DEF_8BIT_REG_AT(MDAR2TX1,0x78);
DEF_8BIT_REG_AT(CF1R0,0x78);
DEF_8BIT_REG_AT(CF3R0,0x78);
DEF_8BIT_REG_AT(CF5R0,0x78);
DEF_8BIT_REG_AT(CFMR0,0x78);
DEF_8BIT_REG_AT(MDAR2,0x78);

/* MDAR3TX0, MDAR3TX1, CF1R1, CF3R1, CF5R1, CFMR1, MDAR3 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR3TX0,0x79);
DEF_8BIT_REG_AT(MDAR3TX1,0x79);
DEF_8BIT_REG_AT(CF1R1,0x79);
DEF_8BIT_REG_AT(CF3R1,0x79);
DEF_8BIT_REG_AT(CF5R1,0x79);
DEF_8BIT_REG_AT(CFMR1,0x79);
DEF_8BIT_REG_AT(MDAR3,0x79);

/* MDAR4TX0, MDAR4TX1, CF1R2, CF3R2, CF5R2, CFCR0, MDAR4 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR4TX0,0x7a);
DEF_8BIT_REG_AT(MDAR4TX1,0x7a);
DEF_8BIT_REG_AT(CF1R2,0x7a);
DEF_8BIT_REG_AT(CF3R2,0x7a);
DEF_8BIT_REG_AT(CF5R2,0x7a);
DEF_8BIT_REG_AT(CFCR0,0x7a);
DEF_8BIT_REG_AT(MDAR4,0x7a);

/* MDAR5TX0, MDAR5TX1, CF1R3, CF3R3, CF5R3, CFCR1, MDAR5 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR5TX0,0x7b);
DEF_8BIT_REG_AT(MDAR5TX1,0x7b);
DEF_8BIT_REG_AT(CF1R3,0x7b);
DEF_8BIT_REG_AT(CF3R3,0x7b);
DEF_8BIT_REG_AT(CF5R3,0x7b);
DEF_8BIT_REG_AT(CFCR1,0x7b);
DEF_8BIT_REG_AT(MDAR5,0x7b);

/* MDAR6TX0, MDAR6TX1, CF1R4, CF3R4, CF5R4, CFCR2, MDAR6 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR6TX0,0x7c);
DEF_8BIT_REG_AT(MDAR6TX1,0x7c);
DEF_8BIT_REG_AT(CF1R4,0x7c);
DEF_8BIT_REG_AT(CF3R4,0x7c);
DEF_8BIT_REG_AT(CF5R4,0x7c);
DEF_8BIT_REG_AT(CFCR2,0x7c);
DEF_8BIT_REG_AT(MDAR6,0x7c);

/* MDAR7TX0, MDAR7TX1, CF1R5, CF3R5, CF5R5, nu2,  MDAR7 - CAN Paged Register */
DEF_8BIT_REG_AT(MDAR7TX0,0x7d);
DEF_8BIT_REG_AT(MDAR7TX1,0x7d);
DEF_8BIT_REG_AT(CF1R5,0x7d);
DEF_8BIT_REG_AT(CF3R5,0x7d);
DEF_8BIT_REG_AT(CF5R5,0x7d);
DEF_8BIT_REG_AT(nu2,0x7d);
DEF_8BIT_REG_AT(_MDAR7,0x7d);

/* MTSLRTX0, MTSLRTX1, CF1R6, CF3R6, CF5R6, nu3,  MTSLR - CAN Paged Register */
DEF_8BIT_REG_AT(MTSLRTX0,0x7e);
DEF_8BIT_REG_AT(MTSLRTX1,0x7e);
DEF_8BIT_REG_AT(CF1R6,0x7e);
DEF_8BIT_REG_AT(CF3R6,0x7e);
DEF_8BIT_REG_AT(CF5R6,0x7e);
DEF_8BIT_REG_AT(nu3,0x7e);
DEF_8BIT_REG_AT(_MTSLR,0x7e);

/* MTSHRTX0, MTSHRTX1, CF1R7, CF3R7, CF5R7, nu4,  MTSHR - CAN Paged Register */
DEF_8BIT_REG_AT(MTSHRTX0,0x7f);
DEF_8BIT_REG_AT(MTSHRTX1,0x7f);
DEF_8BIT_REG_AT(CF1R7,0x7f);
DEF_8BIT_REG_AT(CF3R7,0x7f);
DEF_8BIT_REG_AT(CF5R7,0x7f);
DEF_8BIT_REG_AT(nu4,0x7f);
DEF_8BIT_REG_AT(_MTSHR,0x7f);

#endif /* __ST72_F_561J4__ */
