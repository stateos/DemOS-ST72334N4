/* ST7FOXA0.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FOXA0__
#define __ST7FOXA0__

/* ST7FOXA0 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FOXA0 1
		#if (MCU_NAME != ST7FOXA0)
		#error "wrong include file ST7FOXA0.h for chosen MCU!"
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

/* Lite Timer (LT) */
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

/* Auto Reload Timer (ART) */
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

/* RC Oscillator Calibration Control Register (RCC1) */
/*****************************************************************/

/* RC Calibration Control/Status Register */
DEF_8BIT_REG_AT(RCC_CSR,0x30);
#define RCC_CSR_RCCPGM	0		/* Programming Control and Status bit */
#define RCC_CSR_RCCPGM_OR	(1 << RCC_CSR_RCCPGM)
#define RCC_CSR_RCCLAT	1		/* Latch Access Transfer bit */
#define RCC_CSR_RCCLAT_OR	(1 << RCC_CSR_RCCLAT)

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
DEF_8BIT_REG_AT(ADCDRL,0x36);
#define ADCDRL_D0	0		/* ADC Data Low */
#define ADCDRL_D0_OR	(1 << ADCDRL_D0)
#define ADCDRL_D1	1		/* ADC Data Low */
#define ADCDRL_D1_OR	(1 << ADCDRL_D1)
#define ADCDRL_D_OR	((1 << ADCDRL_D0)|(1 << ADCDRL_D1))
#define ADCDRL_SLOW	3		/* ADC Slow Mode */
#define ADCDRL_SLOW_OR	(1 << ADCDRL_SLOW)

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

/* RC Oscillator Calibration Register (RCC2) */
/*****************************************************************/

/* RC oscillator Control Register High */
DEF_8BIT_REG_AT(RCCRH,0x39);
#define RCCRH_CR2	0		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR2_OR	(1 << RCCRH_CR2)
#define RCCRH_CR3	1		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR3_OR	(1 << RCCRH_CR3)
#define RCCRH_CR4	2		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR4_OR	(1 << RCCRH_CR4)
#define RCCRH_CR5	3		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR5_OR	(1 << RCCRH_CR5)
#define RCCRH_CR6	4		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR6_OR	(1 << RCCRH_CR6)
#define RCCRH_CR7	5		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR7_OR	(1 << RCCRH_CR7)
#define RCCRH_CR8	6		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR8_OR	(1 << RCCRH_CR8)
#define RCCRH_CR9	7		/* RC Oscillator Frequency Adjustment bits */
#define RCCRH_CR9_OR	(1 << RCCRH_CR9)
#define RCCRH_CR_OR	((1 << RCCRH_CR2)|(1 << RCCRH_CR3)\
		|(1 << RCCRH_CR4)|(1 << RCCRH_CR5)|(1 << RCCRH_CR6)|(1 << RCCRH_CR7)\
		|(1 << RCCRH_CR8)|(1 << RCCRH_CR9))

/* RC oscillator Control Register Low */
DEF_8BIT_REG_AT(RCCRL,0x3a);
#define RCCRL_LVDRF	2		/* LVD reset flag */
#define RCCRL_LVDRF_OR	(1 << RCCRL_LVDRF)
#define RCCRL_CR0	5		/* RC Oscillator Frequency Adjustment bits */
#define RCCRL_CR0_OR	(1 << RCCRL_CR0)
#define RCCRL_CR1	6		/* RC Oscillator Frequency Adjustment bits */
#define RCCRL_CR1_OR	(1 << RCCRL_CR1)
#define RCCRL_CR_OR	((1 << RCCRL_CR0)|(1 << RCCRL_CR1))

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

/* RC Oscillator Prescaler Register (RCPSCR) */
/*****************************************************************/

/* RC Prescaler Register */
DEF_8BIT_REG_AT(PSCR,0x3e);
#define PSCR_CK0	5		/* Internal RC Prescaler Selection */
#define PSCR_CK0_OR	(1 << PSCR_CK0)
#define PSCR_CK1	6		/* Internal RC Prescaler Selection */
#define PSCR_CK1_OR	(1 << PSCR_CK1)
#define PSCR_CK2	7		/* Internal RC Prescaler Selection */
#define PSCR_CK2_OR	(1 << PSCR_CK2)
#define PSCR_CK_OR	((1 << PSCR_CK0)|(1 << PSCR_CK1)\
		|(1 << PSCR_CK2))

/* Clock Controller Control/Status Register (CKCNTCSR) */
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

#endif /* __ST7FOXA0__ */
