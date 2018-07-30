/* ST72774J7.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72774J7__
#define __ST72774J7__

/* ST72774J7 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72774J7 1
		#if (MCU_NAME != ST72774J7)
		#error "wrong include file ST72774J7.h for chosen MCU!"
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

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x06);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x07);

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x08);
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

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISCR,0x09);
#define MISCR_ITAITE	0		/* ITA Interrupt */
#define MISCR_ITAITE_OR	(1 << MISCR_ITAITE)
#define MISCR_ITBITE	1		/* ITB Interrupt */
#define MISCR_ITBITE_OR	(1 << MISCR_ITBITE)
#define MISCR_ITALAT	2		/* Falling Edge Detector Latch */
#define MISCR_ITALAT_OR	(1 << MISCR_ITALAT)
#define MISCR_ITBLAT	3		/* Falling Edge Detector Latch */
#define MISCR_ITBLAT_OR	(1 << MISCR_ITBLAT)
#define MISCR_FAST	4		/* Fast Mode */
#define MISCR_FAST_OR	(1 << MISCR_FAST)
#define MISCR_HSYNCDIVEN	5		/* HSYNCDIV */
#define MISCR_HSYNCDIVEN_OR	(1 << MISCR_HSYNCDIVEN)
#define MISCR_FLY_SYN	6		/* Flyback or synchro switch */
#define MISCR_FLY_SYN_OR	(1 << MISCR_FLY_SYN)

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
#define ADCCSR_CH3	3		/* Channel Selection */
#define ADCCSR_CH3_OR	(1 << ADCCSR_CH3)
#define ADCCSR_CH_OR	((1 << ADCCSR_CH0)|(1 << ADCCSR_CH1)\
		|(1 << ADCCSR_CH2)|(1 << ADCCSR_CH3))
#define ADCCSR_ADON	5		/* A/D Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* DDC1/2B Interface */
/*****************************************************************/

/* DDC1/2B Control Register */
DEF_8BIT_REG_AT(DCR,0x0c);
#define DCR_HWPE	0		/* Peripheral Enable */
#define DCR_HWPE_OR	(1 << DCR_HWPE)
#define DCR_WP	1		/* Write Protect */
#define DCR_WP_OR	(1 << DCR_WP)
#define DCR_CF0	2		/* Configuration bits */
#define DCR_CF0_OR	(1 << DCR_CF0)
#define DCR_CF1	3		/* Configuration bits */
#define DCR_CF1_OR	(1 << DCR_CF1)
#define DCR_CF2	6		/* Configuration bits */
#define DCR_CF2_OR	(1 << DCR_CF2)
#define DCR_CF_OR	((1 << DCR_CF0)|(1 << DCR_CF1)|(1 << DCR_CF2))
#define DCR_EDE	4		/* End of Download interrupt Enable */
#define DCR_EDE_OR	(1 << DCR_EDE)
#define DCR_EDF	5		/* End of Download interrupt Flag */
#define DCR_EDF_OR	(1 << DCR_EDF)

/* DDC1/2B Address Pointer High Register */
DEF_8BIT_REG_AT(AHR,0x0d);

/* Timing Measurement Unit(TMU) */
/*****************************************************************/

/* Control Status Register */
DEF_8BIT_REG_AT(TMUCSR,0x0e);
#define TMUCSR_START	0		/* Start measurement */
#define TMUCSR_START_OR	(1 << TMUCSR_START)
#define TMUCSR_H_V	1		/* Horizontal or Vertical Measurement */
#define TMUCSR_H_V_OR	(1 << TMUCSR_H_V)
#define TMUCSR_T18	2		/* MSB T1 Counter */
#define TMUCSR_T18_OR	(1 << TMUCSR_T18)
#define TMUCSR_T19	3		/* MSB T1 Counter */
#define TMUCSR_T19_OR	(1 << TMUCSR_T19)
#define TMUCSR_T110	4		/* MSB T1 Counter */
#define TMUCSR_T110_OR	(1 << TMUCSR_T110)
#define TMUCSR_T1_OR	((1 << TMUCSR_T18)|(1 << TMUCSR_T19)\
		|(1 << TMUCSR_T110))
#define TMUCSR_T28	5		/* MSB T2 Counter */
#define TMUCSR_T28_OR	(1 << TMUCSR_T28)
#define TMUCSR_T29	6		/* MSB T2 Counter */
#define TMUCSR_T29_OR	(1 << TMUCSR_T29)
#define TMUCSR_T210	7		/* MSB T2 Counter */
#define TMUCSR_T210_OR	(1 << TMUCSR_T210)
#define TMUCSR_T2_OR	((1 << TMUCSR_T28)|(1 << TMUCSR_T29)\
		|(1 << TMUCSR_T210))

/* T1 Counter Register */
DEF_8BIT_REG_AT(TMUT1CR,0x0f);

/* T2 Counter Register */
DEF_8BIT_REG_AT(TMUT2CR,0x10);

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

/* D/A Converter (DAC) with PWM outputs */
/*****************************************************************/

/* Channel 1 PWM Register */
DEF_8BIT_REG_AT(PWM1,0x32);
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

/* Channel 2+1 BRM Register */
DEF_8BIT_REG_AT(BRM21,0x33);
#define BRM21_B4	4		/* BRM Bits (Channel 2) */
#define BRM21_B4_OR	(1 << BRM21_B4)
#define BRM21_B5	5		/* BRM Bits (Channel 2) */
#define BRM21_B5_OR	(1 << BRM21_B5)
#define BRM21_B6	6		/* BRM Bits (Channel 2) */
#define BRM21_B6_OR	(1 << BRM21_B6)
#define BRM21_B7	7		/* BRM Bits (Channel 2) */
#define BRM21_B7_OR	(1 << BRM21_B7)
#define BRM21_B_4_7_OR	((1 << BRM21_B4)|(1 << BRM21_B5)\
		|(1 << BRM21_B6)|(1 << BRM21_B7))
#define BRM21_B0	0		/* BRM Bits (Channel 1) */
#define BRM21_B0_OR	(1 << BRM21_B0)
#define BRM21_B1	1		/* BRM Bits (Channel 1) */
#define BRM21_B1_OR	(1 << BRM21_B1)
#define BRM21_B2	2		/* BRM Bits (Channel 1) */
#define BRM21_B2_OR	(1 << BRM21_B2)
#define BRM21_B3	3		/* BRM Bits (Channel 1) */
#define BRM21_B3_OR	(1 << BRM21_B3)
#define BRM21_B_0_3_OR	((1 << BRM21_B0)|(1 << BRM21_B1)\
		|(1 << BRM21_B2)|(1 << BRM21_B3))

/* Channel 2 PWM Register */
DEF_8BIT_REG_AT(PWM2,0x34);
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

/* Channel 3 PWM Register */
DEF_8BIT_REG_AT(PWM3,0x35);
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

/* Channel 4+3 BRM Register */
DEF_8BIT_REG_AT(BRM43,0x36);
#define BRM43_B4	4		/* BRM Bits (Channel 4) */
#define BRM43_B4_OR	(1 << BRM43_B4)
#define BRM43_B5	5		/* BRM Bits (Channel 4) */
#define BRM43_B5_OR	(1 << BRM43_B5)
#define BRM43_B6	6		/* BRM Bits (Channel 4) */
#define BRM43_B6_OR	(1 << BRM43_B6)
#define BRM43_B7	7		/* BRM Bits (Channel 4) */
#define BRM43_B7_OR	(1 << BRM43_B7)
#define BRM43_B_4_7_OR	((1 << BRM43_B4)|(1 << BRM43_B5)\
		|(1 << BRM43_B6)|(1 << BRM43_B7))
#define BRM43_B0	0		/* BRM Bits (Channel 3) */
#define BRM43_B0_OR	(1 << BRM43_B0)
#define BRM43_B1	1		/* BRM Bits (Channel 3) */
#define BRM43_B1_OR	(1 << BRM43_B1)
#define BRM43_B2	2		/* BRM Bits (Channel 3) */
#define BRM43_B2_OR	(1 << BRM43_B2)
#define BRM43_B3	3		/* BRM Bits (Channel 3) */
#define BRM43_B3_OR	(1 << BRM43_B3)
#define BRM43_B_0_3_OR	((1 << BRM43_B0)|(1 << BRM43_B1)\
		|(1 << BRM43_B2)|(1 << BRM43_B3))

/* Channel 4 PWM Register */
DEF_8BIT_REG_AT(PWM4,0x37);
#define PWM4_POL	6		/* Polarity Bit */
#define PWM4_POL_OR	(1 << PWM4_POL)
#define PWM4_P0	0		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P0_OR	(1 << PWM4_P0)
#define PWM4_P1	1		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P1_OR	(1 << PWM4_P1)
#define PWM4_P2	2		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P2_OR	(1 << PWM4_P2)
#define PWM4_P3	3		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P3_OR	(1 << PWM4_P3)
#define PWM4_P4	4		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P4_OR	(1 << PWM4_P4)
#define PWM4_P5	5		/* Pulse Binary Weight for Channel 4 */
#define PWM4_P5_OR	(1 << PWM4_P5)
#define PWM4_P_OR	((1 << PWM4_P0)|(1 << PWM4_P1)|(1 << PWM4_P2)\
		|(1 << PWM4_P3)|(1 << PWM4_P4)|(1 << PWM4_P5))

/* Channel 5 PWM Register */
DEF_8BIT_REG_AT(PWM5,0x38);
#define PWM5_POL	6		/* Polarity Bit */
#define PWM5_POL_OR	(1 << PWM5_POL)
#define PWM5_P0	0		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P0_OR	(1 << PWM5_P0)
#define PWM5_P1	1		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P1_OR	(1 << PWM5_P1)
#define PWM5_P2	2		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P2_OR	(1 << PWM5_P2)
#define PWM5_P3	3		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P3_OR	(1 << PWM5_P3)
#define PWM5_P4	4		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P4_OR	(1 << PWM5_P4)
#define PWM5_P5	5		/* Pulse Binary Weight for Channel 5 */
#define PWM5_P5_OR	(1 << PWM5_P5)
#define PWM5_P_OR	((1 << PWM5_P0)|(1 << PWM5_P1)|(1 << PWM5_P2)\
		|(1 << PWM5_P3)|(1 << PWM5_P4)|(1 << PWM5_P5))

/* Channel 5+6 BRM Register */
DEF_8BIT_REG_AT(BRM65,0x39);
#define BRM65_B4	4		/* BRM Bits (Channel 6) */
#define BRM65_B4_OR	(1 << BRM65_B4)
#define BRM65_B5	5		/* BRM Bits (Channel 6) */
#define BRM65_B5_OR	(1 << BRM65_B5)
#define BRM65_B6	6		/* BRM Bits (Channel 6) */
#define BRM65_B6_OR	(1 << BRM65_B6)
#define BRM65_B7	7		/* BRM Bits (Channel 6) */
#define BRM65_B7_OR	(1 << BRM65_B7)
#define BRM65_B_4_7_OR	((1 << BRM65_B4)|(1 << BRM65_B5)\
		|(1 << BRM65_B6)|(1 << BRM65_B7))
#define BRM65_B0	0		/* BRM Bits (Channel 5) */
#define BRM65_B0_OR	(1 << BRM65_B0)
#define BRM65_B1	1		/* BRM Bits (Channel 5) */
#define BRM65_B1_OR	(1 << BRM65_B1)
#define BRM65_B2	2		/* BRM Bits (Channel 5) */
#define BRM65_B2_OR	(1 << BRM65_B2)
#define BRM65_B3	3		/* BRM Bits (Channel 5) */
#define BRM65_B3_OR	(1 << BRM65_B3)
#define BRM65_B_0_3_OR	((1 << BRM65_B0)|(1 << BRM65_B1)\
		|(1 << BRM65_B2)|(1 << BRM65_B3))

/* Channel 6 PWM Register */
DEF_8BIT_REG_AT(PWM6,0x3a);
#define PWM6_POL	6		/* Polarity Bit */
#define PWM6_POL_OR	(1 << PWM6_POL)
#define PWM6_P0	0		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P0_OR	(1 << PWM6_P0)
#define PWM6_P1	1		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P1_OR	(1 << PWM6_P1)
#define PWM6_P2	2		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P2_OR	(1 << PWM6_P2)
#define PWM6_P3	3		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P3_OR	(1 << PWM6_P3)
#define PWM6_P4	4		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P4_OR	(1 << PWM6_P4)
#define PWM6_P5	5		/* Pulse Binary Weight for Channel 6 */
#define PWM6_P5_OR	(1 << PWM6_P5)
#define PWM6_P_OR	((1 << PWM6_P0)|(1 << PWM6_P1)|(1 << PWM6_P2)\
		|(1 << PWM6_P3)|(1 << PWM6_P4)|(1 << PWM6_P5))

/* Channel 7 PWM Register */
DEF_8BIT_REG_AT(PWM7,0x3b);
#define PWM7_POL	6		/* Polarity Bit */
#define PWM7_POL_OR	(1 << PWM7_POL)
#define PWM7_P0	0		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P0_OR	(1 << PWM7_P0)
#define PWM7_P1	1		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P1_OR	(1 << PWM7_P1)
#define PWM7_P2	2		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P2_OR	(1 << PWM7_P2)
#define PWM7_P3	3		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P3_OR	(1 << PWM7_P3)
#define PWM7_P4	4		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P4_OR	(1 << PWM7_P4)
#define PWM7_P5	5		/* Pulse Binary Weight for Channel 7 */
#define PWM7_P5_OR	(1 << PWM7_P5)
#define PWM7_P_OR	((1 << PWM7_P0)|(1 << PWM7_P1)|(1 << PWM7_P2)\
		|(1 << PWM7_P3)|(1 << PWM7_P4)|(1 << PWM7_P5))

/* Channel 7+8 BRM Register */
DEF_8BIT_REG_AT(BRM87,0x3c);
#define BRM87_B4	4		/* BRM Bits (Channel 8) */
#define BRM87_B4_OR	(1 << BRM87_B4)
#define BRM87_B5	5		/* BRM Bits (Channel 8) */
#define BRM87_B5_OR	(1 << BRM87_B5)
#define BRM87_B6	6		/* BRM Bits (Channel 8) */
#define BRM87_B6_OR	(1 << BRM87_B6)
#define BRM87_B7	7		/* BRM Bits (Channel 8) */
#define BRM87_B7_OR	(1 << BRM87_B7)
#define BRM87_B_4_7_OR	((1 << BRM87_B4)|(1 << BRM87_B5)\
		|(1 << BRM87_B6)|(1 << BRM87_B7))
#define BRM87_B0	0		/* BRM Bits (Channel 7) */
#define BRM87_B0_OR	(1 << BRM87_B0)
#define BRM87_B1	1		/* BRM Bits (Channel 7) */
#define BRM87_B1_OR	(1 << BRM87_B1)
#define BRM87_B2	2		/* BRM Bits (Channel 7) */
#define BRM87_B2_OR	(1 << BRM87_B2)
#define BRM87_B3	3		/* BRM Bits (Channel 7) */
#define BRM87_B3_OR	(1 << BRM87_B3)
#define BRM87_B_0_3_OR	((1 << BRM87_B0)|(1 << BRM87_B1)\
		|(1 << BRM87_B2)|(1 << BRM87_B3))

/* Channel 8 PWM Register */
DEF_8BIT_REG_AT(PWM8,0x3d);
#define PWM8_POL	6		/* Polarity Bit */
#define PWM8_POL_OR	(1 << PWM8_POL)
#define PWM8_P0	0		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P0_OR	(1 << PWM8_P0)
#define PWM8_P1	1		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P1_OR	(1 << PWM8_P1)
#define PWM8_P2	2		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P2_OR	(1 << PWM8_P2)
#define PWM8_P3	3		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P3_OR	(1 << PWM8_P3)
#define PWM8_P4	4		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P4_OR	(1 << PWM8_P4)
#define PWM8_P5	5		/* Pulse Binary Weight for Channel 8 */
#define PWM8_P5_OR	(1 << PWM8_P5)
#define PWM8_P_OR	((1 << PWM8_P0)|(1 << PWM8_P1)|(1 << PWM8_P2)\
		|(1 << PWM8_P3)|(1 << PWM8_P4)|(1 << PWM8_P5))

/* Output Enable Register */
DEF_8BIT_REG_AT(PWMCR,0x3e);

/* SYNC Processor (SYNC) */
/*****************************************************************/

/* CONFIGURATION REGISTER */
DEF_8BIT_REG_AT(CFGR,0x40);
#define CFGR_Q0	0		/* LSB of VGENR */
#define CFGR_Q0_OR	(1 << CFGR_Q0)
#define CFGR_Q1	1		/* LSB of VGENR */
#define CFGR_Q1_OR	(1 << CFGR_Q1)
#define CFGR_Q2	2		/* LSB of VGENR */
#define CFGR_Q2_OR	(1 << CFGR_Q2)
#define CFGR_Q_OR	((1 << CFGR_Q0)|(1 << CFGR_Q1)|(1 << CFGR_Q2))
#define CFGR_VEXT	3		/* VSYNCO pulse */
#define CFGR_VEXT_OR	(1 << CFGR_VEXT)
#define CFGR__2FHINH	4		/* Inhibition of Pre/Post equalization */
#define CFGR__2FHINH_OR	(1 << CFGR__2FHINH)
#define CFGR_VACQ	6		/* Vertical Sync Analyser Mode */
#define CFGR_VACQ_OR	(1 << CFGR_VACQ)
#define CFGR_HACQ	7		/* Horizontal Sync Analyser Mode */
#define CFGR_HACQ_OR	(1 << CFGR_HACQ)

/* MUX CONTROL REGISTER */
DEF_8BIT_REG_AT(MCR,0x41);
#define MCR_VOP	1		/* Vertical Polarity Control */
#define MCR_VOP_OR	(1 << MCR_VOP)
#define MCR_HS0	2		/* Horizontal Signal Selection */
#define MCR_HS0_OR	(1 << MCR_HS0)
#define MCR_HS1	3		/* Horizontal Signal Selection */
#define MCR_HS1_OR	(1 << MCR_HS1)
#define MCR_HS_OR	((1 << MCR_HS0)|(1 << MCR_HS1))
#define MCR_SCI0	4		/* HSYNCI/CSYNCI selection */
#define MCR_SCI0_OR	(1 << MCR_SCI0)
#define MCR_FBSEL	5		/* VSYNCO/HSYNCO or VFBACK/HFBACK analysis */
#define MCR_FBSEL_OR	(1 << MCR_FBSEL)
#define MCR_BP0	6		/* Back Porch Pulse Control */
#define MCR_BP0_OR	(1 << MCR_BP0)
#define MCR_BP1	7		/* Back Porch Pulse Control */
#define MCR_BP1_OR	(1 << MCR_BP1)
#define MCR_BP_OR	((1 << MCR_BP0)|(1 << MCR_BP1))

/* COUNTER CONTROL REGISTER */
DEF_8BIT_REG_AT(CCR,0x42);
#define CCR_CV0	0		/* Counter Captured Value */
#define CCR_CV0_OR	(1 << CCR_CV0)
#define CCR_CV1	1		/* Counter Captured Value */
#define CCR_CV1_OR	(1 << CCR_CV1)
#define CCR_CV2	2		/* Counter Captured Value */
#define CCR_CV2_OR	(1 << CCR_CV2)
#define CCR_CV3	3		/* Counter Captured Value */
#define CCR_CV3_OR	(1 << CCR_CV3)
#define CCR_CV4	4		/* Counter Captured Value */
#define CCR_CV4_OR	(1 << CCR_CV4)
#define CCR_CV_OR	((1 << CCR_CV0)|(1 << CCR_CV1)|(1 << CCR_CV2)\
		|(1 << CCR_CV3)|(1 << CCR_CV4))
#define CCR_LCV0	5		/* VSYNCO Extraction Control */
#define CCR_LCV0_OR	(1 << CCR_LCV0)
#define CCR_LCV1	6		/* VSYNCO Extraction Control */
#define CCR_LCV1_OR	(1 << CCR_LCV1)
#define CCR_LCV_OR	((1 << CCR_LCV0)|(1 << CCR_LCV1))
#define CCR_PSCD	7		/* Prescaler Enable bit */
#define CCR_PSCD_OR	(1 << CCR_PSCD)

/* POLARITY REGISTER */
DEF_8BIT_REG_AT(POLR,0x43);
#define POLR_BLKINV	0		/* Programmable blanking polarity */
#define POLR_BLKINV_OR	(1 << POLR_BLKINV)
#define POLR_CLPINV	1		/* Programmable ClampOut pulse polarity */
#define POLR_CLPINV_OR	(1 << POLR_CLPINV)
#define POLR_VCORDIS	2		/* Extension Disable Signal */
#define POLR_VCORDIS_OR	(1 << POLR_VCORDIS)
#define POLR_HVSEL	3		/* Alternate Sync Input Select */
#define POLR_HVSEL_OR	(1 << POLR_HVSEL)
#define POLR__2FHDET	4		/* Detection of Pre/Post Equalization pulses */
#define POLR__2FHDET_OR	(1 << POLR__2FHDET)
#define POLR_VPOL	5		/* Vertical Sync Polarity */
#define POLR_VPOL_OR	(1 << POLR_VPOL)
#define POLR_SOG	7		/* Sync On Green Window */
#define POLR_SOG_OR	(1 << POLR_SOG)

/* LATCH REGISTER */
DEF_8BIT_REG_AT(LATR,0x44);
#define LATR__2FHLAT	0		/* Equalization Pulses Latch */
#define LATR__2FHLAT_OR	(1 << LATR__2FHLAT)
#define LATR_DWNLAT	1		/* Detection of minimum value of 5 bit up/down counter */
#define LATR_DWNLAT_OR	(1 << LATR_DWNLAT)
#define LATR_UPLAT	2		/* Detection of maximum value of 5 bit up/down counter */
#define LATR_UPLAT_OR	(1 << LATR_UPLAT)
#define LATR_VFLY	3		/* Detection of pulses on VFBACK */
#define LATR_VFLY_OR	(1 << LATR_VFLY)
#define LATR_HFLY	4		/* Detection of pulses on HFBACK */
#define LATR_HFLY_OR	(1 << LATR_HFLY)
#define LATR_VSYN	5		/* Detection of pulses on VSYNCI */
#define LATR_VSYN_OR	(1 << LATR_VSYN)
#define LATR_HSYN	6		/* Detection of pulses on HSYNCI */
#define LATR_HSYN_OR	(1 << LATR_HSYN)
#define LATR_CSYN	7		/* Detection of pulses on CSYNCI */
#define LATR_CSYN_OR	(1 << LATR_CSYN)

/* HORIZONTAL SYNC GENERATOR REGISTER */
DEF_8BIT_REG_AT(HGENR,0x45);

/* VERTICAL SYNC GENERATOR REGISTER */
DEF_8BIT_REG_AT(VGENR,0x46);

/* ENABLE REGISTER */
DEF_8BIT_REG_AT(ENR,0x47);
#define ENR_VSIN1	0		/* VSIN1 pin level */
#define ENR_VSIN1_OR	(1 << ENR_VSIN1)
#define ENR_HSIN1	1		/* HSIN1 pin level */
#define ENR_HSIN1_OR	(1 << ENR_HSIN1)
#define ENR_HINH	2		/* HSYNCO Blanking */
#define ENR_HINH_OR	(1 << ENR_HINH)
#define ENR__2FHEN	3		/* VSYNCO Extension */
#define ENR__2FHEN_OR	(1 << ENR__2FHEN)
#define ENR_HVGEN	4		/* Sync Generation function */
#define ENR_HVGEN_OR	(1 << ENR_HVGEN)
#define ENR_BLKEN	5		/* Blanking Output */
#define ENR_BLKEN_OR	(1 << ENR_BLKEN)
#define ENR_CLMPEN	6		/* Clamping or Moire output enable */
#define ENR_CLMPEN_OR	(1 << ENR_CLMPEN)
#define ENR_SYNOP	7		/* HSYNCO,VSYNCO outputs enable */
#define ENR_SYNOP_OR	(1 << ENR_SYNOP)

/* DDC/CI Interface */
/*****************************************************************/

/* DDC/CI Control Register */
DEF_8BIT_REG_AT(CR,0x50);
#define CR_ITE	0		/* Interrupt Enable */
#define CR_ITE_OR	(1 << CR_ITE)
#define CR_STOP	1		/* Release I2C bus */
#define CR_STOP_OR	(1 << CR_STOP)
#define CR_ACK	2		/* Acknowledge enable */
#define CR_ACK_OR	(1 << CR_ACK)
#define CR_EDDCEN	4		/* Enable Default address detection */
#define CR_EDDCEN_OR	(1 << CR_EDDCEN)
#define CR_PE	5		/* Peripheral Enable */
#define CR_PE_OR	(1 << CR_PE)

/* DDC/CI Status Register 1 */
DEF_8BIT_REG_AT(SR1,0x51);
#define SR1_ADSL	2		/* Address Matched (Slave Mode) */
#define SR1_ADSL_OR	(1 << SR1_ADSL)
#define SR1_BTF	3		/* Byte Transfer Finished */
#define SR1_BTF_OR	(1 << SR1_BTF)
#define SR1_BUSY	4		/* Bus Busy */
#define SR1_BUSY_OR	(1 << SR1_BUSY)
#define SR1_TRA	5		/* Transmitter/Receiver */
#define SR1_TRA_OR	(1 << SR1_TRA)
#define SR1_EVF	7		/* Event Flag */
#define SR1_EVF_OR	(1 << SR1_EVF)

/* DDC/CI Status Register 2 */
DEF_8BIT_REG_AT(SR2,0x52);
#define SR2_EDDCF	0		/* Addressed with default address */
#define SR2_EDDCF_OR	(1 << SR2_EDDCF)
#define SR2_BERR	1		/* Bus Error */
#define SR2_BERR_OR	(1 << SR2_BERR)
#define SR2_STOPF	3		/* Stop Detection */
#define SR2_STOPF_OR	(1 << SR2_STOPF)
#define SR2_AF	4		/* Acknowledge Failure */
#define SR2_AF_OR	(1 << SR2_AF)

/* DDC/CI (7 bits) Slave Address Register */
DEF_8BIT_REG_AT(OAR,0x54);

/* DDC/CI Data Register */
DEF_8BIT_REG_AT(DR,0x56);

/* I2C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(I2CDR,0x59);

/* Clock Control Register */
DEF_8BIT_REG_AT(I2CCCR,0x5c);
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

/* Status Register 2 */
DEF_8BIT_REG_AT(I2CSR2,0x5d);
#define I2CSR2_BERR	1		/* Bus Error */
#define I2CSR2_BERR_OR	(1 << I2CSR2_BERR)
#define I2CSR2_AF	4		/* Acknowledge Failure */
#define I2CSR2_AF_OR	(1 << I2CSR2_AF)

/* Status Register 1 */
DEF_8BIT_REG_AT(I2CSR1,0x5e);
#define I2CSR1_SB	0		/* Start Bit */
#define I2CSR1_SB_OR	(1 << I2CSR1_SB)
#define I2CSR1_M_SL	1		/* Master/Slave Mode */
#define I2CSR1_M_SL_OR	(1 << I2CSR1_M_SL)
#define I2CSR1_BTF	3		/* Byte Transfer */
#define I2CSR1_BTF_OR	(1 << I2CSR1_BTF)
#define I2CSR1_BUSY	4		/* Bus Busy */
#define I2CSR1_BUSY_OR	(1 << I2CSR1_BUSY)
#define I2CSR1_TRA	5		/* Transmitter/Receiver */
#define I2CSR1_TRA_OR	(1 << I2CSR1_TRA)
#define I2CSR1_EVF	7		/* Event Flag */
#define I2CSR1_EVF_OR	(1 << I2CSR1_EVF)

/* Control Register */
DEF_8BIT_REG_AT(I2CCR,0x5f);
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

#endif /* __ST72774J7__ */
