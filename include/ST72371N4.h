/* ST72371N4.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72371N4__
#define __ST72371N4__

/* ST72371N4 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72371N4 1
		#if (MCU_NAME != ST72371N4)
		#error "wrong include file ST72371N4.h for chosen MCU!"
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

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x02);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x03);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x05);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x06);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x07);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x08);

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x09);
#define MISCR_POC0	0		/* PWM/BRM Output Configuration Bit */
#define MISCR_POC0_OR	(1 << MISCR_POC0)
#define MISCR_SMS	5		/* Slow Mode Select */
#define MISCR_SMS_OR	(1 << MISCR_SMS)

/* 8-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(ADCDR,0x0a);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x0b);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH2	2		/* Channel Selection */
#define ADCCSR_CH2_OR	(1 << ADCCSR_CH2)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2))
#define ADCCSR_ADON	5		/* A/D Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x0c);
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

/* Interrupt Register */
/*****************************************************************/

/* Interrupt Register */
DEF_8BIT_REG_AT(ITRFRE,0x10);
#define ITRFRE_EI0ITE	3		/* Interrupt Bit */
#define ITRFRE_EI0ITE_OR	(1 << ITRFRE_EI0ITE)
#define ITRFRE_EI0F	7		/* Falling Edge Detector Flag */
#define ITRFRE_EI0F_OR	(1 << ITRFRE_EI0F)

/* 16-Bit Timer */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TCR2,0x11);
#define TCR2_EXEDG	0		/* External Clock Edge */
#define TCR2_EXEDG_OR	(1 << TCR2_EXEDG)
#define TCR2_IEDG2	1		/* Input Edge 2 */
#define TCR2_IEDG2_OR	(1 << TCR2_IEDG2)
#define TCR2_CC0	2		/* Clock Control */
#define TCR2_CC0_OR	(1 << TCR2_CC0)
#define TCR2_CC1	3		/* Clock Control */
#define TCR2_CC1_OR	(1 << TCR2_CC1)
#define TCR2_CC_OR	((1 << TCR2_CC0)|(1 << TCR2_CC1))
#define TCR2_PWM	4		/* Pulse Width Modulation */
#define TCR2_PWM_OR	(1 << TCR2_PWM)
#define TCR2_OPM	5		/* One Pulse Mode */
#define TCR2_OPM_OR	(1 << TCR2_OPM)
#define TCR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TCR2_OC2E_OR	(1 << TCR2_OC2E)
#define TCR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TCR2_OC1E_OR	(1 << TCR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TCR1,0x12);
#define TCR1_OLVL1	0		/* Output Level 1 */
#define TCR1_OLVL1_OR	(1 << TCR1_OLVL1)
#define TCR1_IEDG1	1		/* Input Edge 1 */
#define TCR1_IEDG1_OR	(1 << TCR1_IEDG1)
#define TCR1_OLVL2	2		/* Output Level 2 */
#define TCR1_OLVL2_OR	(1 << TCR1_OLVL2)
#define TCR1_FOLV1	3		/* Forced Output Compare 1 */
#define TCR1_FOLV1_OR	(1 << TCR1_FOLV1)
#define TCR1_FOLV2	4		/* Forced Output Compare 2 */
#define TCR1_FOLV2_OR	(1 << TCR1_FOLV2)
#define TCR1_TOIE	5		/* Timer Overflow Interrupt */
#define TCR1_TOIE_OR	(1 << TCR1_TOIE)
#define TCR1_OCIE	6		/* Output Compare Interrupt */
#define TCR1_OCIE_OR	(1 << TCR1_OCIE)
#define TCR1_ICIE	7		/* Input Capture Interrupt */
#define TCR1_ICIE_OR	(1 << TCR1_ICIE)

/* Status Register */
DEF_8BIT_REG_AT(TSR,0x13);
#define TSR_OCF2	3		/* Output Compare Flag 2 */
#define TSR_OCF2_OR	(1 << TSR_OCF2)
#define TSR_ICF2	4		/* Input Capture Flag 2 */
#define TSR_ICF2_OR	(1 << TSR_ICF2)
#define TSR_TOF	5		/* Timer Overflow */
#define TSR_TOF_OR	(1 << TSR_TOF)
#define TSR_OCF1	6		/* Output Compare Flag 1 */
#define TSR_OCF1_OR	(1 << TSR_OCF1)
#define TSR_ICF1	7		/* Input Capture Flag 1 */
#define TSR_ICF1_OR	(1 << TSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TIC1R,0x14);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TIC1HR,0x14);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TIC1LR,0x15);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TOC1R,0x16);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TOC1HR,0x16);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TOC1LR,0x17);

/* Counter Register */
DEF_16BIT_REG_AT(TCR,0x18);
/* Counter High Register */
DEF_8BIT_REG_AT(TCHR,0x18);
/* Counter Low Register */
DEF_8BIT_REG_AT(TCLR,0x19);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TACR,0x1a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x1a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x1b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TIC2R,0x1c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TIC2HR,0x1c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TIC2LR,0x1d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TOC2R,0x1e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TOC2HR,0x1e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TOC2LR,0x1f);

/* D/A Converter (DAC) with PWM outputs */
/*****************************************************************/

/* Channel 0 PWM Register */
DEF_8BIT_REG_AT(PWM0,0x22);
#define PWM0_POL	6		/* Polarity Bit */
#define PWM0_POL_OR	(1 << PWM0_POL)
#define PWM0_P0	0		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P0_OR	(1 << PWM0_P0)
#define PWM0_P1	1		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P1_OR	(1 << PWM0_P1)
#define PWM0_P2	2		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P2_OR	(1 << PWM0_P2)
#define PWM0_P3	3		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P3_OR	(1 << PWM0_P3)
#define PWM0_P4	4		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P4_OR	(1 << PWM0_P4)
#define PWM0_P5	5		/* Pulse Binary Weight for Channel 0 */
#define PWM0_P5_OR	(1 << PWM0_P5)
#define PWM0_P_OR	((1 << PWM0_P0)|(1 << PWM0_P1)|(1 << PWM0_P2)\
		|(1 << PWM0_P3)|(1 << PWM0_P4)|(1 << PWM0_P5))

/* Channel 0 BRM Register */
DEF_8BIT_REG_AT(BRM0,0x23);
#define BRM0_B0	0		/* BRM Bits (Channel 0) */
#define BRM0_B0_OR	(1 << BRM0_B0)
#define BRM0_B1	1		/* BRM Bits (Channel 0) */
#define BRM0_B1_OR	(1 << BRM0_B1)
#define BRM0_B2	2		/* BRM Bits (Channel 0) */
#define BRM0_B2_OR	(1 << BRM0_B2)
#define BRM0_B3	3		/* BRM Bits (Channel 0) */
#define BRM0_B3_OR	(1 << BRM0_B3)
#define BRM0_B4	4		/* BRM Bits (Channel 0) */
#define BRM0_B4_OR	(1 << BRM0_B4)
#define BRM0_B5	5		/* BRM Bits (Channel 0) */
#define BRM0_B5_OR	(1 << BRM0_B5)
#define BRM0_B_OR	((1 << BRM0_B0)|(1 << BRM0_B1)|(1 << BRM0_B2)\
		|(1 << BRM0_B3)|(1 << BRM0_B4)|(1 << BRM0_B5))

/* Channel 1 PWM Register */
DEF_8BIT_REG_AT(PWM1,0x24);
#define PWM1_POL	6		/* Polarity Bit */
#define PWM1_POL_OR	(1 << PWM1_POL)
#define PWM1_P0	0		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P0_OR	(1 << PWM1_P0)
#define PWM1_P1	1		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P1_OR	(1 << PWM1_P1)
#define PWM1_P2	2		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P2_OR	(1 << PWM1_P2)
#define PWM1_P3	3		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P3_OR	(1 << PWM1_P3)
#define PWM1_P4	4		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P4_OR	(1 << PWM1_P4)
#define PWM1_P5	5		/* Pulse Binary Weight for Channel 1 */
#define PWM1_P5_OR	(1 << PWM1_P5)
#define PWM1_P_OR	((1 << PWM1_P0)|(1 << PWM1_P1)|(1 << PWM1_P2)\
		|(1 << PWM1_P3)|(1 << PWM1_P4)|(1 << PWM1_P5))

/* Channel 2+1 BRM Register */
DEF_8BIT_REG_AT(BRM21,0x25);
#define BRM21_B4	4		/* BRM Bits (Channel 2) */
#define BRM21_B4_OR	(1 << BRM21_B4)
#define BRM21_B5	5		/* BRM Bits (Channel 2) */
#define BRM21_B5_OR	(1 << BRM21_B5)
#define BRM21_B6	6		/* BRM Bits (Channel 2) */
#define BRM21_B6_OR	(1 << BRM21_B6)
#define BRM21_B7	7		/* BRM Bits (Channel 2) */
#define BRM21_B7_OR	(1 << BRM21_B7)
#define BRM21_B_4_7_OR	((1 << BRM21_B4)|(1 << BRM21_B5)\
		|(1 << BRM21_B6)|(1 << BRM21_B7))
#define BRM21_B0	0		/* BRM Bits (Channel 1) */
#define BRM21_B0_OR	(1 << BRM21_B0)
#define BRM21_B1	1		/* BRM Bits (Channel 1) */
#define BRM21_B1_OR	(1 << BRM21_B1)
#define BRM21_B2	2		/* BRM Bits (Channel 1) */
#define BRM21_B2_OR	(1 << BRM21_B2)
#define BRM21_B3	3		/* BRM Bits (Channel 1) */
#define BRM21_B3_OR	(1 << BRM21_B3)
#define BRM21_B_0_3_OR	((1 << BRM21_B0)|(1 << BRM21_B1)\
		|(1 << BRM21_B2)|(1 << BRM21_B3))

/* Channel 2 PWM Register */
DEF_8BIT_REG_AT(PWM2,0x26);
#define PWM2_POL	6		/* Polarity Bit */
#define PWM2_POL_OR	(1 << PWM2_POL)
#define PWM2_P0	0		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P0_OR	(1 << PWM2_P0)
#define PWM2_P1	1		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P1_OR	(1 << PWM2_P1)
#define PWM2_P2	2		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P2_OR	(1 << PWM2_P2)
#define PWM2_P3	3		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P3_OR	(1 << PWM2_P3)
#define PWM2_P4	4		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P4_OR	(1 << PWM2_P4)
#define PWM2_P5	5		/* Pulse Binary Weight for Channel 2 */
#define PWM2_P5_OR	(1 << PWM2_P5)
#define PWM2_P_OR	((1 << PWM2_P0)|(1 << PWM2_P1)|(1 << PWM2_P2)\
		|(1 << PWM2_P3)|(1 << PWM2_P4)|(1 << PWM2_P5))

/* Channel 3 PWM Register */
DEF_8BIT_REG_AT(PWM3,0x27);
#define PWM3_POL	6		/* Polarity Bit */
#define PWM3_POL_OR	(1 << PWM3_POL)
#define PWM3_P0	0		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P0_OR	(1 << PWM3_P0)
#define PWM3_P1	1		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P1_OR	(1 << PWM3_P1)
#define PWM3_P2	2		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P2_OR	(1 << PWM3_P2)
#define PWM3_P3	3		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P3_OR	(1 << PWM3_P3)
#define PWM3_P4	4		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P4_OR	(1 << PWM3_P4)
#define PWM3_P5	5		/* Pulse Binary Weight for Channel 3 */
#define PWM3_P5_OR	(1 << PWM3_P5)
#define PWM3_P_OR	((1 << PWM3_P0)|(1 << PWM3_P1)|(1 << PWM3_P2)\
		|(1 << PWM3_P3)|(1 << PWM3_P4)|(1 << PWM3_P5))

/* Channel 4+3 BRM Register */
DEF_8BIT_REG_AT(BRM43,0x28);
#define BRM43_B4	4		/* BRM Bits (Channel 4) */
#define BRM43_B4_OR	(1 << BRM43_B4)
#define BRM43_B5	5		/* BRM Bits (Channel 4) */
#define BRM43_B5_OR	(1 << BRM43_B5)
#define BRM43_B6	6		/* BRM Bits (Channel 4) */
#define BRM43_B6_OR	(1 << BRM43_B6)
#define BRM43_B7	7		/* BRM Bits (Channel 4) */
#define BRM43_B7_OR	(1 << BRM43_B7)
#define BRM43_B_4_7_OR	((1 << BRM43_B4)|(1 << BRM43_B5)\
		|(1 << BRM43_B6)|(1 << BRM43_B7))
#define BRM43_B0	0		/* BRM Bits (Channel 3) */
#define BRM43_B0_OR	(1 << BRM43_B0)
#define BRM43_B1	1		/* BRM Bits (Channel 3) */
#define BRM43_B1_OR	(1 << BRM43_B1)
#define BRM43_B2	2		/* BRM Bits (Channel 3) */
#define BRM43_B2_OR	(1 << BRM43_B2)
#define BRM43_B3	3		/* BRM Bits (Channel 3) */
#define BRM43_B3_OR	(1 << BRM43_B3)
#define BRM43_B_0_3_OR	((1 << BRM43_B0)|(1 << BRM43_B1)\
		|(1 << BRM43_B2)|(1 << BRM43_B3))

/* Channel 4 PWM Register */
DEF_8BIT_REG_AT(PWM4,0x29);
#define PWM4_POL	6		/* Polarity Bit */
#define PWM4_POL_OR	(1 << PWM4_POL)
#define PWM4_P0	0		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P0_OR	(1 << PWM4_P0)
#define PWM4_P1	1		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P1_OR	(1 << PWM4_P1)
#define PWM4_P2	2		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P2_OR	(1 << PWM4_P2)
#define PWM4_P3	3		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P3_OR	(1 << PWM4_P3)
#define PWM4_P4	4		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P4_OR	(1 << PWM4_P4)
#define PWM4_P5	5		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P5_OR	(1 << PWM4_P5)
#define PWM4_P_OR	((1 << PWM4_P0)|(1 << PWM4_P1)|(1 << PWM4_P2)\
		|(1 << PWM4_P3)|(1 << PWM4_P4)|(1 << PWM4_P5))

/* Serial Communications Interface (SCI) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x30);
#define SCISR_FE	1		/* Framing Error */
#define SCISR_FE_OR	(1 << SCISR_FE)
#define SCISR_NF	2		/* Noise Flag */
#define SCISR_NF_OR	(1 << SCISR_NF)
#define SCISR_OR	3		/* Overrun Error */
#define SCISR_OR_OR	(1 << SCISR_OR)
#define SCISR_IDLE	4		/* Idle line detect */
#define SCISR_IDLE_OR	(1 << SCISR_IDLE)
#define SCISR_RDRF	5		/* Received Data Ready Flag */
#define SCISR_RDRF_OR	(1 << SCISR_RDRF)
#define SCISR_TC	6		/* Transmission Complete */
#define SCISR_TC_OR	(1 << SCISR_TC)
#define SCISR_TDRE	7		/* Transmission Data Register Empty */
#define SCISR_TDRE_OR	(1 << SCISR_TDRE)

/* Data Register */
DEF_8BIT_REG_AT(SCIDR,0x31);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x32);
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

/* Control Register 1 */
DEF_8BIT_REG_AT(SCICR1,0x33);
#define SCICR1_WAKE	3		/* Wake-up Method */
#define SCICR1_WAKE_OR	(1 << SCICR1_WAKE)
#define SCICR1_M	4		/* Word Length */
#define SCICR1_M_OR	(1 << SCICR1_M)
#define SCICR1_T8	6		/* Transmit Data Bit 8 */
#define SCICR1_T8_OR	(1 << SCICR1_T8)
#define SCICR1_R8	7		/* Receive Data Bit 8 */
#define SCICR1_R8_OR	(1 << SCICR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCICR2,0x34);
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

/* ICAP Pin Configuration */
/*****************************************************************/

/* ICAP Pin Configuration Register */
DEF_8BIT_REG_AT(CONFIG,0x43);
#define CONFIG_ICAP1	3		/* Input Capture 1 Pin */
#define CONFIG_ICAP1_OR	(1 << CONFIG_ICAP1)
#define CONFIG_ICAP2	2		/* Input Capture 2 Pin */
#define CONFIG_ICAP2_OR	(1 << CONFIG_ICAP2)

/* I2C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(I2CDR,0x59);

/* Own Address Register */
DEF_8BIT_REG_AT(I2COAR,0x5b);
#define I2COAR_ADD0	0		/* Address Direction Bit */
#define I2COAR_ADD0_OR	(1 << I2COAR_ADD0)
#define I2COAR_ADD1	1		/* Interface Address */
#define I2COAR_ADD1_OR	(1 << I2COAR_ADD1)
#define I2COAR_ADD2	2		/* Interface Address */
#define I2COAR_ADD2_OR	(1 << I2COAR_ADD2)
#define I2COAR_ADD3	3		/* Interface Address */
#define I2COAR_ADD3_OR	(1 << I2COAR_ADD3)
#define I2COAR_ADD4	4		/* Interface Address */
#define I2COAR_ADD4_OR	(1 << I2COAR_ADD4)
#define I2COAR_ADD5	5		/* Interface Address */
#define I2COAR_ADD5_OR	(1 << I2COAR_ADD5)
#define I2COAR_ADD6	6		/* Interface Address */
#define I2COAR_ADD6_OR	(1 << I2COAR_ADD6)
#define I2COAR_ADD7	7		/* Interface Address */
#define I2COAR_ADD7_OR	(1 << I2COAR_ADD7)
#define I2COAR_ADD_OR	((1 << I2COAR_ADD1)|(1 << I2COAR_ADD2)\
		|(1 << I2COAR_ADD3)|(1 << I2COAR_ADD4)|(1 << I2COAR_ADD5)\
		|(1 << I2COAR_ADD6)|(1 << I2COAR_ADD7))

/* Clock Control Register */
DEF_8BIT_REG_AT(I2CCCR,0x5c);
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

/* Status Register 2 */
DEF_8BIT_REG_AT(I2CSR2,0x5d);
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

/* Status Register 1 */
DEF_8BIT_REG_AT(I2CSR1,0x5e);
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

/* Control Register */
DEF_8BIT_REG_AT(I2CCR,0x5f);
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

#endif /* __ST72371N4__ */
