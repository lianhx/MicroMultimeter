/*====================================================================================================*/
/*====================================================================================================*/
#include "drivers\stm32f3_system.h"
#include "modules\module_ssd1331.h"

#include "uMultimeter.h"
#include "uMultimeter_bsp.h"
/*====================================================================================================*/
/*====================================================================================================*/
void UM_Init( void )
{
  UM_BSP_GPIO_Init();
//  SSD1331_Config();
//  delay_ms(100);

//  SSD1331_Init();
//  OLED_Clear(RED);
//  OLED_TestColoBar();
}
/*====================================================================================================*/
/*====================================================================================================*/
