#define STM32F10X_HD
#define  USART_TX_BUFFER_SIZE 300
#define  USART_RX_BUFFER_SIZE 300
#define  OSC_FREQ      ((uint32_t)8000000)
#define  MEMA_BUFFER_SIZE 40000
#define  Tos_TaskTotal            20      //����ش�С
#define  Tos_RootTaskStackSize    2000
#define  Tos_DeviceTotal         10     //�豸�ش�С
#define  Tos_TaskWatchDog        20000   //��������λʱ��
#define  Tos_Cpu_Freq						72000000	 //ϵͳ����Ƶ��
#define  Board_Name             "TP502-T" 
#define  CPU_Model              "STM32L151RBT6" 
#define  FLASH_PARAM_PAGE	      254
#define  USART_CH_SIZE 5
#define  COMPILE_MODE_DEBUG
//#define USART3_IRQ_EXT
#define Printf_Title "˫��"
#define USART3_BaudRate 9600
#define IWDG_ENABLE 
#define __ENT_KEY__ "f76215fad37d4a5faf1c66a46ddf50fd"