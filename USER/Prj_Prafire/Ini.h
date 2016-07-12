#define STM32F10X_HD
#define  USART_TX_BUFFER_SIZE 300
#define  USART_RX_BUFFER_SIZE 300
#define  OSC_FREQ      ((uint32_t)8000000)
#define  MEMA_BUFFER_SIZE 40000
#define  Tos_TaskTotal            20      //任务池大小
#define  Tos_RootTaskStackSize    1000
#define  Tos_DeviceTotal         10     //设备池大小
#define  Tos_TaskWatchDog        2000   //任务卡死复位时间
#define  Tos_Cpu_Freq						72000000	 //系统工作频率
#define  Board_Name             "测试" 
#define  CPU_Model              "STM32F103VET6" 
#define  FLASH_PARAM_PAGE	      510
#define  LCD_SelectHX8347
#define  USART_CH_SIZE 5
#define  GUI_ENABLE
//#define  COMPILE_MODE_DEBUG
//#define  USBHID_ENABLE
//#define  USE_FULL_ASSERT

