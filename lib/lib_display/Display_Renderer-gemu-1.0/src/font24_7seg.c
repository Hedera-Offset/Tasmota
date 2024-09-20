/**
  ******************************************************************************
  * @file    font24.c
  * @author  MCD Application Team
  * @version V1.0.0
  * @date    18-February-2014
  * @brief   This file provides text font24 for STM32xx-EVAL's LCD driver.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT(c) 2014 STMicroelectronics</center></h2>
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
#include "fonts.h"
#include <pgmspace.h>

const uint8_t Font24_Table_7seg [] PROGMEM =
{
	// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @72 '!' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x02,0x00, //       #         
	0x02,0x00, //       #         
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @144 '"' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x1C,0xE0, //    ###  ###     
	0x1C,0xE0, //    ###  ###     
	0x1C,0xE0, //    ###  ###     
	0x08,0x40, //     #    #      
	0x08,0x40, //     #    #      
	0x08,0x40, //     #    #      
	0x08,0x40, //     #    #      
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @216 '#' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x0C,0xC0, //     ##  ##      
	0x0C,0xC0, //     ##  ##      
	0x0C,0xC0, //     ##  ##      
	0x0C,0xC0, //     ##  ##      
	0x0C,0xC0, //     ##  ##      
	0x7F,0xF0, //  ###########    
	0x7F,0xF0, //  ###########    
	0x0C,0xC0, //     ##  ##      
	0x19,0x80, //    ##  ##       
	0x7F,0xF0, //  ###########    
	0x7F,0xF0, //  ###########    
	0x19,0x80, //    ##  ##       
	0x19,0x80, //    ##  ##       
	0x19,0x80, //    ##  ##       
	0x19,0x80, //    ##  ##       
	0x19,0x80, //    ##  ##       
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @288 '$' (16 pixels wide)
	0x00,0x00, //                 
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x0F,0x60, //     #### ##     
	0x1F,0xE0, //    ########     
	0x30,0xE0, //   ##    ###     
	0x30,0xE0, //   ##    ###     
	0x38,0x00, //   ###           
	0x1F,0x00, //    #####        
	0x0F,0xC0, //     ######      
	0x01,0xE0, //        ####     
	0x30,0x60, //   ##     ##     
	0x38,0x60, //   ###    ##     
	0x38,0xE0, //   ###   ###     
	0x3F,0xC0, //   ########      
	0x37,0x80, //   ## ####       
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @360 '%' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x0F,0x00, //     ####        
	0x1F,0x80, //    ######       
	0x39,0xC0, //   ###  ###      
	0x30,0xC0, //   ##    ##      
	0x30,0xC0, //   ##    ##      
	0x39,0xC0, //   ###  ###      
	0x1F,0xF0, //    #########    
	0x0F,0xC0, //     ######      
	0x3F,0xE0, //   #########     
	0x0E,0x70, //     ###  ###    
	0x0C,0x30, //     ##    ##    
	0x0C,0x30, //     ##    ##    
	0x0E,0x70, //     ###  ###    
	0x07,0xE0, //      ######     
	0x03,0xC0, //       ####      
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @432 '&' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x07,0xE0, //      ######     
	0x0F,0xE0, //     #######     
	0x18,0xC0, //    ##   ##      
	0x18,0x00, //    ##           
	0x18,0x00, //    ##           
	0x0C,0x00, //     ##          
	0x0E,0x00, //     ###         
	0x1F,0x38, //    #####  ###   
	0x3B,0xF8, //   ### #######   
	0x31,0xE0, //   ##   ####     
	0x30,0xE0, //   ##    ###     
	0x1F,0xF8, //    ##########   
	0x0F,0xB8, //     ##### ###   
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @504 ''' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x02,0x00, //       #         
	0x02,0x00, //       #         
	0x02,0x00, //       #         
	0x02,0x00, //       #         
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @576 '(' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x30, //           ##    
	0x00,0x70, //          ###    
	0x00,0xE0, //         ###     
	0x01,0xE0, //        ####     
	0x01,0xC0, //        ###      
	0x01,0xC0, //        ###      
	0x03,0x80, //       ###       
	0x03,0x80, //       ###       
	0x03,0x80, //       ###       
	0x03,0x80, //       ###       
	0x03,0x80, //       ###       
	0x03,0x80, //       ###       
	0x01,0xC0, //        ###      
	0x01,0xC0, //        ###      
	0x00,0xE0, //         ###     
	0x00,0xE0, //         ###     
	0x00,0x70, //          ###    
	0x00,0x30, //           ##    
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @648 ')' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x30,0x00, //   ##            
	0x38,0x00, //   ###           
	0x1C,0x00, //    ###          
	0x1C,0x00, //    ###          
	0x0E,0x00, //     ###         
	0x0E,0x00, //     ###         
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x07,0x00, //      ###        
	0x0E,0x00, //     ###         
	0x0E,0x00, //     ###         
	0x1E,0x00, //    ####         
	0x1C,0x00, //    ###          
	0x38,0x00, //   ###           
	0x30,0x00, //   ##            
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @720 '*' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x3B,0x70, //   ### ## ###    
	0x3F,0xF0, //   ##########    
	0x0F,0xC0, //     ######      
	0x07,0x80, //      ####       
	0x07,0x80, //      ####       
	0x0C,0xC0, //     ##  ##      
	0x0C,0xC0, //     ##  ##      
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @792 '+' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x7F,0xF8, //  ############   
	0x7F,0xF8, //  ############   
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @864 ',' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x01,0xC0, //        ###      
	0x01,0x80, //        ##       
	0x03,0x80, //       ###       
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x06,0x00, //      ##         
	0x06,0x00, //      ##         
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @936 '-' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x3F,0xF0, //   ##########    
	0x3F,0xF0, //   ##########    
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @1008 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x07,0x80, //      ####       
	0x07,0x80, //      ####       
	0x07,0x80, //      ####       
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @1080 '/' (16 pixels wide)
	0x00,0x30, //           ##    
	0x00,0x30, //           ##    
	0x00,0x70, //          ###    
	0x00,0x60, //          ##     
	0x00,0xE0, //         ###     
	0x00,0xC0, //         ##      
	0x00,0xC0, //         ##      
	0x01,0x80, //        ##       
	0x01,0x80, //        ##       
	0x03,0x00, //       ##        
	0x03,0x00, //       ##        
	0x06,0x00, //      ##         
	0x06,0x00, //      ##         
	0x0C,0x00, //     ##          
	0x0C,0x00, //     ##          
	0x1C,0x00, //    ###          
	0x18,0x00, //    ##           
	0x38,0x00, //   ###           
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x30,0x00, //   ##            
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x1F,0xF8, //    ##########   
	0x1F,0xF8, //    ##########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x1F,0xF8, //    ##########   
	0x1F,0xF8, //    ##########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x00, //                 

// @0 ' ' (16 pixels wide)
	0x00,0x00, //                 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x30,0x06, //   ##         ## 
	0x0F,0xF8, //     #########   
	0x0F,0xF8, //     #########   
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x06, //              ## 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 

// @1872 ':' (16 pixels wide)
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x01,0xE0, //        ####     
	0x01,0xE0, //        ####     
	0x01,0xE0, //        ####     
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x01,0xE0, //        ####     
	0x01,0xE0, //        ####     
	0x01,0xE0, //        ####     
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00, //                 
	0x00,0x00 //                 
};

sFONT Font24_7seg = {
  Font24_Table_7seg,
  16, /* Width */
  24, /* Height */
};

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
