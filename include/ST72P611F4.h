/* ST72P611F4.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72P611F4__
#define __ST72P611F4__

/* ST72P611F4 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72P611F4 1
		#if (MCU_NAME != ST72P611F4)
		#error "wrong include file ST72P611F4.h for chosen MCU!"
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

/* Interrupt Register */
/*****************************************************************/

/* Interrupt Register 1 */
DEF_8BIT_REG_AT(ITRFRE1,0x08);
#define ITRFRE1_IT1E	0		/* Interrupt IT1 Enable */
#define ITRFRE1_IT1E_OR	(1 << ITRFRE1_IT1E)
#define ITRFRE1_IT2E	1		/* Interrupt IT2 Enable */
#define ITRFRE1_IT2E_OR	(1 << ITRFRE1_IT2E)
#define ITRFRE1_IT3E	2		/* Interrupt IT3 Enable */
#define ITRFRE1_IT3E_OR	(1 << ITRFRE1_IT3E)
#define ITRFRE1_IT4E	3		/* Interrupt IT4 Enable */
#define ITRFRE1_IT4E_OR	(1 << ITRFRE1_IT4E)
#define ITRFRE1_IT5E	4		/* Interrupt IT5 Enable */
#define ITRFRE1_IT5E_OR	(1 << ITRFRE1_IT5E)
#define ITRFRE1_IT6E	5		/* Interrupt IT6 Enable */
#define ITRFRE1_IT6E_OR	(1 << ITRFRE1_IT6E)
#define ITRFRE1_IT7E	6		/* Interrupt IT7 Enable */
#define ITRFRE1_IT7E_OR	(1 << ITRFRE1_IT7E)
#define ITRFRE1_IT8E	7		/* Interrupt IT8 Enable */
#define ITRFRE1_IT8E_OR	(1 << ITRFRE1_IT8E)

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register */
DEF_8BIT_REG_AT(MISC,0x09);
#define MISC_MCO	0		/* Main Clock Out */
#define MISC_MCO_OR	(1 << MISC_MCO)
#define MISC_USBOE	1		/* USB Output Enable */
#define MISC_USBOE_OR	(1 << MISC_USBOE)
#define MISC_SMS0	2		/* Slow Mode Selection */
#define MISC_SMS0_OR	(1 << MISC_SMS0)
#define MISC_SMS1	3		/* Slow Mode Selection */
#define MISC_SMS1_OR	(1 << MISC_SMS1)
#define MISC_SMS_OR	((1 << MISC_SMS0)|(1 << MISC_SMS1))

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x0d);
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

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x32);
#define ISPR0_I0_0	0		/* Flash Start Programming Interrupt Priority level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* Flash Start Programming Interrupt Priority level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* USB End Suspend Interrupt Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* USB End Suspend Interrupt Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External Interrupt Port A Priority level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External Interrupt Port A Priority level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External Interrupt Port B Priority level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External Interrupt Port B Priority level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x33);
#define ISPR1_I0_4	0		/* External Interrupt Port C Priority level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External Interrupt Port C Priority level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* TBU Timer Interrupt Priority level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* TBU Timer Interrupt Priority level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* PWM Interrupt Priority level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* PWM Interrupt Priority level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* SPI Interrupt Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* SPI Interrupt Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x34);
#define ISPR2_I0_8	0		/* SCI Interrupt Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* SCI Interrupt Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* USB Peripheral Interrupt Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* USB Peripheral Interrupt Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* ADC Interrupt Priority level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* ADC Interrupt Priority level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))

/* TimeBase Unit (TBU) */
/*****************************************************************/

/* TBU Counter Value Register */
DEF_8BIT_REG_AT(TBUCV,0x36);
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

/* TBU Control/Status Register */
DEF_8BIT_REG_AT(TBUCSR,0x37);

#endif /* __ST72P611F4__ */
