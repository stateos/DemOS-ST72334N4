/* ST7FLITE35.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLITE35__
#define __ST7FLITE35__

/* ST7FLITE35 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLITE35 1
		#if (MCU_NAME != ST7FLITE35)
		#error "wrong include file ST7FLITE35.h for chosen MCU!"
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
#define LTCSR2_TB2F	0		/* Timebase 2 Interrupt Flag */
#define LTCSR2_TB2F_OR	(1 << LTCSR2_TB2F)
#define LTCSR2_TB2IE	1		/* Timebase 2 Interrupt enable */
#define LTCSR2_TB2IE_OR	(1 << LTCSR2_TB2IE)

/* Lite Timer Auto-Reload Register */
DEF_8BIT_REG_AT(LTARR,0x09);
#define LTARR_AR0	0		/* Counter 2 Reload Value */
#define LTARR_AR0_OR	(1 << LTARR_AR0)
#define LTARR_AR1	1		/* Counter 2 Reload Value */
#define LTARR_AR1_OR	(1 << LTARR_AR1)
#define LTARR_AR2	2		/* Counter 2 Reload Value */
#define LTARR_AR2_OR	(1 << LTARR_AR2)
#define LTARR_AR3	3		/* Counter 2 Reload Value */
#define LTARR_AR3_OR	(1 << LTARR_AR3)
#define LTARR_AR4	4		/* Counter 2 Reload Value */
#define LTARR_AR4_OR	(1 << LTARR_AR4)
#define LTARR_AR5	5		/* Counter 2 Reload Value */
#define LTARR_AR5_OR	(1 << LTARR_AR5)
#define LTARR_AR6	6		/* Counter 2 Reload Value */
#define LTARR_AR6_OR	(1 << LTARR_AR6)
#define LTARR_AR7	7		/* Counter 2 Reload Value */
#define LTARR_AR7_OR	(1 << LTARR_AR7)
#define LTARR_AR_OR	((1 << LTARR_AR0)|(1 << LTARR_AR1)\
		|(1 << LTARR_AR2)|(1 << LTARR_AR3)|(1 << LTARR_AR4)|(1 << LTARR_AR5)\
		|(1 << LTARR_AR6)|(1 << LTARR_AR7))

/* Lite Timer Counter Register */
DEF_8BIT_REG_AT(LTCNTR,0x0a);
#define LTCNTR_CNT0	0		/* Counter 2 Reload Value */
#define LTCNTR_CNT0_OR	(1 << LTCNTR_CNT0)
#define LTCNTR_CNT1	1		/* Counter 2 Reload Value */
#define LTCNTR_CNT1_OR	(1 << LTCNTR_CNT1)
#define LTCNTR_CNT2	2		/* Counter 2 Reload Value */
#define LTCNTR_CNT2_OR	(1 << LTCNTR_CNT2)
#define LTCNTR_CNT3	3		/* Counter 2 Reload Value */
#define LTCNTR_CNT3_OR	(1 << LTCNTR_CNT3)
#define LTCNTR_CNT4	4		/* Counter 2 Reload Value */
#define LTCNTR_CNT4_OR	(1 << LTCNTR_CNT4)
#define LTCNTR_CNT5	5		/* Counter 2 Reload Value */
#define LTCNTR_CNT5_OR	(1 << LTCNTR_CNT5)
#define LTCNTR_CNT6	6		/* Counter 2 Reload Value */
#define LTCNTR_CNT6_OR	(1 << LTCNTR_CNT6)
#define LTCNTR_CNT7	7		/* Counter 2 Reload Value */
#define LTCNTR_CNT7_OR	(1 << LTCNTR_CNT7)
#define LTCNTR_CNT_OR	((1 << LTCNTR_CNT0)|(1 << LTCNTR_CNT1)\
		|(1 << LTCNTR_CNT2)|(1 << LTCNTR_CNT3)|(1 << LTCNTR_CNT4)\
		|(1 << LTCNTR_CNT5)|(1 << LTCNTR_CNT6)|(1 << LTCNTR_CNT7))

/* Lite Timer Control/Status Register 1 */
DEF_8BIT_REG_AT(LTCSR1,0x0b);
#define LTCSR1_TB1F	3		/* Timebase Interrupt Flag. */
#define LTCSR1_TB1F_OR	(1 << LTCSR1_TB1F)
#define LTCSR1_TB1IE	4		/* Timebase Interrupt enable. */
#define LTCSR1_TB1IE_OR	(1 << LTCSR1_TB1IE)
#define LTCSR1_TB	5		/* Timebase period selection. */
#define LTCSR1_TB_OR	(1 << LTCSR1_TB)
#define LTCSR1_ICF	6		/* Input Capture Flag. */
#define LTCSR1_ICF_OR	(1 << LTCSR1_ICF)
#define LTCSR1_ICIE	7		/* Input Capture Interrupt Enable */
#define LTCSR1_ICIE_OR	(1 << LTCSR1_ICIE)

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
#define ATCSR_OVFIE1	1		/* Overflow Interrupt Enable */
#define ATCSR_OVFIE1_OR	(1 << ATCSR_OVFIE1)
#define ATCSR_OVF1	2		/* Overflow Flag */
#define ATCSR_OVF1_OR	(1 << ATCSR_OVF1)
#define ATCSR_CK0	3		/* Counter Clock Selection */
#define ATCSR_CK0_OR	(1 << ATCSR_CK0)
#define ATCSR_CK1	4		/* Counter Clock Selection */
#define ATCSR_CK1_OR	(1 << ATCSR_CK1)
#define ATCSR_CK_OR	((1 << ATCSR_CK0)|(1 << ATCSR_CK1))
#define ATCSR_ICIE	5		/* Input Capture Interrupt Enable */
#define ATCSR_ICIE_OR	(1 << ATCSR_ICIE)
#define ATCSR_ICF	6		/* Input Capture Flag. */
#define ATCSR_ICF_OR	(1 << ATCSR_ICF)

/* Counter Register 1 */
DEF_16BIT_REG_AT(CNTR1,0x0e);
/* Counter Value High */
DEF_8BIT_REG_AT(CNTR1H,0x0e);
/* Counter Value Low */
DEF_8BIT_REG_AT(CNTR1L,0x0f);

/* Auto-Reload Register 1 */
DEF_16BIT_REG_AT(ATR1,0x10);
/* Autoreload Register High */
DEF_8BIT_REG_AT(ATR1H,0x10);
/* Autoreload Register Low */
DEF_8BIT_REG_AT(ATR1L,0x11);

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
#define PWM0CSR_CMPF0	0		/* PWM0 Compare Flag */
#define PWM0CSR_CMPF0_OR	(1 << PWM0CSR_CMPF0)
#define PWM0CSR_OP0	1		/* PWM0 Output Polarity */
#define PWM0CSR_OP0_OR	(1 << PWM0CSR_OP0)

/* PWM 1 Control/Status Register */
DEF_8BIT_REG_AT(PWM1CSR,0x14);
#define PWM1CSR_CMPF1	0		/* PWM1 Compare Flag */
#define PWM1CSR_CMPF1_OR	(1 << PWM1CSR_CMPF1)
#define PWM1CSR_OP1	1		/* PWM1 Output Polarity */
#define PWM1CSR_OP1_OR	(1 << PWM1CSR_OP1)

/* PWM 2 Control/Status Register */
DEF_8BIT_REG_AT(PWM2CSR,0x15);
#define PWM2CSR_CMPF2	0		/* PWM2 Compare Flag */
#define PWM2CSR_CMPF2_OR	(1 << PWM2CSR_CMPF2)
#define PWM2CSR_OP2	1		/* PWM2 Output Polarity */
#define PWM2CSR_OP2_OR	(1 << PWM2CSR_OP2)

/* PWM 3 Control/Status Register */
DEF_8BIT_REG_AT(PWM3CSR,0x16);
#define PWM3CSR_CMPF3	0		/* PWM3 Compare Flag */
#define PWM3CSR_CMPF3_OR	(1 << PWM3CSR_CMPF3)
#define PWM3CSR_OP3	1		/* PWM3 Output Polarity */
#define PWM3CSR_OP3_OR	(1 << PWM3CSR_OP3)

/* PWM 0 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR0,0x17);
/* PWM0 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR0H,0x17);
/* PWM0 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR0L,0x18);

/* PWM 1 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR1,0x19);
/* PWM1 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR1H,0x19);
/* PWM1 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR1L,0x1a);

/* PWM 2 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR2,0x1b);
/* PWM2 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR2H,0x1b);
/* PWM2 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR2L,0x1c);

/* PWM 3 Duty Cycle Register */
DEF_16BIT_REG_AT(DCR3,0x1d);
/* PWM3 Duty Cycle Value High */
DEF_8BIT_REG_AT(DCR3H,0x1d);
/* PWM3 Duty Cycle Value Low */
DEF_8BIT_REG_AT(DCR3L,0x1e);

/* Input Capture Register */
DEF_16BIT_REG_AT(ATICR,0x1f);
/* Input Capture Data High */
DEF_8BIT_REG_AT(ATICRH,0x1f);
/* Input Capture Data Low */
DEF_8BIT_REG_AT(ATICRL,0x20);

/* Timer Control/Status Register 2 */
DEF_8BIT_REG_AT(ATCSR2,0x21);
#define ATCSR2_TRAN1	0		/* Transfer enable 1 */
#define ATCSR2_TRAN1_OR	(1 << ATCSR2_TRAN1)
#define ATCSR2_TRAN2	1		/* Transfer enable 2 */
#define ATCSR2_TRAN2_OR	(1 << ATCSR2_TRAN2)
#define ATCSR2_ENCNTR2	2		/* Enable counter 2 for PWM2/3 */
#define ATCSR2_ENCNTR2_OR	(1 << ATCSR2_ENCNTR2)
#define ATCSR2_OVF2	3		/* Overflow Flag */
#define ATCSR2_OVF2_OR	(1 << ATCSR2_OVF2)
#define ATCSR2_OVFIE2	4		/* Overflow interrupt 2 enable */
#define ATCSR2_OVFIE2_OR	(1 << ATCSR2_OVFIE2)
#define ATCSR2_ICS	5		/* Input Capture Shorted */
#define ATCSR2_ICS_OR	(1 << ATCSR2_ICS)

/* Break Control Register */
DEF_8BIT_REG_AT(BREAKCR,0x22);
#define BREAKCR_PWM0	0		/* Break Pattern */
#define BREAKCR_PWM0_OR	(1 << BREAKCR_PWM0)
#define BREAKCR_PWM1	1		/* Break Pattern */
#define BREAKCR_PWM1_OR	(1 << BREAKCR_PWM1)
#define BREAKCR_PWM2	2		/* Break Pattern */
#define BREAKCR_PWM2_OR	(1 << BREAKCR_PWM2)
#define BREAKCR_PWM3	3		/* Break Pattern */
#define BREAKCR_PWM3_OR	(1 << BREAKCR_PWM3)
#define BREAKCR_BPEN	4		/* Break Pin Enable */
#define BREAKCR_BPEN_OR	(1 << BREAKCR_BPEN)
#define BREAKCR_BA	5		/* Break Active */
#define BREAKCR_BA_OR	(1 << BREAKCR_BA)

/* Auto-Reload Register 2 */
DEF_16BIT_REG_AT(ATR2,0x23);
/* Autoreload Register 2 High */
DEF_8BIT_REG_AT(ATR2H,0x23);
/* Autoreload Register 2 Low */
DEF_8BIT_REG_AT(ATR2L,0x24);

/* Dead Time Generator Register */
DEF_8BIT_REG_AT(DTGR,0x25);
#define DTGR_DT0	0		/* Dead Time Value */
#define DTGR_DT0_OR	(1 << DTGR_DT0)
#define DTGR_DT1	1		/* Dead Time Value */
#define DTGR_DT1_OR	(1 << DTGR_DT1)
#define DTGR_DT2	2		/* Dead Time Value */
#define DTGR_DT2_OR	(1 << DTGR_DT2)
#define DTGR_DT3	3		/* Dead Time Value */
#define DTGR_DT3_OR	(1 << DTGR_DT3)
#define DTGR_DT4	4		/* Dead Time Value */
#define DTGR_DT4_OR	(1 << DTGR_DT4)
#define DTGR_DT5	5		/* Dead Time Value */
#define DTGR_DT5_OR	(1 << DTGR_DT5)
#define DTGR_DT6	6		/* Dead Time Value */
#define DTGR_DT6_OR	(1 << DTGR_DT6)
#define DTGR_DT_OR	((1 << DTGR_DT0)|(1 << DTGR_DT1)\
		|(1 << DTGR_DT2)|(1 << DTGR_DT3)|(1 << DTGR_DT4)|(1 << DTGR_DT5)\
		|(1 << DTGR_DT6))
#define DTGR_DTE	7		/* Dead Time Enable */
#define DTGR_DTE_OR	(1 << DTGR_DTE)

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

/* Control/Status Register */
DEF_8BIT_REG_AT(SPICSR,0x33);
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

/* External Interrupt Control/Selection Register (ITC) */
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

/* System Integrity Control/Status Register (SI) */
/*****************************************************************/

/* System Integrity Control/Status Register */
DEF_8BIT_REG_AT(SICSR,0x3a);
#define SICSR_AVDIE	0		/* Voltage Detector Interrupt Enable */
#define SICSR_AVDIE_OR	(1 << SICSR_AVDIE)
#define SICSR_AVDF	1		/* Voltage Detector Flag */
#define SICSR_AVDF_OR	(1 << SICSR_AVDF)
#define SICSR_LVDRF	2		/* LVD Reset Flag */
#define SICSR_LVDRF_OR	(1 << SICSR_LVDRF)
#define SICSR_LOCKED	3		/* PLL Locked Flag */
#define SICSR_LOCKED_OR	(1 << SICSR_LOCKED)
#define SICSR_WDGRF	4		/* Watchdog Reset Flag */
#define SICSR_WDGRF_OR	(1 << SICSR_WDGRF)

/* LINSCI Serial Communication Interface (LIN Master/Slave) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x40);
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
DEF_8BIT_REG_AT(SCIDR,0x41);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x42);
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
DEF_8BIT_REG_AT(LPR,0x42);

/* Control Register 1 */
DEF_8BIT_REG_AT(SCICR1,0x43);
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
DEF_8BIT_REG_AT(SCICR2,0x44);
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
DEF_8BIT_REG_AT(SCICR3,0x45);
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
DEF_8BIT_REG_AT(SCIERPR,0x46);
DEF_8BIT_REG_AT(LHLR,0x46);

/* SCIETPR, LPRF - Extended Transmit Prescaler Reg., Lin Prescaler Fraction Register */
DEF_8BIT_REG_AT(SCIETPR,0x47);
DEF_8BIT_REG_AT(LPRF,0x47);

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

#endif /* __ST7FLITE35__ */
