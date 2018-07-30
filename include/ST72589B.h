/* ST72589B.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72589B__
#define __ST72589B__

/* ST72589B */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72589B 1
		#if (MCU_NAME != ST72589B)
		#error "wrong include file ST72589B.h for chosen MCU!"
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

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x0c);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x0d);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x0e);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x1c);
#define ISPR0_I0_0	0		/* External Non Maskable IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* External Non Maskable IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* MCC IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* MCC IT Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External IT 0 Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External IT 0 Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External IT 1 Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External IT 1 Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x1d);
#define ISPR1_I0_4	0		/* External IT 2 Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT 2 Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* External IT 3 Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* External IT 3 Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* CAN IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* CAN IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* SPI IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* SPI IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x1e);
#define ISPR2_I0_8	0		/* Timer A IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* Timer A IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* Timer B IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* Timer B IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* SCI IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* SCI IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* EEPROM IT Priority Level */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* EEPROM IT Priority Level */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x1f);
#define ISPR3_I0_13	2		/* PWM ART IT Priority Level */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* PWM ART IT Priority Level */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* Miscellaneous 1 */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x20);
#define MISCR1_NMIE	0		/* NMI Enable */
#define MISCR1_NMIE_OR	(1 << MISCR1_NMIE)
#define MISCR1_NMIS	1		/* NMI Sensitivity */
#define MISCR1_NMIS_OR	(1 << MISCR1_NMIS)
#define MISCR1_IS20	4		/* EI2/EI4 Sensibility */
#define MISCR1_IS20_OR	(1 << MISCR1_IS20)
#define MISCR1_IS21	5		/* EI2/EI4 Sensibility */
#define MISCR1_IS21_OR	(1 << MISCR1_IS21)
#define MISCR1_IS2_OR	((1 << MISCR1_IS20)|(1 << MISCR1_IS21))
#define MISCR1_IS10	6		/* EI1/EI3/EI5 Sensibility */
#define MISCR1_IS10_OR	(1 << MISCR1_IS10)
#define MISCR1_IS11	7		/* EI1/EI3/EI5 Sensibility */
#define MISCR1_IS11_OR	(1 << MISCR1_IS11)
#define MISCR1_IS1_OR	((1 << MISCR1_IS10)|(1 << MISCR1_IS11))

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

/* Main Clock Control/Status */
/*****************************************************************/

/* Main Clock Control/Status Register */
DEF_8BIT_REG_AT(MCCSR,0x26);
#define MCCSR_OIF	0		/* Oscillator Interrupt Flag */
#define MCCSR_OIF_OR	(1 << MCCSR_OIF)
#define MCCSR_OIE	1		/* Oscillator Interrupt Enable */
#define MCCSR_OIE_OR	(1 << MCCSR_OIE)
#define MCCSR_TB0	2		/* Time Base Control */
#define MCCSR_TB0_OR	(1 << MCCSR_TB0)
#define MCCSR_TB1	3		/* Time Base Control */
#define MCCSR_TB1_OR	(1 << MCCSR_TB1)
#define MCCSR_TB_OR	((1 << MCCSR_TB0)|(1 << MCCSR_TB1))
#define MCCSR_CP0	5		/* CPU Clock Prescaler */
#define MCCSR_CP0_OR	(1 << MCCSR_CP0)
#define MCCSR_CP1	6		/* CPU Clock Prescaler */
#define MCCSR_CP1_OR	(1 << MCCSR_CP1)
#define MCCSR_CP_OR	((1 << MCCSR_CP0)|(1 << MCCSR_CP1))
#define MCCSR_SMS	7		/* Slow Mode Select */
#define MCCSR_SMS_OR	(1 << MCCSR_SMS)

/* I2C */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(I2CCR,0x28);
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

/* Status Register 1 */
DEF_8BIT_REG_AT(I2CSR1,0x29);
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

/* Status Register 2 */
DEF_8BIT_REG_AT(I2CSR2,0x2a);
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

/* Clock Control Register */
DEF_8BIT_REG_AT(I2CCCR,0x2b);
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

/* Own Address Register 1 */
DEF_8BIT_REG_AT(I2COAR1,0x2c);
#define I2COAR1_ADD0	0		/* Direction Bit (7-bit address) or Interface Address (10-bit address) */
#define I2COAR1_ADD0_OR	(1 << I2COAR1_ADD0)
#define I2COAR1_ADD1	1		/* Interface Address */
#define I2COAR1_ADD1_OR	(1 << I2COAR1_ADD1)
#define I2COAR1_ADD2	2		/* Interface Address */
#define I2COAR1_ADD2_OR	(1 << I2COAR1_ADD2)
#define I2COAR1_ADD3	3		/* Interface Address */
#define I2COAR1_ADD3_OR	(1 << I2COAR1_ADD3)
#define I2COAR1_ADD4	4		/* Interface Address */
#define I2COAR1_ADD4_OR	(1 << I2COAR1_ADD4)
#define I2COAR1_ADD5	5		/* Interface Address */
#define I2COAR1_ADD5_OR	(1 << I2COAR1_ADD5)
#define I2COAR1_ADD6	6		/* Interface Address */
#define I2COAR1_ADD6_OR	(1 << I2COAR1_ADD6)
#define I2COAR1_ADD7	7		/* Interface Address */
#define I2COAR1_ADD7_OR	(1 << I2COAR1_ADD7)
#define I2COAR1_ADD_OR	((1 << I2COAR1_ADD1)|(1 << I2COAR1_ADD2)\
		|(1 << I2COAR1_ADD3)|(1 << I2COAR1_ADD4)|(1 << I2COAR1_ADD5)\
		|(1 << I2COAR1_ADD6)|(1 << I2COAR1_ADD7))

/* Own Address Register 2 */
DEF_8BIT_REG_AT(I2COAR2,0x2d);
#define I2COAR2_ADD8	1		/* Interface Address (10-bit addressing mode) */
#define I2COAR2_ADD8_OR	(1 << I2COAR2_ADD8)
#define I2COAR2_ADD9	2		/* Interface Address (10-bit addressing mode) */
#define I2COAR2_ADD9_OR	(1 << I2COAR2_ADD9)
#define I2COAR2_ADD_OR	((1 << I2COAR2_ADD8)|(1 << I2COAR2_ADD9))
#define I2COAR2_FR0	6		/* Frequency Bits */
#define I2COAR2_FR0_OR	(1 << I2COAR2_FR0)
#define I2COAR2_FR1	7		/* Frequency Bits */
#define I2COAR2_FR1_OR	(1 << I2COAR2_FR1)
#define I2COAR2_FR_OR	((1 << I2COAR2_FR0)|(1 << I2COAR2_FR1))

/* Data Register */
DEF_8BIT_REG_AT(I2CDR,0x2e);

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

/* Miscellaneous 2 */
/*****************************************************************/

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x40);
#define MISCR2_SSI	0		/* Internal Mode */
#define MISCR2_SSI_OR	(1 << MISCR2_SSI)
#define MISCR2_SSM	1		/* Mode Selection */
#define MISCR2_SSM_OR	(1 << MISCR2_SSM)
#define MISCR2_BC0	4		/* Beep Control */
#define MISCR2_BC0_OR	(1 << MISCR2_BC0)
#define MISCR2_BC1	5		/* Beep Control */
#define MISCR2_BC1_OR	(1 << MISCR2_BC1)
#define MISCR2_BC_OR	((1 << MISCR2_BC0)|(1 << MISCR2_BC1))
#define MISCR2_MCO	6		/* Main clock-out control */
#define MISCR2_MCO_OR	(1 << MISCR2_MCO)

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

/* Ext. Receive Prescaler Reg. */
DEF_8BIT_REG_AT(SCIERPR,0x55);

/* Ext. Transmit Prescaler Reg. */
DEF_8BIT_REG_AT(SCIETPR,0x57);

/* Controller Area Network (CAN) */
/*****************************************************************/

/* Interrupt Status Register */
DEF_8BIT_REG_AT(CANISR,0x5a);
#define CANISR_EPND	0		/* Error Interrupt Pending */
#define CANISR_EPND_OR	(1 << CANISR_EPND)
#define CANISR_TEIF	1		/* Transmit Error Interrupt Flag */
#define CANISR_TEIF_OR	(1 << CANISR_TEIF)
#define CANISR_ORIF	2		/* Overrun Interrupt Flag */
#define CANISR_ORIF_OR	(1 << CANISR_ORIF)
#define CANISR_SCIF	3		/* Status Change Interrupt Flag */
#define CANISR_SCIF_OR	(1 << CANISR_SCIF)
#define CANISR_TXIF	4		/* Transmit Interrupt Flag */
#define CANISR_TXIF_OR	(1 << CANISR_TXIF)
#define CANISR_RXIF1	5		/* Receive Interrupt Flag for Buffer 1 */
#define CANISR_RXIF1_OR	(1 << CANISR_RXIF1)
#define CANISR_RXIF2	6		/* Receive Interrupt Flag for Buffer 2 */
#define CANISR_RXIF2_OR	(1 << CANISR_RXIF2)
#define CANISR_RXIF3	7		/* Receive Interrupt Flag for Buffer 3 */
#define CANISR_RXIF3_OR	(1 << CANISR_RXIF3)

/* Interrupt Control Register */
DEF_8BIT_REG_AT(CANICR,0x5b);
#define CANICR_ETX	0		/* Early Transmit Interrupt */
#define CANICR_ETX_OR	(1 << CANICR_ETX)
#define CANICR_TEIE	1		/* Transmit Error Interrupt Enable */
#define CANICR_TEIE_OR	(1 << CANICR_TEIE)
#define CANICR_ORIE	2		/* Overrun Interrupt Enable */
#define CANICR_ORIE_OR	(1 << CANICR_ORIE)
#define CANICR_SCIE	3		/* Status Change Interrupt Enable */
#define CANICR_SCIE_OR	(1 << CANICR_SCIE)
#define CANICR_TXIE	4		/* Transmit Interrupt Enable */
#define CANICR_TXIE_OR	(1 << CANICR_TXIE)
#define CANICR_RXIe	5		/* Receive Interrupt Enable */
#define CANICR_RXIe_OR	(1 << CANICR_RXIe)
#define CANICR_ESCI	6		/* Extended Status Change Interrupt */
#define CANICR_ESCI_OR	(1 << CANICR_ESCI)

/* Control/Status Register */
DEF_8BIT_REG_AT(CANCSR,0x5c);
#define CANCSR_RUN	0		/* CAN Enable */
#define CANCSR_RUN_OR	(1 << CANCSR_RUN)
#define CANCSR_WKPS	1		/* Wake-up Pulse */
#define CANCSR_WKPS_OR	(1 << CANCSR_WKPS)
#define CANCSR_FSYN	2		/* Fast Synchronization */
#define CANCSR_FSYN_OR	(1 << CANCSR_FSYN)
#define CANCSR_NRTX	3		/* No Retransmission */
#define CANCSR_NRTX_OR	(1 << CANCSR_NRTX)
#define CANCSR_SRTE	4		/* Simultaneous Receive/Transmit Enable */
#define CANCSR_SRTE_OR	(1 << CANCSR_SRTE)
#define CANCSR_EPSV	5		/* Error Passive State */
#define CANCSR_EPSV_OR	(1 << CANCSR_EPSV)
#define CANCSR_BOFF	6		/* Bus-Off State */
#define CANCSR_BOFF_OR	(1 << CANCSR_BOFF)

/* Baud Rate Prescaler Register */
DEF_8BIT_REG_AT(CANBRPR,0x5d);
#define CANBRPR_BRP0	0		/* Baud Rate Prescaler */
#define CANBRPR_BRP0_OR	(1 << CANBRPR_BRP0)
#define CANBRPR_BRP1	1		/* Baud Rate Prescaler */
#define CANBRPR_BRP1_OR	(1 << CANBRPR_BRP1)
#define CANBRPR_BRP2	2		/* Baud Rate Prescaler */
#define CANBRPR_BRP2_OR	(1 << CANBRPR_BRP2)
#define CANBRPR_BRP3	3		/* Baud Rate Prescaler */
#define CANBRPR_BRP3_OR	(1 << CANBRPR_BRP3)
#define CANBRPR_BRP4	4		/* Baud Rate Prescaler */
#define CANBRPR_BRP4_OR	(1 << CANBRPR_BRP4)
#define CANBRPR_BRP5	5		/* Baud Rate Prescaler */
#define CANBRPR_BRP5_OR	(1 << CANBRPR_BRP5)
#define CANBRPR_BRP_OR	((1 << CANBRPR_BRP0)|(1 << CANBRPR_BRP1)\
		|(1 << CANBRPR_BRP2)|(1 << CANBRPR_BRP3)|(1 << CANBRPR_BRP4)\
		|(1 << CANBRPR_BRP5))
#define CANBRPR_RJW0	6		/* Resynchronization Jump Width */
#define CANBRPR_RJW0_OR	(1 << CANBRPR_RJW0)
#define CANBRPR_RJW1	7		/* Resynchronization Jump Width */
#define CANBRPR_RJW1_OR	(1 << CANBRPR_RJW1)
#define CANBRPR_RJW_OR	((1 << CANBRPR_RJW0)|(1 << CANBRPR_RJW1))

/* Bit Timing Register */
DEF_8BIT_REG_AT(CANBTR,0x5e);
#define CANBTR_BS10	0		/* Bit Segment 1 length */
#define CANBTR_BS10_OR	(1 << CANBTR_BS10)
#define CANBTR_BS11	1		/* Bit Segment 1 length */
#define CANBTR_BS11_OR	(1 << CANBTR_BS11)
#define CANBTR_BS12	2		/* Bit Segment 1 length */
#define CANBTR_BS12_OR	(1 << CANBTR_BS12)
#define CANBTR_BS13	3		/* Bit Segment 1 length */
#define CANBTR_BS13_OR	(1 << CANBTR_BS13)
#define CANBTR_BS1_OR	((1 << CANBTR_BS10)|(1 << CANBTR_BS11)\
		|(1 << CANBTR_BS12)|(1 << CANBTR_BS13))
#define CANBTR_BS20	4		/* Bit Segment 2 length */
#define CANBTR_BS20_OR	(1 << CANBTR_BS20)
#define CANBTR_BS21	5		/* Bit Segment 2 length */
#define CANBTR_BS21_OR	(1 << CANBTR_BS21)
#define CANBTR_BS22	6		/* Bit Segment 2 length */
#define CANBTR_BS22_OR	(1 << CANBTR_BS22)
#define CANBTR_BS2_OR	((1 << CANBTR_BS20)|(1 << CANBTR_BS21)\
		|(1 << CANBTR_BS22))

/* Page Selection Register */
DEF_8BIT_REG_AT(CANPSR,0x5f);
#define CANPSR_PAGE0	0		/* Buffer or filter page mapping selection bits */
#define CANPSR_PAGE0_OR	(1 << CANPSR_PAGE0)
#define CANPSR_PAGE1	1		/* Buffer or filter page mapping selection bits */
#define CANPSR_PAGE1_OR	(1 << CANPSR_PAGE1)
#define CANPSR_PAGE2	2		/* Buffer or filter page mapping selection bits */
#define CANPSR_PAGE2_OR	(1 << CANPSR_PAGE2)
#define CANPSR_PAGE_OR	((1 << CANPSR_PAGE0)|(1 << CANPSR_PAGE1)\
		|(1 << CANPSR_PAGE2))

/* Address 60h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR0,0x60);

/* Address 61h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR1,0x61);

/* Address 62h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR2,0x62);

/* Address 63h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR3,0x63);

/* Address 64h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR4,0x64);

/* Address 65h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR5,0x65);

/* Address 66h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR6,0x66);

/* Address 67h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR7,0x67);

/* Address 68h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR8,0x68);

/* Address 69h Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR9,0x69);

/* Address 6Ah Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR10,0x6a);

/* Address 6Bh Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR11,0x6b);

/* Address 6Ch Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR12,0x6c);

/* Address 6Dh Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR13,0x6d);

/* Address 6Eh Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR14,0x6e);

/* Address 6Fh Paged Register see datasheet */
DEF_8BIT_REG_AT(CANPR15,0x6f);

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

/* D/A Converter (DAC) with PWM outputs */
/*****************************************************************/

/* Channel 0 PWM Register */
DEF_8BIT_REG_AT(PWM0,0x74);
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

/* Channel 1+0 BRM Register */
DEF_8BIT_REG_AT(BRM10,0x75);
#define BRM10_B4	4		/* BRM Bits (Channel 1) */
#define BRM10_B4_OR	(1 << BRM10_B4)
#define BRM10_B5	5		/* BRM Bits (Channel 1) */
#define BRM10_B5_OR	(1 << BRM10_B5)
#define BRM10_B6	6		/* BRM Bits (Channel 1) */
#define BRM10_B6_OR	(1 << BRM10_B6)
#define BRM10_B7	7		/* BRM Bits (Channel 1) */
#define BRM10_B7_OR	(1 << BRM10_B7)
#define BRM10_B_4_7_OR	((1 << BRM10_B4)|(1 << BRM10_B5)\
		|(1 << BRM10_B6)|(1 << BRM10_B7))
#define BRM10_B0	0		/* BRM Bits (Channel 0) */
#define BRM10_B0_OR	(1 << BRM10_B0)
#define BRM10_B1	1		/* BRM Bits (Channel 0) */
#define BRM10_B1_OR	(1 << BRM10_B1)
#define BRM10_B2	2		/* BRM Bits (Channel 0) */
#define BRM10_B2_OR	(1 << BRM10_B2)
#define BRM10_B3	3		/* BRM Bits (Channel 0) */
#define BRM10_B3_OR	(1 << BRM10_B3)
#define BRM10_B_0_3_OR	((1 << BRM10_B0)|(1 << BRM10_B1)\
		|(1 << BRM10_B2)|(1 << BRM10_B3))

/* Channel 1 PWM Register */
DEF_8BIT_REG_AT(PWM1,0x76);
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

/* Channel 2 PWM Register */
DEF_8BIT_REG_AT(PWM2,0x77);
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

/* Channel 3+2 BRM Register */
DEF_8BIT_REG_AT(BRM32,0x78);
#define BRM32_B4	4		/* BRM Bits (Channel 3) */
#define BRM32_B4_OR	(1 << BRM32_B4)
#define BRM32_B5	5		/* BRM Bits (Channel 3) */
#define BRM32_B5_OR	(1 << BRM32_B5)
#define BRM32_B6	6		/* BRM Bits (Channel 3) */
#define BRM32_B6_OR	(1 << BRM32_B6)
#define BRM32_B7	7		/* BRM Bits (Channel 3) */
#define BRM32_B7_OR	(1 << BRM32_B7)
#define BRM32_B_4_7_OR	((1 << BRM32_B4)|(1 << BRM32_B5)\
		|(1 << BRM32_B6)|(1 << BRM32_B7))
#define BRM32_B0	0		/* BRM Bits (Channel 2) */
#define BRM32_B0_OR	(1 << BRM32_B0)
#define BRM32_B1	1		/* BRM Bits (Channel 2) */
#define BRM32_B1_OR	(1 << BRM32_B1)
#define BRM32_B2	2		/* BRM Bits (Channel 2) */
#define BRM32_B2_OR	(1 << BRM32_B2)
#define BRM32_B3	3		/* BRM Bits (Channel 2) */
#define BRM32_B3_OR	(1 << BRM32_B3)
#define BRM32_B_0_3_OR	((1 << BRM32_B0)|(1 << BRM32_B1)\
		|(1 << BRM32_B2)|(1 << BRM32_B3))

/* Channel 3 PWM Register */
DEF_8BIT_REG_AT(PWM3,0x79);
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

#endif /* __ST72589B__ */
