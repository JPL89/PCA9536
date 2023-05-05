// @File		PCA9536.H	 		
// @Author		JOSIMAR PEREIRA LEITE
// @country		Brazil
// @Date		05/05/23
//
//
// Copyright (C) 2023  JOSIMAR PEREIRA LEITE
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
#ifndef PCA9536_H
#define PCA9536_H

#define PCA9536_SLA_W           0x82
#define PCA9536_SLA_R           0x83

#define PCA9536_INPUT_PORT      0x00
#define PCA9536_OUTPUT_PORT     0x01
#define PCA9536_POLARITY_INV    0x02
#define PCA9536_CONFIG          0x03

unsigned char PCA9536_Read(unsigned char reg)
{
    unsigned char data = 0;
    
    Wire_Start();
    Wire_Write(PCA9536_SLA_W);
    Wire_Write(reg);
    Wire_Start();
    Wire_Write(PCA9536_SLA_R);
    data = Wire_Nack();
    Wire_Stop();
    
    return ( data );
}

void PCA9536_Write(unsigned char reg, unsigned char data)
{
    Wire_Start();
    Wire_Write(PCA9536_SLA_W);
    Wire_Write(reg);
    Wire_Write(data);
    Wire_Stop();
}

#endif
