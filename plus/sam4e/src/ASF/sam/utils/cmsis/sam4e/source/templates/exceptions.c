/**
 * \file
 *
 * \brief This file contains the default exception handlers.
 *
 * Copyright (c) 2013-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 * \par Purpose
 *
 * This file provides basic support for Cortex-M processor based
 * microcontrollers.
 *
 * \note
 * The exception handler has weak aliases.
 * As they are weak aliases, any function with the same name will override
 * this definition.
 *
 */
/*
 * Support and FAQ: visit <a href="http://www.atmel.com/design-support/">Atmel Support</a>
 */

#include "exceptions.h"

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
extern "C" {
#endif
/**INDENT-ON**/
/* @endcond */

#ifdef __GNUC__

#define TRACKABLE 1

#if TRACKABLE != 0
	volatile int who_called = 0;
	void handle_unknown( int aWho )
	{
		who_called = aWho;
		while( 1 )
		{
		}
	}

	void __attribute__((weak)) Reset_Handler      ( void ) { handle_unknown( 1 ); }
	void __attribute__((weak)) NMI_Handler        ( void ) { handle_unknown( 2 ); }
	void __attribute__((weak)) HardFault_Handler  ( void ) { handle_unknown( 3 ); }
	void __attribute__((weak)) MemManage_Handler  ( void ) { handle_unknown( 4 ); }
	void __attribute__((weak)) BusFault_Handler   ( void ) { handle_unknown( 5 ); }
	void __attribute__((weak)) UsageFault_Handler ( void ) { handle_unknown( 6 ); }
	void __attribute__((weak)) SVC_Handler        ( void ) { handle_unknown( 7 ); }
	void __attribute__((weak)) DebugMon_Handler   ( void ) { handle_unknown( 8 ); }
	void __attribute__((weak)) PendSV_Handler     ( void ) { handle_unknown( 9 ); }
	void __attribute__((weak)) SysTick_Handler    ( void ) { handle_unknown( 10 ); }

	/* Peripherals handlers */
	void __attribute__((weak)) SUPC_Handler       ( void ) { handle_unknown( 11 ); }
	void __attribute__((weak)) RSTC_Handler       ( void ) { handle_unknown( 12 ); }
	void __attribute__((weak)) RTC_Handler        ( void ) { handle_unknown( 13 ); }
	void __attribute__((weak)) RTT_Handler        ( void ) { handle_unknown( 14 ); }
	void __attribute__((weak)) WDT_Handler        ( void ) { handle_unknown( 15 ); }
	void __attribute__((weak)) PMC_Handler        ( void ) { handle_unknown( 16 ); }
	void __attribute__((weak)) EFC_Handler        ( void ) { handle_unknown( 17 ); }
	void __attribute__((weak)) UART0_Handler      ( void ) { handle_unknown( 18 ); }
	void __attribute__((weak)) SMC_Handler        ( void ) { handle_unknown( 19 ); }
	void __attribute__((weak)) PIOA_Handler       ( void ) { handle_unknown( 20 ); }
	void __attribute__((weak)) PIOB_Handler       ( void ) { handle_unknown( 21 ); }
	#ifdef _SAM4E_PIOC_INSTANCE_
	void __attribute__((weak)) PIOC_Handler       ( void ) { handle_unknown( 22 ); }
	#endif /* _SAM4E_PIOC_INSTANCE_ */
	void __attribute__((weak)) PIOD_Handler       ( void ) { handle_unknown( 23 ); }
	#ifdef _SAM4E_PIOE_INSTANCE_
	void __attribute__((weak)) PIOE_Handler       ( void ) { handle_unknown( 24 ); }
	#endif /* _SAM4E_PIOE_INSTANCE_ */
	void __attribute__((weak)) USART0_Handler     ( void ) { handle_unknown( 25 ); }
	void __attribute__((weak)) USART1_Handler     ( void ) { handle_unknown( 26 ); }
	void __attribute__((weak)) HSMCI_Handler      ( void ) { handle_unknown( 27 ); }
	void __attribute__((weak)) TWI0_Handler       ( void ) { handle_unknown( 28 ); }
	void __attribute__((weak)) TWI1_Handler       ( void ) { handle_unknown( 29 ); }
	void __attribute__((weak)) SPI_Handler        ( void ) { handle_unknown( 30 ); }
	void __attribute__((weak)) DMAC_Handler       ( void ) { handle_unknown( 31 ); }
	void __attribute__((weak)) TC0_Handler        ( void ) { handle_unknown( 32 ); }
	void __attribute__((weak)) TC1_Handler        ( void ) { handle_unknown( 33 ); }
	void __attribute__((weak)) TC2_Handler        ( void ) { handle_unknown( 34 ); }
	#ifdef _SAM4E_TC1_INSTANCE_
	void __attribute__((weak)) TC3_Handler        ( void ) { handle_unknown( 35 ); }
	void __attribute__((weak)) TC4_Handler        ( void ) { handle_unknown( 36 ); }
	void __attribute__((weak)) TC5_Handler        ( void ) { handle_unknown( 37 ); }
	#endif /* _SAM4E_TC1_INSTANCE_ */
	#ifdef _SAM4E_TC2_INSTANCE_
	void __attribute__((weak)) TC6_Handler        ( void ) { handle_unknown( 38 ); }
	void __attribute__((weak)) TC7_Handler        ( void ) { handle_unknown( 39 ); }
	void __attribute__((weak)) TC8_Handler        ( void ) { handle_unknown( 40 ); }
	#endif /* _SAM4E_TC2_INSTANCE_ */
	void __attribute__((weak)) AFEC0_Handler      ( void ) { handle_unknown( 41 ); }
	void __attribute__((weak)) AFEC1_Handler      ( void ) { handle_unknown( 42 ); }
	void __attribute__((weak)) DACC_Handler       ( void ) { handle_unknown( 43 ); }
	void __attribute__((weak)) ACC_Handler        ( void ) { handle_unknown( 44 ); }
	void __attribute__((weak)) ARM_Handler        ( void ) { handle_unknown( 45 ); }
	void __attribute__((weak)) UDP_Handler        ( void ) { handle_unknown( 46 ); }
	void __attribute__((weak)) PWM_Handler        ( void ) { handle_unknown( 47 ); }
	void __attribute__((weak)) CAN0_Handler       ( void ) { handle_unknown( 48 ); }
	#ifdef _SAM4E_CAN1_INSTANCE_
	void __attribute__((weak)) CAN1_Handler       ( void ) { handle_unknown( 49 ); }
	#endif /* _SAM4E_CAN1_INSTANCE_ */
	void __attribute__((weak)) AES_Handler        ( void ) { handle_unknown( 50 ); }
	void __attribute__((weak)) GMAC_Handler       ( void ) { handle_unknown( 51 ); }
	void __attribute__((weak)) UART1_Handler      ( void ) { handle_unknown( 52 ); }

#else

	/* Cortex-M4 core handlers */
	void Reset_Handler      (void  ) __attribute__ ((weak, alias("Dummy_Handler")));
	void NMI_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void HardFault_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void MemManage_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void BusFault_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void UsageFault_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void SVC_Handler        ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void DebugMon_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void PendSV_Handler     ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void SysTick_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));

	/* Peripherals handlers */
	void SUPC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void RSTC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void RTC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void RTT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void WDT_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void PMC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void EFC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void UART0_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void SMC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void PIOA_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void PIOB_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#ifdef _SAM4E_PIOC_INSTANCE_
	void PIOC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#endif /* _SAM4E_PIOC_INSTANCE_ */
	void PIOD_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#ifdef _SAM4E_PIOE_INSTANCE_
	void PIOE_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#endif /* _SAM4E_PIOE_INSTANCE_ */
	void USART0_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void USART1_Handler ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void HSMCI_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TWI0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TWI1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void SPI_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void DMAC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC0_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC1_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC2_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#ifdef _SAM4E_TC1_INSTANCE_
	void TC3_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC4_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC5_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#endif /* _SAM4E_TC1_INSTANCE_ */
	#ifdef _SAM4E_TC2_INSTANCE_
	void TC6_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC7_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void TC8_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#endif /* _SAM4E_TC2_INSTANCE_ */
	void AFEC0_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void AFEC1_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void DACC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void ACC_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void ARM_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void UDP_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void PWM_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void CAN0_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#ifdef _SAM4E_CAN1_INSTANCE_
	void CAN1_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	#endif /* _SAM4E_CAN1_INSTANCE_ */
	void AES_Handler    ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void GMAC_Handler   ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
	void UART1_Handler  ( void ) __attribute__ ((weak, alias("Dummy_Handler")));
#endif

#endif /* __GNUC__ */

#ifdef __ICCARM__
/* Cortex-M4 core handlers */
#pragma weak Reset_Handler=Dummy_Handler
#pragma weak NMI_Handler=Dummy_Handler
#pragma weak HardFault_Handler=Dummy_Handler
#pragma weak MemManage_Handler=Dummy_Handler
#pragma weak BusFault_Handler=Dummy_Handler
#pragma weak UsageFault_Handler=Dummy_Handler
#pragma weak SVC_Handler=Dummy_Handler
#pragma weak DebugMon_Handler=Dummy_Handler
#pragma weak PendSV_Handler=Dummy_Handler
#pragma weak SysTick_Handler=Dummy_Handler

/* Peripherals handlers */
#pragma weak SUPC_Handler=Dummy_Handler
#pragma weak RSTC_Handler=Dummy_Handler
#pragma weak RTC_Handler=Dummy_Handler
#pragma weak RTT_Handler=Dummy_Handler
#pragma weak WDT_Handler=Dummy_Handler
#pragma weak PMC_Handler=Dummy_Handler
#pragma weak EFC_Handler=Dummy_Handler
#pragma weak UART0_Handler=Dummy_Handler
#pragma weak SMC_Handler=Dummy_Handler
#pragma weak PIOA_Handler=Dummy_Handler
#pragma weak PIOB_Handler=Dummy_Handler
#ifdef _SAM4E_PIOC_INSTANCE_
#pragma weak PIOC_Handler=Dummy_Handler
#endif /* _SAM4E_PIOC_INSTANCE_ */
#pragma weak PIOD_Handler=Dummy_Handler
#ifdef _SAM4E_PIOE_INSTANCE_
#pragma weak PIOE_Handler=Dummy_Handler
#endif /* _SAM4E_PIOE_INSTANCE_ */
#pragma weak USART0_Handler=Dummy_Handler
#pragma weak USART1_Handler=Dummy_Handler
#pragma weak HSMCI_Handler=Dummy_Handler
#pragma weak TWI0_Handler=Dummy_Handler
#pragma weak TWI1_Handler=Dummy_Handler
#pragma weak SPI_Handler=Dummy_Handler
#pragma weak DMAC_Handler=Dummy_Handler
#pragma weak TC0_Handler=Dummy_Handler
#pragma weak TC1_Handler=Dummy_Handler
#pragma weak TC2_Handler=Dummy_Handler
#ifdef _SAM4E_TC1_INSTANCE_
#pragma weak TC3_Handler=Dummy_Handler
#pragma weak TC4_Handler=Dummy_Handler
#pragma weak TC5_Handler=Dummy_Handler
#endif /* _SAM4E_TC1_INSTANCE_ */
#ifdef _SAM4E_TC2_INSTANCE_
#pragma weak TC6_Handler=Dummy_Handler
#pragma weak TC7_Handler=Dummy_Handler
#pragma weak TC8_Handler=Dummy_Handler
#endif /* _SAM4E_TC2_INSTANCE_ */
#pragma weak AFEC0_Handler=Dummy_Handler
#pragma weak AFEC1_Handler=Dummy_Handler
#pragma weak DACC_Handler=Dummy_Handler
#pragma weak ACC_Handler=Dummy_Handler
#pragma weak ARM_Handler=Dummy_Handler
#pragma weak UDP_Handler=Dummy_Handler
#pragma weak PWM_Handler=Dummy_Handler
#pragma weak CAN0_Handler=Dummy_Handler
#ifdef _SAM4E_CAN1_INSTANCE_
#pragma weak CAN1_Handler=Dummy_Handler
#endif /* _SAM4E_CAN1_INSTANCE_ */
#pragma weak AES_Handler=Dummy_Handler
#pragma weak GMAC_Handler=Dummy_Handler
#pragma weak UART1_Handler=Dummy_Handler
#endif /* __ICCARM__ */

/**
 * \brief Default interrupt handler for unused IRQs.
 */
void Dummy_Handler(void)
{
	while (1) {
	}
}

//void Dummy_Handler_x1(void) { while (1) { } }
//void Dummy_Handler_x2(void) { while (1) { } }
//void Dummy_Handler_x3(void) { while (1) { } }
//void Dummy_Handler_x4(void) { while (1) { } }
//void Dummy_Handler_x5(void) { while (1) { } }
//void Dummy_Handler_x6(void) { while (1) { } }
//void Dummy_Handler_x7(void) { while (1) { } }
//void Dummy_Handler_x8(void) { while (1) { } }
//void Dummy_Handler_x9(void) { while (1) { } }
//void Dummy_Handler_x10(void) { while (1) { } }

/* @cond 0 */
/**INDENT-OFF**/
#ifdef __cplusplus
}
#endif
/**INDENT-ON**/
/* @endcond */
