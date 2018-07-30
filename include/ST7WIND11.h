/* ST7WIND11.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7WIND11__
#define __ST7WIND11__

/* ST7WIND11 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7WIND11 1
		#if (MCU_NAME != ST7WIND11)
		#error "wrong include file ST7WIND11.h for chosen MCU!"
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

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x12);
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
DEF_8BIT_REG_AT(WDGCSR,0x13);
#define WDGCSR_WDGTF	1		/* Watchdog Timeout Flag */
#define WDGCSR_WDGTF_OR	(1 << WDGCSR_WDGTF)
#define WDGCSR_IE	0		/* Watchdog Interrupt Enable */
#define WDGCSR_IE_OR	(1 << WDGCSR_IE)

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x17);

/* Control Register */
DEF_8BIT_REG_AT(SPICR,0x18);
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

/* Status Register */
DEF_8BIT_REG_AT(SPISR,0x19);

/* 16-Bit Timer */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(T16CR2,0x1a);
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
DEF_8BIT_REG_AT(T16CR1,0x1b);
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
DEF_8BIT_REG_AT(T16CSR,0x1c);
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
DEF_16BIT_REG_AT(T16IC1R,0x1d);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(T16IC1HR,0x1d);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(T16IC1LR,0x1e);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(T16OC1R,0x1f);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TA16C1HR,0x1f);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TA16C1LR,0x20);

/* Counter Register */
DEF_16BIT_REG_AT(T16CR,0x21);
/* Counter High Register */
DEF_8BIT_REG_AT(T16CHR,0x21);
/* Counter Low Register */
DEF_8BIT_REG_AT(T16CLR,0x22);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(T16ACR,0x23);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(T16ACHR,0x23);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(T16ACLR,0x24);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(T16IC2R,0x25);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(T16IC2HR,0x25);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(T16IC2LR,0x26);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(T16OC2R,0x27);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(T16OC2HR,0x27);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(T16OC2LR,0x28);

/* TimeBase Unit (TBU) */
/*****************************************************************/

/* TBU Counter Value Register */
DEF_8BIT_REG_AT(TBUCV,0x29);
#define TBUCV_CV0	0		/* Counter Value */
#define TBUCV_CV0_OR	(1 << TBUCV_CV0)
#define TBUCV_CV1	1		/* Counter Value */
#define TBUCV_CV1_OR	(1 << TBUCV_CV1)
#define TBUCV_CV2	2		/* Counter Value */
#define TBUCV_CV2_OR	(1 << TBUCV_CV2)
#define TBUCV_CV3	3		/* Counter Value */
#define TBUCV_CV3_OR	(1 << TBUCV_CV3)
#define TBUCV_CV4	4		/* Counter Value */
#define TBUCV_CV4_OR	(1 << TBUCV_CV4)
#define TBUCV_CV5	5		/* Counter Value */
#define TBUCV_CV5_OR	(1 << TBUCV_CV5)
#define TBUCV_CV6	6		/* Counter Value */
#define TBUCV_CV6_OR	(1 << TBUCV_CV6)
#define TBUCV_CV7	7		/* Counter Value */
#define TBUCV_CV7_OR	(1 << TBUCV_CV7)
#define TBUCV_CV_OR	((1 << TBUCV_CV0)|(1 << TBUCV_CV1)\
		|(1 << TBUCV_CV2)|(1 << TBUCV_CV3)|(1 << TBUCV_CV4)|(1 << TBUCV_CV5)\
		|(1 << TBUCV_CV6)|(1 << TBUCV_CV7))

/* TBU Control/Status Register */
DEF_8BIT_REG_AT(TBUCSR,0x2a);

/* Clock Management */
/*****************************************************************/

/* Clock Management Control Register 0 */
DEF_8BIT_REG_AT(CMCR0,0x2c);
#define CMCR0_USB	0		/* USB clock enable */
#define CMCR0_USB_OR	(1 << CMCR0_USB)
#define CMCR0_T16	1		/* 16TIM clock enable */
#define CMCR0_T16_OR	(1 << CMCR0_T16)
#define CMCR0_SPI	2		/* SPI clock enable */
#define CMCR0_SPI_OR	(1 << CMCR0_SPI)
#define CMCR0_TBU	3		/* TBU clock enable */
#define CMCR0_TBU_OR	(1 << CMCR0_TBU)
#define CMCR0_RF_DSP	5		/* RF DSP clock enable */
#define CMCR0_RF_DSP_OR	(1 << CMCR0_RF_DSP)
#define CMCR0_RX	6		/* RX clock enable */
#define CMCR0_RX_OR	(1 << CMCR0_RX)

/* Clock Management Control Register 1 */
DEF_8BIT_REG_AT(CMCR1,0x2d);
#define CMCR1_DM	4		/* Debug Module clock enable */
#define CMCR1_DM_OR	(1 << CMCR1_DM)
#define CMCR1_PS2	5		/* PS2 clock enable */
#define CMCR1_PS2_OR	(1 << CMCR1_PS2)
#define CMCR1_MCO	7		/* Main clock out selection */
#define CMCR1_MCO_OR	(1 << CMCR1_MCO)

/* Clock Mode Register */
DEF_8BIT_REG_AT(CMR,0x2e);
#define CMR_SMS0	0		/* Slow Mode Select */
#define CMR_SMS0_OR	(1 << CMR_SMS0)
#define CMR_SMS1	1		/* Slow Mode Select */
#define CMR_SMS1_OR	(1 << CMR_SMS1)
#define CMR_SMS_OR	((1 << CMR_SMS0)|(1 << CMR_SMS1))
#define CMR_OSCEN	2		/* 12MHz oscillator enable */
#define CMR_OSCEN_OR	(1 << CMR_OSCEN)
#define CMR_RCEN	3		/* 6MHz RC enable */
#define CMR_RCEN_OR	(1 << CMR_RCEN)
#define CMR_OSC_RC	4		/* Oscillator / RC selection */
#define CMR_OSC_RC_OR	(1 << CMR_OSC_RC)
#define CMR_STAB	5		/* Stabilization flag */
#define CMR_STAB_OR	(1 << CMR_STAB)
#define CMR_ENCAL	6		/* ENCAL Enable Calibration */
#define CMR_ENCAL_OR	(1 << CMR_ENCAL)
#define CMR_CALF	7		/* CALF Calibration Flag */
#define CMR_CALF_OR	(1 << CMR_CALF)

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x30);
#define ISPR0_I0_0	0		/* Watchdog TLI Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* Watchdog TLI Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* USB end of suspend IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* USB end of suspend IT Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* Port A External IT / Auto Wake up from HALT Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* Port A External IT / Auto Wake up from HALT Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* Port B External IT Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* Port B External IT Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x32);
#define ISPR2_I0_8	0		/* PS2 & Port G External IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* PS2 & Port G External IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_10	4		/* USB IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* USB IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* Timer IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* Timer IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x33);
#define ISPR3_I0_12	0		/* TBU IT Priority Level */
#define ISPR3_I0_12_OR	(1 << ISPR3_I0_12)
#define ISPR3_I1_12	1		/* TBU IT Priority Level */
#define ISPR3_I1_12_OR	(1 << ISPR3_I1_12)
#define ISPR3_I_12_OR	((1 << ISPR3_I0_12)|(1 << ISPR3_I1_12))
#define ISPR3_I0_13	2		/* SPI IT Priority Level */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* SPI IT Priority Level */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* External Interrupt Control Register */
DEF_8BIT_REG_AT(EICR,0x34);
#define EICR_ISA0	0		/* Port A	Sensitivity */
#define EICR_ISA0_OR	(1 << EICR_ISA0)
#define EICR_ISA1	1		/* Port A	Sensitivity */
#define EICR_ISA1_OR	(1 << EICR_ISA1)
#define EICR_ISA_OR	((1 << EICR_ISA0)|(1 << EICR_ISA1))
#define EICR_ISB00	2		/* Port B(3:0) Sensitivity */
#define EICR_ISB00_OR	(1 << EICR_ISB00)
#define EICR_ISB01	3		/* Port B(3:0) Sensitivity */
#define EICR_ISB01_OR	(1 << EICR_ISB01)
#define EICR_ISB0_OR	((1 << EICR_ISB00)|(1 << EICR_ISB01))
#define EICR_ISB10	4		/* Port B(4) Sensitivity */
#define EICR_ISB10_OR	(1 << EICR_ISB10)
#define EICR_ISB11	5		/* Port B(4) Sensitivity */
#define EICR_ISB11_OR	(1 << EICR_ISB11)
#define EICR_ISB1_OR	((1 << EICR_ISB10)|(1 << EICR_ISB11))

/* Port A External Interrupt Enable Register */
DEF_8BIT_REG_AT(PAEIENR,0x35);
#define PAEIENR_IT0E	0		/* ITxE Port A interrupt enable */
#define PAEIENR_IT0E_OR	(1 << PAEIENR_IT0E)
#define PAEIENR_IT1E	1		/* ITxE Port A interrupt enable */
#define PAEIENR_IT1E_OR	(1 << PAEIENR_IT1E)
#define PAEIENR_IT2E	2		/* ITxE Port A interrupt enable */
#define PAEIENR_IT2E_OR	(1 << PAEIENR_IT2E)
#define PAEIENR_IT3E	3		/* ITxE Port A interrupt enable */
#define PAEIENR_IT3E_OR	(1 << PAEIENR_IT3E)
#define PAEIENR_IT4E	4		/* ITxE Port A interrupt enable */
#define PAEIENR_IT4E_OR	(1 << PAEIENR_IT4E)
#define PAEIENR_IT5E	5		/* ITxE Port A interrupt enable */
#define PAEIENR_IT5E_OR	(1 << PAEIENR_IT5E)
#define PAEIENR_IT6E	6		/* ITxE Port A interrupt enable */
#define PAEIENR_IT6E_OR	(1 << PAEIENR_IT6E)
#define PAEIENR_IT7E	7		/* ITxE Port A interrupt enable */
#define PAEIENR_IT7E_OR	(1 << PAEIENR_IT7E)
#define PAEIENR_ITE_OR	((1 << PAEIENR_IT0E)|(1 << PAEIENR_IT1E)\
		|(1 << PAEIENR_IT2E)|(1 << PAEIENR_IT3E)|(1 << PAEIENR_IT4E)\
		|(1 << PAEIENR_IT5E)|(1 << PAEIENR_IT6E)|(1 << PAEIENR_IT7E))

/* Port B External Interrupt Enable Register */
DEF_8BIT_REG_AT(PBEIENR,0x36);
#define PBEIENR_IT8E	0		/* ITxE Port B interrupt enable */
#define PBEIENR_IT8E_OR	(1 << PBEIENR_IT8E)
#define PBEIENR_IT9E	1		/* ITxE Port B interrupt enable */
#define PBEIENR_IT9E_OR	(1 << PBEIENR_IT9E)
#define PBEIENR_IT10E	2		/* ITxE Port B interrupt enable */
#define PBEIENR_IT10E_OR	(1 << PBEIENR_IT10E)
#define PBEIENR_IT11E	3		/* ITxE Port B interrupt enable */
#define PBEIENR_IT11E_OR	(1 << PBEIENR_IT11E)
#define PBEIENR_IT12E	4		/* ITxE Port B interrupt enable */
#define PBEIENR_IT12E_OR	(1 << PBEIENR_IT12E)
#define PBEIENR_IT13E	5		/* ITxE Port B interrupt enable */
#define PBEIENR_IT13E_OR	(1 << PBEIENR_IT13E)
#define PBEIENR_IT14E	6		/* ITxE Port B interrupt enable */
#define PBEIENR_IT14E_OR	(1 << PBEIENR_IT14E)
#define PBEIENR_IT15E	7		/* ITxE Port B interrupt enable */
#define PBEIENR_IT15E_OR	(1 << PBEIENR_IT15E)
#define PBEIENR_ITE_OR	((1 << PBEIENR_IT8E)|(1 << PBEIENR_IT9E)\
		|(1 << PBEIENR_IT10E)|(1 << PBEIENR_IT11E)|(1 << PBEIENR_IT12E)\
		|(1 << PBEIENR_IT13E)|(1 << PBEIENR_IT14E)\
		|(1 << PBEIENR_IT15E))

/* Port A External Interrupt Status Register */
DEF_8BIT_REG_AT(PAEISR,0x38);
#define PAEISR_IT0F	0		/* ITxF Port A interrupt flag */
#define PAEISR_IT0F_OR	(1 << PAEISR_IT0F)
#define PAEISR_IT1F	1		/* ITxF Port A interrupt flag */
#define PAEISR_IT1F_OR	(1 << PAEISR_IT1F)
#define PAEISR_IT2F	2		/* ITxF Port A interrupt flag */
#define PAEISR_IT2F_OR	(1 << PAEISR_IT2F)
#define PAEISR_IT3F	3		/* ITxF Port A interrupt flag */
#define PAEISR_IT3F_OR	(1 << PAEISR_IT3F)
#define PAEISR_IT4F	4		/* ITxF Port A interrupt flag */
#define PAEISR_IT4F_OR	(1 << PAEISR_IT4F)
#define PAEISR_IT5F	5		/* ITxF Port A interrupt flag */
#define PAEISR_IT5F_OR	(1 << PAEISR_IT5F)
#define PAEISR_IT6F	6		/* ITxF Port A interrupt flag */
#define PAEISR_IT6F_OR	(1 << PAEISR_IT6F)
#define PAEISR_IT7F	7		/* ITxF Port A interrupt flag */
#define PAEISR_IT7F_OR	(1 << PAEISR_IT7F)
#define PAEISR_ITF_OR	((1 << PAEISR_IT0F)|(1 << PAEISR_IT1F)\
		|(1 << PAEISR_IT2F)|(1 << PAEISR_IT3F)|(1 << PAEISR_IT4F)\
		|(1 << PAEISR_IT5F)|(1 << PAEISR_IT6F)|(1 << PAEISR_IT7F))

/* Port B External Interrupt Status Register */
DEF_8BIT_REG_AT(PBEISR,0x39);
#define PBEISR_IT8F	0		/* ITxF Port B interrupt flag */
#define PBEISR_IT8F_OR	(1 << PBEISR_IT8F)
#define PBEISR_IT9F	1		/* ITxF Port B interrupt flag */
#define PBEISR_IT9F_OR	(1 << PBEISR_IT9F)
#define PBEISR_IT10F	2		/* ITxF Port B interrupt flag */
#define PBEISR_IT10F_OR	(1 << PBEISR_IT10F)
#define PBEISR_IT11F	3		/* ITxF Port B interrupt flag */
#define PBEISR_IT11F_OR	(1 << PBEISR_IT11F)
#define PBEISR_IT12F	4		/* ITxF Port B interrupt flag */
#define PBEISR_IT12F_OR	(1 << PBEISR_IT12F)
#define PBEISR_IT13F	5		/* ITxF Port B interrupt flag */
#define PBEISR_IT13F_OR	(1 << PBEISR_IT13F)
#define PBEISR_IT14F	6		/* ITxF Port B interrupt flag */
#define PBEISR_IT14F_OR	(1 << PBEISR_IT14F)
#define PBEISR_IT15F	7		/* ITxF Port B interrupt flag */
#define PBEISR_IT15F_OR	(1 << PBEISR_IT15F)
#define PBEISR_ITF_OR	((1 << PBEISR_IT8F)|(1 << PBEISR_IT9F)\
		|(1 << PBEISR_IT10F)|(1 << PBEISR_IT11F)|(1 << PBEISR_IT12F)\
		|(1 << PBEISR_IT13F)|(1 << PBEISR_IT14F)|(1 << PBEISR_IT15F))

/* Port G External Interrupt Control Register */
DEF_8BIT_REG_AT(PGEICR,0x58);
#define PGEICR_ISG0	0		/* Port G	Sensitivity */
#define PGEICR_ISG0_OR	(1 << PGEICR_ISG0)
#define PGEICR_ISG1	1		/* Port G	Sensitivity */
#define PGEICR_ISG1_OR	(1 << PGEICR_ISG1)
#define PGEICR_ISG_OR	((1 << PGEICR_ISG0)|(1 << PGEICR_ISG1))

/* Port G External Interrupt Enable Register */
DEF_8BIT_REG_AT(PGEIENR,0x59);
#define PGEIENR_IT24E	0		/* IT24 External interrupt enable */
#define PGEIENR_IT24E_OR	(1 << PGEIENR_IT24E)
#define PGEIENR_IT25E	1		/* IT25 External interrupt enable */
#define PGEIENR_IT25E_OR	(1 << PGEIENR_IT25E)

/* Port G External Interrupt Status Register */
DEF_8BIT_REG_AT(PGEISR,0x5a);
#define PGEISR_IT24F	0		/* IT24 External interrupt flag */
#define PGEISR_IT24F_OR	(1 << PGEISR_IT24F)
#define PGEISR_IT25F	1		/* IT25 External interrupt flag */
#define PGEISR_IT25F_OR	(1 << PGEISR_IT25F)

/* Auto Wake Up */
/*****************************************************************/

/* Auto Wake Up from HALT Control/Status Register */
DEF_8BIT_REG_AT(AWUCSR,0x3b);
#define AWUCSR_AWUEN	0		/* Auto Wake Up from HALT mode enable */
#define AWUCSR_AWUEN_OR	(1 << AWUCSR_AWUEN)
#define AWUCSR_AWUM	1		/* Auto Wake Up Measurement */
#define AWUCSR_AWUM_OR	(1 << AWUCSR_AWUM)
#define AWUCSR_AWUF	2		/* Auto Wake Up Flag */
#define AWUCSR_AWUF_OR	(1 << AWUCSR_AWUF)

/* Auto Wake Up from HALT prescaler Register */
DEF_8BIT_REG_AT(AWUPR,0x3c);
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

/* USB  */
/*****************************************************************/

/* Interrupt Status Register */
DEF_8BIT_REG_AT(USBISTR,0x3d);
#define USBISTR_SOF	0		/* Start Of Frame */
#define USBISTR_SOF_OR	(1 << USBISTR_SOF)
#define USBISTR_RESET	1		/* USB Reset */
#define USBISTR_RESET_OR	(1 << USBISTR_RESET)
#define USBISTR_ESUSP	2		/* End Suspend Mode */
#define USBISTR_ESUSP_OR	(1 << USBISTR_ESUSP)
#define USBISTR_SUSP	3		/* Suspend Mode Request */
#define USBISTR_SUSP_OR	(1 << USBISTR_SUSP)
#define USBISTR_ERROR	4		/* Error Bit */
#define USBISTR_ERROR_OR	(1 << USBISTR_ERROR)
#define USBISTR_SOVR	5		/* Setup Overrun */
#define USBISTR_SOVR_OR	(1 << USBISTR_SOVR)
#define USBISTR_CTR	7		/* Correct Transfer */
#define USBISTR_CTR_OR	(1 << USBISTR_CTR)

/* Interrupt Mask Register */
DEF_8BIT_REG_AT(USBIMR,0x3e);
#define USBIMR_SOFM	0		/* Mask Start Of Frame */
#define USBIMR_SOFM_OR	(1 << USBIMR_SOFM)
#define USBIMR_RESETM	1		/* Mask USB Reset */
#define USBIMR_RESETM_OR	(1 << USBIMR_RESETM)
#define USBIMR_ESUSPM	2		/* Mask End Suspend Mode */
#define USBIMR_ESUSPM_OR	(1 << USBIMR_ESUSPM)
#define USBIMR_SUSPM	3		/* Mask Suspend Mode Request */
#define USBIMR_SUSPM_OR	(1 << USBIMR_SUSPM)
#define USBIMR_ERRM	4		/* Mask Error */
#define USBIMR_ERRM_OR	(1 << USBIMR_ERRM)
#define USBIMR_SOVRM	5		/* Mask Setup Overrun */
#define USBIMR_SOVRM_OR	(1 << USBIMR_SOVRM)
#define USBIMR_CTRM	7		/* Mask Correct Transfer */
#define USBIMR_CTRM_OR	(1 << USBIMR_CTRM)

/* Control Register */
DEF_8BIT_REG_AT(USBCTLR,0x3f);
#define USBCTLR_FRES	0		/* Force Reset */
#define USBCTLR_FRES_OR	(1 << USBCTLR_FRES)
#define USBCTLR_FSUSP	1		/* Force Suspend */
#define USBCTLR_FSUSP_OR	(1 << USBCTLR_FSUSP)
#define USBCTLR_PDWN	2		/* Power Down */
#define USBCTLR_PDWN_OR	(1 << USBCTLR_PDWN)
#define USBCTLR_RESUME	3		/* Resume */
#define USBCTLR_RESUME_OR	(1 << USBCTLR_RESUME)
#define USBCTLR_FSTAT0	6		/* Forced state */
#define USBCTLR_FSTAT0_OR	(1 << USBCTLR_FSTAT0)
#define USBCTLR_FSTAT1	7		/* Forced state */
#define USBCTLR_FSTAT1_OR	(1 << USBCTLR_FSTAT1)
#define USBCTLR_FSTAT_OR	((1 << USBCTLR_FSTAT0)|(1 << USBCTLR_FSTAT1))

/* Device Address Register */
DEF_8BIT_REG_AT(USBDADDR,0x40);
#define USBDADDR_ADD0	0		/* Device address 7 bits */
#define USBDADDR_ADD0_OR	(1 << USBDADDR_ADD0)
#define USBDADDR_ADD1	1		/* Device address 7 bits */
#define USBDADDR_ADD1_OR	(1 << USBDADDR_ADD1)
#define USBDADDR_ADD2	2		/* Device address 7 bits */
#define USBDADDR_ADD2_OR	(1 << USBDADDR_ADD2)
#define USBDADDR_ADD3	3		/* Device address 7 bits */
#define USBDADDR_ADD3_OR	(1 << USBDADDR_ADD3)
#define USBDADDR_ADD4	4		/* Device address 7 bits */
#define USBDADDR_ADD4_OR	(1 << USBDADDR_ADD4)
#define USBDADDR_ADD5	5		/* Device address 7 bits */
#define USBDADDR_ADD5_OR	(1 << USBDADDR_ADD5)
#define USBDADDR_ADD6	6		/* Device address 7 bits */
#define USBDADDR_ADD6_OR	(1 << USBDADDR_ADD6)
#define USBDADDR_ADD_OR	((1 << USBDADDR_ADD0)|(1 << USBDADDR_ADD1)\
		|(1 << USBDADDR_ADD2)|(1 << USBDADDR_ADD3)|(1 << USBDADDR_ADD4)\
		|(1 << USBDADDR_ADD5)|(1 << USBDADDR_ADD6))

/* Status Register */
DEF_8BIT_REG_AT(USBSR0,0x41);
#define USBSR0_EP0	0		/* Endpoint Number */
#define USBSR0_EP0_OR	(1 << USBSR0_EP0)
#define USBSR0_EP1	1		/* Endpoint Number */
#define USBSR0_EP1_OR	(1 << USBSR0_EP1)
#define USBSR0_EP2	2		/* Endpoint Number */
#define USBSR0_EP2_OR	(1 << USBSR0_EP2)
#define USBSR0_EP_OR	((1 << USBSR0_EP0)|(1 << USBSR0_EP1)\
		|(1 << USBSR0_EP2))
#define USBSR0_IN_OUT	5		/* Last Transaction Direction for Endpoint (1 or 2) */
#define USBSR0_IN_OUT_OR	(1 << USBSR0_IN_OUT)
#define USBSR0_PID0	6		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR0_PID0_OR	(1 << USBSR0_PID0)
#define USBSR0_PID1	7		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR0_PID1_OR	(1 << USBSR0_PID1)
#define USBSR0_PID_OR	((1 << USBSR0_PID0)|(1 << USBSR0_PID1))

/* Error Status Register */
DEF_8BIT_REG_AT(USBSR1,0x42);
#define USBSR1_ERR0	0		/* Error Type */
#define USBSR1_ERR0_OR	(1 << USBSR1_ERR0)
#define USBSR1_ERR1	1		/* Error Type */
#define USBSR1_ERR1_OR	(1 << USBSR1_ERR1)
#define USBSR1_ERR2	2		/* Error Type */
#define USBSR1_ERR2_OR	(1 << USBSR1_ERR2)
#define USBSR1_ERR_OR	((1 << USBSR1_ERR0)|(1 << USBSR1_ERR1)\
		|(1 << USBSR1_ERR2))
#define USBSR1_USB_RST	3		/* USB Reset detected */
#define USBSR1_USB_RST_OR	(1 << USBSR1_USB_RST)
#define USBSR1_RSM	4		/* Resume detected */
#define USBSR1_RSM_OR	(1 << USBSR1_RSM)

/* Endpoint 0 Register */
DEF_8BIT_REG_AT(USBEP0R,0x43);
#define USBEP0R_STAT_RX0	0		/* Status bits (Reception) */
#define USBEP0R_STAT_RX0_OR	(1 << USBEP0R_STAT_RX0)
#define USBEP0R_STAT_RX1	1		/* Status bits (Reception) */
#define USBEP0R_STAT_RX1_OR	(1 << USBEP0R_STAT_RX1)
#define USBEP0R_STAT_RX_OR	((1 << USBEP0R_STAT_RX0)|(1 << USBEP0R_STAT_RX1))
#define USBEP0R_DTOG_RX	2		/* Data Toggle (Reception) */
#define USBEP0R_DTOG_RX_OR	(1 << USBEP0R_DTOG_RX)
#define USBEP0R_STAT_TX0	4		/* Status bits (Transmission) */
#define USBEP0R_STAT_TX0_OR	(1 << USBEP0R_STAT_TX0)
#define USBEP0R_STAT_TX1	5		/* Status bits (Transmission) */
#define USBEP0R_STAT_TX1_OR	(1 << USBEP0R_STAT_TX1)
#define USBEP0R_STAT_TX_OR	((1 << USBEP0R_STAT_TX0)|(1 << USBEP0R_STAT_TX1))
#define USBEP0R_DTOG_TX	6		/* Data Toggle (Transmission) */
#define USBEP0R_DTOG_TX_OR	(1 << USBEP0R_DTOG_TX)
#define USBEP0R_CTR0	7		/* Correct Transfert on EP0 */
#define USBEP0R_CTR0_OR	(1 << USBEP0R_CTR0)

/* Endpoint 0 Reception Counter Register */
DEF_8BIT_REG_AT(USBCNT0RXR,0x44);
#define USBCNT0RXR_CNT0	0		/* Buffer Size for Ep0 Reception */
#define USBCNT0RXR_CNT0_OR	(1 << USBCNT0RXR_CNT0)
#define USBCNT0RXR_CNT1	1		/* Buffer Size for Ep0 Reception */
#define USBCNT0RXR_CNT1_OR	(1 << USBCNT0RXR_CNT1)
#define USBCNT0RXR_CNT2	2		/* Buffer Size for Ep0 Reception */
#define USBCNT0RXR_CNT2_OR	(1 << USBCNT0RXR_CNT2)
#define USBCNT0RXR_CNT3	3		/* Buffer Size for Ep0 Reception */
#define USBCNT0RXR_CNT3_OR	(1 << USBCNT0RXR_CNT3)
#define USBCNT0RXR_CNT_OR	((1 << USBCNT0RXR_CNT0)|(1 << USBCNT0RXR_CNT1)\
		|(1 << USBCNT0RXR_CNT2)|(1 << USBCNT0RXR_CNT3))

/* Endpoint 0 Transmission Counter Register */
DEF_8BIT_REG_AT(USBCNT0TXR,0x45);
#define USBCNT0TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep0 */
#define USBCNT0TXR_CNT0_OR	(1 << USBCNT0TXR_CNT0)
#define USBCNT0TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep0 */
#define USBCNT0TXR_CNT1_OR	(1 << USBCNT0TXR_CNT1)
#define USBCNT0TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep0 */
#define USBCNT0TXR_CNT2_OR	(1 << USBCNT0TXR_CNT2)
#define USBCNT0TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep0 */
#define USBCNT0TXR_CNT3_OR	(1 << USBCNT0TXR_CNT3)
#define USBCNT0TXR_CNT_OR	((1 << USBCNT0TXR_CNT0)|(1 << USBCNT0TXR_CNT1)\
		|(1 << USBCNT0TXR_CNT2)|(1 << USBCNT0TXR_CNT3))

/* Endpoint 1 Reception Register */
DEF_8BIT_REG_AT(USBEP1RXR,0x46);
#define USBEP1RXR_STAT_RX0	0		/* Status bits (Reception) */
#define USBEP1RXR_STAT_RX0_OR	(1 << USBEP1RXR_STAT_RX0)
#define USBEP1RXR_STAT_RX1	1		/* Status bits (Reception) */
#define USBEP1RXR_STAT_RX1_OR	(1 << USBEP1RXR_STAT_RX1)
#define USBEP1RXR_STAT_RX_OR	((1 << USBEP1RXR_STAT_RX0)|(1 << USBEP1RXR_STAT_RX1))
#define USBEP1RXR_DTOG_RX	2		/* Data Toggle (Reception) */
#define USBEP1RXR_DTOG_RX_OR	(1 << USBEP1RXR_DTOG_RX)
#define USBEP1RXR_CTR_RX	3		/* Reception Correct Transfert */
#define USBEP1RXR_CTR_RX_OR	(1 << USBEP1RXR_CTR_RX)

/* Endpoint 1 Reception Counter Register */
DEF_8BIT_REG_AT(USBCNT1RXR,0x47);
#define USBCNT1RXR_CNT0	0		/* Buffer Size for Ep1 Reception */
#define USBCNT1RXR_CNT0_OR	(1 << USBCNT1RXR_CNT0)
#define USBCNT1RXR_CNT1	1		/* Buffer Size for Ep1 Reception */
#define USBCNT1RXR_CNT1_OR	(1 << USBCNT1RXR_CNT1)
#define USBCNT1RXR_CNT2	2		/* Buffer Size for Ep1 Reception */
#define USBCNT1RXR_CNT2_OR	(1 << USBCNT1RXR_CNT2)
#define USBCNT1RXR_CNT3	3		/* Buffer Size for Ep1 Reception */
#define USBCNT1RXR_CNT3_OR	(1 << USBCNT1RXR_CNT3)
#define USBCNT1RXR_CNT_OR	((1 << USBCNT1RXR_CNT0)|(1 << USBCNT1RXR_CNT1)\
		|(1 << USBCNT1RXR_CNT2)|(1 << USBCNT1RXR_CNT3))

/* Endpoint 1 Transmission Register */
DEF_8BIT_REG_AT(USBEP1TXR,0x48);
#define USBEP1TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define USBEP1TXR_STAT_TX0_OR	(1 << USBEP1TXR_STAT_TX0)
#define USBEP1TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define USBEP1TXR_STAT_TX1_OR	(1 << USBEP1TXR_STAT_TX1)
#define USBEP1TXR_STAT_TX_OR	((1 << USBEP1TXR_STAT_TX0)|(1 << USBEP1TXR_STAT_TX1))
#define USBEP1TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define USBEP1TXR_DTOG_TX_OR	(1 << USBEP1TXR_DTOG_TX)
#define USBEP1TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define USBEP1TXR_CTR_TX_OR	(1 << USBEP1TXR_CTR_TX)

/* Endpoint 1 Transmission Counter Register */
DEF_8BIT_REG_AT(USBCNT1TXR,0x49);
#define USBCNT1TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep1 */
#define USBCNT1TXR_CNT0_OR	(1 << USBCNT1TXR_CNT0)
#define USBCNT1TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep1 */
#define USBCNT1TXR_CNT1_OR	(1 << USBCNT1TXR_CNT1)
#define USBCNT1TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep1 */
#define USBCNT1TXR_CNT2_OR	(1 << USBCNT1TXR_CNT2)
#define USBCNT1TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep1 */
#define USBCNT1TXR_CNT3_OR	(1 << USBCNT1TXR_CNT3)
#define USBCNT1TXR_CNT_OR	((1 << USBCNT1TXR_CNT0)|(1 << USBCNT1TXR_CNT1)\
		|(1 << USBCNT1TXR_CNT2)|(1 << USBCNT1TXR_CNT3))

/* Endpoint 2 Reception Register */
DEF_8BIT_REG_AT(USBEP2RXR,0x4a);
#define USBEP2RXR_STAT_RX0	0		/* Status bits (Reception) */
#define USBEP2RXR_STAT_RX0_OR	(1 << USBEP2RXR_STAT_RX0)
#define USBEP2RXR_STAT_RX1	1		/* Status bits (Reception) */
#define USBEP2RXR_STAT_RX1_OR	(1 << USBEP2RXR_STAT_RX1)
#define USBEP2RXR_STAT_RX_OR	((1 << USBEP2RXR_STAT_RX0)|(1 << USBEP2RXR_STAT_RX1))
#define USBEP2RXR_DTOG_RX	2		/* Data Toggle (Reception) */
#define USBEP2RXR_DTOG_RX_OR	(1 << USBEP2RXR_DTOG_RX)
#define USBEP2RXR_CTR_RX	3		/* Reception Correct Transfert */
#define USBEP2RXR_CTR_RX_OR	(1 << USBEP2RXR_CTR_RX)

/* Endpoint 2 Reception Counter Register */
DEF_8BIT_REG_AT(USBCNT2RXR,0x4b);
#define USBCNT2RXR_CNT0	0		/* Buffer Size for Ep2 Reception */
#define USBCNT2RXR_CNT0_OR	(1 << USBCNT2RXR_CNT0)
#define USBCNT2RXR_CNT1	1		/* Buffer Size for Ep2 Reception */
#define USBCNT2RXR_CNT1_OR	(1 << USBCNT2RXR_CNT1)
#define USBCNT2RXR_CNT2	2		/* Buffer Size for Ep2 Reception */
#define USBCNT2RXR_CNT2_OR	(1 << USBCNT2RXR_CNT2)
#define USBCNT2RXR_CNT3	3		/* Buffer Size for Ep2 Reception */
#define USBCNT2RXR_CNT3_OR	(1 << USBCNT2RXR_CNT3)
#define USBCNT2RXR_CNT_OR	((1 << USBCNT2RXR_CNT0)|(1 << USBCNT2RXR_CNT1)\
		|(1 << USBCNT2RXR_CNT2)|(1 << USBCNT2RXR_CNT3))

/* Endpoint 2 Transmission Register */
DEF_8BIT_REG_AT(USBEP2TXR,0x4c);
#define USBEP2TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define USBEP2TXR_STAT_TX0_OR	(1 << USBEP2TXR_STAT_TX0)
#define USBEP2TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define USBEP2TXR_STAT_TX1_OR	(1 << USBEP2TXR_STAT_TX1)
#define USBEP2TXR_STAT_TX_OR	((1 << USBEP2TXR_STAT_TX0)|(1 << USBEP2TXR_STAT_TX1))
#define USBEP2TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define USBEP2TXR_DTOG_TX_OR	(1 << USBEP2TXR_DTOG_TX)
#define USBEP2TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define USBEP2TXR_CTR_TX_OR	(1 << USBEP2TXR_CTR_TX)

/* Endpoint 2 Transmission Counter Register */
DEF_8BIT_REG_AT(USBCNT2TXR,0x4d);
#define USBCNT2TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep2 */
#define USBCNT2TXR_CNT0_OR	(1 << USBCNT2TXR_CNT0)
#define USBCNT2TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep2 */
#define USBCNT2TXR_CNT1_OR	(1 << USBCNT2TXR_CNT1)
#define USBCNT2TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep2 */
#define USBCNT2TXR_CNT2_OR	(1 << USBCNT2TXR_CNT2)
#define USBCNT2TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep2 */
#define USBCNT2TXR_CNT3_OR	(1 << USBCNT2TXR_CNT3)
#define USBCNT2TXR_CNT_OR	((1 << USBCNT2TXR_CNT0)|(1 << USBCNT2TXR_CNT1)\
		|(1 << USBCNT2TXR_CNT2)|(1 << USBCNT2TXR_CNT3))

/*  PS/2 interface  */
/*****************************************************************/

/* PS/2 Control register */
DEF_8BIT_REG_AT(PS2CR,0x4e);
#define PS2CR_PS2ON	0		/* PS/2 ON */
#define PS2CR_PS2ON_OR	(1 << PS2CR_PS2ON)
#define PS2CR_CD	1		/* Communication direction */
#define PS2CR_CD_OR	(1 << PS2CR_CD)
#define PS2CR_RTXS	2		/* RX/TX Start */
#define PS2CR_RTXS_OR	(1 << PS2CR_RTXS)
#define PS2CR_RTXCIE	3		/* RX/TX Complete interrupt enable */
#define PS2CR_RTXCIE_OR	(1 << PS2CR_RTXCIE)
#define PS2CR_RTXAIE	4		/* RX/TX Abort interrupt enable */
#define PS2CR_RTXAIE_OR	(1 << PS2CR_RTXAIE)
#define PS2CR_HRTSIE	5		/* HRTS interrupt enable */
#define PS2CR_HRTSIE_OR	(1 << PS2CR_HRTSIE)
#define PS2CR_RXEIE	6		/* RX error interrupt enable */
#define PS2CR_RXEIE_OR	(1 << PS2CR_RXEIE)

/* PS/2 Config/Status register */
DEF_8BIT_REG_AT(PS2CSR,0x4f);
#define PS2CSR_RTXC	0		/* RX/TX Complete */
#define PS2CSR_RTXC_OR	(1 << PS2CSR_RTXC)
#define PS2CSR_RTXA	1		/* RX/TX Abort */
#define PS2CSR_RTXA_OR	(1 << PS2CSR_RTXA)
#define PS2CSR_HRTS	2		/* Host request to send */
#define PS2CSR_HRTS_OR	(1 << PS2CSR_HRTS)
#define PS2CSR_RXE	3		/* RX Error */
#define PS2CSR_RXE_OR	(1 << PS2CSR_RXE)
#define PS2CSR_TOFF	4		/* Timing OFF */
#define PS2CSR_TOFF_OR	(1 << PS2CSR_TOFF)
#define PS2CSR_FSEL0	5		/* Frequency selection */
#define PS2CSR_FSEL0_OR	(1 << PS2CSR_FSEL0)
#define PS2CSR_FSEL1	6		/* Frequency selection */
#define PS2CSR_FSEL1_OR	(1 << PS2CSR_FSEL1)
#define PS2CSR_FSEL_OR	((1 << PS2CSR_FSEL0)|(1 << PS2CSR_FSEL1))

/* PS/2 Data register */
DEF_8BIT_REG_AT(PS2DR,0x50);
#define PS2DR_PS2D0	0		/* PS/2 Data */
#define PS2DR_PS2D0_OR	(1 << PS2DR_PS2D0)
#define PS2DR_PS2D1	1		/* PS/2 Data */
#define PS2DR_PS2D1_OR	(1 << PS2DR_PS2D1)
#define PS2DR_PS2D2	2		/* PS/2 Data */
#define PS2DR_PS2D2_OR	(1 << PS2DR_PS2D2)
#define PS2DR_PS2D3	3		/* PS/2 Data */
#define PS2DR_PS2D3_OR	(1 << PS2DR_PS2D3)
#define PS2DR_PS2D4	4		/* PS/2 Data */
#define PS2DR_PS2D4_OR	(1 << PS2DR_PS2D4)
#define PS2DR_PS2D5	5		/* PS/2 Data */
#define PS2DR_PS2D5_OR	(1 << PS2DR_PS2D5)
#define PS2DR_PS2D6	6		/* PS/2 Data */
#define PS2DR_PS2D6_OR	(1 << PS2DR_PS2D6)
#define PS2DR_PS2D7	7		/* PS/2 Data */
#define PS2DR_PS2D7_OR	(1 << PS2DR_PS2D7)
#define PS2DR_PS2D_OR	((1 << PS2DR_PS2D0)|(1 << PS2DR_PS2D1)\
		|(1 << PS2DR_PS2D2)|(1 << PS2DR_PS2D3)|(1 << PS2DR_PS2D4)\
		|(1 << PS2DR_PS2D5)|(1 << PS2DR_PS2D6)|(1 << PS2DR_PS2D7))

/* Port G */
/*****************************************************************/

/* Port A & G Pull-Up Control Rgister */
DEF_8BIT_REG_AT(PAGPUCR,0x54);
#define PAGPUCR_PUPG0	0		/* PG0 Pull-Up Resistor enable */
#define PAGPUCR_PUPG0_OR	(1 << PAGPUCR_PUPG0)
#define PAGPUCR_PUPG1	1		/* PG1 Pull-Up Resistor enable */
#define PAGPUCR_PUPG1_OR	(1 << PAGPUCR_PUPG1)
#define PAGPUCR_USBPUP	4		/* PA7 USB Pull-Up Resistor enable */
#define PAGPUCR_USBPUP_OR	(1 << PAGPUCR_USBPUP)

/* Data Register */
DEF_8BIT_REG_AT(PGDR,0x55);

/* Data Direction Register */
DEF_8BIT_REG_AT(PGDDR,0x56);

/* Option Register */
DEF_8BIT_REG_AT(PGOR,0x57);

/*  RF Interface  */
/*****************************************************************/

/* RF Page Selection Register */
DEF_8BIT_REG_AT(RFPAGER,0x60);
#define RFPAGER_RFP0	0		/* RF Page Selection */
#define RFPAGER_RFP0_OR	(1 << RFPAGER_RFP0)
#define RFPAGER_RFP1	1		/* RF Page Selection */
#define RFPAGER_RFP1_OR	(1 << RFPAGER_RFP1)
#define RFPAGER_RFP_OR	((1 << RFPAGER_RFP0)|(1 << RFPAGER_RFP1))

/* RFCSR, RFREGCR, RXCFHR - RFP Paged Register */
DEF_8BIT_REG_AT(RFCSR,0x61);
DEF_8BIT_REG_AT(RFREGCR,0x61);
DEF_8BIT_REG_AT(RXCFHR,0x61);

/* RXCSR, RXCFLR - RFP Paged Register */
DEF_8BIT_REG_AT(RXCSR,0x62);
DEF_8BIT_REG_AT(RXCFLR,0x62);

/* RXRSSHR, RFSYNR, RXOFFHR - RFP Paged Register */
DEF_8BIT_REG_AT(RXRSSHR,0x63);
DEF_8BIT_REG_AT(RFSYNR,0x63);
DEF_8BIT_REG_AT(RXOFFHR,0x63);

/* RXRSSLR, RXOFFLR - RFP Paged Register */
DEF_8BIT_REG_AT(RXRSSLR,0x64);
DEF_8BIT_REG_AT(RXOFFLR,0x64);

/* RFTSWR, RXDRR - RFP Paged Register */
DEF_8BIT_REG_AT(RFTSWR,0x67);
DEF_8BIT_REG_AT(RXDRR,0x67);

/* RFP Paged Register */
DEF_8BIT_REG_AT(RXSLHR,0x68);

/* RFP Paged Register */
DEF_8BIT_REG_AT(RXSLLR,0x69);

#endif /* __ST7WIND11__ */
