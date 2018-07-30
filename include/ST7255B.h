/* ST7255B.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7255B__
#define __ST7255B__

/* ST7255B */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7255B 1
		#if (MCU_NAME != ST7255B)
		#error "wrong include file ST7255B.h for chosen MCU!"
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

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x20);
#define MISCR_SMS	0		/* Slow Mode Select */
#define MISCR_SMS_OR	(1 << MISCR_SMS)
#define MISCR_PSM0	1		/* Prescaler Slow Mode */
#define MISCR_PSM0_OR	(1 << MISCR_PSM0)
#define MISCR_PSM1	2		/* Prescaler Slow Mode */
#define MISCR_PSM1_OR	(1 << MISCR_PSM1)
#define MISCR_PSM_OR	((1 << MISCR_PSM0)|(1 << MISCR_PSM1))
#define MISCR_PEI0	3		/* EI0/EI1 Polarity Options */
#define MISCR_PEI0_OR	(1 << MISCR_PEI0)
#define MISCR_PEI1	4		/* EI0/EI1 Polarity Options */
#define MISCR_PEI1_OR	(1 << MISCR_PEI1)
#define MISCR_PEI_0_1_OR	((1 << MISCR_PEI0)|(1 << MISCR_PEI1))
#define MISCR_MCO	5		/* Main Clock Out */
#define MISCR_MCO_OR	(1 << MISCR_MCO)
#define MISCR_PEI2	6		/* EI2/EI3 Polarity Options */
#define MISCR_PEI2_OR	(1 << MISCR_PEI2)
#define MISCR_PEI3	7		/* EI2/EI3 Polarity Options */
#define MISCR_PEI3_OR	(1 << MISCR_PEI3)
#define MISCR_PEI_2_3_OR	((1 << MISCR_PEI2)|(1 << MISCR_PEI3))

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x2a);
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

/* Status Register */
DEF_8BIT_REG_AT(WDGSR,0x2b);
#define WDGSR_WDOGF	0		/* WDOGF Flag */
#define WDGSR_WDOGF_OR	(1 << WDGSR_WDOGF)

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

#endif /* __ST7255B__ */
