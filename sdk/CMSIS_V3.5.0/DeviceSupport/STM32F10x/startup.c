/*
 * Extracted from: startup_LPC1766.c - Startup file for LPC1766 Cortex-M3
 *
 * @author: kunilkuda_at_gmail_dot_com
 */

#ifdef GAUSS_MCU_BOARD_V1

extern void _estack; ///< This is global variable from linker script

/* We gave 'weak' attribute, so these functions can be aliased into a single
 * function
 */
void __attribute__((weak)) Reset_Handler(void);     /* Reset Handler */
void __attribute__((weak)) NMI_Handler(void);       /* NMI Handler */
void __attribute__((weak)) HardFault_Handler(void); /* Hard Fault Handler */
void __attribute__((weak)) MemManage_Handler(void); /* MPU Fault Handler */
void __attribute__((weak)) BusFault_Handler(void);  /* Bus Fault Handler */
void __attribute__((weak)) UsageFault_Handler(void);/* Usage Fault Handler */
void __attribute__((weak)) SVC_Handler(void);       /* SVCall Handler */
void __attribute__((weak)) DebugMon_Handler(void);  /* Debug Monitor Handler */
void __attribute__((weak)) PendSV_Handler(void);    /* PendSV Handler */
void __attribute__((weak)) SysTick_Handler(void);   /* SysTick Handler */

void __attribute__((weak)) WWDG_IRQHandler(void);
void __attribute__((weak)) PVD_IRQHandler(void);
void __attribute__((weak)) TAMPER_IRQHandler(void);
void __attribute__((weak)) RTC_IRQHandler(void);
void __attribute__((weak)) FLASH_IRQHandler(void);
void __attribute__((weak)) RCC_IRQHandler(void);
void __attribute__((weak)) EXTI0_IRQHandler(void);
void __attribute__((weak)) EXTI1_IRQHandler(void);
void __attribute__((weak)) EXTI2_IRQHandler(void);
void __attribute__((weak)) EXTI3_IRQHandler(void);
void __attribute__((weak)) EXTI4_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel1_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel2_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel3_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel4_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel5_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel6_IRQHandler(void);
void __attribute__((weak)) DMA1_Channel7_IRQHandler(void);
void __attribute__((weak)) ADC1_2_IRQHandler(void);
void __attribute__((weak)) USB_HP_CAN1_TX_IRQHandler(void);
void __attribute__((weak)) USB_LP_CAN1_RX0_IRQHandler(void);
void __attribute__((weak)) CAN1_RX1_IRQHandler(void);
void __attribute__((weak)) CAN1_SCE_IRQHandler(void);
void __attribute__((weak)) EXTI9_5_IRQHandler(void);
void __attribute__((weak)) TIM1_BRK_IRQHandler(void);
void __attribute__((weak)) TIM1_UP_IRQHandler(void);
void __attribute__((weak)) TIM1_TRG_COM_IRQHandler(void);
void __attribute__((weak)) TIM1_CC_IRQHandler(void);
void __attribute__((weak)) TIM2_IRQHandler(void);
void __attribute__((weak)) TIM3_IRQHandler(void);
void __attribute__((weak)) TIM4_IRQHandler(void);
void __attribute__((weak)) I2C1_EV_IRQHandler(void);
void __attribute__((weak)) I2C1_ER_IRQHandler(void);
void __attribute__((weak)) I2C2_EV_IRQHandler(void);
void __attribute__((weak)) I2C2_ER_IRQHandler(void);
void __attribute__((weak)) SPI1_IRQHandler(void);
void __attribute__((weak)) SPI2_IRQHandler(void);
void __attribute__((weak)) USART1_IRQHandler(void);
void __attribute__((weak)) USART2_IRQHandler(void);
void __attribute__((weak)) USART3_IRQHandler(void);
void __attribute__((weak)) EXTI15_10_IRQHandler(void);
void __attribute__((weak)) RTCAlarm_IRQHandler(void);
void __attribute__((weak)) USBWakeUp_IRQHandler(void);

/*
 * Ask GCC to put this array into .cs3.interrupt_vector section
 */
__attribute__ ((section(".isr_vector")))
void (* const g_pfnVectors[])(void) = {
	(void*)0x20005000,         // The initial stack pointer
	Reset_Handler,             // The reset handler
	NMI_Handler,               // The NMI handler
	HardFault_Handler,         // The hard fault handler
	MemManage_Handler,         // The MPU fault handler
	BusFault_Handler,          // The bus fault handler
	UsageFault_Handler,        // The usage fault handler
	0,                         // Reserved
	0,                         // Reserved
	0,                         // Reserved
	0,                         // Reserved
	SVC_Handler,               // SVCall handler
	DebugMon_Handler,          // Debug monitor handler
	0,                         // Reserved
	PendSV_Handler,            // The PendSV handler
	SysTick_Handler,           // The SysTick handler

	WWDG_IRQHandler,           // Window Watchdog
	PVD_IRQHandler,            // PVD through EXTI Line detect
	TAMPER_IRQHandler,         // Tamper
	RTC_IRQHandler,            // RTC
	FLASH_IRQHandler,          // Flash
	RCC_IRQHandler,            // RCC
	EXTI0_IRQHandler,          // EXTI Line 0
	EXTI1_IRQHandler,          // EXTI Line 1
	EXTI2_IRQHandler,          // EXTI Line 2
	EXTI3_IRQHandler,          // EXTI Line 3
	EXTI4_IRQHandler,          // EXTI Line 4
	DMA1_Channel1_IRQHandler,  // DMA1 Channel 1
	DMA1_Channel2_IRQHandler,  // DMA1 Channel 2
	DMA1_Channel3_IRQHandler,  // DMA1 Channel 3
	DMA1_Channel4_IRQHandler,  // DMA1 Channel 4
	DMA1_Channel5_IRQHandler,  // DMA1 Channel 5
	DMA1_Channel6_IRQHandler,  // DMA1 Channel 6
	DMA1_Channel7_IRQHandler,  // DMA1 Channel 7
	ADC1_2_IRQHandler,         // ADC1_2
	USB_HP_CAN1_TX_IRQHandler, // USB High Priority or CAN1 TX
	USB_LP_CAN1_RX0_IRQHandler,// USB Low  Priority or CAN1 RX0
	CAN1_RX1_IRQHandler,       // CAN1 RX1
	CAN1_SCE_IRQHandler,       // CAN1 SCE
	EXTI9_5_IRQHandler,        // EXTI Line 9..5
	TIM1_BRK_IRQHandler,       // TIM1 Break
	TIM1_UP_IRQHandler,        // TIM1 Update
	TIM1_TRG_COM_IRQHandler,   // TIM1 Trigger and Commutation
	TIM1_CC_IRQHandler,        // TIM1 Capture Compare
	TIM2_IRQHandler,           // TIM2
	TIM3_IRQHandler,           // TIM3
	TIM4_IRQHandler,           // TIM4
	I2C1_EV_IRQHandler,        // I2C1 Event
	I2C1_ER_IRQHandler,        // I2C1 Error
	I2C2_EV_IRQHandler,        // I2C2 Event
	I2C2_ER_IRQHandler,        // I2C2 Error
	SPI1_IRQHandler,           // SPI1
	SPI2_IRQHandler,           // SPI2
	USART1_IRQHandler,         // USART1
	USART2_IRQHandler,         // USART2
	USART3_IRQHandler,         // USART3
	EXTI15_10_IRQHandler,      // EXTI Line 15..10
	RTCAlarm_IRQHandler,       // RTC Alarm through EXTI Line
	USBWakeUp_IRQHandler,      // USB Wakeup from suspend
};

/* Here's how to alias multiple functions into single function
*/
void Default_Handler(void);
#pragma weak NMI_Handler                = Default_Handler        /* NMI handler */
#pragma weak HardFault_Handler          = Default_Handler        /* Hard Fault handler */
#pragma weak MemManage_Handler          = Default_Handler        /* MPU Fault Handler */
#pragma weak BusFault_Handler           = Default_Handler        /* Bus Fault Handler */
#pragma weak UsageFault_Handler         = Default_Handler        /* Usage Fault Handler */
#pragma weak SVC_Handler                = Default_Handler        /* SVCall Handler */
#pragma weak DebugMon_Handler           = Default_Handler        /* Debug Monitor Handler */
#pragma weak PendSV_Handler             = Default_Handler        /* PendSV Handler */
#pragma weak SysTick_Handler            = Default_Handler        /* SysTick Handler */

#pragma weak WWDG_IRQHandler            = Default_Handler        // Window Watchdog
#pragma weak PVD_IRQHandler             = Default_Handler        // PVD through EXTI Line detect
#pragma weak TAMPER_IRQHandler          = Default_Handler        // Tamper
#pragma weak RTC_IRQHandler             = Default_Handler        // RTC
#pragma weak FLASH_IRQHandler           = Default_Handler        // Flash
#pragma weak RCC_IRQHandler             = Default_Handler        // RCC
#pragma weak EXTI0_IRQHandler           = Default_Handler        // EXTI Line 0
#pragma weak EXTI1_IRQHandler           = Default_Handler        // EXTI Line 1
#pragma weak EXTI2_IRQHandler           = Default_Handler        // EXTI Line 2
#pragma weak EXTI3_IRQHandler           = Default_Handler        // EXTI Line 3
#pragma weak EXTI4_IRQHandler           = Default_Handler        // EXTI Line 4
#pragma weak DMA1_Channel1_IRQHandler 	= Default_Handler        // DMA1 Channel 1
#pragma weak DMA1_Channel2_IRQHandler   = Default_Handler        // DMA1 Channel 2
#pragma weak DMA1_Channel3_IRQHandler   = Default_Handler        // DMA1 Channel 3
#pragma weak DMA1_Channel4_IRQHandler   = Default_Handler        // DMA1 Channel 4
#pragma weak DMA1_Channel5_IRQHandler   = Default_Handler        // DMA1 Channel 5
#pragma weak DMA1_Channel6_IRQHandler   = Default_Handler        // DMA1 Channel 6
#pragma weak DMA1_Channel7_IRQHandler   = Default_Handler        // DMA1 Channel 7
#pragma weak ADC1_2_IRQHandler          = Default_Handler        // ADC1_2
#pragma weak USB_HP_CAN1_TX_IRQHandler  = Default_Handler        // USB High Priority or CAN1 TX
#pragma weak USB_LP_CAN1_RX0_IRQHandler = Default_Handler        // USB Low  Priority or CAN1 RX0
#pragma weak CAN1_RX1_IRQHandler        = Default_Handler        // CAN1 RX1
#pragma weak CAN1_SCE_IRQHandler        = Default_Handler        // CAN1 SCE
#pragma weak EXTI9_5_IRQHandler         = Default_Handler        // EXTI Line 9..5
#pragma weak TIM1_BRK_IRQHandler        = Default_Handler        // TIM1 Break
#pragma weak TIM1_UP_IRQHandler         = Default_Handler        // TIM1 Update
#pragma weak TIM1_TRG_COM_IRQHandler    = Default_Handler        // TIM1 Trigger and Commutation
#pragma weak TIM1_CC_IRQHandler         = Default_Handler        // TIM1 Capture Compare
#pragma weak TIM2_IRQHandler            = Default_Handler        // TIM2
#pragma weak TIM3_IRQHandler            = Default_Handler        // TIM3
#pragma weak TIM4_IRQHandler            = Default_Handler        // TIM4
#pragma weak I2C1_EV_IRQHandler         = Default_Handler        // I2C1 Event
#pragma weak I2C1_ER_IRQHandler         = Default_Handler        // I2C1 Error
#pragma weak I2C2_EV_IRQHandler         = Default_Handler        // I2C2 Event
#pragma weak I2C2_ER_IRQHandler         = Default_Handler        // I2C2 Error
#pragma weak SPI1_IRQHandler            = Default_Handler        // SPI1
#pragma weak SPI2_IRQHandler            = Default_Handler        // SPI2
#pragma weak USART1_IRQHandler          = Default_Handler        // USART1
#pragma weak USART2_IRQHandler          = Default_Handler        // USART2
#pragma weak USART3_IRQHandler          = Default_Handler        // USART3
#pragma weak EXTI15_10_IRQHandler       = Default_Handler        // EXTI Line 15..10
#pragma weak RTCAlarm_IRQHandler        = Default_Handler        // RTC Alarm through EXTI Line
#pragma weak USBWakeUp_IRQHandler       = Default_Handler        // USB Wakeup from suspend

void Default_Handler(void) {
	// Do nothing
}

extern void main(void);

void Reset_Handler(void) {
	main();
	while(1);
}

#else  /* GAUSS_MCU_BOARD_V1 */
#error SYSTEM NAME NOT DEFINED!
#endif

