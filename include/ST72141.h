/* ST72141.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72141__
#define __ST72141__

/* ST72141 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72141 1
		#if (MCU_NAME != ST72141)
		#error "wrong include file ST72141.h for chosen MCU!"
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
DEF_8BIT_REG_AT(PBDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x05);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x06);

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x20);
#define MISCR_SMS	0		/* Slow Mode Select */
#define MISCR_SMS_OR	(1 << MISCR_SMS)
#define MISCR_IS00	1		/* EI1: PB External Interrupt sensitivity */
#define MISCR_IS00_OR	(1 << MISCR_IS00)
#define MISCR_IS01	2		/* EI1: PB External Interrupt sensitivity */
#define MISCR_IS01_OR	(1 << MISCR_IS01)
#define MISCR_IS0_OR	((1 << MISCR_IS00)|(1 << MISCR_IS01))
#define MISCR_IS10	3		/* EI0: PA External Interrupt sensitivity */
#define MISCR_IS10_OR	(1 << MISCR_IS10)
#define MISCR_IS11	4		/* EI0: PA External Interrupt sensitivity */
#define MISCR_IS11_OR	(1 << MISCR_IS11)
#define MISCR_IS1_OR	((1 << MISCR_IS10)|(1 << MISCR_IS11))
#define MISCR_SSI	5		/* /SS Internal mode */
#define MISCR_SSI_OR	(1 << MISCR_SSI)
#define MISCR_SSM	6		/* /SS Mode Selection */
#define MISCR_SSM_OR	(1 << MISCR_SSM)
#define MISCR_XT16	7		/* MTC & SPI Clock Selection */
#define MISCR_XT16_OR	(1 << MISCR_XT16)

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
#define SPICR_SPR_OR	((1 << SPICR_SPR0)|(1 << SPICR_SPR1))
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

/* Status Register */
DEF_8BIT_REG_AT(SPISR,0x23);

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

/* Status Register */
DEF_8BIT_REG_AT(WDGSR,0x25);
#define WDGSR_WDOGF	0		/* WDOGF Flag */
#define WDGSR_WDOGF_OR	(1 << WDGSR_WDOGF)

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
DEF_8BIT_REG_AT(TASR,0x33);
#define TASR_OCF2	3		/* Output Compare Flag 2 */
#define TASR_OCF2_OR	(1 << TASR_OCF2)
#define TASR_ICF2	4		/* Input Capture Flag 2 */
#define TASR_ICF2_OR	(1 << TASR_ICF2)
#define TASR_TOF	5		/* Timer Overflow */
#define TASR_TOF_OR	(1 << TASR_TOF)
#define TASR_OCF1	6		/* Output Compare Flag 1 */
#define TASR_OCF1_OR	(1 << TASR_OCF1)
#define TASR_ICF1	7		/* Input Capture Flag 1 */
#define TASR_ICF1_OR	(1 << TASR_ICF1)

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
DEF_8BIT_REG_AT(TBSR,0x43);
#define TBSR_OCF2	3		/* Output Compare Flag 2 */
#define TBSR_OCF2_OR	(1 << TBSR_OCF2)
#define TBSR_ICF2	4		/* Input Capture Flag 2 */
#define TBSR_ICF2_OR	(1 << TBSR_ICF2)
#define TBSR_TOF	5		/* Timer Overflow */
#define TBSR_TOF_OR	(1 << TBSR_TOF)
#define TBSR_OCF1	6		/* Output Compare Flag 1 */
#define TBSR_OCF1_OR	(1 << TBSR_OCF1)
#define TBSR_ICF1	7		/* Input Capture Flag 1 */
#define TBSR_ICF1_OR	(1 << TBSR_ICF1)

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

/* Motor Control */
/*****************************************************************/

/* Timer Counter Register */
DEF_8BIT_REG_AT(MTIM,0x60);

/* Zn-1 Capture Register */
DEF_8BIT_REG_AT(MZPRV,0x61);

/* Zn Capture Register */
DEF_8BIT_REG_AT(MZREG,0x62);

/* Cn+1 Compare Register */
DEF_8BIT_REG_AT(MCOMP,0x63);

/* Demagnetization Capture/Compare Register */
DEF_8BIT_REG_AT(MDREG,0x64);

/* Weight Register */
DEF_8BIT_REG_AT(MWGHT,0x65);

/* Prescaler & Ratio Register */
DEF_8BIT_REG_AT(MPRSR,0x66);
#define MPRSR_ST0	0		/* Step Ratio */
#define MPRSR_ST0_OR	(1 << MPRSR_ST0)
#define MPRSR_ST1	1		/* Step Ratio */
#define MPRSR_ST1_OR	(1 << MPRSR_ST1)
#define MPRSR_ST2	2		/* Step Ratio */
#define MPRSR_ST2_OR	(1 << MPRSR_ST2)
#define MPRSR_ST3	3		/* Step Ratio */
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
DEF_8BIT_REG_AT(MIMR,0x67);
#define MIMR_CIM	0		/* Commutation Interrupt Mask bit */
#define MIMR_CIM_OR	(1 << MIMR_CIM)
#define MIMR_DIM	1		/* End Of Demagnetization Interrupt Mask bit */
#define MIMR_DIM_OR	(1 << MIMR_DIM)
#define MIMR_ZIM	2		/* Back EMF Zero-crossing Interrupt Mask bit */
#define MIMR_ZIM_OR	(1 << MIMR_ZIM)
#define MIMR_EIM	3		/* Emergency Stop Interrupt Mask bit */
#define MIMR_EIM_OR	(1 << MIMR_EIM)
#define MIMR_OIM	4		/* Multiplier Overflow Interrupt Mask bit */
#define MIMR_OIM_OR	(1 << MIMR_OIM)
#define MIMR_RIM	5		/* Ratio update Interrupt Mask bit */
#define MIMR_RIM_OR	(1 << MIMR_RIM)
#define MIMR_CL	6		/* Current Loop Comparator Value */
#define MIMR_CL_OR	(1 << MIMR_CL)
#define MIMR_HST	7		/* Hysteresis Comparator Value */
#define MIMR_HST_OR	(1 << MIMR_HST)

/* Interrupt Status Register */
DEF_8BIT_REG_AT(MISR,0x68);
#define MISR_CI	0		/* Commutation Interrupt flag */
#define MISR_CI_OR	(1 << MISR_CI)
#define MISR_DI	1		/* End of Demagnetization Interrupt flag */
#define MISR_DI_OR	(1 << MISR_DI)
#define MISR_ZI	2		/* BEMF Zero-crossing Interrupt flag */
#define MISR_ZI_OR	(1 << MISR_ZI)
#define MISR_EI	3		/* Emergency Stop Interrupt flag */
#define MISR_EI_OR	(1 << MISR_EI)
#define MISR_OI	4		/* Multiplier Overflow Interrupt flag */
#define MISR_OI_OR	(1 << MISR_OI)
#define MISR_RMI	5		/* Ratio Decrement Interrupt flag */
#define MISR_RMI_OR	(1 << MISR_RMI)
#define MISR_RPI	6		/* Ratio Increment Interrupt flag */
#define MISR_RPI_OR	(1 << MISR_RPI)

/* Control Register A */
DEF_8BIT_REG_AT(MCRA,0x69);
#define MCRA_DCB	0		/* Data Capture bit */
#define MCRA_DCB_OR	(1 << MCRA_DCB)
#define MCRA_CFF	1		/* Current Feedback Filter */
#define MCRA_CFF_OR	(1 << MCRA_CFF)
#define MCRA_SWA	2		/* Switched/Autoswitched Mode */
#define MCRA_SWA_OR	(1 << MCRA_SWA)
#define MCRA_V0C1	3		/* Voltage/Current Mode */
#define MCRA_V0C1_OR	(1 << MCRA_V0C1)
#define MCRA_DAC	4		/* Direct Access to phase state Register */
#define MCRA_DAC_OR	(1 << MCRA_DAC)
#define MCRA_SR	5		/* Sensor ON/Off */
#define MCRA_SR_OR	(1 << MCRA_SR)
#define MCRA_RST	6		/* Reset MTC Register */
#define MCRA_RST_OR	(1 << MCRA_RST)
#define MCRA_MOE	7		/* Output Enable bit */
#define MCRA_MOE_OR	(1 << MCRA_MOE)

/* Control Register B */
DEF_8BIT_REG_AT(MCRB,0x6a);
#define MCRB_OS0	0		/* Operating Output Mode Selection bit */
#define MCRB_OS0_OR	(1 << MCRB_OS0)
#define MCRB_OS1	1		/* Operating Output Mode Selection bit */
#define MCRB_OS1_OR	(1 << MCRB_OS1)
#define MCRB_OS_OR	((1 << MCRB_OS0)|(1 << MCRB_OS1))
#define MCRB_OS2	2		/* Operating Output Mode Selection bit */
#define MCRB_OS2_OR	(1 << MCRB_OS2)
#define MCRB_SDM	3		/* Software Demagnetization event Mask bit */
#define MCRB_SDM_OR	(1 << MCRB_SDM)
#define MCRB_HDM	4		/* Hardware Demagnetization event Mask bit */
#define MCRB_HDM_OR	(1 << MCRB_HDM)
#define MCRB_CPB	5		/* Compare bit for Zero-crossing detection */
#define MCRB_CPB_OR	(1 << MCRB_CPB)
#define MCRB_VR0	6		/* BEMF/demagnetization Reference threshold */
#define MCRB_VR0_OR	(1 << MCRB_VR0)
#define MCRB_VR1	7		/* BEMF/demagnetization Reference threshold */
#define MCRB_VR1_OR	(1 << MCRB_VR1)
#define MCRB_VR_OR	((1 << MCRB_VR0)|(1 << MCRB_VR1))

/* Phase State Register */
DEF_8BIT_REG_AT(MPHST,0x6b);
#define MPHST_OO0	0		/* Output Channel 0 On/Off bits */
#define MPHST_OO0_OR	(1 << MPHST_OO0)
#define MPHST_OO1	1		/* Output Channel 1 On/Off bits */
#define MPHST_OO1_OR	(1 << MPHST_OO1)
#define MPHST_OO2	2		/* Output Channel 2 On/Off bits */
#define MPHST_OO2_OR	(1 << MPHST_OO2)
#define MPHST_OO3	3		/* Output Channel 3 On/Off bits */
#define MPHST_OO3_OR	(1 << MPHST_OO3)
#define MPHST_OO4	4		/* Output Channel 4 On/Off bits */
#define MPHST_OO4_OR	(1 << MPHST_OO4)
#define MPHST_OO5	5		/* Output Channel 5 On/Off bits */
#define MPHST_OO5_OR	(1 << MPHST_OO5)
#define MPHST_IS0	6		/* Input Selection bits */
#define MPHST_IS0_OR	(1 << MPHST_IS0)
#define MPHST_IS1	7		/* Input Selection bits */
#define MPHST_IS1_OR	(1 << MPHST_IS1)
#define MPHST_IS_OR	((1 << MPHST_IS0)|(1 << MPHST_IS1))

/* Output State Register */
DEF_8BIT_REG_AT(MPAR,0x6c);
#define MPAR_OE0	0		/* Output 0 Parity Mode */
#define MPAR_OE0_OR	(1 << MPAR_OE0)
#define MPAR_OE1	1		/* Output 1 Parity Mode */
#define MPAR_OE1_OR	(1 << MPAR_OE1)
#define MPAR_OE2	2		/* Output 2 Parity Mode */
#define MPAR_OE2_OR	(1 << MPAR_OE2)
#define MPAR_OE3	3		/* Output 3 Parity Mode */
#define MPAR_OE3_OR	(1 << MPAR_OE3)
#define MPAR_OE4	4		/* Output 4 Parity Mode */
#define MPAR_OE4_OR	(1 << MPAR_OE4)
#define MPAR_OE5	5		/* Output 5 Parity Mode */
#define MPAR_OE5_OR	(1 << MPAR_OE5)
#define MPAR_REO	6		/* Read on Even or Odd channel bit */
#define MPAR_REO_OR	(1 << MPAR_REO)
#define MPAR_ZVD	7		/* Zero-crossing & Demagnetization edge polarity */
#define MPAR_ZVD_OR	(1 << MPAR_ZVD)

/* Output Polarity Register */
DEF_8BIT_REG_AT(MPOL,0x6d);
#define MPOL_MPOL0	0		/* Output channel 0 Polarity */
#define MPOL_MPOL0_OR	(1 << MPOL_MPOL0)
#define MPOL_MPOL1	1		/* Output channel 1 Polarity */
#define MPOL_MPOL1_OR	(1 << MPOL_MPOL1)
#define MPOL_MPOL2	2		/* Output channel 2 Polarity */
#define MPOL_MPOL2_OR	(1 << MPOL_MPOL2)
#define MPOL_MPOL3	3		/* Output channel 3 Polarity */
#define MPOL_MPOL3_OR	(1 << MPOL_MPOL3)
#define MPOL_MPOL4	4		/* Output channel 4 Polarity */
#define MPOL_MPOL4_OR	(1 << MPOL_MPOL4)
#define MPOL_MPOL5	5		/* Output channel 5 Polarity */
#define MPOL_MPOL5_OR	(1 << MPOL_MPOL5)
#define MPOL_OT0	6		/* Off Time Selection */
#define MPOL_OT0_OR	(1 << MPOL_OT0)
#define MPOL_OT1	7		/* Off Time Selection */
#define MPOL_OT1_OR	(1 << MPOL_OT1)
#define MPOL_OT_OR	((1 << MPOL_OT0)|(1 << MPOL_OT1))

/* 8-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(ADCDR,0x70);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x71);
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

#endif /* __ST72141__ */
