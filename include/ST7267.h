/* ST7267.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7267__
#define __ST7267__

/* ST7267 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7267 1
		#if (MCU_NAME != ST7267)
		#error "wrong include file ST7267.h for chosen MCU!"
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

/* USB High Speed (USBHS) */
/*****************************************************************/

/* Power Management Register */
DEF_8BIT_REG_AT(PWRR,0x00);
#define PWRR_ESUSM	0		/* Enable Suspend Mode */
#define PWRR_ESUSM_OR	(1 << PWRR_ESUSM)
#define PWRR_SUSM	1		/* SUSM Suspend Mode (Read Only) */
#define PWRR_SUSM_OR	(1 << PWRR_SUSM)
#define PWRR_RSM	2		/* RSM Resume */
#define PWRR_RSM_OR	(1 << PWRR_RSM)
#define PWRR_RST	3		/* RST Reset (Read Only) */
#define PWRR_RST_OR	(1 << PWRR_RST)
#define PWRR_HSM	4		/* HSM HS Mode (Read Only) */
#define PWRR_HSM_OR	(1 << PWRR_HSM)
#define PWRR_HSE	5		/* HSE HS Enable */
#define PWRR_HSE_OR	(1 << PWRR_HSE)
#define PWRR_SCON	6		/* SCON Soft Connect/Disconnect */
#define PWRR_SCON_OR	(1 << PWRR_SCON)

/* Function Address Register */
DEF_8BIT_REG_AT(FADDR,0x01);
#define FADDR_FAD0	0		/* Function address */
#define FADDR_FAD0_OR	(1 << FADDR_FAD0)
#define FADDR_FAD1	1		/* Function address */
#define FADDR_FAD1_OR	(1 << FADDR_FAD1)
#define FADDR_FAD2	2		/* Function address */
#define FADDR_FAD2_OR	(1 << FADDR_FAD2)
#define FADDR_FAD3	3		/* Function address */
#define FADDR_FAD3_OR	(1 << FADDR_FAD3)
#define FADDR_FAD4	4		/* Function address */
#define FADDR_FAD4_OR	(1 << FADDR_FAD4)
#define FADDR_FAD5	5		/* Function address */
#define FADDR_FAD5_OR	(1 << FADDR_FAD5)
#define FADDR_FAD6	6		/* Function address */
#define FADDR_FAD6_OR	(1 << FADDR_FAD6)
#define FADDR_FAD_OR	((1 << FADDR_FAD0)|(1 << FADDR_FAD1)\
		|(1 << FADDR_FAD2)|(1 << FADDR_FAD3)|(1 << FADDR_FAD4)\
		|(1 << FADDR_FAD5)|(1 << FADDR_FAD6))
#define FADDR_UPD	7		/* Update (Read Only) */
#define FADDR_UPD_OR	(1 << FADDR_UPD)

/* Interrupt EP0 and IN EP Register */
DEF_8BIT_REG_AT(ITINR,0x03);
#define ITINR_EP0	0		/* Endpoint 0 flag */
#define ITINR_EP0_OR	(1 << ITINR_EP0)
#define ITINR_EP1I	1		/* Endpoint 1 IN flag */
#define ITINR_EP1I_OR	(1 << ITINR_EP1I)
#define ITINR_EP2I	2		/* Endpoint 2 IN flag */
#define ITINR_EP2I_OR	(1 << ITINR_EP2I)

/* Interrupt OUT EP Register */
DEF_8BIT_REG_AT(ITOUTR,0x05);
#define ITOUTR_EP1O	1		/* Endpoint 1 OUT */
#define ITOUTR_EP1O_OR	(1 << ITOUTR_EP1O)
#define ITOUTR_EP2O	2		/* Endpoint 2 OUT */
#define ITOUTR_EP2O_OR	(1 << ITOUTR_EP2O)

/* Interrupt IN Enable Register */
DEF_8BIT_REG_AT(ITINER,0x07);
#define ITINER_EP0E	0		/* Endpoint 0 Enable */
#define ITINER_EP0E_OR	(1 << ITINER_EP0E)
#define ITINER_EP1IE	1		/* Endpoint 1 IN Enable */
#define ITINER_EP1IE_OR	(1 << ITINER_EP1IE)
#define ITINER_EP2IE	2		/* Endpoint 2 IN Enable */
#define ITINER_EP2IE_OR	(1 << ITINER_EP2IE)

/* Interrupt OUT Enable Register */
DEF_8BIT_REG_AT(ITOUTER,0x09);
#define ITOUTER_EP1OE	1		/* Endpoint 1 OUT Enable */
#define ITOUTER_EP1OE_OR	(1 << ITOUTER_EP1OE)
#define ITOUTER_EP2OE	2		/* Endpoint 2 OUT Enable */
#define ITOUTER_EP2OE_OR	(1 << ITOUTER_EP2OE)

/* Interrupt USB Enable Register */
DEF_8BIT_REG_AT(ITUSBER,0x0a);
#define ITUSBER_SUSPE	0		/* Suspend Enable */
#define ITUSBER_SUSPE_OR	(1 << ITUSBER_SUSPE)
#define ITUSBER_RSME	1		/* Resume Enable */
#define ITUSBER_RSME_OR	(1 << ITUSBER_RSME)
#define ITUSBER_RSTE	2		/* Reset Enable */
#define ITUSBER_RSTE_OR	(1 << ITUSBER_RSTE)
#define ITUSBER_SOFE	3		/* Start Of Frame Enable */
#define ITUSBER_SOFE_OR	(1 << ITUSBER_SOFE)

/* Interrupt USB Register */
DEF_8BIT_REG_AT(ITUSBR,0x0b);
#define ITUSBR_SUSP	0		/* Suspend Interrupt */
#define ITUSBR_SUSP_OR	(1 << ITUSBR_SUSP)
#define ITUSBR_RSM	1		/* Resume Interrupt */
#define ITUSBR_RSM_OR	(1 << ITUSBR_RSM)
#define ITUSBR_RST	2		/* RST Reset Interrupt */
#define ITUSBR_RST_OR	(1 << ITUSBR_RST)
#define ITUSBR_SOF	3		/* Start Of Frame Interrupt */
#define ITUSBR_SOF_OR	(1 << ITUSBR_SOF)

/* Frame Number Register */
DEF_16BIT_REG_AT(FRNBR,0x0c);
/* Frame NumBer Register (MSB) */
DEF_8BIT_REG_AT(FRNBRM,0x0c);
/* Frame NumBer Register (LSB) */
DEF_8BIT_REG_AT(FRNBRL,0x0d);

/* Test Modes */
DEF_8BIT_REG_AT(TSTMODE,0x0e);

/* Index Register */
DEF_8BIT_REG_AT(INDEXR,0x0f);
#define INDEXR_IND0	0		/* Index Register */
#define INDEXR_IND0_OR	(1 << INDEXR_IND0)
#define INDEXR_IND1	1		/* Index Register */
#define INDEXR_IND1_OR	(1 << INDEXR_IND1)
#define INDEXR_IND_OR	((1 << INDEXR_IND0)|(1 << INDEXR_IND1))

/* IN EP n Max Pkt size Register */
DEF_16BIT_REG_AT(INMAXPR,0x10);
/* IN EP n Max Pkt size Register (MSB) */
DEF_8BIT_REG_AT(INMAXPRM,0x10);
/* IN EP n Max Pkt size Register (LSB) */
DEF_8BIT_REG_AT(INMAXPRL,0x11);

/* In Control Status Register */
DEF_16BIT_REG_AT(INCSR,0x12);
/* IN EP n Control Status Register (MSB) */
DEF_8BIT_REG_AT(INCSRM,0x12);
/* Control Status Reg for EP0 or IN EP n (LSB) */
DEF_8BIT_REG_AT(INCSRL,0x13);

/* OUT EP n Max Pkt size Register */
DEF_16BIT_REG_AT(OUTMAXPR,0x14);
/* OUT EP n Max Pkt size Register (MSB) */
DEF_8BIT_REG_AT(OUTMAXPRM,0x14);
/* OUT EP n Max Pkt size Register (LSB) */
DEF_8BIT_REG_AT(OUTMAXPRL,0x15);

/* OUT EP n Control Status Register */
DEF_16BIT_REG_AT(OUTCSR,0x16);
/* OUT EP n Control Status Register (MSB) */
DEF_8BIT_REG_AT(OUTCSRM,0x16);
/* OUT EP n Control Status Register (LSB) */
DEF_8BIT_REG_AT(OUTCSRL,0x17);

/* OUT EP n Count Register */
DEF_16BIT_REG_AT(OUTCNTR,0x18);
/* OUT EP n Count Register (MSB) */
DEF_8BIT_REG_AT(OUTCNTRM,0x18);
/* OUT EP n Count Register (LSB) */
DEF_8BIT_REG_AT(OUTCNTRL,0x19);

/* Endpoint 0 Data Register */
DEF_8BIT_REG_AT(EP0DR,0x21);

/* Endpoint 1 Data Register */
DEF_8BIT_REG_AT(EP1DR,0x23);

/* Endpoint 2 Data Register */
DEF_8BIT_REG_AT(EP2DR,0x25);

/* Port A */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PADR,0x26);

/* Data Direction Register */
DEF_8BIT_REG_AT(PADDR,0x27);

/* Option Register */
DEF_8BIT_REG_AT(PAOR,0x28);

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x29);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x2a);

/* Option Register */
DEF_8BIT_REG_AT(PBOR,0x2b);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x2c);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x2d);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x2e);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x2f);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x30);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x31);

/* Port E */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PEDR,0x32);

/* Data Direction Register */
DEF_8BIT_REG_AT(PEDDR,0x33);

/* Option Register */
DEF_8BIT_REG_AT(PEOR,0x34);

/* Watchdog Timer (WDG) */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x35);
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
#define WDGCR_WDGA	7		/* Activation Bit */
#define WDGCR_WDGA_OR	(1 << WDGCR_WDGA)

/* Interrupt Control (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x37);
#define ISPR0_I0_0	0		/* NMI IT Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* NMI IT Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* USB2 IT Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* USB2 IT Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* EOS IT Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* EOS IT Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* MSCI IT Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* MSCI IT Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x38);
#define ISPR1_I0_4	0		/* EI0 IT Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* EI0 IT Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* EI1 IT Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* EI1 IT Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* EI2 IT Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* EI2 IT Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* EI3 IT Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* EI3 IT Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x39);
#define ISPR2_I0_8	0		/* EI4 IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* EI4 IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* SPI IT Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* SPI IT Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* TIMER IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* TIMER IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))
#define ISPR2_I0_11	6		/* Not used */
#define ISPR2_I0_11_OR	(1 << ISPR2_I0_11)
#define ISPR2_I1_11	7		/* Not used */
#define ISPR2_I1_11_OR	(1 << ISPR2_I1_11)
#define ISPR2_I_11_OR	((1 << ISPR2_I0_11)|(1 << ISPR2_I1_11))

/* Interrupt Software Priority Register 3 */
DEF_8BIT_REG_AT(ISPR3,0x3a);
#define ISPR3_I0_12	0		/* Not used */
#define ISPR3_I0_12_OR	(1 << ISPR3_I0_12)
#define ISPR3_I1_12	1		/* Not used */
#define ISPR3_I1_12_OR	(1 << ISPR3_I1_12)
#define ISPR3_I_12_OR	((1 << ISPR3_I0_12)|(1 << ISPR3_I1_12))
#define ISPR3_I0_13	2		/* Not used */
#define ISPR3_I0_13_OR	(1 << ISPR3_I0_13)
#define ISPR3_I1_13	3		/* Not used */
#define ISPR3_I1_13_OR	(1 << ISPR3_I1_13)
#define ISPR3_I_13_OR	((1 << ISPR3_I0_13)|(1 << ISPR3_I1_13))

/* External Interrupt Control Register 0 */
DEF_8BIT_REG_AT(EICR0,0x3b);
#define EICR0_ISA0	0		/* Port A ei0 sensitivity IT[7-0] */
#define EICR0_ISA0_OR	(1 << EICR0_ISA0)
#define EICR0_ISA1	1		/* Port A ei0 sensitivity IT[7-0] */
#define EICR0_ISA1_OR	(1 << EICR0_ISA1)
#define EICR0_ISA_OR	((1 << EICR0_ISA0)|(1 << EICR0_ISA1))
#define EICR0_ISB0	2		/* Port B ei1 sensitivity IT[15-8] */
#define EICR0_ISB0_OR	(1 << EICR0_ISB0)
#define EICR0_ISB1	3		/* Port B ei1 sensitivity IT[15-8] */
#define EICR0_ISB1_OR	(1 << EICR0_ISB1)
#define EICR0_ISB_OR	((1 << EICR0_ISB0)|(1 << EICR0_ISB1))
#define EICR0_ISC0	4		/* Port C ei2 sensitivity IT[23-15] */
#define EICR0_ISC0_OR	(1 << EICR0_ISC0)
#define EICR0_ISC1	5		/* Port C ei2 sensitivity IT[23-15] */
#define EICR0_ISC1_OR	(1 << EICR0_ISC1)
#define EICR0_ISC_OR	((1 << EICR0_ISC0)|(1 << EICR0_ISC1))
#define EICR0_ISD0	6		/* Port D ei3 sensitivity IT[31-23] */
#define EICR0_ISD0_OR	(1 << EICR0_ISD0)
#define EICR0_ISD1	7		/* Port D ei3 sensitivity IT[31-23] */
#define EICR0_ISD1_OR	(1 << EICR0_ISD1)
#define EICR0_ISD_OR	((1 << EICR0_ISD0)|(1 << EICR0_ISD1))

/* External Interrupt Control Register 1 */
DEF_8BIT_REG_AT(EICR1,0x3c);
#define EICR1_ISE0	0		/* Port E ei4 sensitivity IT[38-32] */
#define EICR1_ISE0_OR	(1 << EICR1_ISE0)
#define EICR1_ISE1	1		/* Port E ei4 sensitivity IT[38-32] */
#define EICR1_ISE1_OR	(1 << EICR1_ISE1)
#define EICR1_ISE_OR	((1 << EICR1_ISE0)|(1 << EICR1_ISE1))

/* Port A External Interrupt Enable register */
DEF_8BIT_REG_AT(PAEIENR,0x3d);
#define PAEIENR_IT0E	0		/* Port A interrupt 0 enable */
#define PAEIENR_IT0E_OR	(1 << PAEIENR_IT0E)
#define PAEIENR_IT1E	1		/* Port A interrupt 1 enable */
#define PAEIENR_IT1E_OR	(1 << PAEIENR_IT1E)
#define PAEIENR_IT2E	2		/* Port A interrupt 2 enable */
#define PAEIENR_IT2E_OR	(1 << PAEIENR_IT2E)
#define PAEIENR_IT3E	3		/* Port A interrupt 3 enable */
#define PAEIENR_IT3E_OR	(1 << PAEIENR_IT3E)
#define PAEIENR_IT4E	4		/* Port A interrupt 4 enable */
#define PAEIENR_IT4E_OR	(1 << PAEIENR_IT4E)
#define PAEIENR_IT5E	5		/* Port A interrupt 5 enable */
#define PAEIENR_IT5E_OR	(1 << PAEIENR_IT5E)
#define PAEIENR_IT6E	6		/* Port A interrupt 6 enable */
#define PAEIENR_IT6E_OR	(1 << PAEIENR_IT6E)
#define PAEIENR_IT7E	7		/* Port A interrupt 7 enable */
#define PAEIENR_IT7E_OR	(1 << PAEIENR_IT7E)

/* Port B External Interrupt Enable register */
DEF_8BIT_REG_AT(PBEIENR,0x3e);
#define PBEIENR_IT8E	0		/* Port B interrupt 8 enable */
#define PBEIENR_IT8E_OR	(1 << PBEIENR_IT8E)
#define PBEIENR_IT9E	1		/* Port B interrupt 9 enable */
#define PBEIENR_IT9E_OR	(1 << PBEIENR_IT9E)
#define PBEIENR_IT10E	2		/* Port B interrupt 10 enable */
#define PBEIENR_IT10E_OR	(1 << PBEIENR_IT10E)
#define PBEIENR_IT11E	3		/* Port B interrupt 11 enable */
#define PBEIENR_IT11E_OR	(1 << PBEIENR_IT11E)
#define PBEIENR_IT12E	4		/* Port B interrupt 12 enable */
#define PBEIENR_IT12E_OR	(1 << PBEIENR_IT12E)
#define PBEIENR_IT13E	5		/* Reserved must be kept cleared */
#define PBEIENR_IT13E_OR	(1 << PBEIENR_IT13E)
#define PBEIENR_IT14E	6		/* Reserved must be kept cleared */
#define PBEIENR_IT14E_OR	(1 << PBEIENR_IT14E)
#define PBEIENR_IT15E	7		/* Reserved must be kept cleared */
#define PBEIENR_IT15E_OR	(1 << PBEIENR_IT15E)

/* Port C External Interrupt Enable register */
DEF_8BIT_REG_AT(PCEIENR,0x3f);
#define PCEIENR_IT16E	0		/* Port C interrupt 16 enable */
#define PCEIENR_IT16E_OR	(1 << PCEIENR_IT16E)
#define PCEIENR_IT17E	1		/* Port C interrupt 17 enable */
#define PCEIENR_IT17E_OR	(1 << PCEIENR_IT17E)
#define PCEIENR_IT18E	2		/* Port C interrupt 18 enable */
#define PCEIENR_IT18E_OR	(1 << PCEIENR_IT18E)
#define PCEIENR_IT19E	3		/* Port C interrupt 19 enable */
#define PCEIENR_IT19E_OR	(1 << PCEIENR_IT19E)
#define PCEIENR_IT20E	4		/* Port C interrupt 20 enable */
#define PCEIENR_IT20E_OR	(1 << PCEIENR_IT20E)
#define PCEIENR_IT21E	5		/* Port C interrupt 21 enable */
#define PCEIENR_IT21E_OR	(1 << PCEIENR_IT21E)
#define PCEIENR_IT22E	6		/* Port C interrupt 22 enable */
#define PCEIENR_IT22E_OR	(1 << PCEIENR_IT22E)
#define PCEIENR_IT23E	7		/* Port C interrupt 23 enable */
#define PCEIENR_IT23E_OR	(1 << PCEIENR_IT23E)

/* Port D External Interrupt Enable register */
DEF_8BIT_REG_AT(PDEIENR,0x40);
#define PDEIENR_IT24E	0		/* Port D interrupt 24 enable */
#define PDEIENR_IT24E_OR	(1 << PDEIENR_IT24E)
#define PDEIENR_IT25E	1		/* Port D interrupt 25 enable */
#define PDEIENR_IT25E_OR	(1 << PDEIENR_IT25E)
#define PDEIENR_IT26E	2		/* Port D interrupt 26 enable */
#define PDEIENR_IT26E_OR	(1 << PDEIENR_IT26E)
#define PDEIENR_IT27E	3		/* Port D interrupt 27 enable */
#define PDEIENR_IT27E_OR	(1 << PDEIENR_IT27E)
#define PDEIENR_IT28E	4		/* Port D interrupt 28 enable */
#define PDEIENR_IT28E_OR	(1 << PDEIENR_IT28E)
#define PDEIENR_IT29E	5		/* Port D interrupt 29 enable */
#define PDEIENR_IT29E_OR	(1 << PDEIENR_IT29E)
#define PDEIENR_IT30E	6		/* Port D interrupt 30 enable */
#define PDEIENR_IT30E_OR	(1 << PDEIENR_IT30E)
#define PDEIENR_IT31E	7		/* Port D interrupt 31 enable */
#define PDEIENR_IT31E_OR	(1 << PDEIENR_IT31E)

/* Port E External Interrupt Enable register */
DEF_8BIT_REG_AT(PEEIENR,0x41);
#define PEEIENR_IT32E	0		/* Port E interrupt 32 enable */
#define PEEIENR_IT32E_OR	(1 << PEEIENR_IT32E)
#define PEEIENR_IT33E	1		/* Port E interrupt 33 enable */
#define PEEIENR_IT33E_OR	(1 << PEEIENR_IT33E)
#define PEEIENR_IT34E	2		/* Port E interrupt 34 enable */
#define PEEIENR_IT34E_OR	(1 << PEEIENR_IT34E)
#define PEEIENR_IT35E	3		/* Port E interrupt 35 enable */
#define PEEIENR_IT35E_OR	(1 << PEEIENR_IT35E)
#define PEEIENR_IT36E	4		/* Port E interrupt 36 enable */
#define PEEIENR_IT36E_OR	(1 << PEEIENR_IT36E)
#define PEEIENR_IT37E	5		/* Port E interrupt 37 enable */
#define PEEIENR_IT37E_OR	(1 << PEEIENR_IT37E)
#define PEEIENR_IT38E	6		/* Port E interrupt 38 enable */
#define PEEIENR_IT38E_OR	(1 << PEEIENR_IT38E)

/* Port A External Interrupt Status Register */
DEF_8BIT_REG_AT(PAEISR,0x42);
#define PAEISR_IT0R	0		/* Port A IT0 external interrupt */
#define PAEISR_IT0R_OR	(1 << PAEISR_IT0R)
#define PAEISR_IT1R	1		/* Port A IT1 external interrupt */
#define PAEISR_IT1R_OR	(1 << PAEISR_IT1R)
#define PAEISR_IT2R	2		/* Port A IT2 external interrupt */
#define PAEISR_IT2R_OR	(1 << PAEISR_IT2R)
#define PAEISR_IT3R	3		/* Port A IT3 external interrupt */
#define PAEISR_IT3R_OR	(1 << PAEISR_IT3R)
#define PAEISR_IT4R	4		/* Port A IT4 external interrupt */
#define PAEISR_IT4R_OR	(1 << PAEISR_IT4R)
#define PAEISR_IT5R	5		/* Port A IT5 external interrupt */
#define PAEISR_IT5R_OR	(1 << PAEISR_IT5R)
#define PAEISR_IT6R	6		/* Port A IT6 external interrupt */
#define PAEISR_IT6R_OR	(1 << PAEISR_IT6R)
#define PAEISR_IT7R	7		/* Port A IT7 external interrupt */
#define PAEISR_IT7R_OR	(1 << PAEISR_IT7R)

/* Port B External Interrupt Status Register */
DEF_8BIT_REG_AT(PBEISR,0x43);
#define PBEISR_IT8R	0		/* Port B IT8 external interrupt */
#define PBEISR_IT8R_OR	(1 << PBEISR_IT8R)
#define PBEISR_IT9R	1		/* Port B IT9 external interrupt */
#define PBEISR_IT9R_OR	(1 << PBEISR_IT9R)
#define PBEISR_IT10R	2		/* Port B IT10 external interrupt */
#define PBEISR_IT10R_OR	(1 << PBEISR_IT10R)
#define PBEISR_IT11R	3		/* Port B IT11 external interrupt */
#define PBEISR_IT11R_OR	(1 << PBEISR_IT11R)
#define PBEISR_IT12R	4		/* Port B IT12 external interrupt */
#define PBEISR_IT12R_OR	(1 << PBEISR_IT12R)
#define PBEISR_IT13R	5		/* Reserved must be kept cleared */
#define PBEISR_IT13R_OR	(1 << PBEISR_IT13R)
#define PBEISR_IT14R	6		/* Reserved must be kept cleared */
#define PBEISR_IT14R_OR	(1 << PBEISR_IT14R)
#define PBEISR_IT15R	7		/* Reserved must be kept cleared */
#define PBEISR_IT15R_OR	(1 << PBEISR_IT15R)

/* Port C External Interrupt Status Register */
DEF_8BIT_REG_AT(PCEISR,0x44);
#define PCEISR_IT16R	0		/* Port C IT16 external interrupt */
#define PCEISR_IT16R_OR	(1 << PCEISR_IT16R)
#define PCEISR_IT17R	1		/* Port C IT17 external interrupt */
#define PCEISR_IT17R_OR	(1 << PCEISR_IT17R)
#define PCEISR_IT18R	2		/* Port C IT18 external interrupt */
#define PCEISR_IT18R_OR	(1 << PCEISR_IT18R)
#define PCEISR_IT19R	3		/* Port C IT19 external interrupt */
#define PCEISR_IT19R_OR	(1 << PCEISR_IT19R)
#define PCEISR_IT20R	4		/* Port C IT20 external interrupt */
#define PCEISR_IT20R_OR	(1 << PCEISR_IT20R)
#define PCEISR_IT21R	5		/* Port C IT21 external interrupt */
#define PCEISR_IT21R_OR	(1 << PCEISR_IT21R)
#define PCEISR_IT22R	6		/* Port C IT22 external interrupt */
#define PCEISR_IT22R_OR	(1 << PCEISR_IT22R)
#define PCEISR_IT23R	7		/* Port C IT23 external interrupt */
#define PCEISR_IT23R_OR	(1 << PCEISR_IT23R)

/* Port D External Interrupt Status Register */
DEF_8BIT_REG_AT(PDEISR,0x45);
#define PDEISR_IT24R	0		/* Port D IT24 external interrupt */
#define PDEISR_IT24R_OR	(1 << PDEISR_IT24R)
#define PDEISR_IT25R	1		/* Port D IT25 external interrupt */
#define PDEISR_IT25R_OR	(1 << PDEISR_IT25R)
#define PDEISR_IT26R	2		/* Port D IT26 external interrupt */
#define PDEISR_IT26R_OR	(1 << PDEISR_IT26R)
#define PDEISR_IT27R	3		/* Port D IT27 external interrupt */
#define PDEISR_IT27R_OR	(1 << PDEISR_IT27R)
#define PDEISR_IT28R	4		/* Port D IT28 external interrupt */
#define PDEISR_IT28R_OR	(1 << PDEISR_IT28R)
#define PDEISR_IT29R	5		/* Port D IT29 external interrupt */
#define PDEISR_IT29R_OR	(1 << PDEISR_IT29R)
#define PDEISR_IT30R	6		/* Port D IT30 external interrupt */
#define PDEISR_IT30R_OR	(1 << PDEISR_IT30R)
#define PDEISR_IT31R	7		/* Port D IT31 external interrupt */
#define PDEISR_IT31R_OR	(1 << PDEISR_IT31R)

/* Port E External Interrupt Status Register */
DEF_8BIT_REG_AT(PEEISR,0x46);
#define PEEISR_IT32R	0		/* Port E IT32 external interrupt */
#define PEEISR_IT32R_OR	(1 << PEEISR_IT32R)
#define PEEISR_IT33R	1		/* Port E IT33 external interrupt */
#define PEEISR_IT33R_OR	(1 << PEEISR_IT33R)
#define PEEISR_IT34R	2		/* Port E IT34 external interrupt */
#define PEEISR_IT34R_OR	(1 << PEEISR_IT34R)
#define PEEISR_IT35R	3		/* Port E IT35 external interrupt */
#define PEEISR_IT35R_OR	(1 << PEEISR_IT35R)
#define PEEISR_IT36R	4		/* Port E IT36 external interrupt */
#define PEEISR_IT36R_OR	(1 << PEEISR_IT36R)
#define PEEISR_IT37R	5		/* Port E IT37 external interrupt */
#define PEEISR_IT37R_OR	(1 << PEEISR_IT37R)
#define PEEISR_IT38R	6		/* Port E IT38 external interrupt */
#define PEEISR_IT38R_OR	(1 << PEEISR_IT38R)

/* 16-Bit Timer (TIMER) */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TCR2,0x47);
#define TCR2_EXEDG	0		/* External Clock Edge */
#define TCR2_EXEDG_OR	(1 << TCR2_EXEDG)
#define TCR2_IEDG2	1		/* Input Edge 2 */
#define TCR2_IEDG2_OR	(1 << TCR2_IEDG2)
#define TCR2_CC0	2		/* Clock Control */
#define TCR2_CC0_OR	(1 << TCR2_CC0)
#define TCR2_CC1	3		/* Clock Control */
#define TCR2_CC1_OR	(1 << TCR2_CC1)
#define TCR2_CC_OR	((1 << TCR2_CC0)|(1 << TCR2_CC1))
#define TCR2_PWM	4		/* Pulse Width Modulation */
#define TCR2_PWM_OR	(1 << TCR2_PWM)
#define TCR2_OPM	5		/* One Pulse Mode */
#define TCR2_OPM_OR	(1 << TCR2_OPM)
#define TCR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TCR2_OC2E_OR	(1 << TCR2_OC2E)
#define TCR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TCR2_OC1E_OR	(1 << TCR2_OC1E)

/* Control Register 1 */
DEF_8BIT_REG_AT(TCR1,0x48);
#define TCR1_OLVL1	0		/* Output Level 1 */
#define TCR1_OLVL1_OR	(1 << TCR1_OLVL1)
#define TCR1_IEDG1	1		/* Input Edge 1 */
#define TCR1_IEDG1_OR	(1 << TCR1_IEDG1)
#define TCR1_OLVL2	2		/* Output Level 2 */
#define TCR1_OLVL2_OR	(1 << TCR1_OLVL2)
#define TCR1_FOLV1	3		/* Forced Output Compare 1 */
#define TCR1_FOLV1_OR	(1 << TCR1_FOLV1)
#define TCR1_FOLV2	4		/* Forced Output Compare 2 */
#define TCR1_FOLV2_OR	(1 << TCR1_FOLV2)
#define TCR1_TOIE	5		/* Timer Overflow Interrupt */
#define TCR1_TOIE_OR	(1 << TCR1_TOIE)
#define TCR1_OCIE	6		/* Output Compare Interrupt */
#define TCR1_OCIE_OR	(1 << TCR1_OCIE)
#define TCR1_ICIE	7		/* Input Capture Interrupt */
#define TCR1_ICIE_OR	(1 << TCR1_ICIE)

/* Control Status Register */
DEF_8BIT_REG_AT(TCSR,0x49);
#define TCSR_TIMD	2		/* Timer Disable */
#define TCSR_TIMD_OR	(1 << TCSR_TIMD)
#define TCSR_OCF2	3		/* Output Compare Flag 2 */
#define TCSR_OCF2_OR	(1 << TCSR_OCF2)
#define TCSR_ICF2	4		/* Input Capture Flag 2 */
#define TCSR_ICF2_OR	(1 << TCSR_ICF2)
#define TCSR_TOF	5		/* Timer Overflow */
#define TCSR_TOF_OR	(1 << TCSR_TOF)
#define TCSR_OCF1	6		/* Output Compare Flag 1 */
#define TCSR_OCF1_OR	(1 << TCSR_OCF1)
#define TCSR_ICF1	7		/* Input Capture Flag 1 */
#define TCSR_ICF1_OR	(1 << TCSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TIC1R,0x4a);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TIC1HR,0x4a);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TIC1LR,0x4b);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TOC1R,0x4c);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TOC1HR,0x4c);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TOC1LR,0x4d);

/* Counter Register */
DEF_16BIT_REG_AT(TCR,0x4e);
/* Counter High Register */
DEF_8BIT_REG_AT(TCHR,0x4e);
/* Counter Low Register */
DEF_8BIT_REG_AT(TCLR,0x4f);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TACR,0x50);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x50);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x51);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TIC2R,0x52);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TIC2HR,0x52);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TIC2LR,0x53);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TOC2R,0x54);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TOC2HR,0x54);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TOC2LR,0x55);

/* Miscellaneous Register (MISC) */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x56);

/* Timebase Unit (TBU) */
/*****************************************************************/

/* TBU Counter Value Register */
DEF_8BIT_REG_AT(TBUCVR,0x58);
#define TBUCVR_CV0	0		/* Counter Value */
#define TBUCVR_CV0_OR	(1 << TBUCVR_CV0)
#define TBUCVR_CV1	1		/* Counter Value */
#define TBUCVR_CV1_OR	(1 << TBUCVR_CV1)
#define TBUCVR_CV2	2		/* Counter Value */
#define TBUCVR_CV2_OR	(1 << TBUCVR_CV2)
#define TBUCVR_CV3	3		/* Counter Value */
#define TBUCVR_CV3_OR	(1 << TBUCVR_CV3)
#define TBUCVR_CV4	4		/* Counter Value */
#define TBUCVR_CV4_OR	(1 << TBUCVR_CV4)
#define TBUCVR_CV5	5		/* Counter Value */
#define TBUCVR_CV5_OR	(1 << TBUCVR_CV5)
#define TBUCVR_CV6	6		/* Counter Value */
#define TBUCVR_CV6_OR	(1 << TBUCVR_CV6)
#define TBUCVR_CV7	7		/* Counter Value */
#define TBUCVR_CV7_OR	(1 << TBUCVR_CV7)
#define TBUCVR_CV_OR	((1 << TBUCVR_CV0)|(1 << TBUCVR_CV1)\
		|(1 << TBUCVR_CV2)|(1 << TBUCVR_CV3)|(1 << TBUCVR_CV4)\
		|(1 << TBUCVR_CV5)|(1 << TBUCVR_CV6)|(1 << TBUCVR_CV7))

/* TBU Control/Status Register */
DEF_8BIT_REG_AT(TBUCSR,0x59);
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

/* Clock Generator (CKGEN) */
/*****************************************************************/

/* Clock Control Mode Register */
DEF_8BIT_REG_AT(CCMR,0x5b);
#define CCMR_FRQ	0		/* CPU clock frequency */
#define CCMR_FRQ_OR	(1 << CCMR_FRQ)
#define CCMR_MODE	1		/* Run mode */
#define CCMR_MODE_OR	(1 << CCMR_MODE)
#define CCMR_LOCK	2		/* PLL lock */
#define CCMR_LOCK_OR	(1 << CCMR_LOCK)
#define CCMR_REGOFF	7		/* Regulator mode in halt */
#define CCMR_REGOFF_OR	(1 << CCMR_REGOFF)

/* Clock Enable of Low Speed Peripherals Clk Register (CELSPCR) */
DEF_8BIT_REG_AT(CELSPR,0x5c);
#define CELSPR_ICD	0		/* ICD clock enable */
#define CELSPR_ICD_OR	(1 << CELSPR_ICD)
#define CELSPR_TIM	1		/* Timer clock enable */
#define CELSPR_TIM_OR	(1 << CELSPR_TIM)
#define CELSPR_WDG	2		/* WDG clock enable */
#define CELSPR_WDG_OR	(1 << CELSPR_WDG)
#define CELSPR_SPI	3		/* SPI clock enable */
#define CELSPR_SPI_OR	(1 << CELSPR_SPI)
#define CELSPR_TBU	4		/* TBU clock enable */
#define CELSPR_TBU_OR	(1 << CELSPR_TBU)

/* Clock Enable of High Speed Peripherals Clk Register (CEHSPCR) */
DEF_8BIT_REG_AT(CEHSPR,0x5d);
#define CEHSPR_MSCI	0		/* MSCI clock enable */
#define CEHSPR_MSCI_OR	(1 << CEHSPR_MSCI)
#define CEHSPR_ENC	1		/* Encoder clock enable */
#define CEHSPR_ENC_OR	(1 << CEHSPR_ENC)
#define CEHSPR_DEC	2		/* Decoder clock enable */
#define CEHSPR_DEC_OR	(1 << CEHSPR_DEC)
#define CEHSPR_USB	3		/* USB clock enable */
#define CEHSPR_USB_OR	(1 << CEHSPR_USB)

/* End of suspend (EOS) */
/*****************************************************************/

/* End of suspend Status Register */
DEF_8BIT_REG_AT(EOSSR,0x5f);
#define EOSSR_EOS	0		/* End Of Suspend */
#define EOSSR_EOS_OR	(1 << EOSSR_EOS)
#define EOSSR_LS0	6		/* LS0 Line State 0 flag */
#define EOSSR_LS0_OR	(1 << EOSSR_LS0)
#define EOSSR_LS1	7		/* LS1 Line State 1 flag */
#define EOSSR_LS1_OR	(1 << EOSSR_LS1)

/* End of suspend Control Register */
DEF_8BIT_REG_AT(EOSCR,0x60);
#define EOSCR_EOSE	0		/* End Of Suspend */
#define EOSCR_EOSE_OR	(1 << EOSCR_EOSE)
#define EOSCR_CPO	1		/* Compensation Cell Off */
#define EOSCR_CPO_OR	(1 << EOSCR_CPO)
#define EOSCR_UPO	2		/* USB2 Phy Off */
#define EOSCR_UPO_OR	(1 << EOSCR_UPO)
#define EOSCR_LSE	7		/* Line State Enable */
#define EOSCR_LSE_OR	(1 << EOSCR_LSE)

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x61);

/* Control Register */
DEF_8BIT_REG_AT(SPICR,0x62);
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
DEF_8BIT_REG_AT(SPICSR,0x63);
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

/* Mass Storage Communication Interface (MSCI) */
/*****************************************************************/

/* MSCI Control Register */
DEF_8BIT_REG_AT(MCR,0x69);
#define MCR_SFTR	0		/* Soft Reset */
#define MCR_SFTR_OR	(1 << MCR_SFTR)
#define MCR_PCR	1		/* Program Counter Reset */
#define MCR_PCR_OR	(1 << MCR_PCR)
#define MCR_RAMLD	2		/* RAM Load */
#define MCR_RAMLD_OR	(1 << MCR_RAMLD)
#define MCR_GO	3		/* Go */
#define MCR_GO_OR	(1 << MCR_GO)
#define MCR_STPIE	4		/* Stop Interrupt Enable */
#define MCR_STPIE_OR	(1 << MCR_STPIE)
#define MCR_ITRIE	5		/* ITR Interrupt Enable */
#define MCR_ITRIE_OR	(1 << MCR_ITRIE)

/* MSCI Status Register */
DEF_8BIT_REG_AT(MSR,0x6a);
#define MSR_CSTP	0		/* Clear Stop flag */
#define MSR_CSTP_OR	(1 << MSR_CSTP)
#define MSR_CITR	1		/* Clear ITR flag */
#define MSR_CITR_OR	(1 << MSR_CITR)
#define MSR_STP	4		/* MSCI CORE Stop flag */
#define MSR_STP_OR	(1 << MSR_STP)
#define MSR_ITR	5		/* MSCI CORE ITR flag */
#define MSR_ITR_OR	(1 << MSR_ITR)

/* MSCI PC register */
DEF_16BIT_REG_AT(MPC,0x6b);
#define MPC_MPCM8	8		/* PC register (MSB) */
#define MPC_MPCM8_OR	(1 << MPC_MPCM8)
#define MPC_MPCM9	9		/* PC register (MSB) */
#define MPC_MPCM9_OR	(1 << MPC_MPCM9)
#define MPC_MPCM10	10		/* PC register (MSB) */
#define MPC_MPCM10_OR	(1 << MPC_MPCM10)
#define MPC_MPCM_OR	((1 << MPC_MPCM8)|(1 << MPC_MPCM9)\
		|(1 << MPC_MPCM10))
#define MPC_MPCL0	0		/* PC register (LSB) */
#define MPC_MPCL0_OR	(1 << MPC_MPCL0)
#define MPC_MPCL1	1		/* PC register (LSB) */
#define MPC_MPCL1_OR	(1 << MPC_MPCL1)
#define MPC_MPCL2	2		/* PC register (LSB) */
#define MPC_MPCL2_OR	(1 << MPC_MPCL2)
#define MPC_MPCL3	3		/* PC register (LSB) */
#define MPC_MPCL3_OR	(1 << MPC_MPCL3)
#define MPC_MPCL4	4		/* PC register (LSB) */
#define MPC_MPCL4_OR	(1 << MPC_MPCL4)
#define MPC_MPCL5	5		/* PC register (LSB) */
#define MPC_MPCL5_OR	(1 << MPC_MPCL5)
#define MPC_MPCL6	6		/* PC register (LSB) */
#define MPC_MPCL6_OR	(1 << MPC_MPCL6)
#define MPC_MPCL7	7		/* PC register (LSB) */
#define MPC_MPCL7_OR	(1 << MPC_MPCL7)
#define MPC_MPCL_OR	((1 << MPC_MPCL0)|(1 << MPC_MPCL1)\
		|(1 << MPC_MPCL2)|(1 << MPC_MPCL3)|(1 << MPC_MPCL4)|(1 << MPC_MPCL5)\
		|(1 << MPC_MPCL6)|(1 << MPC_MPCL7))

/* MSCI CRC register */
DEF_16BIT_REG_AT(MCRC,0x6d);
/* CRC register (MSB) */
DEF_8BIT_REG_AT(MCRCM,0x6d);
/* CRC register (LSB) */
DEF_8BIT_REG_AT(MCRCL,0x6e);

/* Mass Storage Communication Interface Debug (MSCI Debug) */
/*****************************************************************/

/* MSCI BreaKpoint A register */
DEF_16BIT_REG_AT(MBPA,0x1900);
#define MBPA_MBPAM8	8		/* MSCI BreaKpoint A register (MSB) */
#define MBPA_MBPAM8_OR	(1 << MBPA_MBPAM8)
#define MBPA_MBPAM9	9		/* MSCI BreaKpoint A register (MSB) */
#define MBPA_MBPAM9_OR	(1 << MBPA_MBPAM9)
#define MBPA_MBPAM10	10		/* MSCI BreaKpoint A register (MSB) */
#define MBPA_MBPAM10_OR	(1 << MBPA_MBPAM10)
#define MBPA_MBPAM_OR	((1 << MBPA_MBPAM8)|(1 << MBPA_MBPAM9)\
		|(1 << MBPA_MBPAM10))
#define MBPA_MBPAL0	0		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL0_OR	(1 << MBPA_MBPAL0)
#define MBPA_MBPAL1	1		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL1_OR	(1 << MBPA_MBPAL1)
#define MBPA_MBPAL2	2		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL2_OR	(1 << MBPA_MBPAL2)
#define MBPA_MBPAL3	3		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL3_OR	(1 << MBPA_MBPAL3)
#define MBPA_MBPAL4	4		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL4_OR	(1 << MBPA_MBPAL4)
#define MBPA_MBPAL5	5		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL5_OR	(1 << MBPA_MBPAL5)
#define MBPA_MBPAL6	6		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL6_OR	(1 << MBPA_MBPAL6)
#define MBPA_MBPAL7	7		/* MSCI BreaKpoint A register (LSB) */
#define MBPA_MBPAL7_OR	(1 << MBPA_MBPAL7)
#define MBPA_MBPAL_OR	((1 << MBPA_MBPAL0)|(1 << MBPA_MBPAL1)\
		|(1 << MBPA_MBPAL2)|(1 << MBPA_MBPAL3)|(1 << MBPA_MBPAL4)\
		|(1 << MBPA_MBPAL5)|(1 << MBPA_MBPAL6)|(1 << MBPA_MBPAL7))

/* MSCI BreaKpoint B register */
DEF_16BIT_REG_AT(MBPB,0x1902);
#define MBPB_MBPBM8	8		/* MSCI BreaKpoint B register (MSB) */
#define MBPB_MBPBM8_OR	(1 << MBPB_MBPBM8)
#define MBPB_MBPBM9	9		/* MSCI BreaKpoint B register (MSB) */
#define MBPB_MBPBM9_OR	(1 << MBPB_MBPBM9)
#define MBPB_MBPBM10	10		/* MSCI BreaKpoint B register (MSB) */
#define MBPB_MBPBM10_OR	(1 << MBPB_MBPBM10)
#define MBPB_MBPBM_OR	((1 << MBPB_MBPBM8)|(1 << MBPB_MBPBM9)\
		|(1 << MBPB_MBPBM10))
#define MBPB_MBPBL0	0		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL0_OR	(1 << MBPB_MBPBL0)
#define MBPB_MBPBL1	1		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL1_OR	(1 << MBPB_MBPBL1)
#define MBPB_MBPBL2	2		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL2_OR	(1 << MBPB_MBPBL2)
#define MBPB_MBPBL3	3		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL3_OR	(1 << MBPB_MBPBL3)
#define MBPB_MBPBL4	4		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL4_OR	(1 << MBPB_MBPBL4)
#define MBPB_MBPBL5	5		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL5_OR	(1 << MBPB_MBPBL5)
#define MBPB_MBPBL6	6		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL6_OR	(1 << MBPB_MBPBL6)
#define MBPB_MBPBL7	7		/* MSCI BreaKpoint B register (LSB) */
#define MBPB_MBPBL7_OR	(1 << MBPB_MBPBL7)
#define MBPB_MBPBL_OR	((1 << MBPB_MBPBL0)|(1 << MBPB_MBPBL1)\
		|(1 << MBPB_MBPBL2)|(1 << MBPB_MBPBL3)|(1 << MBPB_MBPBL4)\
		|(1 << MBPB_MBPBL5)|(1 << MBPB_MBPBL6)|(1 << MBPB_MBPBL7))

/* MSCI Debug Register */
DEF_8BIT_REG_AT(MDR,0x1904);
#define MDR_BPAEN	0		/* BreakPoint A Enable */
#define MDR_BPAEN_OR	(1 << MDR_BPAEN)
#define MDR_BPBEN	1		/* BreakPoint B Enable */
#define MDR_BPBEN_OR	(1 << MDR_BPBEN)

/* MSCI Internal PC register */
DEF_16BIT_REG_AT(MIPC,0x1905);
#define MIPC_MIPCM8	8		/* MSCI Internal PC register (MSB) */
#define MIPC_MIPCM8_OR	(1 << MIPC_MIPCM8)
#define MIPC_MIPCM9	9		/* MSCI Internal PC register (MSB) */
#define MIPC_MIPCM9_OR	(1 << MIPC_MIPCM9)
#define MIPC_MIPCM10	10		/* MSCI Internal PC register (MSB) */
#define MIPC_MIPCM10_OR	(1 << MIPC_MIPCM10)
#define MIPC_MIPCM_OR	((1 << MIPC_MIPCM8)|(1 << MIPC_MIPCM9)\
		|(1 << MIPC_MIPCM10))
#define MIPC_MIPCL0	0		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL0_OR	(1 << MIPC_MIPCL0)
#define MIPC_MIPCL1	1		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL1_OR	(1 << MIPC_MIPCL1)
#define MIPC_MIPCL2	2		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL2_OR	(1 << MIPC_MIPCL2)
#define MIPC_MIPCL3	3		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL3_OR	(1 << MIPC_MIPCL3)
#define MIPC_MIPCL4	4		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL4_OR	(1 << MIPC_MIPCL4)
#define MIPC_MIPCL5	5		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL5_OR	(1 << MIPC_MIPCL5)
#define MIPC_MIPCL6	6		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL6_OR	(1 << MIPC_MIPCL6)
#define MIPC_MIPCL7	7		/* MSCI Internal PC register (LSB) */
#define MIPC_MIPCL7_OR	(1 << MIPC_MIPCL7)
#define MIPC_MIPCL_OR	((1 << MIPC_MIPCL0)|(1 << MIPC_MIPCL1)\
		|(1 << MIPC_MIPCL2)|(1 << MIPC_MIPCL3)|(1 << MIPC_MIPCL4)\
		|(1 << MIPC_MIPCL5)|(1 << MIPC_MIPCL6)|(1 << MIPC_MIPCL7))

/* MSCI Internal Status Register */
DEF_8BIT_REG_AT(MISR,0x1907);
#define MISR_C	0		/* Carry */
#define MISR_C_OR	(1 << MISR_C)
#define MISR_Z	1		/* Zero */
#define MISR_Z_OR	(1 << MISR_Z)
#define MISR_Cond	2		/* Condition */
#define MISR_Cond_OR	(1 << MISR_Cond)
#define MISR_AI	3		/* Auto Increment */
#define MISR_AI_OR	(1 << MISR_AI)
#define MISR_BS	4		/* Bit Set */
#define MISR_BS_OR	(1 << MISR_BS)

/* Register R0 register */
DEF_16BIT_REG_AT(RO,0x1908);
/* Register R0 register (MSB) */
DEF_8BIT_REG_AT(ROM,0x1908);
/* Register R0 register (LSB) */
DEF_8BIT_REG_AT(ROL,0x1909);

/* Register R1 register */
DEF_16BIT_REG_AT(R1,0x190a);
/* Register R1 register (MSB) */
DEF_8BIT_REG_AT(R1M,0x190a);
/* Register R1 register (LSB) */
DEF_8BIT_REG_AT(R1L,0x190b);

/* Register R2 register */
DEF_16BIT_REG_AT(R2,0x190c);
/* Register R2 register (MSB) */
DEF_8BIT_REG_AT(R2M,0x190c);
/* Register R2 register (LSB) */
DEF_8BIT_REG_AT(R2L,0x190d);

/* Register R3 register */
DEF_16BIT_REG_AT(R3,0x190e);
/* Register R3 register (MSB) */
DEF_8BIT_REG_AT(R3M,0x190e);
/* Register R3 register (LSB) */
DEF_8BIT_REG_AT(R3L,0x190f);

/* Data memory Pointer 0 register */
DEF_16BIT_REG_AT(DP0,0x1910);
#define DP0_DP0M8	8		/* Data memory Pointer 0 register (MSB) */
#define DP0_DP0M8_OR	(1 << DP0_DP0M8)
#define DP0_DP0M9	9		/* Data memory Pointer 0 register (MSB) */
#define DP0_DP0M9_OR	(1 << DP0_DP0M9)
#define DP0_DP0M10	10		/* Data memory Pointer 0 register (MSB) */
#define DP0_DP0M10_OR	(1 << DP0_DP0M10)
#define DP0_DP0M11	11		/* Data memory Pointer 0 register (MSB) */
#define DP0_DP0M11_OR	(1 << DP0_DP0M11)
#define DP0_DP0M_OR	((1 << DP0_DP0M8)|(1 << DP0_DP0M9)\
		|(1 << DP0_DP0M10)|(1 << DP0_DP0M11))
#define DP0_DP0L0	0		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L0_OR	(1 << DP0_DP0L0)
#define DP0_DP0L1	1		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L1_OR	(1 << DP0_DP0L1)
#define DP0_DP0L2	2		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L2_OR	(1 << DP0_DP0L2)
#define DP0_DP0L3	3		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L3_OR	(1 << DP0_DP0L3)
#define DP0_DP0L4	4		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L4_OR	(1 << DP0_DP0L4)
#define DP0_DP0L5	5		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L5_OR	(1 << DP0_DP0L5)
#define DP0_DP0L6	6		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L6_OR	(1 << DP0_DP0L6)
#define DP0_DP0L7	7		/* Data memory Pointer 0 register (LSB) */
#define DP0_DP0L7_OR	(1 << DP0_DP0L7)
#define DP0_DP0L_OR	((1 << DP0_DP0L0)|(1 << DP0_DP0L1)\
		|(1 << DP0_DP0L2)|(1 << DP0_DP0L3)|(1 << DP0_DP0L4)|(1 << DP0_DP0L5)\
		|(1 << DP0_DP0L6)|(1 << DP0_DP0L7))

/* Data memory Pointer 1 register */
DEF_16BIT_REG_AT(DP1,0x1912);
#define DP1_DP1M8	8		/* Data memory Pointer 1 register (MSB) */
#define DP1_DP1M8_OR	(1 << DP1_DP1M8)
#define DP1_DP1M9	9		/* Data memory Pointer 1 register (MSB) */
#define DP1_DP1M9_OR	(1 << DP1_DP1M9)
#define DP1_DP1M10	10		/* Data memory Pointer 1 register (MSB) */
#define DP1_DP1M10_OR	(1 << DP1_DP1M10)
#define DP1_DP1M11	11		/* Data memory Pointer 1 register (MSB) */
#define DP1_DP1M11_OR	(1 << DP1_DP1M11)
#define DP1_DP1M_OR	((1 << DP1_DP1M8)|(1 << DP1_DP1M9)\
		|(1 << DP1_DP1M10)|(1 << DP1_DP1M11))
#define DP1_DP1L0	0		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L0_OR	(1 << DP1_DP1L0)
#define DP1_DP1L1	1		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L1_OR	(1 << DP1_DP1L1)
#define DP1_DP1L2	2		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L2_OR	(1 << DP1_DP1L2)
#define DP1_DP1L3	3		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L3_OR	(1 << DP1_DP1L3)
#define DP1_DP1L4	4		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L4_OR	(1 << DP1_DP1L4)
#define DP1_DP1L5	5		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L5_OR	(1 << DP1_DP1L5)
#define DP1_DP1L6	6		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L6_OR	(1 << DP1_DP1L6)
#define DP1_DP1L7	7		/* Data memory Pointer 1 register (LSB) */
#define DP1_DP1L7_OR	(1 << DP1_DP1L7)
#define DP1_DP1L_OR	((1 << DP1_DP1L0)|(1 << DP1_DP1L1)\
		|(1 << DP1_DP1L2)|(1 << DP1_DP1L3)|(1 << DP1_DP1L4)|(1 << DP1_DP1L5)\
		|(1 << DP1_DP1L6)|(1 << DP1_DP1L7))

/* Data memory Pointer 2 register */
DEF_16BIT_REG_AT(DP2,0x1914);
#define DP2_DP2M8	8		/* Data memory Pointer 2 register (MSB) */
#define DP2_DP2M8_OR	(1 << DP2_DP2M8)
#define DP2_DP2M9	9		/* Data memory Pointer 2 register (MSB) */
#define DP2_DP2M9_OR	(1 << DP2_DP2M9)
#define DP2_DP2M10	10		/* Data memory Pointer 2 register (MSB) */
#define DP2_DP2M10_OR	(1 << DP2_DP2M10)
#define DP2_DP2M11	11		/* Data memory Pointer 2 register (MSB) */
#define DP2_DP2M11_OR	(1 << DP2_DP2M11)
#define DP2_DP2M_OR	((1 << DP2_DP2M8)|(1 << DP2_DP2M9)\
		|(1 << DP2_DP2M10)|(1 << DP2_DP2M11))
#define DP2_DP2L0	0		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L0_OR	(1 << DP2_DP2L0)
#define DP2_DP2L1	1		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L1_OR	(1 << DP2_DP2L1)
#define DP2_DP2L2	2		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L2_OR	(1 << DP2_DP2L2)
#define DP2_DP2L3	3		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L3_OR	(1 << DP2_DP2L3)
#define DP2_DP2L4	4		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L4_OR	(1 << DP2_DP2L4)
#define DP2_DP2L5	5		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L5_OR	(1 << DP2_DP2L5)
#define DP2_DP2L6	6		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L6_OR	(1 << DP2_DP2L6)
#define DP2_DP2L7	7		/* Data memory Pointer 2 register (LSB) */
#define DP2_DP2L7_OR	(1 << DP2_DP2L7)
#define DP2_DP2L_OR	((1 << DP2_DP2L0)|(1 << DP2_DP2L1)\
		|(1 << DP2_DP2L2)|(1 << DP2_DP2L3)|(1 << DP2_DP2L4)|(1 << DP2_DP2L5)\
		|(1 << DP2_DP2L6)|(1 << DP2_DP2L7))

/* Data memory Pointer 3 register */
DEF_16BIT_REG_AT(DP3,0x1916);
#define DP3_DP3M8	8		/* Data memory Pointer 3 register (MSB) */
#define DP3_DP3M8_OR	(1 << DP3_DP3M8)
#define DP3_DP3M9	9		/* Data memory Pointer 3 register (MSB) */
#define DP3_DP3M9_OR	(1 << DP3_DP3M9)
#define DP3_DP3M10	10		/* Data memory Pointer 3 register (MSB) */
#define DP3_DP3M10_OR	(1 << DP3_DP3M10)
#define DP3_DP3M11	11		/* Data memory Pointer 3 register (MSB) */
#define DP3_DP3M11_OR	(1 << DP3_DP3M11)
#define DP3_DP3M_OR	((1 << DP3_DP3M8)|(1 << DP3_DP3M9)\
		|(1 << DP3_DP3M10)|(1 << DP3_DP3M11))
#define DP3_DP3L0	0		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L0_OR	(1 << DP3_DP3L0)
#define DP3_DP3L1	1		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L1_OR	(1 << DP3_DP3L1)
#define DP3_DP3L2	2		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L2_OR	(1 << DP3_DP3L2)
#define DP3_DP3L3	3		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L3_OR	(1 << DP3_DP3L3)
#define DP3_DP3L4	4		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L4_OR	(1 << DP3_DP3L4)
#define DP3_DP3L5	5		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L5_OR	(1 << DP3_DP3L5)
#define DP3_DP3L6	6		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L6_OR	(1 << DP3_DP3L6)
#define DP3_DP3L7	7		/* Data memory Pointer 3 register (LSB) */
#define DP3_DP3L7_OR	(1 << DP3_DP3L7)
#define DP3_DP3L_OR	((1 << DP3_DP3L0)|(1 << DP3_DP3L1)\
		|(1 << DP3_DP3L2)|(1 << DP3_DP3L3)|(1 << DP3_DP3L4)|(1 << DP3_DP3L5)\
		|(1 << DP3_DP3L6)|(1 << DP3_DP3L7))

/* Port 1 Data Register Output */
DEF_16BIT_REG_AT(P1DR0,0x1918);
/* Port 1 Data Register Output (MSB) */
DEF_8BIT_REG_AT(P1DR0M,0x1918);
/* Port 1 Data Register Output (LSB) */
DEF_8BIT_REG_AT(P1DR0L,0x1919);

/* Port 1 Data Register Input */
DEF_16BIT_REG_AT(P1DRI,0x191a);
/* Port 1 Data Register Input (MSB) */
DEF_8BIT_REG_AT(P1DRIM,0x191a);
/* Port 1 Data Register Input (LSB) */
DEF_8BIT_REG_AT(P1DRIL,0x191b);

/* Port 2 Data Direction Register */
DEF_16BIT_REG_AT(P1DDR,0x191c);
/* Port 2 Data Direction Register (MSB) */
DEF_8BIT_REG_AT(P1DDRM,0x191c);
/* Port 2 Data Direction Register (LSB) */
DEF_8BIT_REG_AT(P1DDRL,0x191d);

/* Port 2 Data Register Output */
DEF_16BIT_REG_AT(P2DRO,0x191e);
/* Port 2 Data Register Output (MSB) */
DEF_8BIT_REG_AT(P2DROM,0x191e);
/* Port 2 Data Register Output (LSB) */
DEF_8BIT_REG_AT(P2DROL,0x191f);

/* Port 2 Data Register Input */
DEF_16BIT_REG_AT(P2DRI,0x1920);
/* Port 2 Data Register Input (MSB) */
DEF_8BIT_REG_AT(P2DRIM,0x1920);
/* Port 2 Data Register Input (LSB) */
DEF_8BIT_REG_AT(P2DRIL,0x1921);

/* Port 2 Data Direction Register */
DEF_16BIT_REG_AT(P2DDR,0x1922);
/* Port 2 Data Direction Register (MSB) */
DEF_8BIT_REG_AT(P2DDRM,0x1922);
/* Port 2 Data Direction Register (LSB) */
DEF_8BIT_REG_AT(P2DDRL,0x1923);

/* VCI Control register */
DEF_16BIT_REG_AT(VCR,0x1924);
#define VCR_VCIEN	0		/* VCI Interface enable */
#define VCR_VCIEN_OR	(1 << VCR_VCIEN)
#define VCR_BM	1		/* Burst Mode */
#define VCR_BM_OR	(1 << VCR_BM)
#define VCR__8BM	2		/* 8-Bit Mode */
#define VCR__8BM_OR	(1 << VCR__8BM)
#define VCR_NP0	4		/* Number of Packets */
#define VCR_NP0_OR	(1 << VCR_NP0)
#define VCR_NP1	5		/* Number of Packets */
#define VCR_NP1_OR	(1 << VCR_NP1)
#define VCR_NP2	6		/* Number of Packets */
#define VCR_NP2_OR	(1 << VCR_NP2)
#define VCR_NP3	7		/* Number of Packets */
#define VCR_NP3_OR	(1 << VCR_NP3)
#define VCR_NP_OR	((1 << VCR_NP0)|(1 << VCR_NP1)|(1 << VCR_NP2)\
		|(1 << VCR_NP3))

/* VCI Status register */
DEF_16BIT_REG_AT(VSR,0x1926);
#define VSR_FE	0		/* FIFO Empty */
#define VSR_FE_OR	(1 << VSR_FE)
#define VSR_FF	1		/* FIFO Full */
#define VSR_FF_OR	(1 << VSR_FF)
#define VSR_CP	2		/* Communication in Progress */
#define VSR_CP_OR	(1 << VSR_CP)
#define VSR_LWR	3		/* Last Word Read */
#define VSR_LWR_OR	(1 << VSR_LWR)
#define VSR_UDRI	4		/* USB DMA Request In */
#define VSR_UDRI_OR	(1 << VSR_UDRI)
#define VSR_UDRO	5		/* USB DMA Request Out */
#define VSR_UDRO_OR	(1 << VSR_UDRO)

/* VCI Fifo Data register */
DEF_16BIT_REG_AT(VFDR,0x1928);
/* VCI Fifo Data register (MSB) */
DEF_8BIT_REG_AT(VFDRM,0x1928);
/* VCI Fifo Data register (LSB) */
DEF_8BIT_REG_AT(VFDRL,0x1929);

/* VCI Target Address Register */
DEF_16BIT_REG_AT(VTAR,0x192a);
#define VTAR_TA0	0		/* Target Address */
#define VTAR_TA0_OR	(1 << VTAR_TA0)
#define VTAR_TA1	1		/* Target Address */
#define VTAR_TA1_OR	(1 << VTAR_TA1)
#define VTAR_TA2	2		/* Target Address */
#define VTAR_TA2_OR	(1 << VTAR_TA2)
#define VTAR_TA3	3		/* Target Address */
#define VTAR_TA3_OR	(1 << VTAR_TA3)
#define VTAR_TA4	4		/* Target Address */
#define VTAR_TA4_OR	(1 << VTAR_TA4)
#define VTAR_TA5	5		/* Target Address */
#define VTAR_TA5_OR	(1 << VTAR_TA5)
#define VTAR_TA_OR	((1 << VTAR_TA0)|(1 << VTAR_TA1)\
		|(1 << VTAR_TA2)|(1 << VTAR_TA3)|(1 << VTAR_TA4)|(1 << VTAR_TA5))

/* Parallel IF Number of Data Register */
DEF_16BIT_REG_AT(PNDR,0x192c);
/* Parallel IF Number of Data Register (MSB) */
DEF_8BIT_REG_AT(PNDRM,0x192c);
/* Parallel IF Number of Data Register (LSB) */
DEF_8BIT_REG_AT(PNDRL,0x192d);

/* Parallel IF Fifo Data Register */
DEF_16BIT_REG_AT(PFDR,0x192e);
/* Parallel IF Fifo Data Register (MSB) */
DEF_8BIT_REG_AT(PFDRM,0x192e);
/* Parallel IF Fifo Data Register (LSB) */
DEF_8BIT_REG_AT(PFDRL,0x192f);

/* Parallel IF Control Register 1 */
DEF_16BIT_REG_AT(PCR1,0x1930);
/* Parallel IF Control Register 1 (MSB) */
DEF_8BIT_REG_AT(PCR1M,0x1930);
/* Parallel IF Control Register 1 (LSB) */
DEF_8BIT_REG_AT(PCR1L,0x1931);

/* Parallel interface Control Register 2 */
DEF_16BIT_REG_AT(PCR2,0x1932);
/* Parallel interface Control Register 2 (MSB) */
DEF_8BIT_REG_AT(PCR2M,0x1932);
/* Parallel interface Control Register 2 (LSB) */
DEF_8BIT_REG_AT(PCR2L,0x1933);

/* Parallel interface Status Register */
DEF_16BIT_REG_AT(PSR,0x1934);
/* Parallel interface Status Register (MSB) */
DEF_8BIT_REG_AT(PSRM,0x1934);
/* Parallel interface Status Register (LSB) */
DEF_8BIT_REG_AT(PSRL,0x1935);

/* ECC Line Parity 1 */
DEF_16BIT_REG_AT(ELP1,0x1936);
/* ECC Line Parity 1 (MSB) */
DEF_8BIT_REG_AT(ELP1M,0x1936);
/* ECC Line Parity 1 (LSB) */
DEF_8BIT_REG_AT(ELP1L,0x1937);

/* ECC Column Parity 1 */
DEF_16BIT_REG_AT(ECP1,0x1938);
/* ECC Column Parity 1 (MSB) */
DEF_8BIT_REG_AT(ECP1M,0x1938);
/* ECC Column Parity 1 (LSB) */
DEF_8BIT_REG_AT(ECP1L,0x1939);

/* ECC Line Parity 2 */
DEF_16BIT_REG_AT(ELP2,0x193a);
/* ECC Line Parity 2 (MSB) */
DEF_8BIT_REG_AT(ELP2M,0x193a);
/* ECC Line Parity 2 (LSB) */
DEF_8BIT_REG_AT(ELP2L,0x193b);

/* ECC Column Parity 2 */
DEF_16BIT_REG_AT(ECP2,0x193c);
/* ECC Column Parity 2 (MSB) */
DEF_8BIT_REG_AT(ECP2M,0x193c);
/* ECC Column Parity 2 (LSB) */
DEF_8BIT_REG_AT(ECP2L,0x193d);

/* Reed-Solomon Control Status Register */
DEF_16BIT_REG_AT(RCSR,0x193e);
/* Reed-Solomon Control Status Register (MSB) */
DEF_8BIT_REG_AT(RCSRM,0x193e);
/* Reed-Solomon Control Status Register (LSB) */
DEF_8BIT_REG_AT(RCSRL,0x193f);

/* Reed-Solomon Decoder FIFO Register */
DEF_16BIT_REG_AT(RDFR,0x1940);
/* Reed-Solomon Decoder FIFO Register (MSB) */
DEF_8BIT_REG_AT(RDFRM,0x1940);
/* Reed-Solomon Decoder FIFO Register (LSB) */
DEF_8BIT_REG_AT(RDFRL,0x1941);

/* Reed-Solomon Encoder FIFO Register */
DEF_16BIT_REG_AT(REFR,0x1942);
/* Reed-Solomon Encoder FIFO Register (MSB) */
DEF_8BIT_REG_AT(REFRM,0x1942);
/* Reed-Solomon Encoder FIFO Register (LSB) */
DEF_8BIT_REG_AT(REFRL,0x1943);

#endif /* __ST7267__ */
