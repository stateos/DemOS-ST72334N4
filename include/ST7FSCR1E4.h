/* ST7FSCR1E4.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7FSCR1E4__
#define __ST7FSCR1E4__

/* ST7FSCR1E4 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7FSCR1E4 1
		#if (MCU_NAME != ST7FSCR1E4)
		#error "wrong include file ST7FSCR1E4.h for chosen MCU!"
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

/* Smart Card Controller */
/*****************************************************************/

/* Smartcard Interface Control */
DEF_8BIT_REG_AT(CRDCR,0x00);
#define CRDCR_CONV	0		/* ISO Convention Selection */
#define CRDCR_CONV_OR	(1 << CRDCR_CONV)
#define CRDCR_CREP	1		/* Automatic Character Repetition in Case of Parity Error */
#define CRDCR_CREP_OR	(1 << CRDCR_CREP)
#define CRDCR_WTEN	2		/* Waiting Time Counter Enable */
#define CRDCR_WTEN_OR	(1 << CRDCR_WTEN)
#define CRDCR_UART	3		/* Card UART Mode Selection */
#define CRDCR_UART_OR	(1 << CRDCR_UART)
#define CRDCR_VCARD4	4		/* Card Voltage Selection */
#define CRDCR_VCARD4_OR	(1 << CRDCR_VCARD4)
#define CRDCR_VCARD5	5		/* Card Voltage Selection */
#define CRDCR_VCARD5_OR	(1 << CRDCR_VCARD5)
#define CRDCR_VCARD_OR	((1 << CRDCR_VCARD4)|(1 << CRDCR_VCARD5))
#define CRDCR_CRDDET	6		/* Card Presence Detector */
#define CRDCR_CRDDET_OR	(1 << CRDCR_CRDDET)
#define CRDCR_CRDRST	7		/* Smartcard Interface Reset */
#define CRDCR_CRDRST_OR	(1 << CRDCR_CRDRST)

/* Smartcard Interface Status */
DEF_8BIT_REG_AT(CRDSR,0x01);
#define CRDSR_PARF	0		/* Parity Error Flag */
#define CRDSR_PARF_OR	(1 << CRDSR_PARF)
#define CRDSR_RXCF	1		/* Received Character Flag */
#define CRDSR_RXCF_OR	(1 << CRDSR_RXCF)
#define CRDSR_TXCF	2		/* Transmitted character Flag */
#define CRDSR_TXCF_OR	(1 << CRDSR_TXCF)
#define CRDSR_WTF	3		/* Waiting Time Counter Overflow Flag */
#define CRDSR_WTF_OR	(1 << CRDSR_WTF)
#define CRDSR_VCARDOK	4		/* Card Voltage Status Flag */
#define CRDSR_VCARDOK_OR	(1 << CRDSR_VCARDOK)
#define CRDSR_IOVF	5		/* Card Overload Current Flag */
#define CRDSR_IOVF_OR	(1 << CRDSR_IOVF)
#define CRDSR_CRDIRF	6		/* Card Insertion/Removal Flag */
#define CRDSR_CRDIRF_OR	(1 << CRDSR_CRDIRF)
#define CRDSR_TxBEF	7		/* Transmit Buffer Empty Flag */
#define CRDSR_TxBEF_OR	(1 << CRDSR_TxBEF)

/* Smartcard Contact */
DEF_8BIT_REG_AT(CRDCCR,0x02);
#define CRDCCR_CRDVCC	0		/* CRDVCC Pin Control */
#define CRDCCR_CRDVCC_OR	(1 << CRDCCR_CRDVCC)
#define CRDCCR_CRDRST	1		/* CRDRST Pin Control */
#define CRDCCR_CRDRST_OR	(1 << CRDCCR_CRDRST)
#define CRDCCR_CRDCLK	2		/* CRDCLK Pin Control */
#define CRDCCR_CRDCLK_OR	(1 << CRDCCR_CRDCLK)
#define CRDCCR_CRDIO	3		/* CRDIO pin Control */
#define CRDCCR_CRDIO_OR	(1 << CRDCCR_CRDIO)
#define CRDCCR_CRDC4	4		/* CRDC4 Pin Control */
#define CRDCCR_CRDC4_OR	(1 << CRDCCR_CRDC4)
#define CRDCCR_CRDC8	5		/* CRDC8 Pin Control */
#define CRDCCR_CRDC8_OR	(1 << CRDCCR_CRDC8)
#define CRDCCR_CLKSEL	7		/* Card Clock Selection */
#define CRDCCR_CLKSEL_OR	(1 << CRDCCR_CLKSEL)

/* Smartcard ETU1 */
DEF_8BIT_REG_AT(CRDETU1,0x03);
#define CRDETU1_ETU8	0		/* ETU value (12/2047) in card clock cycles */
#define CRDETU1_ETU8_OR	(1 << CRDETU1_ETU8)
#define CRDETU1_ETU9	1		/* ETU value (12/2047) in card clock cycles */
#define CRDETU1_ETU9_OR	(1 << CRDETU1_ETU9)
#define CRDETU1_ETU10	2		/* ETU value (12/2047) in card clock cycles */
#define CRDETU1_ETU10_OR	(1 << CRDETU1_ETU10)
#define CRDETU1_ETU_OR	((1 << CRDETU1_ETU8)|(1 << CRDETU1_ETU9)\
		|(1 << CRDETU1_ETU10))
#define CRDETU1_COMP	7		/* Elementary Time Unit Compensation */
#define CRDETU1_COMP_OR	(1 << CRDETU1_COMP)

/* Smartcard ETU0 */
DEF_8BIT_REG_AT(CRDETU0,0x04);
#define CRDETU0_ETU0	0		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU0_OR	(1 << CRDETU0_ETU0)
#define CRDETU0_ETU1	1		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU1_OR	(1 << CRDETU0_ETU1)
#define CRDETU0_ETU2	2		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU2_OR	(1 << CRDETU0_ETU2)
#define CRDETU0_ETU3	3		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU3_OR	(1 << CRDETU0_ETU3)
#define CRDETU0_ETU4	4		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU4_OR	(1 << CRDETU0_ETU4)
#define CRDETU0_ETU5	5		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU5_OR	(1 << CRDETU0_ETU5)
#define CRDETU0_ETU6	6		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU6_OR	(1 << CRDETU0_ETU6)
#define CRDETU0_ETU7	7		/* ETU value (12/2047) in card clock cycles */
#define CRDETU0_ETU7_OR	(1 << CRDETU0_ETU7)
#define CRDETU0_ETU_OR	((1 << CRDETU0_ETU0)|(1 << CRDETU0_ETU1)\
		|(1 << CRDETU0_ETU2)|(1 << CRDETU0_ETU3)|(1 << CRDETU0_ETU4)\
		|(1 << CRDETU0_ETU5)|(1 << CRDETU0_ETU6)|(1 << CRDETU0_ETU7))

/* Guard Time 1 */
DEF_8BIT_REG_AT(CRDGT1,0x05);
#define CRDGT1_CRDGT1	0		/* Guard Time */
#define CRDGT1_CRDGT1_OR	(1 << CRDGT1_CRDGT1)

/* Guard Time 0 */
DEF_8BIT_REG_AT(CRDGT0,0x06);
#define CRDGT0_CRDGT00	0		/* Guard Time */
#define CRDGT0_CRDGT00_OR	(1 << CRDGT0_CRDGT00)
#define CRDGT0_CRDGT01	1		/* Guard Time */
#define CRDGT0_CRDGT01_OR	(1 << CRDGT0_CRDGT01)
#define CRDGT0_CRDGT02	2		/* Guard Time */
#define CRDGT0_CRDGT02_OR	(1 << CRDGT0_CRDGT02)
#define CRDGT0_CRDGT03	3		/* Guard Time */
#define CRDGT0_CRDGT03_OR	(1 << CRDGT0_CRDGT03)
#define CRDGT0_CRDGT04	4		/* Guard Time */
#define CRDGT0_CRDGT04_OR	(1 << CRDGT0_CRDGT04)
#define CRDGT0_CRDGT05	5		/* Guard Time */
#define CRDGT0_CRDGT05_OR	(1 << CRDGT0_CRDGT05)
#define CRDGT0_CRDGT06	6		/* Guard Time */
#define CRDGT0_CRDGT06_OR	(1 << CRDGT0_CRDGT06)
#define CRDGT0_CRDGT07	7		/* Guard Time */
#define CRDGT0_CRDGT07_OR	(1 << CRDGT0_CRDGT07)
#define CRDGT0_CRDGT0_OR	((1 << CRDGT0_CRDGT00)|(1 << CRDGT0_CRDGT01)\
		|(1 << CRDGT0_CRDGT02)|(1 << CRDGT0_CRDGT03)\
		|(1 << CRDGT0_CRDGT04)|(1 << CRDGT0_CRDGT05)|(1 << CRDGT0_CRDGT06)\
		|(1 << CRDGT0_CRDGT07))

/* Waiting Time 2 */
DEF_8BIT_REG_AT(CRDWT2,0x07);
#define CRDWT2_CRDWT216	0		/* Waiting Time MSB */
#define CRDWT2_CRDWT216_OR	(1 << CRDWT2_CRDWT216)
#define CRDWT2_CRDWT217	1		/* Waiting Time MSB */
#define CRDWT2_CRDWT217_OR	(1 << CRDWT2_CRDWT217)
#define CRDWT2_CRDWT218	2		/* Waiting Time MSB */
#define CRDWT2_CRDWT218_OR	(1 << CRDWT2_CRDWT218)
#define CRDWT2_CRDWT219	3		/* Waiting Time MSB */
#define CRDWT2_CRDWT219_OR	(1 << CRDWT2_CRDWT219)
#define CRDWT2_CRDWT220	4		/* Waiting Time MSB */
#define CRDWT2_CRDWT220_OR	(1 << CRDWT2_CRDWT220)
#define CRDWT2_CRDWT221	5		/* Waiting Time MSB */
#define CRDWT2_CRDWT221_OR	(1 << CRDWT2_CRDWT221)
#define CRDWT2_CRDWT222	6		/* Waiting Time MSB */
#define CRDWT2_CRDWT222_OR	(1 << CRDWT2_CRDWT222)
#define CRDWT2_CRDWT223	7		/* Waiting Time MSB */
#define CRDWT2_CRDWT223_OR	(1 << CRDWT2_CRDWT223)
#define CRDWT2_CRDWT2_OR	((1 << CRDWT2_CRDWT216)|(1 << CRDWT2_CRDWT217)\
		|(1 << CRDWT2_CRDWT218)|(1 << CRDWT2_CRDWT219)\
		|(1 << CRDWT2_CRDWT220)|(1 << CRDWT2_CRDWT221)|(1 << CRDWT2_CRDWT222)\
		|(1 << CRDWT2_CRDWT223))

/* Waiting Time 1 */
DEF_8BIT_REG_AT(CRDWT1,0x08);
#define CRDWT1_CRDWT18	0		/* Waiting Time */
#define CRDWT1_CRDWT18_OR	(1 << CRDWT1_CRDWT18)
#define CRDWT1_CRDWT19	1		/* Waiting Time */
#define CRDWT1_CRDWT19_OR	(1 << CRDWT1_CRDWT19)
#define CRDWT1_CRDWT110	2		/* Waiting Time */
#define CRDWT1_CRDWT110_OR	(1 << CRDWT1_CRDWT110)
#define CRDWT1_CRDWT111	3		/* Waiting Time */
#define CRDWT1_CRDWT111_OR	(1 << CRDWT1_CRDWT111)
#define CRDWT1_CRDWT112	4		/* Waiting Time */
#define CRDWT1_CRDWT112_OR	(1 << CRDWT1_CRDWT112)
#define CRDWT1_CRDWT113	5		/* Waiting Time */
#define CRDWT1_CRDWT113_OR	(1 << CRDWT1_CRDWT113)
#define CRDWT1_CRDWT114	6		/* Waiting Time */
#define CRDWT1_CRDWT114_OR	(1 << CRDWT1_CRDWT114)
#define CRDWT1_CRDWT115	7		/* Waiting Time */
#define CRDWT1_CRDWT115_OR	(1 << CRDWT1_CRDWT115)
#define CRDWT1_CRDWT1_OR	((1 << CRDWT1_CRDWT18)|(1 << CRDWT1_CRDWT19)\
		|(1 << CRDWT1_CRDWT110)|(1 << CRDWT1_CRDWT111)\
		|(1 << CRDWT1_CRDWT112)|(1 << CRDWT1_CRDWT113)|(1 << CRDWT1_CRDWT114)\
		|(1 << CRDWT1_CRDWT115))

/* Waiting Time 0 */
DEF_8BIT_REG_AT(CRDWT0,0x09);
#define CRDWT0_CRDWT00	0		/* Waiting Time LSB */
#define CRDWT0_CRDWT00_OR	(1 << CRDWT0_CRDWT00)
#define CRDWT0_CRDWT01	1		/* Waiting Time LSB */
#define CRDWT0_CRDWT01_OR	(1 << CRDWT0_CRDWT01)
#define CRDWT0_CRDWT02	2		/* Waiting Time LSB */
#define CRDWT0_CRDWT02_OR	(1 << CRDWT0_CRDWT02)
#define CRDWT0_CRDWT03	3		/* Waiting Time LSB */
#define CRDWT0_CRDWT03_OR	(1 << CRDWT0_CRDWT03)
#define CRDWT0_CRDWT04	4		/* Waiting Time LSB */
#define CRDWT0_CRDWT04_OR	(1 << CRDWT0_CRDWT04)
#define CRDWT0_CRDWT05	5		/* Waiting Time LSB */
#define CRDWT0_CRDWT05_OR	(1 << CRDWT0_CRDWT05)
#define CRDWT0_CRDWT06	6		/* Waiting Time LSB */
#define CRDWT0_CRDWT06_OR	(1 << CRDWT0_CRDWT06)
#define CRDWT0_CRDWT07	7		/* Waiting Time LSB */
#define CRDWT0_CRDWT07_OR	(1 << CRDWT0_CRDWT07)
#define CRDWT0_CRDWT0_OR	((1 << CRDWT0_CRDWT00)|(1 << CRDWT0_CRDWT01)\
		|(1 << CRDWT0_CRDWT02)|(1 << CRDWT0_CRDWT03)\
		|(1 << CRDWT0_CRDWT04)|(1 << CRDWT0_CRDWT05)|(1 << CRDWT0_CRDWT06)\
		|(1 << CRDWT0_CRDWT07))

/* Smartcard Interrupt enable */
DEF_8BIT_REG_AT(CRDIER,0x0a);
#define CRDIER_PARM	0		/* Parity Error Interrupt */
#define CRDIER_PARM_OR	(1 << CRDIER_PARM)
#define CRDIER_RXCM	1		/* Received Character Interrupt */
#define CRDIER_RXCM_OR	(1 << CRDIER_RXCM)
#define CRDIER_TXCM	2		/* Transmitted character Interrupt */
#define CRDIER_TXCM_OR	(1 << CRDIER_TXCM)
#define CRDIER_WTM	3		/* Waiting Timer Interrupt */
#define CRDIER_WTM_OR	(1 << CRDIER_WTM)
#define CRDIER_VCRDM	4		/* Card Voltage Error Interrupt */
#define CRDIER_VCRDM_OR	(1 << CRDIER_VCRDM)
#define CRDIER_IOVFM	5		/* Card Overload Current Interrupt */
#define CRDIER_IOVFM_OR	(1 << CRDIER_IOVFM)
#define CRDIER_TXBEM	7		/* Transmit Buffer Empty Interrupt */
#define CRDIER_TXBEM_OR	(1 << CRDIER_TXBEM)

/* Smartcard Interrupt Pending */
DEF_8BIT_REG_AT(CRDIPR,0x0b);
#define CRDIPR_PARP	0		/* Parity Error */
#define CRDIPR_PARP_OR	(1 << CRDIPR_PARP)
#define CRDIPR_RXCP	1		/* Received Character */
#define CRDIPR_RXCP_OR	(1 << CRDIPR_RXCP)
#define CRDIPR_TXCP	2		/* Transmitted Character */
#define CRDIPR_TXCP_OR	(1 << CRDIPR_TXCP)
#define CRDIPR_WTP	3		/* Waiting Timer Overflow */
#define CRDIPR_WTP_OR	(1 << CRDIPR_WTP)
#define CRDIPR_VCRDP	4		/* Card Voltage Error */
#define CRDIPR_VCRDP_OR	(1 << CRDIPR_VCRDP)
#define CRDIPR_IOVFP	5		/* Card Overload Current */
#define CRDIPR_IOVFP_OR	(1 << CRDIPR_IOVFP)
#define CRDIPR_TXBEP	7		/* Transmit Buffer Empty */
#define CRDIPR_TXBEP_OR	(1 << CRDIPR_TXBEP)

/* Smartcard Transmit Buffer */
DEF_8BIT_REG_AT(CRDTXB,0x0c);

/* Smartcard Receive Buffer */
DEF_8BIT_REG_AT(CRDRXB,0x0d);

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x0e);
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

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x11);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x12);

/* Option Register */
DEF_8BIT_REG_AT(PAOR,0x13);

/* Pull Up Control Register */
DEF_8BIT_REG_AT(PAPUCR,0x14);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x15);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x16);

/* Pull Up Control Register */
DEF_8BIT_REG_AT(PBPUCR,0x17);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x18);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x19);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x1a);

/* Pull Up Control Register */
DEF_8BIT_REG_AT(PDPUCR,0x1b);

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x1c);
#define MISCR1_ITM0	0		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM0_OR	(1 << MISCR1_ITM0)
#define MISCR1_ITM1	1		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM1_OR	(1 << MISCR1_ITM1)
#define MISCR1_ITM2	2		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM2_OR	(1 << MISCR1_ITM2)
#define MISCR1_ITM3	3		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM3_OR	(1 << MISCR1_ITM3)
#define MISCR1_ITM4	4		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM4_OR	(1 << MISCR1_ITM4)
#define MISCR1_ITM5	5		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM5_OR	(1 << MISCR1_ITM5)
#define MISCR1_ITM6	6		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM6_OR	(1 << MISCR1_ITM6)
#define MISCR1_ITM7	7		/* Enables or Disables external IT on Port C */
#define MISCR1_ITM7_OR	(1 << MISCR1_ITM7)
#define MISCR1_ITM_OR	((1 << MISCR1_ITM0)|(1 << MISCR1_ITM1)\
		|(1 << MISCR1_ITM2)|(1 << MISCR1_ITM3)|(1 << MISCR1_ITM4)\
		|(1 << MISCR1_ITM5)|(1 << MISCR1_ITM6)|(1 << MISCR1_ITM7))

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x1d);
#define MISCR2_CRDIRM	6		/* CRD Insertion/Removal Interrupt Mask */
#define MISCR2_CRDIRM_OR	(1 << MISCR2_CRDIRM)
#define MISCR2_ITM9	0		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM9_OR	(1 << MISCR2_ITM9)
#define MISCR2_ITM10	1		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM10_OR	(1 << MISCR2_ITM10)
#define MISCR2_ITM11	2		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM11_OR	(1 << MISCR2_ITM11)
#define MISCR2_ITM12	3		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM12_OR	(1 << MISCR2_ITM12)
#define MISCR2_ITM13	4		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM13_OR	(1 << MISCR2_ITM13)
#define MISCR2_ITM14	5		/* Enables or Disables external IT on Port A */
#define MISCR2_ITM14_OR	(1 << MISCR2_ITM14)
#define MISCR2_ITM_OR	((1 << MISCR2_ITM9)|(1 << MISCR2_ITM10)\
		|(1 << MISCR2_ITM11)|(1 << MISCR2_ITM12)|(1 << MISCR2_ITM13)\
		|(1 << MISCR2_ITM14))

/* Miscellaneous Register 3 */
DEF_8BIT_REG_AT(MISCR3,0x1e);
#define MISCR3_CTRL0_C	4		/* Sensitivity on port C */
#define MISCR3_CTRL0_C_OR	(1 << MISCR3_CTRL0_C)
#define MISCR3_CTRL1_C	5		/* Sensitivity on port C */
#define MISCR3_CTRL1_C_OR	(1 << MISCR3_CTRL1_C)
#define MISCR3_CTRL_C_OR	((1 << MISCR3_CTRL0_C)|(1 << MISCR3_CTRL1_C))
#define MISCR3_CTRL0_A	6		/* Sensitivity on port A */
#define MISCR3_CTRL0_A_OR	(1 << MISCR3_CTRL0_A)
#define MISCR3_CTRL1_A	7		/* Sensitivity on port A */
#define MISCR3_CTRL1_A_OR	(1 << MISCR3_CTRL1_A)
#define MISCR3_CTRL_A_OR	((1 << MISCR3_CTRL0_A)|(1 << MISCR3_CTRL1_A))

/* Miscellaneous Register 4 */
DEF_8BIT_REG_AT(MISCR4,0x1f);
#define MISCR4_LOCK	0		/* PLL status bit */
#define MISCR4_LOCK_OR	(1 << MISCR4_LOCK)
#define MISCR4_CLK_SEL	5		/* Clock Selection */
#define MISCR4_CLK_SEL_OR	(1 << MISCR4_CLK_SEL)
#define MISCR4_PLL_ON	6		/* PLL Activation */
#define MISCR4_PLL_ON_OR	(1 << MISCR4_PLL_ON)

/* Universal Serail Bus (USB) */
/*****************************************************************/

/* Interrupt Status Register */
DEF_8BIT_REG_AT(USBISTR,0x20);
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
DEF_8BIT_REG_AT(USBIMR,0x21);
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
DEF_8BIT_REG_AT(USBCTLR,0x22);
#define USBCTLR_FRES	0		/* Force Reset */
#define USBCTLR_FRES_OR	(1 << USBCTLR_FRES)
#define USBCTLR_FSUSP	1		/* Force Suspend */
#define USBCTLR_FSUSP_OR	(1 << USBCTLR_FSUSP)
#define USBCTLR_PDWN	2		/* Power Down */
#define USBCTLR_PDWN_OR	(1 << USBCTLR_PDWN)
#define USBCTLR_RESUME	3		/* Resume */
#define USBCTLR_RESUME_OR	(1 << USBCTLR_RESUME)
#define USBCTLR_USB_RST	6		/* Reset Detected */
#define USBCTLR_USB_RST_OR	(1 << USBCTLR_USB_RST)
#define USBCTLR_RSM	7		/* Resume Detected */
#define USBCTLR_RSM_OR	(1 << USBCTLR_RSM)

/* Device Address Register */
DEF_8BIT_REG_AT(DADDR,0x23);
#define DADDR_ADD0	0		/* Device address 7 bits */
#define DADDR_ADD0_OR	(1 << DADDR_ADD0)
#define DADDR_ADD1	1		/* Device address 7 bits */
#define DADDR_ADD1_OR	(1 << DADDR_ADD1)
#define DADDR_ADD2	2		/* Device address 7 bits */
#define DADDR_ADD2_OR	(1 << DADDR_ADD2)
#define DADDR_ADD3	3		/* Device address 7 bits */
#define DADDR_ADD3_OR	(1 << DADDR_ADD3)
#define DADDR_ADD4	4		/* Device address 7 bits */
#define DADDR_ADD4_OR	(1 << DADDR_ADD4)
#define DADDR_ADD5	5		/* Device address 7 bits */
#define DADDR_ADD5_OR	(1 << DADDR_ADD5)
#define DADDR_ADD6	6		/* Device address 7 bits */
#define DADDR_ADD6_OR	(1 << DADDR_ADD6)
#define DADDR_ADD_OR	((1 << DADDR_ADD0)|(1 << DADDR_ADD1)\
		|(1 << DADDR_ADD2)|(1 << DADDR_ADD3)|(1 << DADDR_ADD4)\
		|(1 << DADDR_ADD5)|(1 << DADDR_ADD6))

/* Status Register */
DEF_8BIT_REG_AT(USBSR,0x24);
#define USBSR_EP0	0		/* Endpoint Number */
#define USBSR_EP0_OR	(1 << USBSR_EP0)
#define USBSR_EP1	1		/* Endpoint Number */
#define USBSR_EP1_OR	(1 << USBSR_EP1)
#define USBSR_EP2	2		/* Endpoint Number */
#define USBSR_EP2_OR	(1 << USBSR_EP2)
#define USBSR_EP_OR	((1 << USBSR_EP0)|(1 << USBSR_EP1)\
		|(1 << USBSR_EP2))
#define USBSR_IN_OUT	5		/* Last Transaction Direction for Endpoint (1 to 5) */
#define USBSR_IN_OUT_OR	(1 << USBSR_IN_OUT)
#define USBSR_PID0	6		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR_PID0_OR	(1 << USBSR_PID0)
#define USBSR_PID1	7		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR_PID1_OR	(1 << USBSR_PID1)
#define USBSR_PID_OR	((1 << USBSR_PID0)|(1 << USBSR_PID1))

/* Endpoint 0 Register */
DEF_8BIT_REG_AT(EP0R,0x25);
#define EP0R_STAT_RX0	0		/* Status bits (Reception) */
#define EP0R_STAT_RX0_OR	(1 << EP0R_STAT_RX0)
#define EP0R_STAT_RX1	1		/* Status bits (Reception) */
#define EP0R_STAT_RX1_OR	(1 << EP0R_STAT_RX1)
#define EP0R_STAT_RX_OR	((1 << EP0R_STAT_RX0)|(1 << EP0R_STAT_RX1))
#define EP0R_DTOG_RX	2		/* Data Toggle (Reception) */
#define EP0R_DTOG_RX_OR	(1 << EP0R_DTOG_RX)
#define EP0R_STAT_TX0	4		/* Status bits (Transmission) */
#define EP0R_STAT_TX0_OR	(1 << EP0R_STAT_TX0)
#define EP0R_STAT_TX1	5		/* Status bits (Transmission) */
#define EP0R_STAT_TX1_OR	(1 << EP0R_STAT_TX1)
#define EP0R_STAT_TX_OR	((1 << EP0R_STAT_TX0)|(1 << EP0R_STAT_TX1))
#define EP0R_DTOG_TX	6		/* Data Toggle (Transmission) */
#define EP0R_DTOG_TX_OR	(1 << EP0R_DTOG_TX)
#define EP0R_CTR0	7		/* Correct Transfer on EP0 */
#define EP0R_CTR0_OR	(1 << EP0R_CTR0)

/* Endpoint 0 Reception Counter Register */
DEF_8BIT_REG_AT(CNT0RXR,0x26);
#define CNT0RXR_CNT0	0		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT0_OR	(1 << CNT0RXR_CNT0)
#define CNT0RXR_CNT1	1		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT1_OR	(1 << CNT0RXR_CNT1)
#define CNT0RXR_CNT2	2		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT2_OR	(1 << CNT0RXR_CNT2)
#define CNT0RXR_CNT3	3		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT3_OR	(1 << CNT0RXR_CNT3)
#define CNT0RXR_CNT_OR	((1 << CNT0RXR_CNT0)|(1 << CNT0RXR_CNT1)\
		|(1 << CNT0RXR_CNT2)|(1 << CNT0RXR_CNT3))

/* Endpoint 0 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT0TXR,0x27);
#define CNT0TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT0_OR	(1 << CNT0TXR_CNT0)
#define CNT0TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT1_OR	(1 << CNT0TXR_CNT1)
#define CNT0TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT2_OR	(1 << CNT0TXR_CNT2)
#define CNT0TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT3_OR	(1 << CNT0TXR_CNT3)
#define CNT0TXR_CNT_OR	((1 << CNT0TXR_CNT0)|(1 << CNT0TXR_CNT1)\
		|(1 << CNT0TXR_CNT2)|(1 << CNT0TXR_CNT3))

/* Endpoint 1 Transmission Register */
DEF_8BIT_REG_AT(EP1TXR,0x28);
#define EP1TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP1TXR_STAT_TX0_OR	(1 << EP1TXR_STAT_TX0)
#define EP1TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP1TXR_STAT_TX1_OR	(1 << EP1TXR_STAT_TX1)
#define EP1TXR_STAT_TX_OR	((1 << EP1TXR_STAT_TX0)|(1 << EP1TXR_STAT_TX1))
#define EP1TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP1TXR_DTOG_TX_OR	(1 << EP1TXR_DTOG_TX)
#define EP1TXR_CTR_TX	3		/* Transmission Transfer Correct */
#define EP1TXR_CTR_TX_OR	(1 << EP1TXR_CTR_TX)

/* Endpoint 1 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT1TXR,0x29);
#define CNT1TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT0_OR	(1 << CNT1TXR_CNT0)
#define CNT1TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT1_OR	(1 << CNT1TXR_CNT1)
#define CNT1TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT2_OR	(1 << CNT1TXR_CNT2)
#define CNT1TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT3_OR	(1 << CNT1TXR_CNT3)
#define CNT1TXR_CNT_OR	((1 << CNT1TXR_CNT0)|(1 << CNT1TXR_CNT1)\
		|(1 << CNT1TXR_CNT2)|(1 << CNT1TXR_CNT3))

/* Endpoint 2 Reception Register */
DEF_8BIT_REG_AT(EP2RXR,0x2a);
#define EP2RXR_STAT_RX0	0		/* Status bits (Reception) */
#define EP2RXR_STAT_RX0_OR	(1 << EP2RXR_STAT_RX0)
#define EP2RXR_STAT_RX1	1		/* Status bits (Reception) */
#define EP2RXR_STAT_RX1_OR	(1 << EP2RXR_STAT_RX1)
#define EP2RXR_STAT_RX_OR	((1 << EP2RXR_STAT_RX0)|(1 << EP2RXR_STAT_RX1))
#define EP2RXR_DTOG_RX	2		/* Data Toggle (Reception) */
#define EP2RXR_DTOG_RX_OR	(1 << EP2RXR_DTOG_RX)
#define EP2RXR_CTR_RX	3		/* Correct Reception Transfer */
#define EP2RXR_CTR_RX_OR	(1 << EP2RXR_CTR_RX)

/* Endpoint 2 Reception Counter Register */
DEF_8BIT_REG_AT(CNT2RXR,0x2b);
#define CNT2RXR_CNT0	0		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT0_OR	(1 << CNT2RXR_CNT0)
#define CNT2RXR_CNT1	1		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT1_OR	(1 << CNT2RXR_CNT1)
#define CNT2RXR_CNT2	2		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT2_OR	(1 << CNT2RXR_CNT2)
#define CNT2RXR_CNT3	3		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT3_OR	(1 << CNT2RXR_CNT3)
#define CNT2RXR_CNT4	4		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT4_OR	(1 << CNT2RXR_CNT4)
#define CNT2RXR_CNT5	5		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT5_OR	(1 << CNT2RXR_CNT5)
#define CNT2RXR_CNT6	6		/* Buffer Size for Ep2 Reception */
#define CNT2RXR_CNT6_OR	(1 << CNT2RXR_CNT6)
#define CNT2RXR_CNT_OR	((1 << CNT2RXR_CNT0)|(1 << CNT2RXR_CNT1)\
		|(1 << CNT2RXR_CNT2)|(1 << CNT2RXR_CNT3)|(1 << CNT2RXR_CNT4)\
		|(1 << CNT2RXR_CNT5)|(1 << CNT2RXR_CNT6))

/* Endpoint 2 Transmission Register */
DEF_8BIT_REG_AT(EP2TXR,0x2c);
#define EP2TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP2TXR_STAT_TX0_OR	(1 << EP2TXR_STAT_TX0)
#define EP2TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP2TXR_STAT_TX1_OR	(1 << EP2TXR_STAT_TX1)
#define EP2TXR_STAT_TX_OR	((1 << EP2TXR_STAT_TX0)|(1 << EP2TXR_STAT_TX1))
#define EP2TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP2TXR_DTOG_TX_OR	(1 << EP2TXR_DTOG_TX)
#define EP2TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define EP2TXR_CTR_TX_OR	(1 << EP2TXR_CTR_TX)

/* Endpoint 2 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT2TXR,0x2d);
#define CNT2TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT0_OR	(1 << CNT2TXR_CNT0)
#define CNT2TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT1_OR	(1 << CNT2TXR_CNT1)
#define CNT2TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT2_OR	(1 << CNT2TXR_CNT2)
#define CNT2TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT3_OR	(1 << CNT2TXR_CNT3)
#define CNT2TXR_CNT4	4		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT4_OR	(1 << CNT2TXR_CNT4)
#define CNT2TXR_CNT5	5		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT5_OR	(1 << CNT2TXR_CNT5)
#define CNT2TXR_CNT6	6		/* Number of Bytes to be transmitted by Ep2 */
#define CNT2TXR_CNT6_OR	(1 << CNT2TXR_CNT6)
#define CNT2TXR_CNT_OR	((1 << CNT2TXR_CNT0)|(1 << CNT2TXR_CNT1)\
		|(1 << CNT2TXR_CNT2)|(1 << CNT2TXR_CNT3)|(1 << CNT2TXR_CNT4)\
		|(1 << CNT2TXR_CNT5)|(1 << CNT2TXR_CNT6))

/* Endpoint 3 Transmission Register */
DEF_8BIT_REG_AT(EP3TXR,0x2e);
#define EP3TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP3TXR_STAT_TX0_OR	(1 << EP3TXR_STAT_TX0)
#define EP3TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP3TXR_STAT_TX1_OR	(1 << EP3TXR_STAT_TX1)
#define EP3TXR_STAT_TX_OR	((1 << EP3TXR_STAT_TX0)|(1 << EP3TXR_STAT_TX1))
#define EP3TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP3TXR_DTOG_TX_OR	(1 << EP3TXR_DTOG_TX)
#define EP3TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define EP3TXR_CTR_TX_OR	(1 << EP3TXR_CTR_TX)

/* Endpoint 3 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT3TXR,0x2f);
#define CNT3TXR_CNT0	0		/* Number of Bytes to be transmitted by EP3 */
#define CNT3TXR_CNT0_OR	(1 << CNT3TXR_CNT0)
#define CNT3TXR_CNT1	1		/* Number of Bytes to be transmitted by EP3 */
#define CNT3TXR_CNT1_OR	(1 << CNT3TXR_CNT1)
#define CNT3TXR_CNT2	2		/* Number of Bytes to be transmitted by EP3 */
#define CNT3TXR_CNT2_OR	(1 << CNT3TXR_CNT2)
#define CNT3TXR_CNT3	3		/* Number of Bytes to be transmitted by EP3 */
#define CNT3TXR_CNT3_OR	(1 << CNT3TXR_CNT3)
#define CNT3TXR_CNT_OR	((1 << CNT3TXR_CNT0)|(1 << CNT3TXR_CNT1)\
		|(1 << CNT3TXR_CNT2)|(1 << CNT3TXR_CNT3))

/* Endpoint 4 Transmission Register */
DEF_8BIT_REG_AT(EP4TXR,0x30);
#define EP4TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP4TXR_STAT_TX0_OR	(1 << EP4TXR_STAT_TX0)
#define EP4TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP4TXR_STAT_TX1_OR	(1 << EP4TXR_STAT_TX1)
#define EP4TXR_STAT_TX_OR	((1 << EP4TXR_STAT_TX0)|(1 << EP4TXR_STAT_TX1))
#define EP4TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP4TXR_DTOG_TX_OR	(1 << EP4TXR_DTOG_TX)
#define EP4TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define EP4TXR_CTR_TX_OR	(1 << EP4TXR_CTR_TX)

/* Endpoint 4 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT4TXR,0x31);
#define CNT4TXR_CNT0	0		/* Number of Bytes to be transmitted by EP4 */
#define CNT4TXR_CNT0_OR	(1 << CNT4TXR_CNT0)
#define CNT4TXR_CNT1	1		/* Number of Bytes to be transmitted by EP4 */
#define CNT4TXR_CNT1_OR	(1 << CNT4TXR_CNT1)
#define CNT4TXR_CNT2	2		/* Number of Bytes to be transmitted by EP4 */
#define CNT4TXR_CNT2_OR	(1 << CNT4TXR_CNT2)
#define CNT4TXR_CNT3	3		/* Number of Bytes to be transmitted by EP4 */
#define CNT4TXR_CNT3_OR	(1 << CNT4TXR_CNT3)
#define CNT4TXR_CNT_OR	((1 << CNT4TXR_CNT0)|(1 << CNT4TXR_CNT1)\
		|(1 << CNT4TXR_CNT2)|(1 << CNT4TXR_CNT3))

/* Endpoint 5 Transmission Register */
DEF_8BIT_REG_AT(EP5TXR,0x32);
#define EP5TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP5TXR_STAT_TX0_OR	(1 << EP5TXR_STAT_TX0)
#define EP5TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP5TXR_STAT_TX1_OR	(1 << EP5TXR_STAT_TX1)
#define EP5TXR_STAT_TX_OR	((1 << EP5TXR_STAT_TX0)|(1 << EP5TXR_STAT_TX1))
#define EP5TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP5TXR_DTOG_TX_OR	(1 << EP5TXR_DTOG_TX)
#define EP5TXR_CTR_TX	3		/* Correct Transmission Transfer */
#define EP5TXR_CTR_TX_OR	(1 << EP5TXR_CTR_TX)

/* Endpoint 5 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT5TXR,0x33);
#define CNT5TXR_CNT0	0		/* Number of Bytes to be transmitted by EP5 */
#define CNT5TXR_CNT0_OR	(1 << CNT5TXR_CNT0)
#define CNT5TXR_CNT1	1		/* Number of Bytes to be transmitted by EP5 */
#define CNT5TXR_CNT1_OR	(1 << CNT5TXR_CNT1)
#define CNT5TXR_CNT2	2		/* Number of Bytes to be transmitted by EP5 */
#define CNT5TXR_CNT2_OR	(1 << CNT5TXR_CNT2)
#define CNT5TXR_CNT3	3		/* Number of Bytes to be transmitted by EP5 */
#define CNT5TXR_CNT3_OR	(1 << CNT5TXR_CNT3)
#define CNT5TXR_CNT_OR	((1 << CNT5TXR_CNT0)|(1 << CNT5TXR_CNT1)\
		|(1 << CNT5TXR_CNT2)|(1 << CNT5TXR_CNT3))

/* Error Status Register */
DEF_8BIT_REG_AT(ERRSR,0x34);
#define ERRSR_ERR0	0		/* Error Type */
#define ERRSR_ERR0_OR	(1 << ERRSR_ERR0)
#define ERRSR_ERR1	1		/* Error Type */
#define ERRSR_ERR1_OR	(1 << ERRSR_ERR1)
#define ERRSR_ERR2	2		/* Error Type */
#define ERRSR_ERR2_OR	(1 << ERRSR_ERR2)
#define ERRSR_ERR_OR	((1 << ERRSR_ERR0)|(1 << ERRSR_ERR1)\
		|(1 << ERRSR_ERR2))

/* TimeBase Unit (TBU) */
/*****************************************************************/

/* Timer counter Value */
DEF_8BIT_REG_AT(TBUCV,0x35);
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

/* Timer Control Status */
DEF_8BIT_REG_AT(TBUCSR,0x36);
#define TBUCSR_PR0	0		/* Prescaler Selection */
#define TBUCSR_PR0_OR	(1 << TBUCSR_PR0)
#define TBUCSR_PR1	1		/* Prescaler Selection */
#define TBUCSR_PR1_OR	(1 << TBUCSR_PR1)
#define TBUCSR_PR2	2		/* Prescaler Selection */
#define TBUCSR_PR2_OR	(1 << TBUCSR_PR2)
#define TBUCSR_PR_OR	((1 << TBUCSR_PR0)|(1 << TBUCSR_PR1)\
		|(1 << TBUCSR_PR2))
#define TBUCSR_TCEN	3		/* TBU Enable */
#define TBUCSR_TCEN_OR	(1 << TBUCSR_TCEN)
#define TBUCSR_ITE	4		/* Interrupt enabled */
#define TBUCSR_ITE_OR	(1 << TBUCSR_ITE)
#define TBUCSR_OVF	5		/* Overflow Flag */
#define TBUCSR_OVF_OR	(1 << TBUCSR_OVF)

/* Interrupt Control (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x37);
#define ISPR0_I0_0	0		/* Flash Start Programming Interrupt priority level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* Flash Start Programming Interrupt priority level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* UART Interrupt priority level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* UART Interrupt priority level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* USB Communication Interrupt priority level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* USB Communication Interrupt priority level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External Interrupt Port C priority level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External Interrupt Port C priority level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x38);
#define ISPR1_I0_4	0		/* External Interrupt Port A priority level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External Interrupt Port A priority level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* TBU Timer Interrupt priority level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* TBU Timer Interrupt priority level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* Smartcard Insertion/Removal Interrupt priority level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* Smartcard Insertion/Removal Interrupt priority level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* End Suspend Interrupt priority level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* End Suspend Interrupt priority level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x39);

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x3a);

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x3b);

/* LED */
/*****************************************************************/

/* Led Control Register */
DEF_8BIT_REG_AT(LED_CTRL,0x3e);
#define LED_CTRL_LD0_I	0		/* Current selection on LD0 */
#define LED_CTRL_LD0_I_OR	(1 << LED_CTRL_LD0_I)
#define LED_CTRL_LD1_I	1		/* Current selection on LD1 */
#define LED_CTRL_LD1_I_OR	(1 << LED_CTRL_LD1_I)
#define LED_CTRL_LD2_I	2		/* Current selection on LD2 */
#define LED_CTRL_LD2_I_OR	(1 << LED_CTRL_LD2_I)
#define LED_CTRL_LD3_I	3		/* Current selection on LD3 */
#define LED_CTRL_LD3_I_OR	(1 << LED_CTRL_LD3_I)
#define LED_CTRL_LD0	4		/* LED 0 Activation */
#define LED_CTRL_LD0_OR	(1 << LED_CTRL_LD0)
#define LED_CTRL_LD1	5		/* LED 1 Activation */
#define LED_CTRL_LD1_OR	(1 << LED_CTRL_LD1)
#define LED_CTRL_LD2	6		/* LED 2 Activation */
#define LED_CTRL_LD2_OR	(1 << LED_CTRL_LD2)
#define LED_CTRL_LD3	7		/* LED 3 Activation */
#define LED_CTRL_LD3_OR	(1 << LED_CTRL_LD3)

#endif /* __ST7FSCR1E4__ */
