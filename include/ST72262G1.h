/* ST72262G1.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72262G1__
#define __ST72262G1__

/* ST72262G1 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72262G1 1
		#if (MCU_NAME != ST72262G1)
		#error "wrong include file ST72262G1.h for chosen MCU!"
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

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x00);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x01);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x02);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x05);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x06);

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x08);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x09);

/* Option Register */
DEF_8BIT_REG_AT(PAOR,0x0a);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x1c);
#define ISPR0_I0_0	0		/* External IT 0 Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* External IT 0 Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* External IT 1 Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* External IT 1 Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* Clock Filter IT Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* Clock Filter IT Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* SPI IT Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* SPI IT Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x1d);
#define ISPR1_I0_4	0		/* Timer A IT Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* Timer A IT Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* MCC IT Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* MCC IT Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* Timer B IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* Timer B IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* AVD IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* AVD IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x1e);
#define ISPR2_I0_10	4		/* SCI IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* SCI IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* I2C IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* I2C IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Not used */
DEF_8BIT_REG_AT(ISPR3,0x1f);

/* Miscellaneous 1 */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x20);
#define MISCR1_SMS	0		/* Slow Mode Select */
#define MISCR1_SMS_OR	(1 << MISCR1_SMS)
#define MISCR1_CP0	1		/* CPU Clock Prescaler */
#define MISCR1_CP0_OR	(1 << MISCR1_CP0)
#define MISCR1_CP1	2		/* CPU Clock Prescaler */
#define MISCR1_CP1_OR	(1 << MISCR1_CP1)
#define MISCR1_CP_OR	((1 << MISCR1_CP0)|(1 << MISCR1_CP1))
#define MISCR1_IS00	3		/* EI0 Sensibility */
#define MISCR1_IS00_OR	(1 << MISCR1_IS00)
#define MISCR1_IS01	4		/* EI0 Sensibility */
#define MISCR1_IS01_OR	(1 << MISCR1_IS01)
#define MISCR1_IS0_OR	((1 << MISCR1_IS00)|(1 << MISCR1_IS01))
#define MISCR1_MCO	5		/* Main Clock Out */
#define MISCR1_MCO_OR	(1 << MISCR1_MCO)
#define MISCR1_IS10	6		/* EI1 Sensibility */
#define MISCR1_IS10_OR	(1 << MISCR1_IS10)
#define MISCR1_IS11	7		/* EI1 Sensibility */
#define MISCR1_IS11_OR	(1 << MISCR1_IS11)
#define MISCR1_IS1_OR	((1 << MISCR1_IS10)|(1 << MISCR1_IS11))

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

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x24);
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

/* System Integrity Control/Status Register (SICSR) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x25);
#define SICSR_WDGRF	0		/* Watchdog Reset Flag */
#define SICSR_WDGRF_OR	(1 << SICSR_WDGRF)
#define SICSR_CSSD	1		/* Clock security system detection */
#define SICSR_CSSD_OR	(1 << SICSR_CSSD)
#define SICSR_CSSIE	2		/* Clock security system interrupt enable */
#define SICSR_CSSIE_OR	(1 << SICSR_CSSIE)
#define SICSR_LVDRF	4		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_AVDF	5		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_AVDIE	6		/* Voltage Detector Interrupt Enable */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)

/* Main Clock Control/Status Register (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x26);
#define MCCSR_OIF	0		/* Oscillator Interrupt Flag */
#define MCCSR_OIF_OR	(1 << MCCSR_OIF)
#define MCCSR_OIE	1		/* Oscillator Interrupt */
#define MCCSR_OIE_OR	(1 << MCCSR_OIE)
#define MCCSR_TB0	2		/* Time Base Control */
#define MCCSR_TB0_OR	(1 << MCCSR_TB0)
#define MCCSR_TB1	3		/* Time Base Control */
#define MCCSR_TB1_OR	(1 << MCCSR_TB1)
#define MCCSR_TB_OR	((1 << MCCSR_TB0)|(1 << MCCSR_TB1))

/* 16-Bit Timer A */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TACR2,0x31);
#define TACR2_EXEDG	0		/* External Clock Edge */
#define TACR2_EXEDG_OR	(1 << TACR2_EXEDG)
#define TACR2_IEDG2	1		/* Input Edge 2 */
#define TACR2_IEDG2_OR	(1 << TACR2_IEDG2)
#define TACR2_CC0	2		/* Clock Control */
#define TACR2_CC0_OR	(1 << TACR2_CC0)
#define TACR2_CC1	3		/* Clock Control */
#define TACR2_CC1_OR	(1 << TACR2_CC1)
#define TACR2_CC_OR	((1 << TACR2_CC0)|(1 << TACR2_CC1))
#define TACR2_PWM	4		/* Pulse Width Modulation */
#define TACR2_PWM_OR	(1 << TACR2_PWM)
#define TACR2_OPM	5		/* One Pulse Mode */
#define TACR2_OPM_OR	(1 << TACR2_OPM)
#define TACR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TACR2_OC2E_OR	(1 << TACR2_OC2E)
#define TACR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TACR2_OC1E_OR	(1 << TACR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TACR1,0x32);
#define TACR1_OLVL1	0		/* Output Level 1 */
#define TACR1_OLVL1_OR	(1 << TACR1_OLVL1)
#define TACR1_IEDG1	1		/* Input Edge 1 */
#define TACR1_IEDG1_OR	(1 << TACR1_IEDG1)
#define TACR1_OLVL2	2		/* Output Level 2 */
#define TACR1_OLVL2_OR	(1 << TACR1_OLVL2)
#define TACR1_FOLV1	3		/* Forced Output Compare 1 */
#define TACR1_FOLV1_OR	(1 << TACR1_FOLV1)
#define TACR1_FOLV2	4		/* Forced Output Compare 2 */
#define TACR1_FOLV2_OR	(1 << TACR1_FOLV2)
#define TACR1_TOIE	5		/* Timer Overflow Interrupt */
#define TACR1_TOIE_OR	(1 << TACR1_TOIE)
#define TACR1_OCIE	6		/* Output Compare Interrupt */
#define TACR1_OCIE_OR	(1 << TACR1_OCIE)
#define TACR1_ICIE	7		/* Input Capture Interrupt */
#define TACR1_ICIE_OR	(1 << TACR1_ICIE)

/* Status Register */
DEF_8BIT_REG_AT(TACSR,0x33);
#define TACSR_TIMD	2		/* Timer prescaler,counter and outputs enable/disable */
#define TACSR_TIMD_OR	(1 << TACSR_TIMD)
#define TACSR_OCF2	3		/* Output Compare Flag 2 */
#define TACSR_OCF2_OR	(1 << TACSR_OCF2)
#define TACSR_ICF2	4		/* Input Capture Flag 2 */
#define TACSR_ICF2_OR	(1 << TACSR_ICF2)
#define TACSR_TOF	5		/* Timer Overflow */
#define TACSR_TOF_OR	(1 << TACSR_TOF)
#define TACSR_OCF1	6		/* Output Compare Flag 1 */
#define TACSR_OCF1_OR	(1 << TACSR_OCF1)
#define TACSR_ICF1	7		/* Input Capture Flag 1 */
#define TACSR_ICF1_OR	(1 << TACSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TAIC1R,0x34);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TAIC1HR,0x34);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TAIC1LR,0x35);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TAOC1R,0x36);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TAOC1HR,0x36);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TAOC1LR,0x37);

/* Counter Register */
DEF_16BIT_REG_AT(TACR,0x38);
/* Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x38);
/* Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x39);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TAACR,0x3a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TAACHR,0x3a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TAACLR,0x3b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TAIC2R,0x3c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TAIC2HR,0x3c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TAIC2LR,0x3d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TAOC2R,0x3e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TAOC2HR,0x3e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TAOC2LR,0x3f);

/* Miscellaneous 2 */
/*****************************************************************/

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x40);
#define MISCR2_SSI	0		/* Internal Mode */
#define MISCR2_SSI_OR	(1 << MISCR2_SSI)
#define MISCR2_SSM	1		/* Mode Selection */
#define MISCR2_SSM_OR	(1 << MISCR2_SSM)
#define MISCR2_SOP	2		/* SPI Slave Output Disable */
#define MISCR2_SOP_OR	(1 << MISCR2_SOP)
#define MISCR2_MOD	3		/* SPI Master Output Disable */
#define MISCR2_MOD_OR	(1 << MISCR2_MOD)

/* 16-Bit Timer B */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TBCR2,0x41);
#define TBCR2_EXEDG	0		/* External Clock Edge */
#define TBCR2_EXEDG_OR	(1 << TBCR2_EXEDG)
#define TBCR2_IEDG2	1		/* Input Edge 2 */
#define TBCR2_IEDG2_OR	(1 << TBCR2_IEDG2)
#define TBCR2_CC0	2		/* Clock Control */
#define TBCR2_CC0_OR	(1 << TBCR2_CC0)
#define TBCR2_CC1	3		/* Clock Control */
#define TBCR2_CC1_OR	(1 << TBCR2_CC1)
#define TBCR2_CC_OR	((1 << TBCR2_CC0)|(1 << TBCR2_CC1))
#define TBCR2_PWM	4		/* Pulse Width Modulation */
#define TBCR2_PWM_OR	(1 << TBCR2_PWM)
#define TBCR2_OPM	5		/* One Pulse Mode */
#define TBCR2_OPM_OR	(1 << TBCR2_OPM)
#define TBCR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TBCR2_OC2E_OR	(1 << TBCR2_OC2E)
#define TBCR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TBCR2_OC1E_OR	(1 << TBCR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TBCR1,0x42);
#define TBCR1_OLVL1	0		/* Output Level 1 */
#define TBCR1_OLVL1_OR	(1 << TBCR1_OLVL1)
#define TBCR1_IEDG1	1		/* Input Edge 1 */
#define TBCR1_IEDG1_OR	(1 << TBCR1_IEDG1)
#define TBCR1_OLVL2	2		/* Output Level 2 */
#define TBCR1_OLVL2_OR	(1 << TBCR1_OLVL2)
#define TBCR1_FOLV1	3		/* Forced Output Compare 1 */
#define TBCR1_FOLV1_OR	(1 << TBCR1_FOLV1)
#define TBCR1_FOLV2	4		/* Forced Output Compare 2 */
#define TBCR1_FOLV2_OR	(1 << TBCR1_FOLV2)
#define TBCR1_TOIE	5		/* Timer Overflow Interrupt */
#define TBCR1_TOIE_OR	(1 << TBCR1_TOIE)
#define TBCR1_OCIE	6		/* Output Compare Interrupt */
#define TBCR1_OCIE_OR	(1 << TBCR1_OCIE)
#define TBCR1_ICIE	7		/* Input Capture Interrupt */
#define TBCR1_ICIE_OR	(1 << TBCR1_ICIE)

/* Status Register */
DEF_8BIT_REG_AT(TBCSR,0x43);
#define TBCSR_TIMD	2		/* Timer prescaler,counter and outputs enable/disable */
#define TBCSR_TIMD_OR	(1 << TBCSR_TIMD)
#define TBCSR_OCF2	3		/* Output Compare Flag 2 */
#define TBCSR_OCF2_OR	(1 << TBCSR_OCF2)
#define TBCSR_ICF2	4		/* Input Capture Flag 2 */
#define TBCSR_ICF2_OR	(1 << TBCSR_ICF2)
#define TBCSR_TOF	5		/* Timer Overflow */
#define TBCSR_TOF_OR	(1 << TBCSR_TOF)
#define TBCSR_OCF1	6		/* Output Compare Flag 1 */
#define TBCSR_OCF1_OR	(1 << TBCSR_OCF1)
#define TBCSR_ICF1	7		/* Input Capture Flag 1 */
#define TBCSR_ICF1_OR	(1 << TBCSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TBIC1R,0x44);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TBIC1HR,0x44);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TBIC1LR,0x45);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TBOC1R,0x46);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TBOC1HR,0x46);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TBOC1LR,0x47);

/* Counter Register */
DEF_16BIT_REG_AT(TBCR,0x48);
/* Counter High Register */
DEF_8BIT_REG_AT(TBCHR,0x48);
/* Counter Low Register */
DEF_8BIT_REG_AT(TBCLR,0x49);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TBACR,0x4a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TBACHR,0x4a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TBACLR,0x4b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TBIC2R,0x4c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TBIC2HR,0x4c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TBIC2LR,0x4d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TBOC2R,0x4e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TBOC2HR,0x4e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TBOC2LR,0x4f);

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* ADC Data Register Low */
DEF_8BIT_REG_AT(ADCDRL,0x6f);

/* ADC Data Register High */
DEF_8BIT_REG_AT(ADCDRH,0x70);

/* ADC Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x71);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH2	2		/* Channel Selection */
#define ADCCSR_CH2_OR	(1 << ADCCSR_CH2)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2))
#define ADCCSR_SLOW	4		/* ADC Clock Selection */
#define ADCCSR_SLOW_OR	(1 << ADCCSR_SLOW)
#define ADCCSR_ADON	5		/* A/D Start Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_SPEED	6		/* ADC Clock Selection */
#define ADCCSR_SPEED_OR	(1 << ADCCSR_SPEED)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x72);

#endif /* __ST72262G1__ */
