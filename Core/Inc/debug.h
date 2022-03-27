//
// Created by fumoumou on 2022/3/27.
//

#ifndef __DEBUG_H__
#define __DEBUG_H__

#include "usart.h"

#include "stdio.h"

#define debug(...){ \
    int  len = 0;                \
    len = snprintf(debug_buf,128,__VA_ARGS__); \
    if(len>0)       \
    {      \
           HAL_UART_Transmit(&huart1,(uint8_t *)debug_buf,len,0X0F);         \
    }                    \
}

#endif //_DEBUG_H__
