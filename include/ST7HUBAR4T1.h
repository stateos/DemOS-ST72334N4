/* ST7HUBAR4T1.h */

/* Copyright (c) 2003-2015 STMicroelectronics */

#ifndef __ST7HUBAR4T1__
#define __ST7HUBAR4T1__

/* ST7HUBAR4T1 */

	/* Check MCU name */
	#ifdef MCU_NAME
		#define ST7HUBAR4T1 1
		#if (MCU_NAME != ST7HUBAR4T1)
		#error "wrong include file ST7HUBAR4T1.h for chosen MCU!"
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

/* Interrupt Register */
/*****************************************************************/

/* Interrupt Register Port C */
DEF_8BIT_REG_AT(ITRFREC,0x0f);
#define ITRFREC_IT1E	0		/* Interrupt IT1 Enable */
#define ITRFREC_IT1E_OR	(1 << ITRFREC_IT1E)
#define ITRFREC_IT2E	1		/* Interrupt IT2 Enable */
#define ITRFREC_IT2E_OR	(1 << ITRFREC_IT2E)
#define ITRFREC_IT3E	2		/* Interrupt IT3 Enable */
#define ITRFREC_IT3E_OR	(1 << ITRFREC_IT3E)
#define ITRFREC_IT4E	3		/* Interrupt IT4 Enable */
#define ITRFREC_IT4E_OR	(1 << ITRFREC_IT4E)
#define ITRFREC_IT5E	4		/* Interrupt IT5 Enable */
#define ITRFREC_IT5E_OR	(1 << ITRFREC_IT5E)
#define ITRFREC_IT6E	5		/* Interrupt IT6 Enable */
#define ITRFREC_IT6E_OR	(1 << ITRFREC_IT6E)
#define ITRFREC_IT7E	6		/* Interrupt IT7 Enable */
#define ITRFREC_IT7E_OR	(1 << ITRFREC_IT7E)
#define ITRFREC_IT8E	7		/* Interrupt IT8 Enable */
#define ITRFREC_IT8E_OR	(1 << ITRFREC_IT8E)

/* Interrupt Register Port D */
DEF_8BIT_REG_AT(ITRFRED,0x10);
#define ITRFRED_IT9E	0		/* Interrupt IT9 Enable */
#define ITRFRED_IT9E_OR	(1 << ITRFRED_IT9E)
#define ITRFRED_IT10E	1		/* Interrupt IT10 Enable */
#define ITRFRED_IT10E_OR	(1 << ITRFRED_IT10E)
#define ITRFRED_IT11E	2		/* Interrupt IT11 Enable */
#define ITRFRED_IT11E_OR	(1 << ITRFRED_IT11E)
#define ITRFRED_IT12E	3		/* Interrupt IT12 Enable */
#define ITRFRED_IT12E_OR	(1 << ITRFRED_IT12E)
#define ITRFRED_IT13E	4		/* Interrupt IT13 Enable */
#define ITRFRED_IT13E_OR	(1 << ITRFRED_IT13E)
#define ITRFRED_IT14E	5		/* Interrupt IT14 Enable */
#define ITRFRED_IT14E_OR	(1 << ITRFRED_IT14E)
#define ITRFRED_IT15E	6		/* Interrupt IT15 Enable */
#define ITRFRED_IT15E_OR	(1 << ITRFRED_IT15E)

/* Interrupt Register Port E */
DEF_8BIT_REG_AT(ITRFREE,0x11);
#define ITRFREE_IT16E	0		/* Interrupt IT16 Enable */
#define ITRFREE_IT16E_OR	(1 << ITRFREE_IT16E)
#define ITRFREE_IT17E	1		/* Interrupt IT17 Enable */
#define ITRFREE_IT17E_OR	(1 << ITRFREE_IT17E)
#define ITRFREE_IT18E	2		/* Interrupt IT18 Enable */
#define ITRFREE_IT18E_OR	(1 << ITRFREE_IT18E)
#define ITRFREE_IT19E	3		/* Interrupt IT19 Enable */
#define ITRFREE_IT19E_OR	(1 << ITRFREE_IT19E)
#define ITRFREE_IT20E	4		/* Interrupt IT20 Enable */
#define ITRFREE_IT20E_OR	(1 << ITRFREE_IT20E)
#define ITRFREE_IT21E	5		/* Interrupt IT21 Enable */
#define ITRFREE_IT21E_OR	(1 << ITRFREE_IT21E)
#define ITRFREE_IT22E	6		/* Interrupt IT22 Enable */
#define ITRFREE_IT22E_OR	(1 << ITRFREE_IT22E)
#define ITRFREE_IT23E	7		/* Interrupt IT23 Enable */
#define ITRFREE_IT23E_OR	(1 << ITRFREE_IT23E)

/* Miscellaneous */
/*****************************************************************/

/* Miscellaneous Register 1 */
DEF_8BIT_REG_AT(MISCR1,0x12);
#define MISCR1_CSEL	0		/* Fcpu clock selection */
#define MISCR1_CSEL_OR	(1 << MISCR1_CSEL)
#define MISCR1_MCO	1		/* Main Clock Out */
#define MISCR1_MCO_OR	(1 << MISCR1_MCO)
#define MISCR1_IS20	2		/* EI2 Sensibility */
#define MISCR1_IS20_OR	(1 << MISCR1_IS20)
#define MISCR1_IS21	3		/* EI2 Sensibility */
#define MISCR1_IS21_OR	(1 << MISCR1_IS21)
#define MISCR1_IS2_OR	((1 << MISCR1_IS20)|(1 << MISCR1_IS21))
#define MISCR1_IS10	4		/* EI1 Sensibility */
#define MISCR1_IS10_OR	(1 << MISCR1_IS10)
#define MISCR1_IS11	5		/* EI1 Sensibility */
#define MISCR1_IS11_OR	(1 << MISCR1_IS11)
#define MISCR1_IS1_OR	((1 << MISCR1_IS10)|(1 << MISCR1_IS11))
#define MISCR1_IS00	6		/* EI0 Sensibility */
#define MISCR1_IS00_OR	(1 << MISCR1_IS00)
#define MISCR1_IS01	7		/* EI0 Sensibility */
#define MISCR1_IS01_OR	(1 << MISCR1_IS01)
#define MISCR1_IS0_OR	((1 << MISCR1_IS00)|(1 << MISCR1_IS01))

/* Miscellaneous Register 2 */
DEF_8BIT_REG_AT(MISCR2,0x13);
#define MISCR2_PAODPU	0		/* Port A Open Drain Pull Up */
#define MISCR2_PAODPU_OR	(1 << MISCR2_PAODPU)
#define MISCR2_PBODPU	1		/* Port B Open Drain Pull Up */
#define MISCR2_PBODPU_OR	(1 << MISCR2_PBODPU)
#define MISCR2_PEODPU	2		/* Port E Open Drain Pull Up */
#define MISCR2_PEODPU_OR	(1 << MISCR2_PEODPU)
#define MISCR2_ADIE	3		/* A/D Converter Interrupt Enable */
#define MISCR2_ADIE_OR	(1 << MISCR2_ADIE)
#define MISCR2_ADSTS	4		/* A/D Converter Sample Time Stretch */
#define MISCR2_ADSTS_OR	(1 << MISCR2_ADSTS)
#define MISCR2_PACK0	6		/* Package selection */
#define MISCR2_PACK0_OR	(1 << MISCR2_PACK0)
#define MISCR2_PACK1	7		/* Package selection */
#define MISCR2_PACK1_OR	(1 << MISCR2_PACK1)
#define MISCR2_PACK_OR	((1 << MISCR2_PACK0)|(1 << MISCR2_PACK1))

/* 10-Bit A/D Converter (ADC) */
/*****************************************************************/

/* ADC Data Register High */
DEF_8BIT_REG_AT(ADCDRH,0x14);

/* ADC Data Register Low */
DEF_8BIT_REG_AT(ADCDRL,0x15);

/* Control/Status Register */
DEF_8BIT_REG_AT(ADCCSR,0x16);
#define ADCCSR_CS0	0		/* Channel Selection */
#define ADCCSR_CS0_OR	(1 << ADCCSR_CS0)
#define ADCCSR_CS1	1		/* Channel Selection */
#define ADCCSR_CS1_OR	(1 << ADCCSR_CS1)
#define ADCCSR_CS2	2		/* Channel Selection */
#define ADCCSR_CS2_OR	(1 << ADCCSR_CS2)
#define ADCCSR_CS3	3		/* Channel Selection */
#define ADCCSR_CS3_OR	(1 << ADCCSR_CS3)
#define ADCCSR_CS_OR	((1 << ADCCSR_CS0)|(1 << ADCCSR_CS1)\
		|(1 << ADCCSR_CS2)|(1 << ADCCSR_CS3))
#define ADCCSR_ADON	4		/* A/D Start Converter */
#define ADCCSR_ADON_OR	(1 << ADCCSR_ADON)
#define ADCCSR_PRSC0	5		/* A/D Clock prescaler Selection */
#define ADCCSR_PRSC0_OR	(1 << ADCCSR_PRSC0)
#define ADCCSR_PRSC1	6		/* A/D Clock prescaler Selection */
#define ADCCSR_PRSC1_OR	(1 << ADCCSR_PRSC1)
#define ADCCSR_PRSC_OR	((1 << ADCCSR_PRSC0)|(1 << ADCCSR_PRSC1))
#define ADCCSR_EOC	7		/* End of Conversion */
#define ADCCSR_EOC_OR	(1 << ADCCSR_EOC)

/* WatchDog Timer */
/*****************************************************************/

/* Control Register */
DEF_8BIT_REG_AT(WDGCR,0x17);
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

/* Serial Peripheral Interface (SPI) */
/*****************************************************************/

/* Data I/O Register */
DEF_8BIT_REG_AT(SPIDR,0x19);

/* Control Register */
DEF_8BIT_REG_AT(SPICR,0x1a);
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
DEF_8BIT_REG_AT(SPICSR,0x1b);
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

/* Auto Reload Timer */
/*****************************************************************/

/* Duty Cycle Register 1 */
DEF_8BIT_REG_AT(PWMDCR1,0x1c);

/* Duty Cycle Register 0 */
DEF_8BIT_REG_AT(PWMDCR0,0x1d);

/* PWM Control Register */
DEF_8BIT_REG_AT(PWMCR,0x1e);
#define PWMCR_OP0	0		/* PWM Output Polarity */
#define PWMCR_OP0_OR	(1 << PWMCR_OP0)
#define PWMCR_OP1	1		/* PWM Output Polarity */
#define PWMCR_OP1_OR	(1 << PWMCR_OP1)
#define PWMCR_OE0	4		/* PWM Output Enable */
#define PWMCR_OE0_OR	(1 << PWMCR_OE0)
#define PWMCR_OE1	5		/* PWM Output Enable */
#define PWMCR_OE1_OR	(1 << PWMCR_OE1)

/* ART Control/Status Register */
DEF_8BIT_REG_AT(ARTCSR,0x1f);
#define ARTCSR_OVF	0		/* Overflow Flag */
#define ARTCSR_OVF_OR	(1 << ARTCSR_OVF)
#define ARTCSR_OIE	1		/* Overflow Interrupt Enable */
#define ARTCSR_OIE_OR	(1 << ARTCSR_OIE)
#define ARTCSR_FCRL	2		/* Force Counter Re-Load */
#define ARTCSR_FCRL_OR	(1 << ARTCSR_FCRL)
#define ARTCSR_TCE	3		/* Timer Counter Enable */
#define ARTCSR_TCE_OR	(1 << ARTCSR_TCE)
#define ARTCSR_CC0	4		/* Counter Clock Control */
#define ARTCSR_CC0_OR	(1 << ARTCSR_CC0)
#define ARTCSR_CC1	5		/* Counter Clock Control */
#define ARTCSR_CC1_OR	(1 << ARTCSR_CC1)
#define ARTCSR_CC2	6		/* Counter Clock Control */
#define ARTCSR_CC2_OR	(1 << ARTCSR_CC2)
#define ARTCSR_CC_OR	((1 << ARTCSR_CC0)|(1 << ARTCSR_CC1)\
		|(1 << ARTCSR_CC2))
#define ARTCSR_EXCL	7		/* External Clock */
#define ARTCSR_EXCL_OR	(1 << ARTCSR_EXCL)

/* ART Counter Access Register */
DEF_8BIT_REG_AT(ARTCAR,0x20);

/* ART Auto-Reload Register */
DEF_8BIT_REG_AT(ARTARR,0x21);

/* ART Input Capture Control/Status Register */
DEF_8BIT_REG_AT(ARTICCSR,0x22);
#define ARTICCSR_CF1	0		/* Capture Flag */
#define ARTICCSR_CF1_OR	(1 << ARTICCSR_CF1)
#define ARTICCSR_CF2	1		/* Capture Flag */
#define ARTICCSR_CF2_OR	(1 << ARTICCSR_CF2)
#define ARTICCSR_CF_OR	((1 << ARTICCSR_CF1)|(1 << ARTICCSR_CF2))
#define ARTICCSR_CIE1	2		/* Capture Interrupt Enable */
#define ARTICCSR_CIE1_OR	(1 << ARTICCSR_CIE1)
#define ARTICCSR_CIE2	3		/* Capture Interrupt Enable */
#define ARTICCSR_CIE2_OR	(1 << ARTICCSR_CIE2)
#define ARTICCSR_CIE_OR	((1 << ARTICCSR_CIE1)|(1 << ARTICCSR_CIE2))
#define ARTICCSR_CS1	4		/* Capture Sensitivity */
#define ARTICCSR_CS1_OR	(1 << ARTICCSR_CS1)
#define ARTICCSR_CS2	5		/* Capture Sensitivity */
#define ARTICCSR_CS2_OR	(1 << ARTICCSR_CS2)
#define ARTICCSR_CS_OR	((1 << ARTICCSR_CS1)|(1 << ARTICCSR_CS2))

/* ART Input Capture Register 1 */
DEF_8BIT_REG_AT(ARTICR1,0x23);

/* ART Input Capture Register 2 */
DEF_8BIT_REG_AT(ARTICR2,0x24);

/* USB embedded function */
/*****************************************************************/

/* Interrupt Status Register */
DEF_8BIT_REG_AT(USBISTR,0x25);
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
DEF_8BIT_REG_AT(USBIMR,0x26);
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
DEF_8BIT_REG_AT(USBCTLR,0x27);
#define USBCTLR_FRES	0		/* Force Reset */
#define USBCTLR_FRES_OR	(1 << USBCTLR_FRES)
#define USBCTLR_FSUSP	1		/* Force Suspend */
#define USBCTLR_FSUSP_OR	(1 << USBCTLR_FSUSP)
#define USBCTLR_CONNECT	2		/* connect */
#define USBCTLR_CONNECT_OR	(1 << USBCTLR_CONNECT)
#define USBCTLR_RESUME	3		/* Resume */
#define USBCTLR_RESUME_OR	(1 << USBCTLR_RESUME)
#define USBCTLR_USB_RST	6		/* Reset Detected */
#define USBCTLR_USB_RST_OR	(1 << USBCTLR_USB_RST)
#define USBCTLR_RSM	7		/* Resume Detected */
#define USBCTLR_RSM_OR	(1 << USBCTLR_RSM)

/* Device Address Register */
DEF_8BIT_REG_AT(DADDR,0x28);
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
DEF_8BIT_REG_AT(USBSR,0x29);
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
DEF_8BIT_REG_AT(EP0R,0x2a);
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
DEF_8BIT_REG_AT(CNT0RXR,0x2b);
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
DEF_8BIT_REG_AT(CNT0TXR,0x2c);
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
DEF_8BIT_REG_AT(EP1TXR,0x2d);
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
DEF_8BIT_REG_AT(CNT1TXR,0x2e);
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
DEF_8BIT_REG_AT(EP2RXR,0x2f);
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
DEF_8BIT_REG_AT(CNT2RXR,0x30);
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
DEF_8BIT_REG_AT(EP2TXR,0x31);
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
DEF_8BIT_REG_AT(CNT2TXR,0x32);
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
DEF_8BIT_REG_AT(EP3TXR,0x33);
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
DEF_8BIT_REG_AT(CNT3TXR,0x34);
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
DEF_8BIT_REG_AT(EP4TXR,0x35);
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
DEF_8BIT_REG_AT(CNT4TXR,0x36);
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
DEF_8BIT_REG_AT(EP5TXR,0x37);
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
DEF_8BIT_REG_AT(CNT5TXR,0x38);
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
DEF_8BIT_REG_AT(ERRSR,0x39);
#define ERRSR_ERR0	0		/* Error Type */
#define ERRSR_ERR0_OR	(1 << ERRSR_ERR0)
#define ERRSR_ERR1	1		/* Error Type */
#define ERRSR_ERR1_OR	(1 << ERRSR_ERR1)
#define ERRSR_ERR2	2		/* Error Type */
#define ERRSR_ERR2_OR	(1 << ERRSR_ERR2)
#define ERRSR_ERR_OR	((1 << ERRSR_ERR0)|(1 << ERRSR_ERR1)\
		|(1 << ERRSR_ERR2))

/* Interrupt Software Priority (ITC) */
/*****************************************************************/

/* Interrupt Software Priority Register 0 */
DEF_8BIT_REG_AT(ISPR0,0x3e);
#define ISPR0_I0_0	0		/* Flash Start Programming Interrupt Priority Level */
#define ISPR0_I0_0_OR	(1 << ISPR0_I0_0)
#define ISPR0_I1_0	1		/* Flash Start Programming Interrupt Priority Level */
#define ISPR0_I1_0_OR	(1 << ISPR0_I1_0)
#define ISPR0_I_0_OR	((1 << ISPR0_I0_0)|(1 << ISPR0_I1_0))
#define ISPR0_I0_1	2		/* USB interrupt vector Priority Level */
#define ISPR0_I0_1_OR	(1 << ISPR0_I0_1)
#define ISPR0_I1_1	3		/* USB interrupt vector Priority Level */
#define ISPR0_I1_1_OR	(1 << ISPR0_I1_1)
#define ISPR0_I_1_OR	((1 << ISPR0_I0_1)|(1 << ISPR0_I1_1))
#define ISPR0_I0_2	4		/* External IT port C (ei0) Priority Level */
#define ISPR0_I0_2_OR	(1 << ISPR0_I0_2)
#define ISPR0_I1_2	5		/* External IT port C (ei0) Priority Level */
#define ISPR0_I1_2_OR	(1 << ISPR0_I1_2)
#define ISPR0_I_2_OR	((1 << ISPR0_I0_2)|(1 << ISPR0_I1_2))
#define ISPR0_I0_3	6		/* External IT port D (ei1) Priority Level */
#define ISPR0_I0_3_OR	(1 << ISPR0_I0_3)
#define ISPR0_I1_3	7		/* External IT port D (ei1) Priority Level */
#define ISPR0_I1_3_OR	(1 << ISPR0_I1_3)
#define ISPR0_I_3_OR	((1 << ISPR0_I0_3)|(1 << ISPR0_I1_3))

/* Interrupt Software Priority Register 1 */
DEF_8BIT_REG_AT(ISPR1,0x3f);
#define ISPR1_I0_4	0		/* External IT port E (ei2) Priority Level */
#define ISPR1_I0_4_OR	(1 << ISPR1_I0_4)
#define ISPR1_I1_4	1		/* External IT port E (ei2) Priority Level */
#define ISPR1_I1_4_OR	(1 << ISPR1_I1_4)
#define ISPR1_I_4_OR	((1 << ISPR1_I0_4)|(1 << ISPR1_I1_4))
#define ISPR1_I0_5	2		/* Timebase Unit interrupt Priority Level */
#define ISPR1_I0_5_OR	(1 << ISPR1_I0_5)
#define ISPR1_I1_5	3		/* Timebase Unit interrupt Priority Level */
#define ISPR1_I1_5_OR	(1 << ISPR1_I1_5)
#define ISPR1_I_5_OR	((1 << ISPR1_I0_5)|(1 << ISPR1_I1_5))
#define ISPR1_I0_6	4		/* ART/PWM Timer interrupt Priority Level */
#define ISPR1_I0_6_OR	(1 << ISPR1_I0_6)
#define ISPR1_I1_6	5		/* ART/PWM Timer interrupt Priority Level */
#define ISPR1_I1_6_OR	(1 << ISPR1_I1_6)
#define ISPR1_I_6_OR	((1 << ISPR1_I0_6)|(1 << ISPR1_I1_6))
#define ISPR1_I0_7	6		/* SPI interrupt Priority Level */
#define ISPR1_I0_7_OR	(1 << ISPR1_I0_7)
#define ISPR1_I1_7	7		/* SPI interrupt Priority Level */
#define ISPR1_I1_7_OR	(1 << ISPR1_I1_7)
#define ISPR1_I_7_OR	((1 << ISPR1_I0_7)|(1 << ISPR1_I1_7))

/* Interrupt Software Priority Register 2 */
DEF_8BIT_REG_AT(ISPR2,0x40);
#define ISPR2_I0_8	0		/* USB End Suspend interrupt Priority Level */
#define ISPR2_I0_8_OR	(1 << ISPR2_I0_8)
#define ISPR2_I1_8	1		/* USB End Suspend interrupt Priority Level */
#define ISPR2_I1_8_OR	(1 << ISPR2_I1_8)
#define ISPR2_I_8_OR	((1 << ISPR2_I0_8)|(1 << ISPR2_I1_8))
#define ISPR2_I0_9	2		/* USB Embedded Function Priority Level */
#define ISPR2_I0_9_OR	(1 << ISPR2_I0_9)
#define ISPR2_I1_9	3		/* USB Embedded Function Priority Level */
#define ISPR2_I1_9_OR	(1 << ISPR2_I1_9)
#define ISPR2_I_9_OR	((1 << ISPR2_I0_9)|(1 << ISPR2_I1_9))

/* Not used */
DEF_8BIT_REG_AT(ISPR3,0x41);

/* TimeBase Unit (TBU) */
/*****************************************************************/

/* TBU Counter Value Register */
DEF_8BIT_REG_AT(TBUCV,0x42);
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
DEF_8BIT_REG_AT(TBUCSR,0x43);

/* Flash */
/*****************************************************************/

/* Flash Control/Status Register */
DEF_8BIT_REG_AT(FCSR,0x44);

/* USB HUB */
/*****************************************************************/

/* Hub Control Register */
DEF_8BIT_REG_AT(HUBCR,0x45);
#define HUBCR_nRST	0		/* Reset(Complemented) */
#define HUBCR_nRST_OR	(1 << HUBCR_nRST)
#define HUBCR_PWRC	1		/* Power Control */
#define HUBCR_PWRC_OR	(1 << HUBCR_PWRC)
#define HUBCR_nBUS_SELF	2		/* Bus(Complemented)/Self Power HUB selection */
#define HUBCR_nBUS_SELF_OR	(1 << HUBCR_nBUS_SELF)
#define HUBCR_OVCEF	3		/* Overcurrent Embedded Function */
#define HUBCR_OVCEF_OR	(1 << HUBCR_OVCEF)
#define HUBCR_nMSKOVCEF	6		/* Mask Embedded Function Power Change(Complemented) */
#define HUBCR_nMSKOVCEF_OR	(1 << HUBCR_nMSKOVCEF)
#define HUBCR_PWREF	7		/* Power On Embedded Function */
#define HUBCR_PWREF_OR	(1 << HUBCR_PWREF)

/* HUB Vendor ID Low Register */
DEF_8BIT_REG_AT(HUBVIDLR,0x46);
#define HUBVIDLR_VID0	0		/* HUB Vendor ID */
#define HUBVIDLR_VID0_OR	(1 << HUBVIDLR_VID0)
#define HUBVIDLR_VID1	1		/* HUB Vendor ID */
#define HUBVIDLR_VID1_OR	(1 << HUBVIDLR_VID1)
#define HUBVIDLR_VID2	2		/* HUB Vendor ID */
#define HUBVIDLR_VID2_OR	(1 << HUBVIDLR_VID2)
#define HUBVIDLR_VID3	3		/* HUB Vendor ID */
#define HUBVIDLR_VID3_OR	(1 << HUBVIDLR_VID3)
#define HUBVIDLR_VID4	4		/* HUB Vendor ID */
#define HUBVIDLR_VID4_OR	(1 << HUBVIDLR_VID4)
#define HUBVIDLR_VID5	5		/* HUB Vendor ID */
#define HUBVIDLR_VID5_OR	(1 << HUBVIDLR_VID5)
#define HUBVIDLR_VID6	6		/* HUB Vendor ID */
#define HUBVIDLR_VID6_OR	(1 << HUBVIDLR_VID6)
#define HUBVIDLR_VID7	7		/* HUB Vendor ID */
#define HUBVIDLR_VID7_OR	(1 << HUBVIDLR_VID7)
#define HUBVIDLR_VID_OR	((1 << HUBVIDLR_VID0)|(1 << HUBVIDLR_VID1)\
		|(1 << HUBVIDLR_VID2)|(1 << HUBVIDLR_VID3)|(1 << HUBVIDLR_VID4)\
		|(1 << HUBVIDLR_VID5)|(1 << HUBVIDLR_VID6)\
		|(1 << HUBVIDLR_VID7))

/* HUB Vendor ID High Register */
DEF_8BIT_REG_AT(HUBVIDHR,0x47);
#define HUBVIDHR_VID8	0		/* HUB Vendor ID */
#define HUBVIDHR_VID8_OR	(1 << HUBVIDHR_VID8)
#define HUBVIDHR_VID9	1		/* HUB Vendor ID */
#define HUBVIDHR_VID9_OR	(1 << HUBVIDHR_VID9)
#define HUBVIDHR_VID10	2		/* HUB Vendor ID */
#define HUBVIDHR_VID10_OR	(1 << HUBVIDHR_VID10)
#define HUBVIDHR_VID11	3		/* HUB Vendor ID */
#define HUBVIDHR_VID11_OR	(1 << HUBVIDHR_VID11)
#define HUBVIDHR_VID12	4		/* HUB Vendor ID */
#define HUBVIDHR_VID12_OR	(1 << HUBVIDHR_VID12)
#define HUBVIDHR_VID13	5		/* HUB Vendor ID */
#define HUBVIDHR_VID13_OR	(1 << HUBVIDHR_VID13)
#define HUBVIDHR_VID14	6		/* HUB Vendor ID */
#define HUBVIDHR_VID14_OR	(1 << HUBVIDHR_VID14)
#define HUBVIDHR_VID15	7		/* HUB Vendor ID */
#define HUBVIDHR_VID15_OR	(1 << HUBVIDHR_VID15)
#define HUBVIDHR_VID_OR	((1 << HUBVIDHR_VID8)|(1 << HUBVIDHR_VID9)\
		|(1 << HUBVIDHR_VID10)|(1 << HUBVIDHR_VID11)|(1 << HUBVIDHR_VID12)\
		|(1 << HUBVIDHR_VID13)|(1 << HUBVIDHR_VID14)\
		|(1 << HUBVIDHR_VID15))

/* HUB Product ID Low Register */
DEF_8BIT_REG_AT(HUBPIDLR,0x48);
#define HUBPIDLR_PID0	0		/* HUB Product ID */
#define HUBPIDLR_PID0_OR	(1 << HUBPIDLR_PID0)
#define HUBPIDLR_PID1	1		/* HUB Product ID */
#define HUBPIDLR_PID1_OR	(1 << HUBPIDLR_PID1)
#define HUBPIDLR_PID2	2		/* HUB Product ID */
#define HUBPIDLR_PID2_OR	(1 << HUBPIDLR_PID2)
#define HUBPIDLR_PID3	3		/* HUB Product ID */
#define HUBPIDLR_PID3_OR	(1 << HUBPIDLR_PID3)
#define HUBPIDLR_PID4	4		/* HUB Product ID */
#define HUBPIDLR_PID4_OR	(1 << HUBPIDLR_PID4)
#define HUBPIDLR_PID5	5		/* HUB Product ID */
#define HUBPIDLR_PID5_OR	(1 << HUBPIDLR_PID5)
#define HUBPIDLR_PID6	6		/* HUB Product ID */
#define HUBPIDLR_PID6_OR	(1 << HUBPIDLR_PID6)
#define HUBPIDLR_PID7	7		/* HUB Product ID */
#define HUBPIDLR_PID7_OR	(1 << HUBPIDLR_PID7)
#define HUBPIDLR_PID_OR	((1 << HUBPIDLR_PID0)|(1 << HUBPIDLR_PID1)\
		|(1 << HUBPIDLR_PID2)|(1 << HUBPIDLR_PID3)|(1 << HUBPIDLR_PID4)\
		|(1 << HUBPIDLR_PID5)|(1 << HUBPIDLR_PID6)\
		|(1 << HUBPIDLR_PID7))

/* HUB Product ID High Register */
DEF_8BIT_REG_AT(HUBPIDHR,0x49);
#define HUBPIDHR_PID8	0		/* HUB Product ID */
#define HUBPIDHR_PID8_OR	(1 << HUBPIDHR_PID8)
#define HUBPIDHR_PID9	1		/* HUB Product ID */
#define HUBPIDHR_PID9_OR	(1 << HUBPIDHR_PID9)
#define HUBPIDHR_PID10	2		/* HUB Product ID */
#define HUBPIDHR_PID10_OR	(1 << HUBPIDHR_PID10)
#define HUBPIDHR_PID11	3		/* HUB Product ID */
#define HUBPIDHR_PID11_OR	(1 << HUBPIDHR_PID11)
#define HUBPIDHR_PID12	4		/* HUB Product ID */
#define HUBPIDHR_PID12_OR	(1 << HUBPIDHR_PID12)
#define HUBPIDHR_PID13	5		/* HUB Product ID */
#define HUBPIDHR_PID13_OR	(1 << HUBPIDHR_PID13)
#define HUBPIDHR_PID14	6		/* HUB Product ID */
#define HUBPIDHR_PID14_OR	(1 << HUBPIDHR_PID14)
#define HUBPIDHR_PID15	7		/* HUB Product ID */
#define HUBPIDHR_PID15_OR	(1 << HUBPIDHR_PID15)
#define HUBPIDHR_PID_OR	((1 << HUBPIDHR_PID8)|(1 << HUBPIDHR_PID9)\
		|(1 << HUBPIDHR_PID10)|(1 << HUBPIDHR_PID11)|(1 << HUBPIDHR_PID12)\
		|(1 << HUBPIDHR_PID13)|(1 << HUBPIDHR_PID14)\
		|(1 << HUBPIDHR_PID15))

#endif /* __ST7HUBAR4T1__ */
