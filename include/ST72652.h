/* ST72652.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST72652__
#define __ST72652__

/* ST72652 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST72652 1
		#if (MCU_NAME != ST72652)
		#error "wrong include file ST72652.h for chosen MCU!"
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

/* Port C */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PCDR,0x06);

/* Data Direction Register */
DEF_8BIT_REG_AT(PCDDR,0x07);

/* Option Register */
DEF_8BIT_REG_AT(PCOR,0x08);

/* Port D */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PDDR,0x09);

/* Data Direction Register */
DEF_8BIT_REG_AT(PDDDR,0x0a);

/* Option Register */
DEF_8BIT_REG_AT(PDOR,0x0b);

/* Port E */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PEDR,0x0c);

/* Data Direction Register */
DEF_8BIT_REG_AT(PEDDR,0x0d);

/* Option Register */
DEF_8BIT_REG_AT(PEOR,0x0e);

/* Port F */
/*****************************************************************/

/* Data Register */
DEF_8BIT_REG_AT(PFDR,0x0f);

/* Data Direction Register */
DEF_8BIT_REG_AT(PFDDR,0x10);

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x14);
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

/* Power Control Register */
/*****************************************************************/

/* Power Control Register */
DEF_8BIT_REG_AT(PCR,0x18);
#define PCR_REGEN	0		/* Voltage Regulator Enable */
#define PCR_REGEN_OR	(1 << PCR_REGEN)
#define PCR_DETEN	1		/* USB Voltage Detector Enable */
#define PCR_DETEN_OR	(1 << PCR_DETEN)
#define PCR_VSET0	2		/* Voltage Regulator Output Voltage */
#define PCR_VSET0_OR	(1 << PCR_VSET0)
#define PCR_VSET1	3		/* Voltage Regulator Output Voltage */
#define PCR_VSET1_OR	(1 << PCR_VSET1)
#define PCR_VSET_OR	((1 << PCR_VSET0)|(1 << PCR_VSET1))
#define PCR_PLGIE	4		/* USB Plug/Unplug Interrupt Enable */
#define PCR_PLGIE_OR	(1 << PCR_PLGIE)
#define PCR_PLG	5		/* USB Plug/Unplug Detection */
#define PCR_PLG_OR	(1 << PCR_PLG)
#define PCR_ITMF	6		/* Voltage Input Threshold Minus Flag */
#define PCR_ITMF_OR	(1 << PCR_ITMF)
#define PCR_ITPF	7		/* Voltage Input Threshold Plus Flag */
#define PCR_ITPF_OR	(1 << PCR_ITPF)

/* Data Transfer Coprocessor (DTC) */
/*****************************************************************/

/* DTC Control Register */
DEF_8BIT_REG_AT(DTCCR,0x1c);
#define DTCCR_RUN	0		/* START/STOP Control */
#define DTCCR_RUN_OR	(1 << DTCCR_RUN)
#define DTCCR_INIT	1		/* Initialization */
#define DTCCR_INIT_OR	(1 << DTCCR_INIT)
#define DTCCR_LOAD	2		/* Load enable */
#define DTCCR_LOAD_OR	(1 << DTCCR_LOAD)
#define DTCCR_STOPEN	3		/* Stop Interrupt Enable */
#define DTCCR_STOPEN_OR	(1 << DTCCR_STOPEN)
#define DTCCR_ERREN	4		/* error Interrupt Enable */
#define DTCCR_ERREN_OR	(1 << DTCCR_ERREN)

/* DTC Status Register */
DEF_8BIT_REG_AT(DTCSR,0x1d);
#define DTCSR_STOP	0		/* Stop Flag */
#define DTCSR_STOP_OR	(1 << DTCSR_STOP)
#define DTCSR_ERROR	1		/* Error Flag */
#define DTCSR_ERROR_OR	(1 << DTCSR_ERROR)

/* DTC Pointer Register */
DEF_8BIT_REG_AT(DTCPR,0x1f);

/* 16-Bit Timer */
/*****************************************************************/

/* Control Register 1 */
DEF_8BIT_REG_AT(TCR1,0x20);
#define TCR1_OLVL1	0		/* Output Level 1 */
#define TCR1_OLVL1_OR	(1 << TCR1_OLVL1)
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

/* Control Register 2 */
DEF_8BIT_REG_AT(TCR2,0x21);
#define TCR2_CC0	2		/* Clock Control */
#define TCR2_CC0_OR	(1 << TCR2_CC0)
#define TCR2_CC1	3		/* Clock Control */
#define TCR2_CC1_OR	(1 << TCR2_CC1)
#define TCR2_CC_OR	((1 << TCR2_CC0)|(1 << TCR2_CC1))
#define TCR2_OC2E	6		/* Output Compare 2 Output Pin */
#define TCR2_OC2E_OR	(1 << TCR2_OC2E)
#define TCR2_OC1E	7		/* Output Compare 1 Output Pin */
#define TCR2_OC1E_OR	(1 << TCR2_OC1E)

/* Status Register */
DEF_8BIT_REG_AT(TSR,0x22);
#define TSR_OCF2	3		/* Output Compare Flag 2 */
#define TSR_OCF2_OR	(1 << TSR_OCF2)
#define TSR_TOF	5		/* Timer Overflow */
#define TSR_TOF_OR	(1 << TSR_TOF)
#define TSR_OCF1	6		/* Output Compare Flag 1 */
#define TSR_OCF1_OR	(1 << TSR_OCF1)

/* Counter Register */
DEF_16BIT_REG_AT(TCR,0x23);
/* Counter High Register */
DEF_8BIT_REG_AT(TCHR,0x23);
/* Counter Low Register */
DEF_8BIT_REG_AT(TCLR,0x24);

/* Alternate Counter Register */
DEF_16BIT_REG_AT(TACR,0x25);
/* Alternate Counter High Register */
DEF_8BIT_REG_AT(TACHR,0x25);
/* Alternate Counter Low Register */
DEF_8BIT_REG_AT(TACLR,0x26);

/* Output Compare 1 Register */
DEF_16BIT_REG_AT(TOC1R,0x27);
/* Output Compare 1 High Register */
DEF_8BIT_REG_AT(TOC1HR,0x27);
/* Output Compare 1 Low Register */
DEF_8BIT_REG_AT(TOC1LR,0x28);

/* Output Compare 2 Register */
DEF_16BIT_REG_AT(TOC2R,0x29);
/* Output Compare 2 High Register */
DEF_8BIT_REG_AT(TOC2HR,0x29);
/* Output Compare 2 Low Register */
DEF_8BIT_REG_AT(TOC2LR,0x2a);

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x2b);

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x2c);
#define ISPR0_I0_0	0		/* Flash Start Programming Interrupt Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* Flash Start Programming Interrupt Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* Power Management USB Plug/Unplug Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* Power Management USB Plug/Unplug Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External IT port A Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External IT port A Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* DTC Peripheral Interrupt Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* DTC Peripheral Interrupt Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x2d);
#define ISPR1_I0_4	0		/* USB Peripheral Interrupt Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* USB Peripheral Interrupt Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* USB End Suspend Interrupt Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* USB End Suspend Interrupt Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* External IT port D Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* External IT port D Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* I2C Interrupt Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* I2C Interrupt Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x2e);
#define ISPR2_I0_8	0		/* Timer IT Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* Timer IT Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* External IT port C Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* External IT port C Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))
#define ISPR2_I0_10	4		/* SPI IT Priority Level */
#define ISPR2_I0_10_OR	(1 << ISPR2_I0_10)
#define ISPR2_I1_10	5		/* SPI IT Priority Level */
#define ISPR2_I1_10_OR	(1 << ISPR2_I1_10)
#define ISPR2_I_10_OR	((1 << ISPR2_I0_10)|(1 << ISPR2_I1_10))

/* Not used */
DEF_8BIT_REG_AT(ISPR3,0x2f);

/* Universal Serail Bus (USB) */
/*****************************************************************/

/* Interrupt Status Register */
DEF_8BIT_REG_AT(USBISTR,0x30);
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
DEF_8BIT_REG_AT(USBIMR,0x31);
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
DEF_8BIT_REG_AT(USBCTLR,0x32);
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
DEF_8BIT_REG_AT(DADDR,0x33);
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
DEF_8BIT_REG_AT(USBSR,0x34);
#define USBSR_ERR0	0		/* Error Type */
#define USBSR_ERR0_OR	(1 << USBSR_ERR0)
#define USBSR_ERR1	1		/* Error Type */
#define USBSR_ERR1_OR	(1 << USBSR_ERR1)
#define USBSR_ERR2	2		/* Error Type */
#define USBSR_ERR2_OR	(1 << USBSR_ERR2)
#define USBSR_ERR_OR	((1 << USBSR_ERR0)|(1 << USBSR_ERR1)\
		|(1 << USBSR_ERR2))
#define USBSR_EP0	3		/* Endpoint Number */
#define USBSR_EP0_OR	(1 << USBSR_EP0)
#define USBSR_EP1	4		/* Endpoint Number */
#define USBSR_EP1_OR	(1 << USBSR_EP1)
#define USBSR_EP_OR	((1 << USBSR_EP0)|(1 << USBSR_EP1))
#define USBSR_IN_OUT	5		/* Last Transaction Direction for Endpoint (1 to 2) */
#define USBSR_IN_OUT_OR	(1 << USBSR_IN_OUT)
#define USBSR_PID0	6		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR_PID0_OR	(1 << USBSR_PID0)
#define USBSR_PID1	7		/* Token PID bits 1&0 for Endpoint 0 Control */
#define USBSR_PID1_OR	(1 << USBSR_PID1)
#define USBSR_PID_OR	((1 << USBSR_PID0)|(1 << USBSR_PID1))

/* Endpoint 0 Register */
DEF_8BIT_REG_AT(EP0R,0x35);
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
DEF_8BIT_REG_AT(CNT0RXR,0x36);
#define CNT0RXR_CNT0	0		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT0_OR	(1 << CNT0RXR_CNT0)
#define CNT0RXR_CNT1	1		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT1_OR	(1 << CNT0RXR_CNT1)
#define CNT0RXR_CNT2	2		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT2_OR	(1 << CNT0RXR_CNT2)
#define CNT0RXR_CNT3	3		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT3_OR	(1 << CNT0RXR_CNT3)
#define CNT0RXR_CNT4	4		/* Buffer Size for Ep0 Reception */
#define CNT0RXR_CNT4_OR	(1 << CNT0RXR_CNT4)
#define CNT0RXR_CNT_OR	((1 << CNT0RXR_CNT0)|(1 << CNT0RXR_CNT1)\
		|(1 << CNT0RXR_CNT2)|(1 << CNT0RXR_CNT3)|(1 << CNT0RXR_CNT4))

/* Endpoint 0 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT0TXR,0x37);
#define CNT0TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT0_OR	(1 << CNT0TXR_CNT0)
#define CNT0TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT1_OR	(1 << CNT0TXR_CNT1)
#define CNT0TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT2_OR	(1 << CNT0TXR_CNT2)
#define CNT0TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT3_OR	(1 << CNT0TXR_CNT3)
#define CNT0TXR_CNT4	4		/* Number of Bytes to be transmitted by Ep0 */
#define CNT0TXR_CNT4_OR	(1 << CNT0TXR_CNT4)
#define CNT0TXR_CNT_OR	((1 << CNT0TXR_CNT0)|(1 << CNT0TXR_CNT1)\
		|(1 << CNT0TXR_CNT2)|(1 << CNT0TXR_CNT3)|(1 << CNT0TXR_CNT4))

/* Endpoint 1 Reception Register */
DEF_8BIT_REG_AT(EP1RXR,0x38);
#define EP1RXR_STAT_RX0	0		/* Status bits (Reception) */
#define EP1RXR_STAT_RX0_OR	(1 << EP1RXR_STAT_RX0)
#define EP1RXR_STAT_RX1	1		/* Status bits (Reception) */
#define EP1RXR_STAT_RX1_OR	(1 << EP1RXR_STAT_RX1)
#define EP1RXR_STAT_RX_OR	((1 << EP1RXR_STAT_RX0)|(1 << EP1RXR_STAT_RX1))
#define EP1RXR_DTOG_RX	2		/* Data Toggle (Reception) */
#define EP1RXR_DTOG_RX_OR	(1 << EP1RXR_DTOG_RX)
#define EP1RXR_CTR_RX	3		/* Correct Reception Transfer */
#define EP1RXR_CTR_RX_OR	(1 << EP1RXR_CTR_RX)

/* Endpoint 1 Reception Counter Register */
DEF_8BIT_REG_AT(CNT1RXR,0x39);
#define CNT1RXR_CNT0	0		/* Buffer Size for Ep1 Reception */
#define CNT1RXR_CNT0_OR	(1 << CNT1RXR_CNT0)
#define CNT1RXR_CNT1	1		/* Buffer Size for Ep1 Reception */
#define CNT1RXR_CNT1_OR	(1 << CNT1RXR_CNT1)
#define CNT1RXR_CNT2	2		/* Buffer Size for Ep1 Reception */
#define CNT1RXR_CNT2_OR	(1 << CNT1RXR_CNT2)
#define CNT1RXR_CNT3	3		/* Buffer Size for Ep1 Reception */
#define CNT1RXR_CNT3_OR	(1 << CNT1RXR_CNT3)
#define CNT1RXR_CNT4	4		/* Buffer Size for Ep1 Reception */
#define CNT1RXR_CNT4_OR	(1 << CNT1RXR_CNT4)
#define CNT1RXR_CNT_OR	((1 << CNT1RXR_CNT0)|(1 << CNT1RXR_CNT1)\
		|(1 << CNT1RXR_CNT2)|(1 << CNT1RXR_CNT3)|(1 << CNT1RXR_CNT4))

/* Endpoint 1 Transmission Register */
DEF_8BIT_REG_AT(EP1TXR,0x3a);
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
DEF_8BIT_REG_AT(CNT1TXR,0x3b);
#define CNT1TXR_CNT0	0		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT0_OR	(1 << CNT1TXR_CNT0)
#define CNT1TXR_CNT1	1		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT1_OR	(1 << CNT1TXR_CNT1)
#define CNT1TXR_CNT2	2		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT2_OR	(1 << CNT1TXR_CNT2)
#define CNT1TXR_CNT3	3		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT3_OR	(1 << CNT1TXR_CNT3)
#define CNT1TXR_CNT4	4		/* Number of Bytes to be transmitted by Ep1 */
#define CNT1TXR_CNT4_OR	(1 << CNT1TXR_CNT4)
#define CNT1TXR_CNT_OR	((1 << CNT1TXR_CNT0)|(1 << CNT1TXR_CNT1)\
		|(1 << CNT1TXR_CNT2)|(1 << CNT1TXR_CNT3)|(1 << CNT1TXR_CNT4))

/* Endpoint 2 Reception Register */
DEF_8BIT_REG_AT(EP2RXR,0x3c);
#define EP2RXR_STAT_RX0	0		/* Status bits (Reception) */
#define EP2RXR_STAT_RX0_OR	(1 << EP2RXR_STAT_RX0)
#define EP2RXR_STAT_RX1	1		/* Status bits (Reception) */
#define EP2RXR_STAT_RX1_OR	(1 << EP2RXR_STAT_RX1)
#define EP2RXR_STAT_RX_OR	((1 << EP2RXR_STAT_RX0)|(1 << EP2RXR_STAT_RX1))
#define EP2RXR_DTOG_RX	2		/* Data Toggle (Reception) */
#define EP2RXR_DTOG_RX_OR	(1 << EP2RXR_DTOG_RX)
#define EP2RXR_CTR_RX	3		/* Correct Reception Transfer */
#define EP2RXR_CTR_RX_OR	(1 << EP2RXR_CTR_RX)
#define EP2RXR_MOD0	6		/* Endpoint 2 mode */
#define EP2RXR_MOD0_OR	(1 << EP2RXR_MOD0)
#define EP2RXR_MOD1	7		/* Endpoint 2 mode */
#define EP2RXR_MOD1_OR	(1 << EP2RXR_MOD1)
#define EP2RXR_MOD_OR	((1 << EP2RXR_MOD0)|(1 << EP2RXR_MOD1))

/* Endpoint 2 Reception Counter Register */
DEF_8BIT_REG_AT(CNT2RXR,0x3d);
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
DEF_8BIT_REG_AT(EP2TXR,0x3e);
#define EP2TXR_STAT_TX0	0		/* Status bits (Transmission) */
#define EP2TXR_STAT_TX0_OR	(1 << EP2TXR_STAT_TX0)
#define EP2TXR_STAT_TX1	1		/* Status bits (Transmission) */
#define EP2TXR_STAT_TX1_OR	(1 << EP2TXR_STAT_TX1)
#define EP2TXR_STAT_TX_OR	((1 << EP2TXR_STAT_TX0)|(1 << EP2TXR_STAT_TX1))
#define EP2TXR_DTOG_TX	2		/* Data Toggle (Transmission) */
#define EP2TXR_DTOG_TX_OR	(1 << EP2TXR_DTOG_TX)
#define EP2TXR_CTR_TX	3		/* Transmission Transfer Correct */
#define EP2TXR_CTR_TX_OR	(1 << EP2TXR_CTR_TX)

/* Endpoint 2 Transmission Counter Register */
DEF_8BIT_REG_AT(CNT2TXR,0x3f);
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

/* USB Buffer Control/Status Register */
/*****************************************************************/

/* Buffer Control/Status Register */
DEF_8BIT_REG_AT(BUFCSR,0x47);
#define BUFCSR_CLR	0		/* Clear Buffer Status */
#define BUFCSR_CLR_OR	(1 << BUFCSR_CLR)
#define BUFCSR_STATB0	1		/* Buffer 0 Status Bit */
#define BUFCSR_STATB0_OR	(1 << BUFCSR_STATB0)
#define BUFCSR_STATB1	2		/* Buffer 1 Status Bit */
#define BUFCSR_STATB1_OR	(1 << BUFCSR_STATB1)
#define BUFCSR_BUFNUM	3		/* Current USB Buffer Number */
#define BUFCSR_BUFNUM_OR	(1 << BUFCSR_BUFNUM)

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous1 */
DEF_8BIT_REG_AT(MISCR1,0x49);
#define MISCR1_CPEN	0		/* Clock Prescaler Enable */
#define MISCR1_CPEN_OR	(1 << MISCR1_CPEN)
#define MISCR1_CP0	1		/* CPU clock prescaler */
#define MISCR1_CP0_OR	(1 << MISCR1_CP0)
#define MISCR1_CP1	2		/* CPU clock prescaler */
#define MISCR1_CP1_OR	(1 << MISCR1_CP1)
#define MISCR1_CP_OR	((1 << MISCR1_CP0)|(1 << MISCR1_CP1))
#define MISCR1_IS20	3		/* EI1 Sensitivity on port D */
#define MISCR1_IS20_OR	(1 << MISCR1_IS20)
#define MISCR1_IS21	4		/* EI1 Sensitivity on port D */
#define MISCR1_IS21_OR	(1 << MISCR1_IS21)
#define MISCR1_IS2_OR	((1 << MISCR1_IS20)|(1 << MISCR1_IS21))
#define MISCR1_MCO	5		/* Main Clock Out selection */
#define MISCR1_MCO_OR	(1 << MISCR1_MCO)
#define MISCR1_IS10	6		/* EI0 Sensitivity on port A */
#define MISCR1_IS10_OR	(1 << MISCR1_IS10)
#define MISCR1_IS11	7		/* EI0 Sensitivity on port A */
#define MISCR1_IS11_OR	(1 << MISCR1_IS11)
#define MISCR1_IS1_OR	((1 << MISCR1_IS10)|(1 << MISCR1_IS11))

/* Miscellaneous2 */
DEF_8BIT_REG_AT(MISCR2,0x4a);
#define MISCR2_PWM	0		/* Power Management Bit */
#define MISCR2_PWM_OR	(1 << MISCR2_PWM)
#define MISCR2_Timer	1		/* Power Management Bit */
#define MISCR2_Timer_OR	(1 << MISCR2_Timer)
#define MISCR2_I2C	2		/* Power Management Bit */
#define MISCR2_I2C_OR	(1 << MISCR2_I2C)
#define MISCR2_USB	3		/* Power Management Bit */
#define MISCR2_USB_OR	(1 << MISCR2_USB)
#define MISCR2_DTC	4		/* Power Management Bit */
#define MISCR2_DTC_OR	(1 << MISCR2_DTC)

/* Miscellaneous3 */
DEF_8BIT_REG_AT(MISCR3,0x4c);
#define MISCR3_PWM0	0		/* PWM0 Output Control */
#define MISCR3_PWM0_OR	(1 << MISCR3_PWM0)
#define MISCR3_PWM1	1		/* PWM1 Output Control */
#define MISCR3_PWM1_OR	(1 << MISCR3_PWM1)
#define MISCR3_IS30	2		/* Interrupt Sensitivity */
#define MISCR3_IS30_OR	(1 << MISCR3_IS30)
#define MISCR3_IS31	3		/* Interrupt Sensitivity */
#define MISCR3_IS31_OR	(1 << MISCR3_IS31)
#define MISCR3_IS3_OR	((1 << MISCR3_IS30)|(1 << MISCR3_IS31))
#define MISCR3_WDGHALT	7		/* Watchdog and HALT Mode */
#define MISCR3_WDGHALT_OR	(1 << MISCR3_WDGHALT)

#endif /* __ST72652__ */
