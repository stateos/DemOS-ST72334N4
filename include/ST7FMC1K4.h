/* ST7FMC1K4.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FMC1K4__
#define __ST7FMC1K4__

/* ST7FMC1K4 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FMC1K4 1
		#if (MCU_NAME != ST7FMC1K4)
		#error "wrong include file ST7FMC1K4.h for chosen MCU!"
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

/* Serial Communication Interface (LinSCI) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x18);
#define SCISR_PE	0		/* Parity Error */
#define SCISR_PE_OR	(1 << SCISR_PE)
#define SCISR_FE	1		/* Framing Error */
#define SCISR_FE_OR	(1 << SCISR_FE)
#define SCISR_NF	2		/* Noise Flag */
#define SCISR_NF_OR	(1 << SCISR_NF)
#define SCISR_OR_LHE	3		/* Overrun Error/Lin Header Error */
#define SCISR_OR_LHE_OR	(1 << SCISR_OR_LHE)
#define SCISR_IDLE	4		/* Idle line detect */
#define SCISR_IDLE_OR	(1 << SCISR_IDLE)
#define SCISR_RDRF	5		/* Received Data Ready Flag */
#define SCISR_RDRF_OR	(1 << SCISR_RDRF)
#define SCISR_TC	6		/* Transmission Complete */
#define SCISR_TC_OR	(1 << SCISR_TC)
#define SCISR_TDRE	7		/* Transmission Data Register Empty */
#define SCISR_TDRE_OR	(1 << SCISR_TDRE)

/* Data Register */
DEF_8BIT_REG_AT(SCIDR,0x19);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x1a);
#define SCIBRR_SCR0	0		/* Receiver Rate Divisor */
#define SCIBRR_SCR0_OR	(1 << SCIBRR_SCR0)
#define SCIBRR_SCR1	1		/* Receiver Rate Divisor */
#define SCIBRR_SCR1_OR	(1 << SCIBRR_SCR1)
#define SCIBRR_SCR2	2		/* Receiver Rate Divisor */
#define SCIBRR_SCR2_OR	(1 << SCIBRR_SCR2)
#define SCIBRR_SCR_OR	((1 << SCIBRR_SCR0)|(1 << SCIBRR_SCR1)\
		|(1 << SCIBRR_SCR2))
#define SCIBRR_SCT0	3		/* Transmitter Rate Divisor */
#define SCIBRR_SCT0_OR	(1 << SCIBRR_SCT0)
#define SCIBRR_SCT1	4		/* Transmitter Rate Divisor */
#define SCIBRR_SCT1_OR	(1 << SCIBRR_SCT1)
#define SCIBRR_SCT2	5		/* Transmitter Rate Divisor */
#define SCIBRR_SCT2_OR	(1 << SCIBRR_SCT2)
#define SCIBRR_SCT_OR	((1 << SCIBRR_SCT0)|(1 << SCIBRR_SCT1)\
		|(1 << SCIBRR_SCT2))
#define SCIBRR_SCP0	6		/* First SCI Prescaler */
#define SCIBRR_SCP0_OR	(1 << SCIBRR_SCP0)
#define SCIBRR_SCP1	7		/* First SCI Prescaler */
#define SCIBRR_SCP1_OR	(1 << SCIBRR_SCP1)
#define SCIBRR_SCP_OR	((1 << SCIBRR_SCP0)|(1 << SCIBRR_SCP1))

/* Lin Prescaler Register */
DEF_8BIT_REG_AT(LPR,0x1a);

/* Control Register 1 */
DEF_8BIT_REG_AT(SCICR1,0x1b);
#define SCICR1_PIE	0		/* Parity Interrupt Enable */
#define SCICR1_PIE_OR	(1 << SCICR1_PIE)
#define SCICR1_PS	1		/* Parity Selection */
#define SCICR1_PS_OR	(1 << SCICR1_PS)
#define SCICR1_PCE	2		/* Parity Control Enable */
#define SCICR1_PCE_OR	(1 << SCICR1_PCE)
#define SCICR1_WAKE	3		/* Wake-up Method */
#define SCICR1_WAKE_OR	(1 << SCICR1_WAKE)
#define SCICR1_M	4		/* Word Length */
#define SCICR1_M_OR	(1 << SCICR1_M)
#define SCICR1_SCID	5		/* Sci prescaler and outputs enable/disable bit */
#define SCICR1_SCID_OR	(1 << SCICR1_SCID)
#define SCICR1_T8	6		/* Transmit Data Bit 8 */
#define SCICR1_T8_OR	(1 << SCICR1_T8)
#define SCICR1_R8	7		/* Receive Data Bit 8 */
#define SCICR1_R8_OR	(1 << SCICR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCICR2,0x1c);
#define SCICR2_SBK	0		/* Send Break */
#define SCICR2_SBK_OR	(1 << SCICR2_SBK)
#define SCICR2_RWU	1		/* Receiver Wake-up Mode */
#define SCICR2_RWU_OR	(1 << SCICR2_RWU)
#define SCICR2_RE	2		/* Receiver */
#define SCICR2_RE_OR	(1 << SCICR2_RE)
#define SCICR2_TE	3		/* Transmitter */
#define SCICR2_TE_OR	(1 << SCICR2_TE)
#define SCICR2_ILIE	4		/* Idle Line Interrupt */
#define SCICR2_ILIE_OR	(1 << SCICR2_ILIE)
#define SCICR2_RIE	5		/* Receiver Interrupt */
#define SCICR2_RIE_OR	(1 << SCICR2_RIE)
#define SCICR2_TCIE	6		/* Transmission Complete Interrupt */
#define SCICR2_TCIE_OR	(1 << SCICR2_TCIE)
#define SCICR2_TIE	7		/* Transmitter Interrupt */
#define SCICR2_TIE_OR	(1 << SCICR2_TIE)

/* Control Register 3 */
DEF_8BIT_REG_AT(SCICR3,0x1d);
#define SCICR3_LSF	0		/* Lin Synch Field State */
#define SCICR3_LSF_OR	(1 << SCICR3_LSF)
#define SCICR3_LHDF	1		/* Lin Header Detection Flag */
#define SCICR3_LHDF_OR	(1 << SCICR3_LHDF)
#define SCICR3_LHIE	2		/* Lin Header Interrupt Enable */
#define SCICR3_LHIE_OR	(1 << SCICR3_LHIE)
#define SCICR3_LHDM	3		/* Lin Header Detection Method */
#define SCICR3_LHDM_OR	(1 << SCICR3_LHDM)
#define SCICR3_LASE	4		/* Lin Auto Synch Enable */
#define SCICR3_LASE_OR	(1 << SCICR3_LASE)
#define SCICR3_LSLV	5		/* Lin Master/Slave Mode */
#define SCICR3_LSLV_OR	(1 << SCICR3_LSLV)
#define SCICR3_LINE	6		/* Lin Mode Enable/disable */
#define SCICR3_LINE_OR	(1 << SCICR3_LINE)
#define SCICR3_LDUM	7		/* Lin Divider Update Method */
#define SCICR3_LDUM_OR	(1 << SCICR3_LDUM)

/* SCIERPR, LHLR - Extended Receive Prescaler Reg., Lin Header Length Register */
DEF_8BIT_REG_AT(SCIERPR,0x1e);
DEF_8BIT_REG_AT(LHLR,0x1e);

/* SCIETPR, LPRF - Extended Transmit Prescaler Reg., Lin Prescaler Fraction Register */
DEF_8BIT_REG_AT(SCIETPR,0x1f);
DEF_8BIT_REG_AT(LPRF,0x1f);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x24);
#define ISPR0_I0_0	0		/* External Non Maskable IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* External Non Maskable IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* MCC IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* MCC IT Priority Level */
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
DEF_8BIT_REG_AT(ISPR1,0x25);
#define ISPR1_I0_4	0		/* External IT 2 Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT 2 Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* MTC U/CL IT Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* MTC U/CL IT Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* MTC R/Z IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* MTC R/Z IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* MTC C/D IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* MTC C/D IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x26);
#define ISPR2_I0_8	0		/* SPI IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* SPI IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* Timer A IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* Timer A IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* Timer B IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* Timer B IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* SCI IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* SCI IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x27);
#define ISPR3_I0_12	0		/* AVD IT Priority Level */
#define ISPR3_I0_12_OR	(1 << ISPR3_I0_12)
#define ISPR3_I1_12	1		/* AVD IT Priority Level */
#define ISPR3_I1_12_OR	(1 << ISPR3_I1_12)
#define ISPR3_I_12_OR	((1 << ISPR3_I0_12)|(1 << ISPR3_I1_12))
#define ISPR3_I0_13	2		/* PWMART IT Priority Level */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* PWMART IT Priority Level */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* External Interrupt Control Register */
DEF_8BIT_REG_AT(EICR,0x28);
#define EICR_IPA	0		/* Interrupt Polarity port A */
#define EICR_IPA_OR	(1 << EICR_IPA)
#define EICR_IS30	1		/* EI0 Sensitivity */
#define EICR_IS30_OR	(1 << EICR_IS30)
#define EICR_IS31	2		/* EI0 Sensitivity */
#define EICR_IS31_OR	(1 << EICR_IS31)
#define EICR_IS3_OR	((1 << EICR_IS30)|(1 << EICR_IS31))
#define EICR_IS20	3		/* EI1 Sensitivity */
#define EICR_IS20_OR	(1 << EICR_IS20)
#define EICR_IS21	4		/* EI1 Sensitivity */
#define EICR_IS21_OR	(1 << EICR_IS21)
#define EICR_IS2_OR	((1 << EICR_IS20)|(1 << EICR_IS21))
#define EICR_IPB	5		/* Interrupt Polarity port B */
#define EICR_IPB_OR	(1 << EICR_IPB)
#define EICR_IS10	6		/* EI2 Sensitivity */
#define EICR_IS10_OR	(1 << EICR_IS10)
#define EICR_IS11	7		/* EI2 Sensitivity */
#define EICR_IS11_OR	(1 << EICR_IS11)
#define EICR_IS1_OR	((1 << EICR_IS10)|(1 << EICR_IS11))

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x29);

/* Window Watchdog (WWDG) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x2a);
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
DEF_8BIT_REG_AT(WDGWR,0x2b);
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

/* Main Clock Controller (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x2c);
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

/* MCC Beep Control Register */
DEF_8BIT_REG_AT(MCCBCR,0x2d);
#define MCCBCR_BC0	0		/* Beep Control */
#define MCCBCR_BC0_OR	(1 << MCCBCR_BC0)
#define MCCBCR_BC1	1		/* Beep Control */
#define MCCBCR_BC1_OR	(1 << MCCBCR_BC1)
#define MCCBCR_BC_OR	((1 << MCCBCR_BC0)|(1 << MCCBCR_BC1))
#define MCCBCR_ADCIE	2		/* A/D Converter Interrupt Enable */
#define MCCBCR_ADCIE_OR	(1 << MCCBCR_ADCIE)
#define MCCBCR_ADSTS	3		/* A/D Converter Sample Time Stretch */
#define MCCBCR_ADSTS_OR	(1 << MCCBCR_ADSTS)

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x2e);
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
#define ADCCSR_ADON	4		/* Start Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_PRSC0	5		/* Clock prescaler selection */
#define ADCCSR_PRSC0_OR	(1 << ADCCSR_PRSC0)
#define ADCCSR_PRSC1	6		/* Clock prescaler selection */
#define ADCCSR_PRSC1_OR	(1 << ADCCSR_PRSC1)
#define ADCCSR_PRSC_OR	((1 << ADCCSR_PRSC0)|(1 << ADCCSR_PRSC1))
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* Data High Register */
DEF_8BIT_REG_AT(ADCDRH,0x2f);

/* Data low Register */
DEF_8BIT_REG_AT(ADCDRL,0x30);

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

/* Control/Status Register */
DEF_8BIT_REG_AT(TACSR,0x33);
#define TACSR_TIMD	2		/* Timer Disable */
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

/* System Integrity Control/Status Register (SICSR) */
/*****************************************************************/

/* System Integrity Control/Status Register (page 0) */
DEF_8BIT_REG_AT(SICSR_page0,0x40);
#define SICSR_page0_WDGRF	0		/* Watchdog Reset Flag */
#define SICSR_page0_WDGRF_OR	(1 << SICSR_page0_WDGRF)
#define SICSR_page0_CSSD	1		/* Clock Security System Detection */
#define SICSR_page0_CSSD_OR	(1 << SICSR_page0_CSSD)
#define SICSR_page0_CSSIE	2		/* Clock Security System Interrupt */
#define SICSR_page0_CSSIE_OR	(1 << SICSR_page0_CSSIE)
#define SICSR_page0_LVDRF	4		/* LVD Reset Flag */
#define SICSR_page0_LVDRF_OR	(1 << SICSR_page0_LVDRF)
#define SICSR_page0_AVDF	5		/* Voltage Detector Flag */
#define SICSR_page0_AVDF_OR	(1 << SICSR_page0_AVDF)
#define SICSR_page0_AVDIE	6		/* Voltage Detector Interrupt */
#define SICSR_page0_AVDIE_OR	(1 << SICSR_page0_AVDIE)
#define SICSR_page0_PAGE	7		/* SICSR Register Page Selection */
#define SICSR_page0_PAGE_OR	(1 << SICSR_page0_PAGE)

/* System Integrity Control/Status Register (page 1) */
DEF_8BIT_REG_AT(SICSR_page1,0x40);
#define SICSR_page1_CKSEL	1		/* Clock Source Selection */
#define SICSR_page1_CKSEL_OR	(1 << SICSR_page1_CKSEL)
#define SICSR_page1_PLLEN	2		/* PLL Enable */
#define SICSR_page1_PLLEN_OR	(1 << SICSR_page1_PLLEN)
#define SICSR_page1_LOCK	4		/* PLL Locked */
#define SICSR_page1_LOCK_OR	(1 << SICSR_page1_LOCK)
#define SICSR_page1_VCOEN	5		/* VCO Enable */
#define SICSR_page1_VCOEN_OR	(1 << SICSR_page1_VCOEN)
#define SICSR_page1_PAGE	7		/* SICSR Register Page Selection */
#define SICSR_page1_PAGE_OR	(1 << SICSR_page1_PAGE)

/* Motor Controller (MTC) */
/*****************************************************************/

/* MTIM, MDTG - Timer Counter High Register, Dead Time Generator Register */
DEF_8BIT_REG_AT(MTIM,0x50);
DEF_8BIT_REG_AT(MDTG,0x50);

/* MTIML, MPOL - Timer Counter Low Register, Polarity Register */
DEF_8BIT_REG_AT(MTIML,0x51);
DEF_8BIT_REG_AT(MPOL,0x51);

/* MZPRV, MPWME - Capture Zn-1 Register, PWM Register */
DEF_8BIT_REG_AT(MZPRV,0x52);
DEF_8BIT_REG_AT(MPWME,0x52);

/* MZREG, MCONF - Capture Zn Register, Configuration Register */
DEF_8BIT_REG_AT(MZREG,0x53);
DEF_8BIT_REG_AT(MCONF,0x53);

/* MCOMP, MPAR - Compare Cn+1 Register, Parity register */
DEF_8BIT_REG_AT(MCOMP,0x54);
DEF_8BIT_REG_AT(MPAR,0x54);

/* MDREG, MZRF - Demagnetization Register, Z Event Filter Register */
DEF_8BIT_REG_AT(MDREG,0x55);
DEF_8BIT_REG_AT(MZRF,0x55);

/* MWGHT, MSCR - An Weight Register, Sampling Clock Register */
DEF_8BIT_REG_AT(MWGHT,0x56);
DEF_8BIT_REG_AT(MSCR,0x56);

/* Prescaler & Sampling Register */
DEF_8BIT_REG_AT(MPRSR,0x57);
#define MPRSR_ST0	0		/* Step Ratio Max. Min. (Period Range Mini. Max.) */
#define MPRSR_ST0_OR	(1 << MPRSR_ST0)
#define MPRSR_ST1	1		/* Step Ratio Max. Min. (Period Range Mini. Max.) */
#define MPRSR_ST1_OR	(1 << MPRSR_ST1)
#define MPRSR_ST2	2		/* Step Ratio Max. Min. (Period Range Mini. Max.) */
#define MPRSR_ST2_OR	(1 << MPRSR_ST2)
#define MPRSR_ST3	3		/* Step Ratio Max. Min. (Period Range Mini. Max.) */
#define MPRSR_ST3_OR	(1 << MPRSR_ST3)
#define MPRSR_ST_OR	((1 << MPRSR_ST0)|(1 << MPRSR_ST1)\
		|(1 << MPRSR_ST2)|(1 << MPRSR_ST3))
#define MPRSR_SA0	4		/* Sampling Ratio */
#define MPRSR_SA0_OR	(1 << MPRSR_SA0)
#define MPRSR_SA1	5		/* Sampling Ratio */
#define MPRSR_SA1_OR	(1 << MPRSR_SA1)
#define MPRSR_SA2	6		/* Sampling Ratio */
#define MPRSR_SA2_OR	(1 << MPRSR_SA2)
#define MPRSR_SA3	7		/* Sampling Ratio */
#define MPRSR_SA3_OR	(1 << MPRSR_SA3)
#define MPRSR_SA_OR	((1 << MPRSR_SA0)|(1 << MPRSR_SA1)\
		|(1 << MPRSR_SA2)|(1 << MPRSR_SA3))

/* Interrupt Mask Register */
DEF_8BIT_REG_AT(MIMR,0x58);
#define MIMR_CIM	0		/* Commutation/Capture Interrupt Mask bit */
#define MIMR_CIM_OR	(1 << MIMR_CIM)
#define MIMR_DIM	1		/* End of Demagnetization Interrupt Mask bit */
#define MIMR_DIM_OR	(1 << MIMR_DIM)
#define MIMR_ZIM	2		/* Back EMF Zero-crossing Interrupt Mask bit */
#define MIMR_ZIM_OR	(1 << MIMR_ZIM)
#define MIMR_EIM	3		/* Emergency stop Interrupt Mask bit */
#define MIMR_EIM_OR	(1 << MIMR_EIM)
#define MIMR_CLIM	4		/* Current Limitation Interrupt Mask bit */
#define MIMR_CLIM_OR	(1 << MIMR_CLIM)
#define MIMR_RIM	5		/* Ratio update Interrupt Mask bit */
#define MIMR_RIM_OR	(1 << MIMR_RIM)
#define MIMR_SEM	6		/* Speed Error Mask bit */
#define MIMR_SEM_OR	(1 << MIMR_SEM)
#define MIMR_PUM	7		/* PWM Update Mask bit */
#define MIMR_PUM_OR	(1 << MIMR_PUM)

/* Interrupt Status Register */
DEF_8BIT_REG_AT(MISR,0x59);
#define MISR_CI	0		/* Commutation Interrupt flag */
#define MISR_CI_OR	(1 << MISR_CI)
#define MISR_DI	1		/* End of Demagnetization Interrupt flag */
#define MISR_DI_OR	(1 << MISR_DI)
#define MISR_ZI	2		/* BEMF Zero-crossing Interrupt flag */
#define MISR_ZI_OR	(1 << MISR_ZI)
#define MISR_EI	3		/* Emergency Stop Interrupt flag */
#define MISR_EI_OR	(1 << MISR_EI)
#define MISR_CLI	4		/* Current Limitation interrupt flag */
#define MISR_CLI_OR	(1 << MISR_CLI)
#define MISR_RMI	5		/* Ratio Decrement Interrupt flag */
#define MISR_RMI_OR	(1 << MISR_RMI)
#define MISR_RPI	6		/* Ratio Increment Interrupt flag */
#define MISR_RPI_OR	(1 << MISR_RPI)
#define MISR_PUI	7		/* PWM Update Interrupt flag */
#define MISR_PUI_OR	(1 << MISR_PUI)

/* Control Register A */
DEF_8BIT_REG_AT(MCRA,0x5a);
#define MCRA_DCB	0		/* Data Capture bit */
#define MCRA_DCB_OR	(1 << MCRA_DCB)
#define MCRA_PZ	1		/* Protection from parasitic Zero-crossing */
#define MCRA_PZ_OR	(1 << MCRA_PZ)
#define MCRA_SWA	2		/* Switched/Autoswitched Mode */
#define MCRA_SWA_OR	(1 << MCRA_SWA)
#define MCRA_V0C1	3		/* Voltage/Current Mode */
#define MCRA_V0C1_OR	(1 << MCRA_V0C1)
#define MCRA_DAC	4		/* Direct Access to phase state Register */
#define MCRA_DAC_OR	(1 << MCRA_DAC)
#define MCRA_SR	5		/* Sensor ON/Off */
#define MCRA_SR_OR	(1 << MCRA_SR)
#define MCRA_CKE	6		/* Clock Enable bit */
#define MCRA_CKE_OR	(1 << MCRA_CKE)
#define MCRA_MOE	7		/* Output Enable bit */
#define MCRA_MOE_OR	(1 << MCRA_MOE)

/* Control Register B */
DEF_8BIT_REG_AT(MCRB,0x5b);
#define MCRB_OS0	0		/* Operating Output mode Selection bit (PWM after Z and before next C) */
#define MCRB_OS0_OR	(1 << MCRB_OS0)
#define MCRB_OS1	1		/* Operating Output mode Selection bit (PWM after D and before Z) */
#define MCRB_OS1_OR	(1 << MCRB_OS1)
#define MCRB_OS2	2		/* Operating Output mode Selection and preload bit (PWM after C and before D) */
#define MCRB_OS2_OR	(1 << MCRB_OS2)
#define MCRB_OCV	3		/* Over Current Handling in Voltage mode */
#define MCRB_OCV_OR	(1 << MCRB_OCV)
#define MCRB_SDM	4		/* Simulated Demagnetization event Mask bit */
#define MCRB_SDM_OR	(1 << MCRB_SDM)
#define MCRB_HDM	5		/* Hardware Demagnetization event Mask bit */
#define MCRB_HDM_OR	(1 << MCRB_HDM)
#define MCRB_CPB	6		/* Compare bit for zero-crossing detection */
#define MCRB_CPB_OR	(1 << MCRB_CPB)

/* Control Register C */
DEF_8BIT_REG_AT(MCRC,0x5c);
#define MCRC_VR0	0		/* BEMF/demagnetisation Reference threshold */
#define MCRC_VR0_OR	(1 << MCRC_VR0)
#define MCRC_VR1	1		/* BEMF/demagnetisation Reference threshold */
#define MCRC_VR1_OR	(1 << MCRC_VR1)
#define MCRC_VR2	2		/* BEMF/demagnetisation Reference threshold */
#define MCRC_VR2_OR	(1 << MCRC_VR2)
#define MCRC_VR_OR	((1 << MCRC_VR0)|(1 << MCRC_VR1)\
		|(1 << MCRC_VR2))
#define MCRC_SPLG	3		/* Sampling Z event at 1MHz in sensorless mode (SR=0) */
#define MCRC_SPLG_OR	(1 << MCRC_SPLG)
#define MCRC_SC	4		/* Simulated commutation event bit */
#define MCRC_SC_OR	(1 << MCRC_SC)
#define MCRC_SZ	5		/* Simulated zero-crossing event bit */
#define MCRC_SZ_OR	(1 << MCRC_SZ)
#define MCRC_EDIR_HZ	6		/* Encoder Direction bit/Hardware zero-crossing event bit */
#define MCRC_EDIR_HZ_OR	(1 << MCRC_EDIR_HZ)
#define MCRC_SEI_OI	7		/* Speed Error interrupt flag/MTIM Overflow flag */
#define MCRC_SEI_OI_OR	(1 << MCRC_SEI_OI)

/* Phase State Register */
DEF_8BIT_REG_AT(MPHST,0x5d);
#define MPHST_OO0	0		/* Output Channel 0 On/Off bit */
#define MPHST_OO0_OR	(1 << MPHST_OO0)
#define MPHST_OO1	1		/* Output Channel 1 On/Off bit */
#define MPHST_OO1_OR	(1 << MPHST_OO1)
#define MPHST_OO2	2		/* Output Channel 2 On/Off bit */
#define MPHST_OO2_OR	(1 << MPHST_OO2)
#define MPHST_OO3	3		/* Output Channel 3 On/Off bit */
#define MPHST_OO3_OR	(1 << MPHST_OO3)
#define MPHST_OO4	4		/* Output Channel 4 On/Off bit */
#define MPHST_OO4_OR	(1 << MPHST_OO4)
#define MPHST_OO5	5		/* Output Channel 5 On/Off bit */
#define MPHST_OO5_OR	(1 << MPHST_OO5)
#define MPHST_IS0	6		/* Input Selection bits */
#define MPHST_IS0_OR	(1 << MPHST_IS0)
#define MPHST_IS1	7		/* Input Selection bits */
#define MPHST_IS1_OR	(1 << MPHST_IS1)
#define MPHST_IS_OR	((1 << MPHST_IS0)|(1 << MPHST_IS1))

/* D event Filter Register */
DEF_8BIT_REG_AT(MDFR,0x5e);
#define MDFR_DWF0	0		/* D Window Filter bits */
#define MDFR_DWF0_OR	(1 << MDFR_DWF0)
#define MDFR_DWF1	1		/* D Window Filter bits */
#define MDFR_DWF1_OR	(1 << MDFR_DWF1)
#define MDFR_DWF2	2		/* D Window Filter bits */
#define MDFR_DWF2_OR	(1 << MDFR_DWF2)
#define MDFR_DWF3	3		/* D Window Filter bits */
#define MDFR_DWF3_OR	(1 << MDFR_DWF3)
#define MDFR_DWF_OR	((1 << MDFR_DWF0)|(1 << MDFR_DWF1)\
		|(1 << MDFR_DWF2)|(1 << MDFR_DWF3))
#define MDFR_DEF0	4		/* D Event Filter bits */
#define MDFR_DEF0_OR	(1 << MDFR_DEF0)
#define MDFR_DEF1	5		/* D Event Filter bits */
#define MDFR_DEF1_OR	(1 << MDFR_DEF1)
#define MDFR_DEF2	6		/* D Event Filter bits */
#define MDFR_DEF2_OR	(1 << MDFR_DEF2)
#define MDFR_DEF3	7		/* D Event Filter bits */
#define MDFR_DEF3_OR	(1 << MDFR_DEF3)
#define MDFR_DEF_OR	((1 << MDFR_DEF0)|(1 << MDFR_DEF1)\
		|(1 << MDFR_DEF2)|(1 << MDFR_DEF3))

/* Current feedback Filter Register */
DEF_8BIT_REG_AT(MCFR,0x5f);
#define MCFR_CFW0	0		/* Current Window Filter bits */
#define MCFR_CFW0_OR	(1 << MCFR_CFW0)
#define MCFR_CFW1	1		/* Current Window Filter bits */
#define MCFR_CFW1_OR	(1 << MCFR_CFW1)
#define MCFR_CFW2	2		/* Current Window Filter bits */
#define MCFR_CFW2_OR	(1 << MCFR_CFW2)
#define MCFR_CFW_OR	((1 << MCFR_CFW0)|(1 << MCFR_CFW1)\
		|(1 << MCFR_CFW2))
#define MCFR_CFF0	3		/* Current Feedback Filter bits */
#define MCFR_CFF0_OR	(1 << MCFR_CFF0)
#define MCFR_CFF1	4		/* Current Feedback Filter bits */
#define MCFR_CFF1_OR	(1 << MCFR_CFF1)
#define MCFR_CFF2	5		/* Current Feedback Filter bits */
#define MCFR_CFF2_OR	(1 << MCFR_CFF2)
#define MCFR_CFF_OR	((1 << MCFR_CFF0)|(1 << MCFR_CFF1)\
		|(1 << MCFR_CFF2))
#define MCFR_RST	6		/* Reset MTC registers */
#define MCFR_RST_OR	(1 << MCFR_RST)
#define MCFR_RPGS	7		/* Register Page Selection */
#define MCFR_RPGS_OR	(1 << MCFR_RPGS)

/* Reference Register */
DEF_8BIT_REG_AT(MREF,0x60);
#define MREF_HFRQ0	0		/* Chopper frequency selection */
#define MREF_HFRQ0_OR	(1 << MREF_HFRQ0)
#define MREF_HFRQ1	1		/* Chopper frequency selection */
#define MREF_HFRQ1_OR	(1 << MREF_HFRQ1)
#define MREF_HFRQ2	2		/* Chopper frequency selection */
#define MREF_HFRQ2_OR	(1 << MREF_HFRQ2)
#define MREF_HFRQ_OR	((1 << MREF_HFRQ0)|(1 << MREF_HFRQ1)\
		|(1 << MREF_HFRQ2))
#define MREF_HFE0	3		/* Chopping mode selection */
#define MREF_HFE0_OR	(1 << MREF_HFE0)
#define MREF_HFE1	4		/* Chopping mode selection */
#define MREF_HFE1_OR	(1 << MREF_HFE1)
#define MREF_HFE_OR	((1 << MREF_HFE0)|(1 << MREF_HFE1))
#define MREF_CFAV	5		/* Current Feedback Amplifier entry Validation */
#define MREF_CFAV_OR	(1 << MREF_CFAV)
#define MREF_CL	6		/* Current Loop Comparator Value */
#define MREF_CL_OR	(1 << MREF_CL)
#define MREF_HST	7		/* Hysteresis Comparator Value */
#define MREF_HST_OR	(1 << MREF_HST)

/* PWM Control Register */
DEF_8BIT_REG_AT(MPCR,0x61);
#define MPCR_PCP0	0		/* PWM counter prescaler value */
#define MPCR_PCP0_OR	(1 << MPCR_PCP0)
#define MPCR_PCP1	1		/* PWM counter prescaler value */
#define MPCR_PCP1_OR	(1 << MPCR_PCP1)
#define MPCR_PCP2	2		/* PWM counter prescaler value */
#define MPCR_PCP2_OR	(1 << MPCR_PCP2)
#define MPCR_PCP_OR	((1 << MPCR_PCP0)|(1 << MPCR_PCP1)\
		|(1 << MPCR_PCP2))
#define MPCR_CMS	3		/* PWM Counter Mode Selection */
#define MPCR_CMS_OR	(1 << MPCR_CMS)
#define MPCR_OVFW	4		/* Phase W 100% duty cycle Selection */
#define MPCR_OVFW_OR	(1 << MPCR_OVFW)
#define MPCR_OVFV	5		/* Phase V 100% duty cycle Selection */
#define MPCR_OVFV_OR	(1 << MPCR_OVFV)
#define MPCR_OVFU	6		/* Phase U 100% duty cycle Selection */
#define MPCR_OVFU_OR	(1 << MPCR_OVFU)
#define MPCR_PMS	7		/* PWM Mode Selection */
#define MPCR_PMS_OR	(1 << MPCR_PMS)

/* Repetition Counter Register */
DEF_8BIT_REG_AT(MREP,0x62);

/* Compare Phase W Preload Register High */
DEF_8BIT_REG_AT(MCPWH,0x63);

/* Compare Phase W Preload Register Low */
DEF_8BIT_REG_AT(MCPWL,0x64);
#define MCPWL_CPWL3	3		/* Low bits of phase W preload value */
#define MCPWL_CPWL3_OR	(1 << MCPWL_CPWL3)
#define MCPWL_CPWL4	4		/* Low bits of phase W preload value */
#define MCPWL_CPWL4_OR	(1 << MCPWL_CPWL4)
#define MCPWL_CPWL5	5		/* Low bits of phase W preload value */
#define MCPWL_CPWL5_OR	(1 << MCPWL_CPWL5)
#define MCPWL_CPWL6	6		/* Low bits of phase W preload value */
#define MCPWL_CPWL6_OR	(1 << MCPWL_CPWL6)
#define MCPWL_CPWL7	7		/* Low bits of phase W preload value */
#define MCPWL_CPWL7_OR	(1 << MCPWL_CPWL7)
#define MCPWL_CPWL_OR	((1 << MCPWL_CPWL3)|(1 << MCPWL_CPWL4)\
		|(1 << MCPWL_CPWL5)|(1 << MCPWL_CPWL6)|(1 << MCPWL_CPWL7))

/* Compare Phase V Preload Register High */
DEF_8BIT_REG_AT(MCPVH,0x65);

/* Compare Phase V Preload Register Low */
DEF_8BIT_REG_AT(MCPVL,0x66);
#define MCPVL_CPVL3	3		/* Low bits of phase V preload value */
#define MCPVL_CPVL3_OR	(1 << MCPVL_CPVL3)
#define MCPVL_CPVL4	4		/* Low bits of phase V preload value */
#define MCPVL_CPVL4_OR	(1 << MCPVL_CPVL4)
#define MCPVL_CPVL5	5		/* Low bits of phase V preload value */
#define MCPVL_CPVL5_OR	(1 << MCPVL_CPVL5)
#define MCPVL_CPVL6	6		/* Low bits of phase V preload value */
#define MCPVL_CPVL6_OR	(1 << MCPVL_CPVL6)
#define MCPVL_CPVL7	7		/* Low bits of phase V preload value */
#define MCPVL_CPVL7_OR	(1 << MCPVL_CPVL7)
#define MCPVL_CPVL_OR	((1 << MCPVL_CPVL3)|(1 << MCPVL_CPVL4)\
		|(1 << MCPVL_CPVL5)|(1 << MCPVL_CPVL6)|(1 << MCPVL_CPVL7))

/* Compare Phase U Preload Register High */
DEF_8BIT_REG_AT(MCPUH,0x67);

/* Compare Phase U Preload Register Low */
DEF_8BIT_REG_AT(MCPUL,0x68);
#define MCPUL_CPUL3	3		/* Low bits of phase U preload value */
#define MCPUL_CPUL3_OR	(1 << MCPUL_CPUL3)
#define MCPUL_CPUL4	4		/* Low bits of phase U preload value */
#define MCPUL_CPUL4_OR	(1 << MCPUL_CPUL4)
#define MCPUL_CPUL5	5		/* Low bits of phase U preload value */
#define MCPUL_CPUL5_OR	(1 << MCPUL_CPUL5)
#define MCPUL_CPUL6	6		/* Low bits of phase U preload value */
#define MCPUL_CPUL6_OR	(1 << MCPUL_CPUL6)
#define MCPUL_CPUL7	7		/* Low bits of phase U preload value */
#define MCPUL_CPUL7_OR	(1 << MCPUL_CPUL7)
#define MCPUL_CPUL_OR	((1 << MCPUL_CPUL3)|(1 << MCPUL_CPUL4)\
		|(1 << MCPUL_CPUL5)|(1 << MCPUL_CPUL6)|(1 << MCPUL_CPUL7))

/* Compare Phase O Preload Register High */
DEF_8BIT_REG_AT(MCP0H,0x69);
#define MCP0H_CP0H0	1		/* Most Significant Bits of Compare 0 preload value */
#define MCP0H_CP0H0_OR	(1 << MCP0H_CP0H0)
#define MCP0H_CP0H1	2		/* Most Significant Bits of Compare 0 preload value */
#define MCP0H_CP0H1_OR	(1 << MCP0H_CP0H1)
#define MCP0H_CP0H2	3		/* Most Significant Bits of Compare 0 preload value */
#define MCP0H_CP0H2_OR	(1 << MCP0H_CP0H2)
#define MCP0H_CP0H3	4		/* Most Significant Bits of Compare 0 preload value */
#define MCP0H_CP0H3_OR	(1 << MCP0H_CP0H3)
#define MCP0H_CP0H_OR	((1 << MCP0H_CP0H0)|(1 << MCP0H_CP0H1)\
		|(1 << MCP0H_CP0H2)|(1 << MCP0H_CP0H3))

/* Compare Phase O Preload Register Low */
DEF_8BIT_REG_AT(MCP0L,0x6a);

/* Pwm Auto-Reload Timer (ART) */
/*****************************************************************/

/* Duty Cycle Register 3 */
DEF_8BIT_REG_AT(PWMDCR3,0x74);

/* Duty Cycle Register 2 */
DEF_8BIT_REG_AT(PWMDCR2,0x75);

/* Duty Cycle Register 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x76);

/* Duty Cycle Register 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x77);

/* PWM Control Register */
DEF_8BIT_REG_AT(PWMCR,0x78);
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
DEF_8BIT_REG_AT(ARTCSR,0x79);
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
DEF_8BIT_REG_AT(ARTCAR,0x7a);

/* ART Auto-Reload Register */
DEF_8BIT_REG_AT(ARTARR,0x7b);

/* ART Input Capture Control/Status Register */
DEF_8BIT_REG_AT(ARTICCSR,0x7c);
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
DEF_8BIT_REG_AT(ARTICR1,0x7d);

/* ART Input Capture Register 2 */
DEF_8BIT_REG_AT(ARTICR2,0x7e);

/* Operational Amplifier (OA) */
/*****************************************************************/

/* Control/Status Register */
DEF_8BIT_REG_AT(OACSR,0x7f);
#define OACSR_HIGHGAIN	3		/* Gain range selection */
#define OACSR_HIGHGAIN_OR	(1 << OACSR_HIGHGAIN)
#define OACSR_OAON	4		/* Amplifier On */
#define OACSR_OAON_OR	(1 << OACSR_OAON)
#define OACSR_AVGCMP	5		/* Average Compensation */
#define OACSR_AVGCMP_OR	(1 << OACSR_AVGCMP)
#define OACSR_OFFCMP	6		/* Offset Compensation */
#define OACSR_OFFCMP_OR	(1 << OACSR_OFFCMP)
#define OACSR_CMPOVR	7		/* Compensation Completed */
#define OACSR_CMPOVR_OR	(1 << OACSR_CMPOVR)

#endif /* __ST7FMC1K4__ */
