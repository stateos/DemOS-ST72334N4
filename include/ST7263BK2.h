/* ST7263BK2.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7263BK2__
#define __ST7263BK2__

/* ST7263BK2 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7263BK2 1
		#if (MCU_NAME != ST7263BK2)
		#error "wrong include file ST7263BK2.h for chosen MCU!"
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

/* Port B */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PBDR,0x02);

/* Data Direction Register */
DEF_8BIT_REG_AT(PBDDR,0x03);

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x04);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x05);

/* Interrupt Register */
/*****************************************************************/

/* Interrupt Register */
DEF_8BIT_REG_AT(ITRFRE,0x08);
#define ITRFRE_PA4	0		/* Rising Edge */
#define ITRFRE_PA4_OR	(1 << ITRFRE_PA4)
#define ITRFRE_PA5	1		/* Rising Edge */
#define ITRFRE_PA5_OR	(1 << ITRFRE_PA5)
#define ITRFRE_PA6	2		/* Falling Edge */
#define ITRFRE_PA6_OR	(1 << ITRFRE_PA6)
#define ITRFRE_PA7	3		/* Falling Edge */
#define ITRFRE_PA7_OR	(1 << ITRFRE_PA7)
#define ITRFRE_PB4	4		/* Rising Edge */
#define ITRFRE_PB4_OR	(1 << ITRFRE_PB4)
#define ITRFRE_PB5	5		/* Rising Edge */
#define ITRFRE_PB5_OR	(1 << ITRFRE_PB5)
#define ITRFRE_PB6	6		/* Falling Edge */
#define ITRFRE_PB6_OR	(1 << ITRFRE_PB6)
#define ITRFRE_PB7	7		/* Falling Edge */
#define ITRFRE_PB7_OR	(1 << ITRFRE_PB7)

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x09);
#define MISCR_SMS	2		/* Slow Mode Select */
#define MISCR_SMS_OR	(1 << MISCR_SMS)
#define MISCR_USBOE	1		/* USB output enable */
#define MISCR_USBOE_OR	(1 << MISCR_USBOE)
#define MISCR_MCO	0		/* Main Clock Out */
#define MISCR_MCO_OR	(1 << MISCR_MCO)

/* 8-Bit A/D Converter (ADC) */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(ADCDR,0x0a);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x0b);
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

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x0c);
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

/* 16-Bit Timer */
/*****************************************************************/

/* Control Register 2 */
DEF_8BIT_REG_AT(TCR2,0x11);
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
DEF_8BIT_REG_AT(TCR1,0x12);
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

/* Status Register */
DEF_8BIT_REG_AT(TSR,0x13);
#define TSR_OCF2	3		/* Output Compare Flag 2 */
#define TSR_OCF2_OR	(1 << TSR_OCF2)
#define TSR_ICF2	4		/* Input Capture Flag 2 */
#define TSR_ICF2_OR	(1 << TSR_ICF2)
#define TSR_TOF	5		/* Timer Overflow */
#define TSR_TOF_OR	(1 << TSR_TOF)
#define TSR_OCF1	6		/* Output Compare Flag 1 */
#define TSR_OCF1_OR	(1 << TSR_OCF1)
#define TSR_ICF1	7		/* Input Capture Flag 1 */
#define TSR_ICF1_OR	(1 << TSR_ICF1)

/* Input Capture 1 Register */
DEF_16BIT_REG_AT(TIC1R,0x14);
/* Input Capture 1 High Register */
DEF_8BIT_REG_AT(TIC1HR,0x14);
/* Input Capture 1 Low Register */
DEF_8BIT_REG_AT(TIC1LR,0x15);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TOC1R,0x16);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TOC1HR,0x16);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TOC1LR,0x17);

/* Counter Register */
DEF_16BIT_REG_AT(TCR,0x18);
/* Counter High Register */
DEF_8BIT_REG_AT(TCHR,0x18);
/* Counter Low Register */
DEF_8BIT_REG_AT(TCLR,0x19);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TACR,0x1a);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x1a);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x1b);

/* Input Capture 2 Register */
DEF_16BIT_REG_AT(TIC2R,0x1c);
/* Input Capture 2 High Register */
DEF_8BIT_REG_AT(TIC2HR,0x1c);
/* Input Capture 2 Low Register */
DEF_8BIT_REG_AT(TIC2LR,0x1d);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TOC2R,0x1e);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TOC2HR,0x1e);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TOC2LR,0x1f);

/* Serial Communications Interface (SCI) */
/*****************************************************************/

/* Status Register */
DEF_8BIT_REG_AT(SCISR,0x20);
#define SCISR_PE	0		/* Parity Error */
#define SCISR_PE_OR	(1 << SCISR_PE)
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
DEF_8BIT_REG_AT(SCIDR,0x21);

/* Baud Rate Register */
DEF_8BIT_REG_AT(SCIBRR,0x22);
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
DEF_8BIT_REG_AT(SCICR1,0x23);
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
#define SCICR1_SCID	5		/* Sci prescaler and outputs enable/disable */
#define SCICR1_SCID_OR	(1 << SCICR1_SCID)
#define SCICR1_T8	6		/* Transmit Data Bit 8 */
#define SCICR1_T8_OR	(1 << SCICR1_T8)
#define SCICR1_R8	7		/* Receive Data Bit 8 */
#define SCICR1_R8_OR	(1 << SCICR1_R8)

/* Control Register 2 */
DEF_8BIT_REG_AT(SCICR2,0x24);
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

/* Universal Serial Bus (USB) */
/*****************************************************************/

/* PID Register */
DEF_8BIT_REG_AT(USBPIDR,0x25);
#define USBPIDR_RXD	1		/* Received data */
#define USBPIDR_RXD_OR	(1 << USBPIDR_RXD)
#define USBPIDR_RX_SEZ	2		/* Received single-ended zero */
#define USBPIDR_RX_SEZ_OR	(1 << USBPIDR_RX_SEZ)
#define USBPIDR_TP2	6		/* Token PID Bits 3 & 2 */
#define USBPIDR_TP2_OR	(1 << USBPIDR_TP2)
#define USBPIDR_TP3	7		/* Token PID Bits 3 & 2 */
#define USBPIDR_TP3_OR	(1 << USBPIDR_TP3)
#define USBPIDR_TP_OR	((1 << USBPIDR_TP2)|(1 << USBPIDR_TP3))

/* DMA Address Register */
DEF_8BIT_REG_AT(USBDMAR,0x26);
#define USBDMAR_DA8	0		/* DMA Address bits 15-8 */
#define USBDMAR_DA8_OR	(1 << USBDMAR_DA8)
#define USBDMAR_DA9	1		/* DMA Address bits 15-8 */
#define USBDMAR_DA9_OR	(1 << USBDMAR_DA9)
#define USBDMAR_DA10	2		/* DMA Address bits 15-8 */
#define USBDMAR_DA10_OR	(1 << USBDMAR_DA10)
#define USBDMAR_DA11	3		/* DMA Address bits 15-8 */
#define USBDMAR_DA11_OR	(1 << USBDMAR_DA11)
#define USBDMAR_DA12	4		/* DMA Address bits 15-8 */
#define USBDMAR_DA12_OR	(1 << USBDMAR_DA12)
#define USBDMAR_DA13	5		/* DMA Address bits 15-8 */
#define USBDMAR_DA13_OR	(1 << USBDMAR_DA13)
#define USBDMAR_DA14	6		/* DMA Address bits 15-8 */
#define USBDMAR_DA14_OR	(1 << USBDMAR_DA14)
#define USBDMAR_DA15	7		/* DMA Address bits 15-8 */
#define USBDMAR_DA15_OR	(1 << USBDMAR_DA15)
#define USBDMAR_DA_OR	((1 << USBDMAR_DA8)|(1 << USBDMAR_DA9)\
		|(1 << USBDMAR_DA10)|(1 << USBDMAR_DA11)|(1 << USBDMAR_DA12)\
		|(1 << USBDMAR_DA13)|(1 << USBDMAR_DA14)|(1 << USBDMAR_DA15))

/* Interrupt/DMA Register */
DEF_8BIT_REG_AT(USBIDR,0x27);
#define USBIDR_CNT0	0		/* Byte count */
#define USBIDR_CNT0_OR	(1 << USBIDR_CNT0)
#define USBIDR_CNT1	1		/* Byte count */
#define USBIDR_CNT1_OR	(1 << USBIDR_CNT1)
#define USBIDR_CNT2	2		/* Byte count */
#define USBIDR_CNT2_OR	(1 << USBIDR_CNT2)
#define USBIDR_CNT3	3		/* Byte count */
#define USBIDR_CNT3_OR	(1 << USBIDR_CNT3)
#define USBIDR_CNT_OR	((1 << USBIDR_CNT0)|(1 << USBIDR_CNT1)\
		|(1 << USBIDR_CNT2)|(1 << USBIDR_CNT3))
#define USBIDR_EP0	4		/* Endpoint number */
#define USBIDR_EP0_OR	(1 << USBIDR_EP0)
#define USBIDR_EP1	5		/* Endpoint number */
#define USBIDR_EP1_OR	(1 << USBIDR_EP1)
#define USBIDR_EP_OR	((1 << USBIDR_EP0)|(1 << USBIDR_EP1))
#define USBIDR_DA6	6		/* DMA Address bits 7-6 */
#define USBIDR_DA6_OR	(1 << USBIDR_DA6)
#define USBIDR_DA7	7		/* DMA Address bits 7-6 */
#define USBIDR_DA7_OR	(1 << USBIDR_DA7)
#define USBIDR_DA_OR	((1 << USBIDR_DA6)|(1 << USBIDR_DA7))

/* Interrupt Status Register */
DEF_8BIT_REG_AT(USBISTR,0x28);
#define USBISTR_SOF	0		/* Start Of Frame */
#define USBISTR_SOF_OR	(1 << USBISTR_SOF)
#define USBISTR_RESET	1		/* USB Reset */
#define USBISTR_RESET_OR	(1 << USBISTR_RESET)
#define USBISTR_ESUSP	2		/* End Suspend Mode */
#define USBISTR_ESUSP_OR	(1 << USBISTR_ESUSP)
#define USBISTR_IOVR	3		/* Interrupt Overrun */
#define USBISTR_IOVR_OR	(1 << USBISTR_IOVR)
#define USBISTR_ERR	4		/* Error Bit */
#define USBISTR_ERR_OR	(1 << USBISTR_ERR)
#define USBISTR_CTR	5		/* Correct Transfer */
#define USBISTR_CTR_OR	(1 << USBISTR_CTR)
#define USBISTR_DOVR	6		/* DMA over/underrun */
#define USBISTR_DOVR_OR	(1 << USBISTR_DOVR)
#define USBISTR_SUSP	7		/* Suspend Mode Request */
#define USBISTR_SUSP_OR	(1 << USBISTR_SUSP)

/* Interrupt Mask Register */
DEF_8BIT_REG_AT(USBIMR,0x29);
#define USBIMR_SOFM	0		/* Mask Start Of Frame */
#define USBIMR_SOFM_OR	(1 << USBIMR_SOFM)
#define USBIMR_RESETM	1		/* Mask USB Reset */
#define USBIMR_RESETM_OR	(1 << USBIMR_RESETM)
#define USBIMR_ESUSPM	2		/* Mask End Suspend Mode */
#define USBIMR_ESUSPM_OR	(1 << USBIMR_ESUSPM)
#define USBIMR_IOVRM	3		/* Mask Interrupt Overrun */
#define USBIMR_IOVRM_OR	(1 << USBIMR_IOVRM)
#define USBIMR_ERRM	4		/* Mask Error */
#define USBIMR_ERRM_OR	(1 << USBIMR_ERRM)
#define USBIMR_CTRM	5		/* Mask Correct Transfer */
#define USBIMR_CTRM_OR	(1 << USBIMR_CTRM)
#define USBIMR_DOVRM	6		/* Mask DMA over/underrun */
#define USBIMR_DOVRM_OR	(1 << USBIMR_DOVRM)
#define USBIMR_SUSPM	7		/* Mask Suspend Mode Request */
#define USBIMR_SUSPM_OR	(1 << USBIMR_SUSPM)

/* Control Register */
DEF_8BIT_REG_AT(USBCTLR,0x2a);
#define USBCTLR_FRES	0		/* Force Reset */
#define USBCTLR_FRES_OR	(1 << USBCTLR_FRES)
#define USBCTLR_FSUSP	1		/* Force Suspend */
#define USBCTLR_FSUSP_OR	(1 << USBCTLR_FSUSP)
#define USBCTLR_PDWN	2		/* Power Down */
#define USBCTLR_PDWN_OR	(1 << USBCTLR_PDWN)
#define USBCTLR_RESUME	3		/* Resume */
#define USBCTLR_RESUME_OR	(1 << USBCTLR_RESUME)

/* Device Address Register */
DEF_8BIT_REG_AT(USBDADDR,0x2b);
#define USBDADDR_ADD0	0		/* Device address 7 bits */
#define USBDADDR_ADD0_OR	(1 << USBDADDR_ADD0)
#define USBDADDR_ADD1	1		/* Device address 7 bits */
#define USBDADDR_ADD1_OR	(1 << USBDADDR_ADD1)
#define USBDADDR_ADD2	2		/* Device address 7 bits */
#define USBDADDR_ADD2_OR	(1 << USBDADDR_ADD2)
#define USBDADDR_ADD3	3		/* Device address 7 bits */
#define USBDADDR_ADD3_OR	(1 << USBDADDR_ADD3)
#define USBDADDR_ADD4	4		/* Device address 7 bits */
#define USBDADDR_ADD4_OR	(1 << USBDADDR_ADD4)
#define USBDADDR_ADD5	5		/* Device address 7 bits */
#define USBDADDR_ADD5_OR	(1 << USBDADDR_ADD5)
#define USBDADDR_ADD6	6		/* Device address 7 bits */
#define USBDADDR_ADD6_OR	(1 << USBDADDR_ADD6)
#define USBDADDR_ADD_OR	((1 << USBDADDR_ADD0)|(1 << USBDADDR_ADD1)\
		|(1 << USBDADDR_ADD2)|(1 << USBDADDR_ADD3)|(1 << USBDADDR_ADD4)\
		|(1 << USBDADDR_ADD5)|(1 << USBDADDR_ADD6))

/* Endpoint 0 Register A */
DEF_8BIT_REG_AT(USBEP0RA,0x2c);
#define USBEP0RA_TBC0	0		/* Transmit byte Count */
#define USBEP0RA_TBC0_OR	(1 << USBEP0RA_TBC0)
#define USBEP0RA_TBC1	1		/* Transmit byte Count */
#define USBEP0RA_TBC1_OR	(1 << USBEP0RA_TBC1)
#define USBEP0RA_TBC2	2		/* Transmit byte Count */
#define USBEP0RA_TBC2_OR	(1 << USBEP0RA_TBC2)
#define USBEP0RA_TBC3	3		/* Transmit byte Count */
#define USBEP0RA_TBC3_OR	(1 << USBEP0RA_TBC3)
#define USBEP0RA_TBC_OR	((1 << USBEP0RA_TBC0)|(1 << USBEP0RA_TBC1)\
		|(1 << USBEP0RA_TBC2)|(1 << USBEP0RA_TBC3))
#define USBEP0RA_STAT_TX0	4		/* Status bits (Transmission) */
#define USBEP0RA_STAT_TX0_OR	(1 << USBEP0RA_STAT_TX0)
#define USBEP0RA_STAT_TX1	5		/* Status bits (Transmission) */
#define USBEP0RA_STAT_TX1_OR	(1 << USBEP0RA_STAT_TX1)
#define USBEP0RA_STAT_TX_OR	((1 << USBEP0RA_STAT_TX0)|(1 << USBEP0RA_STAT_TX1))
#define USBEP0RA_DTOG_TX	6		/* Data Toggle (Transmission) */
#define USBEP0RA_DTOG_TX_OR	(1 << USBEP0RA_DTOG_TX)
#define USBEP0RA_ST_OUT	7		/* Status Out */
#define USBEP0RA_ST_OUT_OR	(1 << USBEP0RA_ST_OUT)

/* Endpoint 0 Register B */
DEF_8BIT_REG_AT(USBEP0RB,0x2d);
#define USBEP0RB_STAT_RX0	4		/* Status bits (Reception) */
#define USBEP0RB_STAT_RX0_OR	(1 << USBEP0RB_STAT_RX0)
#define USBEP0RB_STAT_RX1	5		/* Status bits (Reception) */
#define USBEP0RB_STAT_RX1_OR	(1 << USBEP0RB_STAT_RX1)
#define USBEP0RB_STAT_RX_OR	((1 << USBEP0RB_STAT_RX0)|(1 << USBEP0RB_STAT_RX1))
#define USBEP0RB_DTOG_RX	6		/* Data Toggle (Reception) */
#define USBEP0RB_DTOG_RX_OR	(1 << USBEP0RB_DTOG_RX)

/* Endpoint 1 Register A */
DEF_8BIT_REG_AT(USBEP1RA,0x2e);
#define USBEP1RA_TBC0	0		/* Transmit byte Count */
#define USBEP1RA_TBC0_OR	(1 << USBEP1RA_TBC0)
#define USBEP1RA_TBC1	1		/* Transmit byte Count */
#define USBEP1RA_TBC1_OR	(1 << USBEP1RA_TBC1)
#define USBEP1RA_TBC2	2		/* Transmit byte Count */
#define USBEP1RA_TBC2_OR	(1 << USBEP1RA_TBC2)
#define USBEP1RA_TBC3	3		/* Transmit byte Count */
#define USBEP1RA_TBC3_OR	(1 << USBEP1RA_TBC3)
#define USBEP1RA_TBC_OR	((1 << USBEP1RA_TBC0)|(1 << USBEP1RA_TBC1)\
		|(1 << USBEP1RA_TBC2)|(1 << USBEP1RA_TBC3))
#define USBEP1RA_STAT_TX0	4		/* Status bits (Transmission) */
#define USBEP1RA_STAT_TX0_OR	(1 << USBEP1RA_STAT_TX0)
#define USBEP1RA_STAT_TX1	5		/* Status bits (Transmission) */
#define USBEP1RA_STAT_TX1_OR	(1 << USBEP1RA_STAT_TX1)
#define USBEP1RA_STAT_TX_OR	((1 << USBEP1RA_STAT_TX0)|(1 << USBEP1RA_STAT_TX1))
#define USBEP1RA_DTOG_TX	6		/* Data Toggle (Transmission) */
#define USBEP1RA_DTOG_TX_OR	(1 << USBEP1RA_DTOG_TX)
#define USBEP1RA_ST_OUT	7		/* Status Out */
#define USBEP1RA_ST_OUT_OR	(1 << USBEP1RA_ST_OUT)

/* Endpoint 1 Register B */
DEF_8BIT_REG_AT(USBEP1RB,0x2f);
#define USBEP1RB_EA0	0		/* Endpoint address */
#define USBEP1RB_EA0_OR	(1 << USBEP1RB_EA0)
#define USBEP1RB_EA1	1		/* Endpoint address */
#define USBEP1RB_EA1_OR	(1 << USBEP1RB_EA1)
#define USBEP1RB_EA2	2		/* Endpoint address */
#define USBEP1RB_EA2_OR	(1 << USBEP1RB_EA2)
#define USBEP1RB_EA3	3		/* Endpoint address */
#define USBEP1RB_EA3_OR	(1 << USBEP1RB_EA3)
#define USBEP1RB_EA_OR	((1 << USBEP1RB_EA0)|(1 << USBEP1RB_EA1)\
		|(1 << USBEP1RB_EA2)|(1 << USBEP1RB_EA3))
#define USBEP1RB_STAT_RX0	4		/* Status bits (Reception) */
#define USBEP1RB_STAT_RX0_OR	(1 << USBEP1RB_STAT_RX0)
#define USBEP1RB_STAT_RX1	5		/* Status bits (Reception) */
#define USBEP1RB_STAT_RX1_OR	(1 << USBEP1RB_STAT_RX1)
#define USBEP1RB_STAT_RX_OR	((1 << USBEP1RB_STAT_RX0)|(1 << USBEP1RB_STAT_RX1))
#define USBEP1RB_DTOG_RX	6		/* Data Toggle (Reception) */
#define USBEP1RB_DTOG_RX_OR	(1 << USBEP1RB_DTOG_RX)
#define USBEP1RB_CTRL	7		/* Control */
#define USBEP1RB_CTRL_OR	(1 << USBEP1RB_CTRL)

/* Endpoint 2 Register A */
DEF_8BIT_REG_AT(USBEP2RA,0x30);
#define USBEP2RA_TBC0	0		/* Transmit byte Count */
#define USBEP2RA_TBC0_OR	(1 << USBEP2RA_TBC0)
#define USBEP2RA_TBC1	1		/* Transmit byte Count */
#define USBEP2RA_TBC1_OR	(1 << USBEP2RA_TBC1)
#define USBEP2RA_TBC2	2		/* Transmit byte Count */
#define USBEP2RA_TBC2_OR	(1 << USBEP2RA_TBC2)
#define USBEP2RA_TBC3	3		/* Transmit byte Count */
#define USBEP2RA_TBC3_OR	(1 << USBEP2RA_TBC3)
#define USBEP2RA_TBC_OR	((1 << USBEP2RA_TBC0)|(1 << USBEP2RA_TBC1)\
		|(1 << USBEP2RA_TBC2)|(1 << USBEP2RA_TBC3))
#define USBEP2RA_STAT_TX0	4		/* Status bits (Transmission) */
#define USBEP2RA_STAT_TX0_OR	(1 << USBEP2RA_STAT_TX0)
#define USBEP2RA_STAT_TX1	5		/* Status bits (Transmission) */
#define USBEP2RA_STAT_TX1_OR	(1 << USBEP2RA_STAT_TX1)
#define USBEP2RA_STAT_TX_OR	((1 << USBEP2RA_STAT_TX0)|(1 << USBEP2RA_STAT_TX1))
#define USBEP2RA_DTOG_TX	6		/* Data Toggle (Transmission) */
#define USBEP2RA_DTOG_TX_OR	(1 << USBEP2RA_DTOG_TX)
#define USBEP2RA_ST_OUT	7		/* Status Out */
#define USBEP2RA_ST_OUT_OR	(1 << USBEP2RA_ST_OUT)

/* Endpoint 2 Register B */
DEF_8BIT_REG_AT(USBEP2RB,0x31);
#define USBEP2RB_EA0	0		/* Endpoint address */
#define USBEP2RB_EA0_OR	(1 << USBEP2RB_EA0)
#define USBEP2RB_EA1	1		/* Endpoint address */
#define USBEP2RB_EA1_OR	(1 << USBEP2RB_EA1)
#define USBEP2RB_EA2	2		/* Endpoint address */
#define USBEP2RB_EA2_OR	(1 << USBEP2RB_EA2)
#define USBEP2RB_EA3	3		/* Endpoint address */
#define USBEP2RB_EA3_OR	(1 << USBEP2RB_EA3)
#define USBEP2RB_EA_OR	((1 << USBEP2RB_EA0)|(1 << USBEP2RB_EA1)\
		|(1 << USBEP2RB_EA2)|(1 << USBEP2RB_EA3))
#define USBEP2RB_STAT_RX0	4		/* Status bits (Reception) */
#define USBEP2RB_STAT_RX0_OR	(1 << USBEP2RB_STAT_RX0)
#define USBEP2RB_STAT_RX1	5		/* Status bits (Reception) */
#define USBEP2RB_STAT_RX1_OR	(1 << USBEP2RB_STAT_RX1)
#define USBEP2RB_STAT_RX_OR	((1 << USBEP2RB_STAT_RX0)|(1 << USBEP2RB_STAT_RX1))
#define USBEP2RB_DTOG_RX	6		/* Data Toggle (Reception) */
#define USBEP2RB_DTOG_RX_OR	(1 << USBEP2RB_DTOG_RX)
#define USBEP2RB_CTRL	7		/* Control */
#define USBEP2RB_CTRL_OR	(1 << USBEP2RB_CTRL)

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x37);

#endif /* __ST7263BK2__ */
