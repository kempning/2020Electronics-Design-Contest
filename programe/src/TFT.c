#include "TFT.h"

//���ASCII�������ֵ
unsigned char code Zk_ASCII8X16[]=
{
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x18,0x08,0xc8,0x08,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x7f,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0x60,0xe0,
  0x60,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x18,0x10,
  0x10,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x08,0x08,0x08,0x0c,0x0c,0x0c,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x6c,0x38,0x10,0x00,0x7c,0xc6,0x70,0x1c,
  0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x38,0x6c,0x00,0x78,
  0x0c,0x7c,0xcc,0xcc,0x76,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x7c,0xc6,0x70,0xc0,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x6c,0x96,0x7c,0xd0,0xd6,0x6c,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0x06,0x06,0xc6,
  0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x6c,0xc6,0xc6,0xfe,
  0xc6,0xc6,0x6c,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x10,0x38,0x28,0x6c,0x44,0xc6,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7c,0xc6,0x06,0xfe,0xc6,0x7c,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdc,0x66,0x66,0x66,0xf6,0x06,
  0x06,0x66,0x3c,0x00,0x00,0x00,0x00,0x6c,0x38,0xf8,0x0c,0x7e,0xc6,
  0xc6,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x1b,0x18,
  0x18,0x18,0x18,0x18,0x18,0x18,0xd8,0x70,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xfe,0x86,0x0c,0x18,0x0c,0x06,0x06,0xc6,0x7c,0x00,0x00,
  0x00,0x00,0x76,0xdc,0x00,0x00,0x78,0x0c,0x7c,0xcc,0xcc,0x76,0x00,
  0x00,0x00,0x00,0x00,0x00,0x76,0xdc,0x00,0x00,0x7c,0xc6,0x06,0x06,
  0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0xdc,0x00,0x00,0xdc,
  0x66,0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x76,0x99,0x9f,0x98,0x99,0x6f,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0c,0x06,0x06,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,
  0x66,0x66,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x3c,
  0x3c,0x3c,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
  0xc6,0xc6,0xc6,0x44,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x6c,0x6c,0xfe,0x6c,0x6c,0x6c,0xfe,0x6c,0x6c,
  0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x7c,0xc6,0xc2,0xc0,0x7c,0x06,
  0x86,0xc6,0x7c,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc3,
  0xc6,0x0c,0x18,0x30,0x63,0xc3,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x38,0x6c,0x6c,0x38,0x76,0xdc,0xcc,0xcc,0x76,0x00,0x00,0x00,0x00,
  0x00,0x00,0x30,0x30,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x30,0x60,0x60,0x60,0x60,0x60,
  0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x0c,0x06,0x06,
  0x06,0x06,0x06,0x0c,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x6c,0x38,0xfe,0x38,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x18,0x18,0x18,0x7e,0x18,0x18,0x18,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,
  0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x02,0x06,0x0c,0x18,0x30,0x60,0xc0,0x80,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7c,0xc6,0xce,0xde,0xf6,0xe6,0xc6,0xc6,0x7c,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x38,0x78,0x18,0x18,0x18,
  0x18,0x18,0x7e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0x06,
  0x0c,0x18,0x30,0x60,0xc6,0xfe,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7c,0xc6,0x06,0x06,0x3c,0x06,0x06,0xc6,0x7c,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x0c,0x1c,0x3c,0x6c,0xcc,0xfe,0x0c,0x0c,0x1e,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xc0,0xc0,0xc0,0xfc,0x06,0x06,
  0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x60,0xc0,0xc0,
  0xfc,0xc6,0xc6,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,
  0xc6,0x06,0x0c,0x18,0x30,0x30,0x30,0x30,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x7c,0xc6,0xc6,0xc6,0x7c,0xc6,0xc6,0xc6,0x7c,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0xc6,0xc6,0x7e,0x06,0x06,0x0c,
  0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x00,
  0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,
  0x18,0x00,0x00,0x00,0x18,0x18,0x30,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x06,0x0c,0x18,0x30,0x60,0x30,0x18,0x0c,0x06,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x00,0x00,0x7e,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x30,0x18,0x0c,0x06,0x0c,
  0x18,0x30,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0xc6,
  0x0c,0x18,0x18,0x00,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7c,0xc6,0xc6,0xde,0xde,0xde,0xdc,0xc0,0x7c,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x10,0x38,0x6c,0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x66,0x66,0x66,0x7c,0x66,0x66,
  0x66,0xfc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x66,0xc2,0xc0,
  0xc0,0xc0,0xc2,0x66,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf8,
  0x6c,0x66,0x66,0x66,0x66,0x66,0x6c,0xf8,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xfe,0x66,0x62,0x68,0x78,0x68,0x62,0x66,0xfe,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xfe,0x66,0x62,0x68,0x78,0x68,0x60,0x60,
  0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x66,0xc2,0xc0,0xc0,
  0xde,0xc6,0x66,0x3a,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,
  0xc6,0xc6,0xfe,0xc6,0xc6,0xc6,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x3c,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x1e,0x0c,0x0c,0x0c,0x0c,0x0c,0xcc,0xcc,0x78,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe6,0x66,0x6c,0x6c,0x78,0x6c,
  0x6c,0x66,0xe6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xf0,0x60,0x60,
  0x60,0x60,0x60,0x62,0x66,0xfe,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xc6,0xee,0xfe,0xd6,0xc6,0xc6,0xc6,0xc6,0xc6,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0xc6,0xe6,0xf6,0xfe,0xde,0xce,0xc6,0xc6,0xc6,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x38,0x6c,0xc6,0xc6,0xc6,0xc6,0xc6,
  0x6c,0x38,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfc,0x66,0x66,0x66,
  0x7c,0x60,0x60,0x60,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,
  0xc6,0xc6,0xc6,0xd6,0xde,0x7c,0x0c,0x0e,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xfc,0x66,0x66,0x66,0x7c,0x6c,0x66,0x66,0xe6,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0xc6,0x60,0x38,0x0c,0xc6,0xc6,
  0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7e,0x5a,0x18,0x18,0x18,
  0x18,0x18,0x18,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,
  0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xc6,0x6c,0x38,0x10,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0xc6,0xc6,0xd6,0xfe,0xee,0xc6,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0x6c,0x38,0x6c,
  0xc6,0xc6,0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,
  0x6c,0x38,0x38,0x38,0x38,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0xfe,0xc6,0x8c,0x18,0x30,0x60,0xc2,0xc6,0xfe,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x3c,0x30,0x30,0x30,0x30,0x30,0x30,0x30,0x3c,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xc0,0xe0,0x70,0x38,0x1c,0x0e,
  0x06,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3c,0x0c,0x0c,0x0c,
  0x0c,0x0c,0x0c,0x0c,0x3c,0x00,0x00,0x00,0x00,0x00,0x10,0x38,0x6c,
  0xc6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,
  0x00,0x00,0x00,0x00,0x30,0x30,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x0c,
  0x7c,0xcc,0xcc,0x76,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xe0,0x60,
  0x60,0x78,0x6c,0x66,0x66,0x66,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x7c,0xc6,0xc0,0xc0,0xc6,0x7c,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x1c,0x0c,0x0c,0x3c,0x6c,0xcc,0xcc,0xcc,0x76,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7c,0xc6,0xfe,
  0xc0,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1c,0x36,0x32,
  0x30,0x7c,0x30,0x30,0x30,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x76,0xcc,0xcc,0xcc,0x7c,0x0c,0xcc,0x78,0x00,0x00,
  0x00,0x00,0x00,0xe0,0x60,0x60,0x6c,0x76,0x66,0x66,0x66,0xe6,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,0x00,0x38,0x18,0x18,0x18,
  0x18,0x3c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x06,0x00,0x0e,
  0x06,0x06,0x06,0x06,0x66,0x66,0x3c,0x00,0x00,0x00,0x00,0x00,0xe0,
  0x60,0x60,0x66,0x6c,0x78,0x6c,0x66,0xe6,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x38,0x18,0x18,0x18,0x18,0x18,0x18,0x18,0x3c,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x44,0xfe,0xd6,0xd6,0xd6,
  0xd6,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdc,0x66,
  0x66,0x66,0x66,0x66,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x7c,0xc6,0xc6,0xc6,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0xdc,0x66,0x66,0x66,0x7c,0x60,0x60,0xf0,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x76,0xcc,0xcc,0xcc,0x7c,0x0c,
  0x0c,0x1e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xdc,0x76,0x66,
  0x60,0x60,0xf0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x7c,0xc6,0x70,0x1c,0xc6,0x7c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x10,0x30,0x30,0xfc,0x30,0x30,0x30,0x36,0x1c,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0xcc,0xcc,0xcc,0xcc,0xcc,0x76,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0x6c,
  0x38,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xc6,
  0xc6,0xc6,0xd6,0xfe,0x6c,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0xc6,0x6c,0x38,0x38,0x6c,0xc6,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0xc6,0xc6,0xc6,0xc6,0x7e,0x06,0x0c,0x78,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xfe,0xcc,0x18,0x30,0x66,
  0xfe,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0e,0x18,0x18,0x18,0x70,
  0x18,0x18,0x18,0x0e,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x18,
  0x18,0x18,0x00,0x18,0x18,0x18,0x18,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x70,0x18,0x18,0x18,0x0e,0x18,0x18,0x18,0x70,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x76,0xdc,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,
  0x00,0x00 
 };
/*************************************************
��������delay_ms
���ܣ���ʱ
��ڲ�����unsigned int time ʱ��
����ֵ����
*************************************************/
void delay_ms(unsigned int time)
{
	unsigned int i,j;
	for(i=0;i<time;i++)
   		for(j=0;j<250;j++);
}
/*************************************************
��������writeSPIData
���ܣ���SPIд��8λ����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeSPIData(unsigned char Data)
{
	unsigned char i=0;
	for(i=8; i>0; i--)
	{
		if(Data & 0x80)	
			sda=1; //�������
		else 
			sda=0;
		scl=0;
		scl=1;
		Data<<=1;
	}
}
/*************************************************
��������writeTFTIndex
���ܣ���TFTд����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeTFTIndex(unsigned char Data)
{
	cs=0;
	rs=0;
	writeSPIData(Data); 		
	cs=1;
}
/*************************************************
��������writeTFTData8
���ܣ���TFTд8λ����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeTFTData8(unsigned char Data)
{	
	unsigned char i=0;
	cs=0;
	rs=1;
	writeSPIData(Data); 	
	cs=1;
}
/*************************************************
��������writeTFTData16
���ܣ���TFTд16λ����
��ڲ�����unsigned int Data ��д������
����ֵ����
*************************************************/
void writeTFTData16(unsigned int Data)
{
	unsigned char i=0;
	cs=0;
	rs=1;
	writeSPIData(Data>>8); 	//д���8λ����
	writeSPIData(Data); 	//д���8λ����
	cs=1;
}
/*************************************************
��������resetTFT
���ܣ���λTFT
��ڲ�������
����ֵ����
*************************************************/
void resetTFT()
{
    reset=0;
    delay_ms(100);
    reset=1;
    delay_ms(100);
}
/*************************************************
��������initTFT
���ܣ���ʼ��TFT��ʾ��
��ڲ�������
����ֵ����
*************************************************/
void initTFT()
{	
	resetTFT();
	writeTFTIndex(0x11);//Sleep exit 
	delay_ms (120);
		
	//ST7735R Frame Rate
	writeTFTIndex(0xB1); 
	writeTFTData8(0x01); 
	writeTFTData8(0x2C); 
	writeTFTData8(0x2D); 

	writeTFTIndex(0xB2); 
	writeTFTData8(0x01); 
	writeTFTData8(0x2C); 
	writeTFTData8(0x2D); 

	writeTFTIndex(0xB3); 
	writeTFTData8(0x01); 
	writeTFTData8(0x2C); 
	writeTFTData8(0x2D); 
	writeTFTData8(0x01); 
	writeTFTData8(0x2C); 
	writeTFTData8(0x2D); 
	
	writeTFTIndex(0xB4); //Column inversion 
	writeTFTData8(0x07); 
	
	//ST7735R Power Sequence
	writeTFTIndex(0xC0); 
	writeTFTData8(0xA2); 
	writeTFTData8(0x02); 
	writeTFTData8(0x84);
	 
	writeTFTIndex(0xC1); 
	writeTFTData8(0xC5); 

	writeTFTIndex(0xC2); 
	writeTFTData8(0x0A); 
	writeTFTData8(0x00); 

	writeTFTIndex(0xC3); 
	writeTFTData8(0x8A); 
	writeTFTData8(0x2A); 

	writeTFTIndex(0xC4); 
	writeTFTData8(0x8A); 
	writeTFTData8(0xEE); 
	
	writeTFTIndex(0xC5); //VCOM 
	writeTFTData8(0x0E); 
	
	writeTFTIndex(0x36); //MX, MY, RGB mode 
#ifdef USE_LANDSCAPE
	writeTFTData8(0xA8); //����C8 ����08 A8
#else
	writeTFTData8(0xC8); //����C8 ����08 A8
#endif	
	
	//ST7735R Gamma Sequence
	writeTFTIndex(0xe0); 
	writeTFTData8(0x0f); 
	writeTFTData8(0x1a); 
	writeTFTData8(0x0f); 
	writeTFTData8(0x18); 
	writeTFTData8(0x2f); 
	writeTFTData8(0x28); 
	writeTFTData8(0x20); 
	writeTFTData8(0x22); 
	writeTFTData8(0x1f); 
	writeTFTData8(0x1b); 
	writeTFTData8(0x23); 
	writeTFTData8(0x37); 
	writeTFTData8(0x00); 	
	writeTFTData8(0x07); 
	writeTFTData8(0x02); 
	writeTFTData8(0x10); 

	writeTFTIndex(0xe1); 
	writeTFTData8(0x0f); 
	writeTFTData8(0x1b); 
	writeTFTData8(0x0f); 
	writeTFTData8(0x17); 
	writeTFTData8(0x33); 
	writeTFTData8(0x2c); 
	writeTFTData8(0x29); 
	writeTFTData8(0x2e); 
	writeTFTData8(0x30); 
	writeTFTData8(0x30); 
	writeTFTData8(0x39); 
	writeTFTData8(0x3f); 
	writeTFTData8(0x00); 
	writeTFTData8(0x07); 
	writeTFTData8(0x03); 
	writeTFTData8(0x10);  
	
	writeTFTIndex(0x2a);
	writeTFTData8(0x00);
	writeTFTData8(0x00+2);
	writeTFTData8(0x00);
	writeTFTData8(0x80+2);

	writeTFTIndex(0x2b);
	writeTFTData8(0x00);
	writeTFTData8(0x00+3);
	writeTFTData8(0x00);
	writeTFTData8(0x80+3);
	
	writeTFTIndex(0xF0); //Enable test command  
	writeTFTData8(0x01); 
	writeTFTIndex(0xF6); //Disable ram power save mode 
	writeTFTData8(0x00); 
	
	writeTFTIndex(0x3A); //65k mode 
	writeTFTData8(0x05); 
	
	
	writeTFTIndex(0x29);//Display on
}
/*************************************************
��������setTFTRegion
���ܣ�����TFT��ʾ�����ڴ�����д�������Զ�����
��ڲ�����	unsigned int x_start,	//��ʼ��������x 
			unsigned int y_start, 	//��ʼ��������y
			unsigned int x_end,  	//��β��������x
			unsigned int y_end 		//��β��������y
����ֵ����
*************************************************/
void setTFTRegion(unsigned int x_start, unsigned int y_start, unsigned int x_end, unsigned int y_end)
{	
#ifdef USE_LANDSCAPE//ʹ�ú���ģʽ
	writeTFTIndex(0x2a);
	writeTFTData8(0x00);
	writeTFTData8(x_start+3);
	writeTFTData8(0x00);
	writeTFTData8(x_end+3);

	writeTFTIndex(0x2b);
	writeTFTData8(0x00);
	writeTFTData8(y_start+2);
	writeTFTData8(0x00);
	writeTFTData8(y_end+2);

#else//����ģʽ	
	writeTFTIndex(0x2a);
	writeTFTData8(0x00);
	writeTFTData8(x_start+2);
	writeTFTData8(0x00);
	writeTFTData8(x_end+2);

	writeTFTIndex(0x2b);
	writeTFTData8(0x00);
	writeTFTData8(y_start + 3);
	writeTFTData8(0x00);
	writeTFTData8(y_end + 3);	
#endif
	writeTFTIndex(0x2c);
}
/*************************************************
��������renovateTFT
���ܣ�����ɫˢ����ʾ��
��ڲ�����int color ��ɫѡ��
����ֵ����
*************************************************/
void renovateTFT(int color)
{
 	unsigned char i,j;
	setTFTRegion(0, 0, 128-1, 128-1);
 	for (i = 0; i < 128; i ++)
    	for (j = 0;j < 128; j ++)
        	writeTFTData16(color);
}
/*************************************************
��������putPixel
���ܣ�����һ��2*2����ɫ�����
��ڲ�����	unsigned int x_start,	��������x
			unsigned int y_start,	��������y
			unsigned int color	 	���õ���ɫ
����ֵ����
*************************************************/
void putPixel(unsigned int x_start, unsigned int y_start, unsigned int color)
{
	setTFTRegion(x_start,y_start,x_start+1,y_start+1);
	writeTFTData16(color);
}
/*************************************************
��������displayASCII8X16
���ܣ���ʾASCII�룬��СΪ8*16����
��ڲ�����	unsigned int x0,				��������x 
			unsigned int y0, 				��������y
			unsigned char *s, 				��ʾ���ַ���
			unsigned int forecolor, 		ǰ����ɫ
			unsigned int backgroundcolor	������ɫ
����ֵ����
*************************************************/
void displayASCII8X16(unsigned int x0, unsigned int y0, unsigned char *s, unsigned int size, unsigned int forecolor, unsigned int backgroundcolor)
{
	int i,j,x,y,xx;
	
	long int ulOffset;
	
	char  xdata ywbuf[32];
	
	for(i = 0; i< size; i++)
	{
		if(s[i] >= 161)
			return;
		else
		{
			ulOffset = (long int)s[i] * 16;
			for (j = 0; j < 16; j ++)
			{
				ywbuf[j] = Zk_ASCII8X16[ulOffset+j];
			}
			
			for(y = 0; y < 16; y++)
			{
				for(x = 0; x < 8; x++) 
				{
					if(ywbuf[y] & (0x80 >> x))
					{
						xx = x0 + x + i * 8;
						putPixel(xx, y + y0, forecolor);
					}
					else
					{
						xx=x0 + x + i * 8;
						putPixel(xx, y + y0, backgroundcolor);	
					}
				}
			}
		
		}
	}     	
}