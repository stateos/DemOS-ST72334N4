/* ST7FLITE20.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLITE20__
#define __ST7FLITE20__

/* ST7FLITE20 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLITE20 1
		#if (MCU_NAME != ST7FLITE20)
		#error "wrong include file ST7FLITE20.h for chosen MCU!"
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

/* Lite Timer */
/*****************************************************************/

/* Lite Timer Control/Status Register 2 */
DEF_8BIT_REG_AT(LTCSR2,0x08);

/* Lite Timer Auto-Reload Register */
DEF_8BIT_REG_AT(LTAAR,0x09);

/* Lite Timer Counter Register */
DEF_8BIT_REG_AT(LTCNTR,0x0a);

/* Lite Timer Control/Status Register 1 */
DEF_8BIT_REG_AT(LTCSR1,0x0b);

/* Lite Timer Input Capture Register */
DEF_8BIT_REG_AT(LTICR,0x0c);

/* Auto Reload Timer */
/*****************************************************************/

/* Timer Control/Status Register */
DEF_8BIT_REG_AT(ATCSR,0x0d);

/* Counter Register High */
DEF_8BIT_REG_AT(CNTRH,0x0e);

/* Counter Register Low */
DEF_8BIT_REG_AT(CNTRL,0x0f);

/* Auto-Reload Register High */
DEF_8BIT_REG_AT(ATRH,0x10);

/* Auto-Reload Register Low */
DEF_8BIT_REG_AT(ATRL,0x11);

/* PWM Output Control Register */
DEF_8BIT_REG_AT(PWMCR,0x12);
#define PWMCR_OE0	0		/* PWM Mode Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	2		/* PWM Mode Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)
#define PWMCR_OE2	4		/* PWM Mode Enable */
#define PWMCR_OE2_OR	(1 << PWMCR_OE2)
#define PWMCR_OE3	6		/* PWM Mode Enable */
#define PWMCR_OE3_OR	(1 << PWMCR_OE3)

/* PWM 0 Control/Status Register */
DEF_8BIT_REG_AT(PWM0CSR,0x13);

/* PWM 1 Control/Status Register */
DEF_8BIT_REG_AT(PWM1CSR,0x14);

/* PWM 2 Control/Status Register */
DEF_8BIT_REG_AT(PWM2CSR,0x15);

/* PWM 3 Control/Status Register */
DEF_8BIT_REG_AT(PWM3CSR,0x16);

/* PWM 0 Duty Cycle Register High */
DEF_8BIT_REG_AT(DCR0H,0x17);

/* PWM 0 Duty Cycle Register Low */
DEF_8BIT_REG_AT(DCR0L,0x18);

/* PWM 1 Duty Cycle Register High */
DEF_8BIT_REG_AT(DCR1H,0x19);

/* PWM 1 Duty Cycle Register Low */
DEF_8BIT_REG_AT(DCR1L,0x1a);

/* PWM 2 Duty Cycle Register High */
DEF_8BIT_REG_AT(DCR2H,0x1b);

/* PWM 2 Duty Cycle Register Low */
DEF_8BIT_REG_AT(DCR2L,0x1c);

/* PWM 3 Duty Cycle Register High */
DEF_8BIT_REG_AT(DCR3H,0x1d);

/* PWM 3 Duty Cycle Register Low */
DEF_8BIT_REG_AT(DCR3L,0x1e);

/* Input Capture Register High */
DEF_8BIT_REG_AT(ATICRH,0x1f);

/* Input Capture Register Low */
DEF_8BIT_REG_AT(ATICRL,0x20);

/* Transfer Control Register */
DEF_8BIT_REG_AT(TRANCR,0x21);
#define TRANCR_TRAN	0		/* Transfer Enable */
#define TRANCR_TRAN_OR	(1 << TRANCR_TRAN)

/* Break Control Register */
DEF_8BIT_REG_AT(BREAKCR,0x22);
#define BREAKCR_BPIN	4		/* Break Pin Enable */
#define BREAKCR_BPIN_OR	(1 << BREAKCR_BPIN)
#define BREAKCR_BA	5		/* Break Active */
#define BREAKCR_BA_OR	(1 << BREAKCR_BA)

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x2e);
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
DEF_8BIT_REG_AT(FCSR,0x2f);

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x31);

/* Control Register */
DEF_8BIT_REG_AT(SPICR,0x32);
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
DEF_8BIT_REG_AT(SPISR,0x33);

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* ADC Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x34);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH2	2		/* Channel Selection */
#define ADCCSR_CH2_OR	(1 << ADCCSR_CH2)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2))
#define ADCCSR_ADON	5		/* ADC Converter On */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_SPEED	6		/* ADC clock selection */
#define ADCCSR_SPEED_OR	(1 << ADCCSR_SPEED)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* Data Register High */
DEF_8BIT_REG_AT(ADCDRH,0x35);

/* Amplifier Control/Data Register Low */
DEF_8BIT_REG_AT(ADCDRL,0x36);
#define ADCDRL_AMPON	2		/* Amplifier Control Bit */
#define ADCDRL_AMPON_OR	(1 << ADCDRL_AMPON)
#define ADCDRL_SLOW	3		/* ADC Slow Mode */
#define ADCDRL_SLOW_OR	(1 << ADCDRL_SLOW)

/* External Interrupt Control Register (ITC) */
/*****************************************************************/

/* External Interrupt Control Register */
DEF_8BIT_REG_AT(EICR,0x37);
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
#define EICR_IS30	6		/* EI3 Sensitivity */
#define EICR_IS30_OR	(1 << EICR_IS30)
#define EICR_IS31	7		/* EI3 Sensitivity */
#define EICR_IS31_OR	(1 << EICR_IS31)
#define EICR_IS3_OR	((1 << EICR_IS30)|(1 << EICR_IS31))

/* Main Clock Control/Status Register (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x38);
#define MCCSR_SMS	0		/* Slow Mode Selection */
#define MCCSR_SMS_OR	(1 << MCCSR_SMS)
#define MCCSR_MCO	1		/* Main Clock Out Enable */
#define MCCSR_MCO_OR	(1 << MCCSR_MCO)

/* RC Control Register (RCCR) */
/*****************************************************************/

/* RC Control Register */
DEF_8BIT_REG_AT(RCCR,0x39);

/* System Integrity Control/Status Register (SICSR) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x3a);
#define SICSR_AVDIE	0		/* Voltage Reset Flag */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)
#define SICSR_AVDF	1		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_LVDRF	2		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_LOCKED	3		/* PLL Locked Flag */
#define SICSR_LOCKED_OR	(1 << SICSR_LOCKED)

/* External Interrupt Selection Register (ITC) */
/*****************************************************************/

/* External Interrupt Selection Register */
DEF_8BIT_REG_AT(EISR,0x3c);
#define EISR_EI00	0		/* EI0 Pin Selection */
#define EISR_EI00_OR	(1 << EISR_EI00)
#define EISR_EI01	1		/* EI0 Pin Selection */
#define EISR_EI01_OR	(1 << EISR_EI01)
#define EISR_EI0_OR	((1 << EISR_EI00)|(1 << EISR_EI01))
#define EISR_EI10	2		/* EI1 Pin Selection */
#define EISR_EI10_OR	(1 << EISR_EI10)
#define EISR_EI11	3		/* EI1 Pin Selection */
#define EISR_EI11_OR	(1 << EISR_EI11)
#define EISR_EI1_OR	((1 << EISR_EI10)|(1 << EISR_EI11))
#define EISR_EI20	4		/* EI2 Pin Selection */
#define EISR_EI20_OR	(1 << EISR_EI20)
#define EISR_EI21	5		/* EI2 Pin Selection */
#define EISR_EI21_OR	(1 << EISR_EI21)
#define EISR_EI2_OR	((1 << EISR_EI20)|(1 << EISR_EI21))
#define EISR_EI30	6		/* EI3 Pin Selection */
#define EISR_EI30_OR	(1 << EISR_EI30)
#define EISR_EI31	7		/* EI3 Pin Selection */
#define EISR_EI31_OR	(1 << EISR_EI31)
#define EISR_EI3_OR	((1 << EISR_EI30)|(1 << EISR_EI31))

/* Auto Wake Up from Halt Mode (AWU) */
/*****************************************************************/

/* AWU HALT prescaler Register */
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

/* AWU HALT Control/Status Register */
DEF_8BIT_REG_AT(AWUCSR,0x4a);
#define AWUCSR_AWUEN	0		/* Auto Wake Up from HALT mode enable */
#define AWUCSR_AWUEN_OR	(1 << AWUCSR_AWUEN)
#define AWUCSR_AWUMSR	1		/* Auto Wake Up Measurement */
#define AWUCSR_AWUMSR_OR	(1 << AWUCSR_AWUMSR)

#endif /* __ST7FLITE20__ */
