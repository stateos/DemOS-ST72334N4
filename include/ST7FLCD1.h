/* ST7FLCD1.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FLCD1__
#define __ST7FLCD1__

/* ST7FLCD1 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FLCD1 1
		#if (MCU_NAME != ST7FLCD1)
		#error "wrong include file ST7FLCD1.h for chosen MCU!"
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

/* Circuit Name Register (NAMER) */
/*****************************************************************/

/* Circuit Name Register */
DEF_8BIT_REG_AT(NAMER,0x00);

/* Miscellaneous (MISCR) */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x01);
#define MISCR_PA4OVD	1		/* Port A, bit 4 Overdrive */
#define MISCR_PA4OVD_OR	(1 << MISCR_PA4OVD)
#define MISCR_PA5OVD	2		/* Port A, bit 5 Overdrive */
#define MISCR_PA5OVD_OR	(1 << MISCR_PA5OVD)

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x02);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x03);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x05);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x06);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x07);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x08);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x09);

/* 8-bit Analog-to-Digital Converter (ADC) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(ADCDR,0x0a);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x0b);
#define ADCCSR_CH0	0		/* Channel Selection */
#define ADCCSR_CH0_OR	(1 << ADCCSR_CH0)
#define ADCCSR_CH1	1		/* Channel Selection */
#define ADCCSR_CH1_OR	(1 << ADCCSR_CH1)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1))
#define ADCCSR_ADON	5		/* A/D Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_COCO	7		/* Conversion Complete */
#define ADCCSR_COCO_OR	(1 << ADCCSR_COCO)

/* External Interrupt Register (ITRFRE) */
/*****************************************************************/

/* External Interrupt Register */
DEF_8BIT_REG_AT(ITRFRE,0x0c);
#define ITRFRE_ITAITE	0		/* ITA Interrupt Enable */
#define ITRFRE_ITAITE_OR	(1 << ITRFRE_ITAITE)
#define ITRFRE_ITALAT	1		/* Falling or Rising Edge Detector Latch */
#define ITRFRE_ITALAT_OR	(1 << ITRFRE_ITALAT)
#define ITRFRE_ITAEDGE	2		/* Interrupt A Edge Selection */
#define ITRFRE_ITAEDGE_OR	(1 << ITRFRE_ITAEDGE)
#define ITRFRE_ITBITE	3		/* ITB Interrupt Enable */
#define ITRFRE_ITBITE_OR	(1 << ITRFRE_ITBITE)
#define ITRFRE_ITBLAT	4		/* Falling or Rising Edge Detector Latch */
#define ITRFRE_ITBLAT_OR	(1 << ITRFRE_ITBLAT)
#define ITRFRE_ITBEDGE	5		/* Interrupt B Edge Selection */
#define ITRFRE_ITBEDGE_OR	(1 << ITRFRE_ITBEDGE)

/* 8-Bit Timer (TIMA) */
/*****************************************************************/

/* Timer A Control Status Register */
DEF_8BIT_REG_AT(TIMCSRA,0x0d);
#define TIMCSRA_BUZE	0		/* Buzzer enable */
#define TIMCSRA_BUZE_OR	(1 << TIMCSRA_BUZE)
#define TIMCSRA_BUZ0	1		/* Buzzer tone selection */
#define TIMCSRA_BUZ0_OR	(1 << TIMCSRA_BUZ0)
#define TIMCSRA_BUZ1	2		/* Buzzer tone selection */
#define TIMCSRA_BUZ1_OR	(1 << TIMCSRA_BUZ1)
#define TIMCSRA_BUZ_OR	((1 << TIMCSRA_BUZ0)|(1 << TIMCSRA_BUZ1))
#define TIMCSRA_TAR	3		/* Timer Auto-Reload */
#define TIMCSRA_TAR_OR	(1 << TIMCSRA_TAR)
#define TIMCSRA_OVFE	4		/* Timer Overflow Interrupt Enable */
#define TIMCSRA_OVFE_OR	(1 << TIMCSRA_OVFE)
#define TIMCSRA_OVF	5		/* Timer Overflow Flag */
#define TIMCSRA_OVF_OR	(1 << TIMCSRA_OVF)
#define TIMCSRA_TB0	6		/* Time Base period selection */
#define TIMCSRA_TB0_OR	(1 << TIMCSRA_TB0)
#define TIMCSRA_TB1	7		/* Time Base period selection */
#define TIMCSRA_TB1_OR	(1 << TIMCSRA_TB1)
#define TIMCSRA_TB_OR	((1 << TIMCSRA_TB0)|(1 << TIMCSRA_TB1))

/* Timer A Counter Preload Register */
DEF_8BIT_REG_AT(TIMCPRA,0x0e);

/* PWM Generator (PWM) */
/*****************************************************************/

/* Duty Cycle Register Chanel 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x0f);

/* Duty Cycle Register Chanel 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x10);

/* Duty Cycle Register Chanel 2 */
DEF_8BIT_REG_AT(PWMDCR2,0x11);

/* Duty Cycle Register Chanel 3 */
DEF_8BIT_REG_AT(PWMDCR3,0x12);

/* Control Register A */
DEF_8BIT_REG_AT(PWMCRA,0x13);
#define PWMCRA_OP0	0		/* Output Polarity Chanel 0 */
#define PWMCRA_OP0_OR	(1 << PWMCRA_OP0)
#define PWMCRA_OP1	1		/* Output Polarity Chanel 1 */
#define PWMCRA_OP1_OR	(1 << PWMCRA_OP1)
#define PWMCRA_OP2	2		/* Output Polarity Chanel 2 */
#define PWMCRA_OP2_OR	(1 << PWMCRA_OP2)
#define PWMCRA_OP3	3		/* Output Polarity Chanel 3 */
#define PWMCRA_OP3_OR	(1 << PWMCRA_OP3)
#define PWMCRA_OE0	4		/* Output Enable Chanel 0 */
#define PWMCRA_OE0_OR	(1 << PWMCRA_OE0)
#define PWMCRA_OE1	5		/* Output Enable Chanel 1 */
#define PWMCRA_OE1_OR	(1 << PWMCRA_OE1)
#define PWMCRA_OE2	6		/* Output Enable Chanel 2 */
#define PWMCRA_OE2_OR	(1 << PWMCRA_OE2)
#define PWMCRA_OE3	7		/* Output Enable Chanel 3 */
#define PWMCRA_OE3_OR	(1 << PWMCRA_OE3)

/* Auto-Reload Register A */
DEF_8BIT_REG_AT(PWMARRA,0x14);

/* Duty Cycle Register Chanel 4 */
DEF_8BIT_REG_AT(PWMDCR4,0x15);

/* Duty Cycle Register Chanel 5 */
DEF_8BIT_REG_AT(PWMDCR5,0x16);

/* Control Register B */
DEF_8BIT_REG_AT(PWMCRB,0x17);
#define PWMCRB_OP4	0		/* Output Polarity Chanel 4 */
#define PWMCRB_OP4_OR	(1 << PWMCRB_OP4)
#define PWMCRB_OP5	1		/* Output Polarity Chanel 5 */
#define PWMCRB_OP5_OR	(1 << PWMCRB_OP5)
#define PWMCRB_OE4	6		/* Output Enable Chanel 4 */
#define PWMCRB_OE4_OR	(1 << PWMCRB_OE4)
#define PWMCRB_OE5	7		/* Output Enable Chanel 5 */
#define PWMCRB_OE5_OR	(1 << PWMCRB_OE5)

/* Auto-Reload Register B */
DEF_8BIT_REG_AT(PWMARRB,0x18);

/* Flash Control Status Register (FCSR) */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x19);

/* WatchDog Timer (WDG) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x1b);
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

/* I2C Single-Master Bus Interface (I2C) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(I2CCR,0x1c);
#define I2CCR_ITE	0		/* I2C Interrupt */
#define I2CCR_ITE_OR	(1 << I2CCR_ITE)
#define I2CCR_STOP	1		/* Generation of a Stop Condition */
#define I2CCR_STOP_OR	(1 << I2CCR_STOP)
#define I2CCR_ACK	2		/* Acknowledge */
#define I2CCR_ACK_OR	(1 << I2CCR_ACK)
#define I2CCR_START	3		/* Generation of a Start Condition */
#define I2CCR_START_OR	(1 << I2CCR_START)
#define I2CCR_PE	5		/* Peripheral I2C */
#define I2CCR_PE_OR	(1 << I2CCR_PE)

/* Status Register */
DEF_8BIT_REG_AT(I2CSR,0x1d);
#define I2CSR_SB	0		/* Start Bit */
#define I2CSR_SB_OR	(1 << I2CSR_SB)
#define I2CSR_M_SL	1		/* Master/Slave Mode */
#define I2CSR_M_SL_OR	(1 << I2CSR_M_SL)
#define I2CSR_BTF	3		/* Byte Transfer */
#define I2CSR_BTF_OR	(1 << I2CSR_BTF)
#define I2CSR_TRA	5		/* Transmitter/Receiver */
#define I2CSR_TRA_OR	(1 << I2CSR_TRA)
#define I2CSR_AF	6		/* Acknowledge Failure */
#define I2CSR_AF_OR	(1 << I2CSR_AF)
#define I2CSR_EVF	7		/* Event Flag */
#define I2CSR_EVF_OR	(1 << I2CSR_EVF)

/* Clock Control Register */
DEF_8BIT_REG_AT(I2CCCR,0x1e);
#define I2CCCR_CC0	0		/* 6-bit Clock Divider */
#define I2CCCR_CC0_OR	(1 << I2CCCR_CC0)
#define I2CCCR_CC1	1		/* 6-bit Clock Divider */
#define I2CCCR_CC1_OR	(1 << I2CCCR_CC1)
#define I2CCCR_CC2	2		/* 6-bit Clock Divider */
#define I2CCCR_CC2_OR	(1 << I2CCCR_CC2)
#define I2CCCR_CC3	3		/* 6-bit Clock Divider */
#define I2CCCR_CC3_OR	(1 << I2CCCR_CC3)
#define I2CCCR_CC4	4		/* 6-bit Clock Divider */
#define I2CCCR_CC4_OR	(1 << I2CCCR_CC4)
#define I2CCCR_CC5	5		/* 6-bit Clock Divider */
#define I2CCCR_CC5_OR	(1 << I2CCCR_CC5)
#define I2CCCR_CC_OR	((1 << I2CCCR_CC0)|(1 << I2CCCR_CC1)\
		|(1 << I2CCCR_CC2)|(1 << I2CCCR_CC3)|(1 << I2CCCR_CC4)\
		|(1 << I2CCCR_CC5))
#define I2CCCR_FILTOFF	6		/* Filter Off */
#define I2CCCR_FILTOFF_OR	(1 << I2CCCR_FILTOFF)
#define I2CCCR_FM_SM	7		/* Fast Mode Select */
#define I2CCCR_FM_SM_OR	(1 << I2CCCR_FM_SM)

/* Data Register */
DEF_8BIT_REG_AT(I2CDR,0x1f);

/* Display Data Channel Interfaces (DDC A) */
/*****************************************************************/

/* DDC Control Register */
DEF_8BIT_REG_AT(DDCCRA,0x20);
#define DDCCRA_ITE	0		/* Interrupt Enable */
#define DDCCRA_ITE_OR	(1 << DDCCRA_ITE)
#define DDCCRA_STOP	1		/* Release I2C bus */
#define DDCCRA_STOP_OR	(1 << DDCCRA_STOP)
#define DDCCRA_ACK	2		/* Acknowledge enable */
#define DDCCRA_ACK_OR	(1 << DDCCRA_ACK)
#define DDCCRA_DDCCIEN	4		/* DDC/CI address detection enabled */
#define DDCCRA_DDCCIEN_OR	(1 << DDCCRA_DDCCIEN)
#define DDCCRA_PE	5		/* Peripheral Enable */
#define DDCCRA_PE_OR	(1 << DDCCRA_PE)

/* DDC Status Register 1 */
DEF_8BIT_REG_AT(DDCSR1A,0x21);
#define DDCSR1A_ADSL	2		/* Address Matched (Slave Mode) */
#define DDCSR1A_ADSL_OR	(1 << DDCSR1A_ADSL)
#define DDCSR1A_BTF	3		/* Byte Transfer Finished */
#define DDCSR1A_BTF_OR	(1 << DDCSR1A_BTF)
#define DDCSR1A_BUSY	4		/* Bus Busy */
#define DDCSR1A_BUSY_OR	(1 << DDCSR1A_BUSY)
#define DDCSR1A_TRA	5		/* Transmitter/Receiver */
#define DDCSR1A_TRA_OR	(1 << DDCSR1A_TRA)
#define DDCSR1A_EVF	7		/* Event Flag */
#define DDCSR1A_EVF_OR	(1 << DDCSR1A_EVF)

/* DDC Status Register 2 */
DEF_8BIT_REG_AT(DDCSR2A,0x22);
#define DDCSR2A_DDCIF	0		/* DDC/CI address detected. */
#define DDCSR2A_DDCIF_OR	(1 << DDCSR2A_DDCIF)
#define DDCSR2A_BERR	1		/* Bus Error */
#define DDCSR2A_BERR_OR	(1 << DDCSR2A_BERR)
#define DDCSR2A_STOPF	3		/* Stop Detection */
#define DDCSR2A_STOPF_OR	(1 << DDCSR2A_STOPF)
#define DDCSR2A_AF	4		/* Acknowledge Failure */
#define DDCSR2A_AF_OR	(1 << DDCSR2A_AF)

/* DDC (7 bits) Slave Address 1 Register */
DEF_8BIT_REG_AT(DDCOAR1A,0x23);

/* DDC (7 bits) Slave Address 2 Register */
DEF_8BIT_REG_AT(DDCOAR2A,0x24);

/* DDC Data Register */
DEF_8BIT_REG_AT(DDCDRA,0x25);

/* DDC2B Control Register */
DEF_8BIT_REG_AT(DDCDCRA,0x27);
#define DDCDCRA_DDC2BPE	0		/* DDC2B Peripheral Enable */
#define DDCDCRA_DDC2BPE_OR	(1 << DDCDCRA_DDC2BPE)
#define DDCDCRA_WP	1		/* Write Protect */
#define DDCDCRA_WP_OR	(1 << DDCDCRA_WP)
#define DDCDCRA_EDE	2		/* End of Download interrupt Enable */
#define DDCDCRA_EDE_OR	(1 << DDCDCRA_EDE)
#define DDCDCRA_EDF	3		/* End of Download interrupt Flag */
#define DDCDCRA_EDF_OR	(1 << DDCDCRA_EDF)
#define DDCDCRA_ENDCE	4		/* End of Communication interrupt Enable */
#define DDCDCRA_ENDCE_OR	(1 << DDCDCRA_ENDCE)
#define DDCDCRA_ENDCF	5		/* End of Communication interrupt Flag */
#define DDCDCRA_ENDCF_OR	(1 << DDCDCRA_ENDCF)

/* Display Data Channel Interfaces (DDC B) */
/*****************************************************************/

/* DDC Control Register */
DEF_8BIT_REG_AT(DDCCRB,0x28);
#define DDCCRB_ITE	0		/* Interrupt Enable */
#define DDCCRB_ITE_OR	(1 << DDCCRB_ITE)
#define DDCCRB_STOP	1		/* Release I2C bus */
#define DDCCRB_STOP_OR	(1 << DDCCRB_STOP)
#define DDCCRB_ACK	2		/* Acknowledge enable */
#define DDCCRB_ACK_OR	(1 << DDCCRB_ACK)
#define DDCCRB_DDCCIEN	4		/* DDC/CI address detection enabled */
#define DDCCRB_DDCCIEN_OR	(1 << DDCCRB_DDCCIEN)
#define DDCCRB_PE	5		/* Peripheral Enable */
#define DDCCRB_PE_OR	(1 << DDCCRB_PE)

/* DDC Status Register 1 */
DEF_8BIT_REG_AT(DDCSR1B,0x29);
#define DDCSR1B_ADSL	2		/* Address Matched (Slave Mode) */
#define DDCSR1B_ADSL_OR	(1 << DDCSR1B_ADSL)
#define DDCSR1B_BTF	3		/* Byte Transfer Finished */
#define DDCSR1B_BTF_OR	(1 << DDCSR1B_BTF)
#define DDCSR1B_BUSY	4		/* Bus Busy */
#define DDCSR1B_BUSY_OR	(1 << DDCSR1B_BUSY)
#define DDCSR1B_TRA	5		/* Transmitter/Receiver */
#define DDCSR1B_TRA_OR	(1 << DDCSR1B_TRA)
#define DDCSR1B_EVF	7		/* Event Flag */
#define DDCSR1B_EVF_OR	(1 << DDCSR1B_EVF)

/* DDC Status Register 2 */
DEF_8BIT_REG_AT(DDCSR2B,0x2a);
#define DDCSR2B_DDCIF	0		/* DDC/CI address detected. */
#define DDCSR2B_DDCIF_OR	(1 << DDCSR2B_DDCIF)
#define DDCSR2B_BERR	1		/* Bus Error */
#define DDCSR2B_BERR_OR	(1 << DDCSR2B_BERR)
#define DDCSR2B_STOPF	3		/* Stop Detection */
#define DDCSR2B_STOPF_OR	(1 << DDCSR2B_STOPF)
#define DDCSR2B_AF	4		/* Acknowledge Failure */
#define DDCSR2B_AF_OR	(1 << DDCSR2B_AF)

/* DDC (7 bits) Slave Address 1 Register */
DEF_8BIT_REG_AT(DDCOAR1B,0x2b);

/* DDC (7 bits) Slave Address 2 Register */
DEF_8BIT_REG_AT(DDCOAR2B,0x2c);

/* DDC Data Register */
DEF_8BIT_REG_AT(DDCDRB,0x2d);

/* DDC2B Control Register */
DEF_8BIT_REG_AT(DDCDCRB,0x2f);
#define DDCDCRB_DDC2BPE	0		/* DDC2B Peripheral Enable */
#define DDCDCRB_DDC2BPE_OR	(1 << DDCDCRB_DDC2BPE)
#define DDCDCRB_WP	1		/* Write Protect */
#define DDCDCRB_WP_OR	(1 << DDCDCRB_WP)
#define DDCDCRB_EDE	2		/* End of Download interrupt Enable */
#define DDCDCRB_EDE_OR	(1 << DDCDCRB_EDE)
#define DDCDCRB_EDF	3		/* End of Download interrupt Flag */
#define DDCDCRB_EDF_OR	(1 << DDCDCRB_EDF)
#define DDCDCRB_ENDCE	4		/* End of Communication interrupt Enable */
#define DDCDCRB_ENDCE_OR	(1 << DDCDCRB_ENDCE)
#define DDCDCRB_ENDCF	5		/* End of Communication interrupt Flag */
#define DDCDCRB_ENDCF_OR	(1 << DDCDCRB_ENDCF)

/* Infrared Preprocessor (IFR) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(DR,0x36);

/* Control Register */
DEF_8BIT_REG_AT(CR,0x37);
#define CR_POSED_NEGED0	1		/* Edge selection for the duration measurement */
#define CR_POSED_NEGED0_OR	(1 << CR_POSED_NEGED0)
#define CR_POSED_NEGED1	2		/* Edge selection for the duration measurement */
#define CR_POSED_NEGED1_OR	(1 << CR_POSED_NEGED1)
#define CR_POSED/NEGED_OR	((1 << CR_POSED_NEGED0)|(1 << CR_POSED_NEGED1))
#define CR_FLSEL	3		/* Spike filter pulse width selection */
#define CR_FLSEL_OR	(1 << CR_FLSEL)
#define CR_ITE	4		/* Interrupt enable */
#define CR_ITE_OR	(1 << CR_ITE)

/* 8-bit Timer with External Trigger (TIMB) */
/*****************************************************************/

/* Timer B Control Status Register */
DEF_8BIT_REG_AT(TIMCSRB,0x38);
#define TIMCSRB_EEF	0		/* External Event Flag */
#define TIMCSRB_EEF_OR	(1 << TIMCSRB_EEF)
#define TIMCSRB_EDG	1		/* External Signal Edge */
#define TIMCSRB_EDG_OR	(1 << TIMCSRB_EDG)
#define TIMCSRB_EXT	2		/* External Trigger */
#define TIMCSRB_EXT_OR	(1 << TIMCSRB_EXT)
#define TIMCSRB_TAR	3		/* Timer Auto-Reload */
#define TIMCSRB_TAR_OR	(1 << TIMCSRB_TAR)
#define TIMCSRB_OVFE	4		/* Timer Overflow Interrupt Enable */
#define TIMCSRB_OVFE_OR	(1 << TIMCSRB_OVFE)
#define TIMCSRB_OVF	5		/* Timer Overflow Flag */
#define TIMCSRB_OVF_OR	(1 << TIMCSRB_OVF)
#define TIMCSRB_TB0	6		/* Time Base period selection */
#define TIMCSRB_TB0_OR	(1 << TIMCSRB_TB0)
#define TIMCSRB_TB1	7		/* Time Base period selection */
#define TIMCSRB_TB1_OR	(1 << TIMCSRB_TB1)
#define TIMCSRB_TB_OR	((1 << TIMCSRB_TB0)|(1 << TIMCSRB_TB1))

/* Timer B Counter Preload Register */
DEF_8BIT_REG_AT(TIMCPRB,0x39);

#endif /* __ST7FLCD1__ */
