/* ST7FLITEBC.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLITEBC__
#define __ST7FLITEBC__

/* ST7FLITEBC */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLITEBC 1
		#if (MCU_NAME != ST7FLITEBC)
		#error "wrong include file ST7FLITEBC.h for chosen MCU!"
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

/* Lite Timer Control/Status Register */
DEF_8BIT_REG_AT(LTCSR,0x0b);

/* Auto Reload Timer */
/*****************************************************************/

/* Timer Control/Satatus Register */
DEF_8BIT_REG_AT(ATCSR,0x0d);

/* Counter Register */
DEF_8BIT_REG_AT(CNTR,0x0f);

/* Auto-Reload Register */
DEF_8BIT_REG_AT(ATR,0x11);

/* PWM Output Control Register */
DEF_8BIT_REG_AT(PWMCR,0x12);
#define PWMCR_OE0	0		/* PWM Mode Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)

/* PWM 0 Control/Status Register */
DEF_8BIT_REG_AT(PWM0CSR,0x13);

/* PWM 0 Duty Cycle Register */
DEF_8BIT_REG_AT(DCR0,0x18);

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x2f);

/* 8-Bit A/D Converter (ADC) */
/*****************************************************************/

/* ADC Control/Status Register 1 */
DEF_8BIT_REG_AT(ADCCSR1,0x34);
#define ADCCSR1_CH0	0		/* Channel Selection */
#define ADCCSR1_CH0_OR	(1 << ADCCSR1_CH0)
#define ADCCSR1_CH1	1		/* Channel Selection */
#define ADCCSR1_CH1_OR	(1 << ADCCSR1_CH1)
#define ADCCSR1_CH2	2		/* Channel Selection */
#define ADCCSR1_CH2_OR	(1 << ADCCSR1_CH2)
#define ADCCSR1_CH_OR	((1 << ADCCSR1_CH0)|(1 << ADCCSR1_CH1)\
		|(1 << ADCCSR1_CH2))
#define ADCCSR1_ADON	5		/* ADC Converter On */
#define ADCCSR1_ADON_OR	(1 << ADCCSR1_ADON)
#define ADCCSR1_EOC	7		/* End of Conversion */
#define ADCCSR1_EOC_OR	(1 << ADCCSR1_EOC)

/* ADC Data Register */
DEF_8BIT_REG_AT(ADCDR,0x35);

/* ADC Control/Status Register 2 */
DEF_8BIT_REG_AT(ADCCSR2,0x36);
#define ADCCSR2_SLOW	3		/* ADC Slow Mode */
#define ADCCSR2_SLOW_OR	(1 << ADCCSR2_SLOW)

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

/* System Integrity Control/Status Register (SICSR) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x3a);
#define SICSR_LVDRF	4		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)

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

#endif /* __ST7FLITEBC__ */
