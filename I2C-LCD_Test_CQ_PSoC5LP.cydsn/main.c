/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>
#include "SPLC792-I2C.h"

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    I2CM_LCD_Start();
    // akizuki AQM1602A(3.3V)
    LCD_Init(0x3e, 32);
    
    CyDelay(100);
    
    LCD_Puts("Hello PSoC 5LP");

    for(;;)
    {
        LCD_SetPos(0, 1);
        LCD_Puts("Hello PSoC 5LP");
    }
}

/* [] END OF FILE */
