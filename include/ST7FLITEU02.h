/* ST7FLITEU02.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLITEU02__
#define __ST7FLITEU02__

/* ST7FLITEU02 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLITEU02 1
		#if (MCU_NAME != ST7FLITEU02)
		#error "wrong include file ST7FLITEU02.h for chosen MCU!"
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

/* Lite Timer */
/*****************************************************************/

/* Lite Timer Control/Status Register */
DEF_8BIT_REG_AT(LTCSR,0x0b);
#define LTCSR_WDGD	0		/* Watchdog Reset Delay */
#define LTCSR_WDGD_OR	(1 << LTCSR_WDGD)
#define LTCSR_WDGE	1		/* Watchdog Enable */
#define LTCSR_WDGE_OR	(1 << LTCSR_WDGE)
#define LTCSR_WDGRF	2		/* Watchdog Force Reset/Reset Status Flag */
#define LTCSR_WDGRF_OR	(1 << LTCSR_WDGRF)
#define LTCSR_TBF	3		/* Timebase Interrupt Flag */
#define LTCSR_TBF_OR	(1 << LTCSR_TBF)
#define LTCSR_TBIE	4		/* Timebase Interrupt Enable */
#define LTCSR_TBIE_OR	(1 << LTCSR_TBIE)
#define LTCSR_TB	5		/* Timebase period selection */
#define LTCSR_TB_OR	(1 << LTCSR_TB)
#define LTCSR_ICF	6		/* Input Capture Flag */
#define LTCSR_ICF_OR	(1 << LTCSR_ICF)
#define LTCSR_ICIE	7		/* Input Capture Interrupt Enable */
#define LTCSR_ICIE_OR	(1 << LTCSR_ICIE)

/* Lite Timer Input Capture Register */
DEF_8BIT_REG_AT(LTICR,0x0c);
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
DEF_8BIT_REG_AT(ATCSR,0x0d);
#define ATCSR_CMPIE	0		/* Compare Interrupt Enable */
#define ATCSR_CMPIE_OR	(1 << ATCSR_CMPIE)
#define ATCSR_OVFIE	1		/* Overflow Interrupt Enable */
#define ATCSR_OVFIE_OR	(1 << ATCSR_OVFIE)
#define ATCSR_OVF	2		/* Overflow Flag */
#define ATCSR_OVF_OR	(1 << ATCSR_OVF)
#define ATCSR_CK0	3		/* Counter Clock Selection */
#define ATCSR_CK0_OR	(1 << ATCSR_CK0)
#define ATCSR_CK1	4		/* Counter Clock Selection */
#define ATCSR_CK1_OR	(1 << ATCSR_CK1)
#define ATCSR_CK_OR	((1 << ATCSR_CK0)|(1 << ATCSR_CK1))

/* Counter Register 1 */
DEF_16BIT_REG_AT(CNTR,0x0e);
/* Counter Value High */
DEF_8BIT_REG_AT(CNTRH,0x0e);
/* Counter Value Low */
DEF_8BIT_REG_AT(CNTRL,0x0f);

/* Auto-Reload Register 1 */
DEF_16BIT_REG_AT(ATR,0x10);
/* Autoreload Register High */
DEF_8BIT_REG_AT(ATRH,0x10);
/* Autoreload Register Low */
DEF_8BIT_REG_AT(ATRL,0x11);

/* PWM Output Control Register */
DEF_8BIT_REG_AT(PWMCR,0x12);
#define PWMCR_OE0	0		/* PWM Mode Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)

/* PWM 0 Control/Status Register */
DEF_8BIT_REG_AT(PWM0CSR,0x13);
#define PWM0CSR_CMPF0	0		/* PWM0 Compare Flag */
#define PWM0CSR_CMPF0_OR	(1 << PWM0CSR_CMPF0)
#define PWM0CSR_OP0	1		/* PWM0 Output Polarity */
#define PWM0CSR_OP0_OR	(1 << PWM0CSR_OP0)

/* PWM 0 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR0,0x17);
/* PWM0 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR0H,0x17);
/* PWM0 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR0L,0x18);

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x2f);

/* External Interrupt Control Register 1 (ITC1) */
/*****************************************************************/

/* External Interrupt Control Register 1 */
DEF_8BIT_REG_AT(EICR1,0x37);
#define EICR1_IS00	0		/* EI0 Sensitivity */
#define EICR1_IS00_OR	(1 << EICR1_IS00)
#define EICR1_IS01	1		/* EI0 Sensitivity */
#define EICR1_IS01_OR	(1 << EICR1_IS01)
#define EICR1_IS0_OR	((1 << EICR1_IS00)|(1 << EICR1_IS01))
#define EICR1_IS10	2		/* EI1 Sensitivity */
#define EICR1_IS10_OR	(1 << EICR1_IS10)
#define EICR1_IS11	3		/* EI1 Sensitivity */
#define EICR1_IS11_OR	(1 << EICR1_IS11)
#define EICR1_IS1_OR	((1 << EICR1_IS10)|(1 << EICR1_IS11))
#define EICR1_IS20	4		/* EI2 Sensitivity */
#define EICR1_IS20_OR	(1 << EICR1_IS20)
#define EICR1_IS21	5		/* EI2 Sensitivity */
#define EICR1_IS21_OR	(1 << EICR1_IS21)
#define EICR1_IS2_OR	((1 << EICR1_IS20)|(1 << EICR1_IS21))

/* Main Clock Control/Status Register (MCC) */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x38);
#define MCCSR_SMS	0		/* Slow Mode Selection */
#define MCCSR_SMS_OR	(1 << MCCSR_SMS)
#define MCCSR_MCO	1		/* Main Clock Out Enable */
#define MCCSR_MCO_OR	(1 << MCCSR_MCO)

/* RC Oscillator Control Register (RCCR) */
/*****************************************************************/

/* RC Control Register */
DEF_8BIT_REG_AT(RCCR,0x39);

/* System Integrity Control/Status Register (SICSR) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x3a);
#define SICSR_AVDIE	0		/* Voltage Detector Interrupt Enable */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)
#define SICSR_AVDF	1		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_LVDRF	2		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_CR0	5		/* RC Oscillator Frequency Adjustment Bits */
#define SICSR_CR0_OR	(1 << SICSR_CR0)
#define SICSR_CR1	6		/* RC Oscillator Frequency Adjustment Bits */
#define SICSR_CR1_OR	(1 << SICSR_CR1)
#define SICSR_CR_OR	((1 << SICSR_CR0)|(1 << SICSR_CR1))

/* External Interrupt Control Register 2 (ITC2) */
/*****************************************************************/

/* External Interrupt Control Register 2 */
DEF_8BIT_REG_AT(EICR2,0x3d);
#define EICR2_IS30	0		/* EI3 Sensitivity */
#define EICR2_IS30_OR	(1 << EICR2_IS30)
#define EICR2_IS31	1		/* EI3 Sensitivity */
#define EICR2_IS31_OR	(1 << EICR2_IS31)
#define EICR2_IS3_OR	((1 << EICR2_IS30)|(1 << EICR2_IS31))
#define EICR2_IS40	2		/* EI4 Sensitivity */
#define EICR2_IS40_OR	(1 << EICR2_IS40)
#define EICR2_IS41	3		/* EI4 Sensitivity */
#define EICR2_IS41_OR	(1 << EICR2_IS41)
#define EICR2_IS4_OR	((1 << EICR2_IS40)|(1 << EICR2_IS41))

/* AVD Threshold Selection Register (AVDTHCR) */
/*****************************************************************/

/* AVD Threshold Selection Register / RC prescaler */
DEF_8BIT_REG_AT(AVDTHCR,0x3e);
#define AVDTHCR_AVD0	0		/* AVD Threshold Selection */
#define AVDTHCR_AVD0_OR	(1 << AVDTHCR_AVD0)
#define AVDTHCR_AVD1	1		/* AVD Threshold Selection */
#define AVDTHCR_AVD1_OR	(1 << AVDTHCR_AVD1)
#define AVDTHCR_AVD_OR	((1 << AVDTHCR_AVD0)|(1 << AVDTHCR_AVD1))
#define AVDTHCR_CK0	5		/* Internal RC Prescaler Selection */
#define AVDTHCR_CK0_OR	(1 << AVDTHCR_CK0)
#define AVDTHCR_CK1	6		/* Internal RC Prescaler Selection */
#define AVDTHCR_CK1_OR	(1 << AVDTHCR_CK1)
#define AVDTHCR_CK2	7		/* Internal RC Prescaler Selection */
#define AVDTHCR_CK2_OR	(1 << AVDTHCR_CK2)
#define AVDTHCR_CK_OR	((1 << AVDTHCR_CK0)|(1 << AVDTHCR_CK1)\
		|(1 << AVDTHCR_CK2))

/* Clock Controller Control/Status (CKCNTCSR) */
/*****************************************************************/

/* Clock Controller Control/Status Register */
DEF_8BIT_REG_AT(CKCNTCSR,0x3f);
#define CKCNTCSR_RC_AWU	0		/* RC/AWU Selection */
#define CKCNTCSR_RC_AWU_OR	(1 << CKCNTCSR_RC_AWU)
#define CKCNTCSR_RC_FLAG	2		/* RC Selection */
#define CKCNTCSR_RC_FLAG_OR	(1 << CKCNTCSR_RC_FLAG)
#define CKCNTCSR_AWU_FLAG	3		/* AWU Selection */
#define CKCNTCSR_AWU_FLAG_OR	(1 << CKCNTCSR_AWU_FLAG)

/* Multiplexed IO Reset Control Register (MUXCR) */
/*****************************************************************/

/* Multiplexed IO Reset Register Low */
DEF_8BIT_REG_AT(MUXCR0,0x47);

/* Multiplexed IO Reset Register High */
DEF_8BIT_REG_AT(MUXCR1,0x48);

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

#endif /* __ST7FLITEU02__ */
