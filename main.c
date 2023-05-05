// @File		MAIN.C		 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		BRAZIL
// @Date		01/05/23
//
//
// Copyright (C) 2023 JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#include "utils.h"
#include "wire.h"
#include "pca9536.h"

void main(void)
{
    __delay_ms(500);
    
    PIC18F2520();
    
    Wire_Init();
    
    PCA9536_Write(PCA9536_CONFIG, 0x00);
    
    PCA9536_Write(PCA9536_OUTPUT_PORT, 0x03);
    
    while(1)
    {
        
    }
    
    return;
}
