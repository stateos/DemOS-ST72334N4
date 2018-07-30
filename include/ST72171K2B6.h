/* ST72171K2B6.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72171K2B6__
#define __ST72171K2B6__

/* ST72171K2B6 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72171K2B6 1
		#if (MCU_NAME != ST72171K2B6)
		#error "wrong include file ST72171K2B6.h for chosen MCU!"
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

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x08);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x09);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x0a);

/* Operational Amplifier */
/*****************************************************************/

/* OA1 Control Register */
DEF_8BIT_REG_AT(OA1CR,0x1b);
#define OA1CR_AZ1	7		/* Autozero Mode */
#define OA1CR_AZ1_OR	(1 << OA1CR_AZ1)
#define OA1CR_G10	4		/* Gain Control */
#define OA1CR_G10_OR	(1 << OA1CR_G10)
#define OA1CR_G11	5		/* Gain Control */
#define OA1CR_G11_OR	(1 << OA1CR_G11)
#define OA1CR_G12	6		/* Gain Control */
#define OA1CR_G12_OR	(1 << OA1CR_G12)
#define OA1CR_G1_OR	((1 << OA1CR_G10)|(1 << OA1CR_G11)\
		|(1 << OA1CR_G12))
#define OA1CR_PS10	2		/* Positive Input Select/Gain ad-just */
#define OA1CR_PS10_OR	(1 << OA1CR_PS10)
#define OA1CR_PS11	3		/* Positive Input Select/Gain ad-just */
#define OA1CR_PS11_OR	(1 << OA1CR_PS11)
#define OA1CR_PS1_OR	((1 << OA1CR_PS10)|(1 << OA1CR_PS11))
#define OA1CR_NS10	0		/* Negative Input Select */
#define OA1CR_NS10_OR	(1 << OA1CR_NS10)
#define OA1CR_NS11	1		/* Negative Input Select */
#define OA1CR_NS11_OR	(1 << OA1CR_NS11)
#define OA1CR_NS1_OR	((1 << OA1CR_NS10)|(1 << OA1CR_NS11))

/* OA2 Control Register */
DEF_8BIT_REG_AT(OA2CR,0x1c);
#define OA2CR_AZ2	7		/* Autozero Mode */
#define OA2CR_AZ2_OR	(1 << OA2CR_AZ2)
#define OA2CR_G20	4		/* Gain Control */
#define OA2CR_G20_OR	(1 << OA2CR_G20)
#define OA2CR_G21	5		/* Gain Control */
#define OA2CR_G21_OR	(1 << OA2CR_G21)
#define OA2CR_G22	6		/* Gain Control */
#define OA2CR_G22_OR	(1 << OA2CR_G22)
#define OA2CR_G2_OR	((1 << OA2CR_G20)|(1 << OA2CR_G21)\
		|(1 << OA2CR_G22))
#define OA2CR_PS20	2		/* Positive Input Select/Gain ad-just */
#define OA2CR_PS20_OR	(1 << OA2CR_PS20)
#define OA2CR_PS21	3		/* Positive Input Select/Gain ad-just */
#define OA2CR_PS21_OR	(1 << OA2CR_PS21)
#define OA2CR_PS2_OR	((1 << OA2CR_PS20)|(1 << OA2CR_PS21))
#define OA2CR_NS20	0		/* Negative Input Select */
#define OA2CR_NS20_OR	(1 << OA2CR_NS20)
#define OA2CR_NS21	1		/* Negative Input Select */
#define OA2CR_NS21_OR	(1 << OA2CR_NS21)
#define OA2CR_NS2_OR	((1 << OA2CR_NS20)|(1 << OA2CR_NS21))

/* OA3 Control Register */
DEF_8BIT_REG_AT(OA3CR,0x1d);
#define OA3CR_OA3ON	7		/* OA3 on/off (low power) */
#define OA3CR_OA3ON_OR	(1 << OA3CR_OA3ON)

/* Interrupt and Readout Register */
DEF_8BIT_REG_AT(OAIRR,0x1e);
#define OAIRR_OA2ON	0		/* OA2 on/off (low power) */
#define OAIRR_OA2ON_OR	(1 << OAIRR_OA2ON)
#define OAIRR_OA2V	1		/* OA2 output value (read only) */
#define OAIRR_OA2V_OR	(1 << OAIRR_OA2V)
#define OAIRR_OA2P	2		/* OA2 interrupt polarity select */
#define OAIRR_OA2P_OR	(1 << OAIRR_OA2P)
#define OAIRR_OA2IE	3		/* OA2 interrupt enable */
#define OAIRR_OA2IE_OR	(1 << OAIRR_OA2IE)
#define OAIRR_OA1ON	4		/* OA1 on/off (low power) */
#define OAIRR_OA1ON_OR	(1 << OAIRR_OA1ON)
#define OAIRR_OA1V	5		/* OA1 output value(read only) */
#define OAIRR_OA1V_OR	(1 << OAIRR_OA1V)
#define OAIRR_OA1P	6		/* OA1 interrupt polarity select */
#define OAIRR_OA1P_OR	(1 << OAIRR_OA1P)
#define OAIRR_OA1IE	7		/* OA1 interrupt */
#define OAIRR_OA1IE_OR	(1 << OAIRR_OA1IE)

/* Voltage Reference Control Register */
DEF_8BIT_REG_AT(OAVRCR,0x1f);
#define OAVRCR_VR2E	7		/* VR2 Enable */
#define OAVRCR_VR2E_OR	(1 << OAVRCR_VR2E)
#define OAVRCR_VR20	4		/* Voltage selection for channel 2 */
#define OAVRCR_VR20_OR	(1 << OAVRCR_VR20)
#define OAVRCR_VR21	5		/* Voltage selection for channel 2 */
#define OAVRCR_VR21_OR	(1 << OAVRCR_VR21)
#define OAVRCR_VR22	6		/* Voltage selection for channel 2 */
#define OAVRCR_VR22_OR	(1 << OAVRCR_VR22)
#define OAVRCR_VR2_OR	((1 << OAVRCR_VR20)|(1 << OAVRCR_VR21)\
		|(1 << OAVRCR_VR22))
#define OAVRCR_VR1E	3		/* VR1 Enable */
#define OAVRCR_VR1E_OR	(1 << OAVRCR_VR1E)
#define OAVRCR_VR10	0		/* Voltage selection for channel 1 */
#define OAVRCR_VR10_OR	(1 << OAVRCR_VR10)
#define OAVRCR_VR11	1		/* Voltage selection for channel 1 */
#define OAVRCR_VR11_OR	(1 << OAVRCR_VR11)
#define OAVRCR_VR12	2		/* Voltage selection for channel 1 */
#define OAVRCR_VR12_OR	(1 << OAVRCR_VR12)
#define OAVRCR_VR1_OR	((1 << OAVRCR_VR10)|(1 << OAVRCR_VR11)\
		|(1 << OAVRCR_VR12))

/* Miscellaneous 1 */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x20);
#define MISCR1_SMS	0		/* Slow Mode Select */
#define MISCR1_SMS_OR	(1 << MISCR1_SMS)
#define MISCR1_PSM0	1		/* Prescaler Slow Mode */
#define MISCR1_PSM0_OR	(1 << MISCR1_PSM0)
#define MISCR1_PSM1	2		/* Prescaler Slow Mode */
#define MISCR1_PSM1_OR	(1 << MISCR1_PSM1)
#define MISCR1_PSM_OR	((1 << MISCR1_PSM0)|(1 << MISCR1_PSM1))
#define MISCR1_PEI0	3		/* EI0/EI1 Polarity Options */
#define MISCR1_PEI0_OR	(1 << MISCR1_PEI0)
#define MISCR1_PEI1	4		/* EI0/EI1 Polarity Options */
#define MISCR1_PEI1_OR	(1 << MISCR1_PEI1)
#define MISCR1_PEI_0_1_OR	((1 << MISCR1_PEI0)|(1 << MISCR1_PEI1))
#define MISCR1_MCO	5		/* Main Clock Out */
#define MISCR1_MCO_OR	(1 << MISCR1_MCO)
#define MISCR1_PEI2	6		/* EI2/EI3 Polarity Options */
#define MISCR1_PEI2_OR	(1 << MISCR1_PEI2)
#define MISCR1_PEI3	7		/* EI2/EI3 Polarity Options */
#define MISCR1_PEI3_OR	(1 << MISCR1_PEI3)
#define MISCR1_PEI_2_3_OR	((1 << MISCR1_PEI2)|(1 << MISCR1_PEI3))

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

/* Clock,Reset,Supply Control/Status */
/*****************************************************************/

/* Clock/Reset/Supply Control/Status Register */
DEF_8BIT_REG_AT(CRSR,0x25);
#define CRSR_WDGRF	0		/* Watchdog Reset Flag */
#define CRSR_WDGRF_OR	(1 << CRSR_WDGRF)
#define CRSR_CSSD	1		/* Clock Security System Detection */
#define CRSR_CSSD_OR	(1 << CRSR_CSSD)
#define CRSR_CSSIE	2		/* Clock Security System Interrupt */
#define CRSR_CSSIE_OR	(1 << CRSR_CSSIE)
#define CRSR_LVDRF	4		/* LVD Reset Flag */
#define CRSR_LVDRF_OR	(1 << CRSR_LVDRF)

/* 16-Bit Timer */
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

/* Miscellaneous 2 */
/*****************************************************************/

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x40);
#define MISCR2_SSI	0		/* Internal Mode */
#define MISCR2_SSI_OR	(1 << MISCR2_SSI)
#define MISCR2_SSM	1		/* Mode Selection */
#define MISCR2_SSM_OR	(1 << MISCR2_SSM)
#define MISCR2_P0OS	2		/* PWM0 output select */
#define MISCR2_P0OS_OR	(1 << MISCR2_P0OS)
#define MISCR2_P1OS	3		/* PWM1 output select */
#define MISCR2_P1OS_OR	(1 << MISCR2_P1OS)
#define MISCR2_SPIOD	4		/* SPI output */
#define MISCR2_SPIOD_OR	(1 << MISCR2_SPIOD)

/* Serial Communications Interface (SCI) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x50);
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
DEF_8BIT_REG_AT(SCIDR,0x51);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x52);
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
DEF_8BIT_REG_AT(SCICR1,0x53);
#define SCICR1_WAKE	3		/* Wake-up Method */
#define SCICR1_WAKE_OR	(1 << SCICR1_WAKE)
#define SCICR1_M	4		/* Word Length */
#define SCICR1_M_OR	(1 << SCICR1_M)
#define SCICR1_T8	6		/* Transmit Data Bit 8 */
#define SCICR1_T8_OR	(1 << SCICR1_T8)
#define SCICR1_R8	7		/* Receive Data Bit 8 */
#define SCICR1_R8_OR	(1 << SCICR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCICR2,0x54);
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
#define ADCCSR_CH3	3		/* Channel Selection */
#define ADCCSR_CH3_OR	(1 << ADCCSR_CH3)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2)|(1 << ADCCSR_CH3))
#define ADCCSR_ADON	5		/* A/D Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* 8-bit PWM Auto-Reload Timer (PWM ART) */
/*****************************************************************/

/* Duty Cycle Register 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x74);

/* Duty Cycle Register 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x75);

/* PWM Control Register */
DEF_8BIT_REG_AT(PWMCR,0x76);
#define PWMCR_OP0	0		/* PWM Output Polarity */
#define PWMCR_OP0_OR	(1 << PWMCR_OP0)
#define PWMCR_OP1	1		/* PWM Output Polarity */
#define PWMCR_OP1_OR	(1 << PWMCR_OP1)
#define PWMCR_OE0	4		/* PWM Output Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	5		/* PWM Output Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)

/* ART Control/Status Register */
DEF_8BIT_REG_AT(ARTCSR,0x77);
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
DEF_8BIT_REG_AT(ARTCAR,0x78);

/* ART Auto-Reload Register */
DEF_8BIT_REG_AT(ARTARR,0x79);

/* ART Input Capture Control/Status Register */
DEF_8BIT_REG_AT(ARTICCSR,0x7a);
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
DEF_8BIT_REG_AT(ARTICR1,0x7b);

#endif /* __ST72171K2B6__ */
