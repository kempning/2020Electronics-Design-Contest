#ifndef _TFT_H
#define _TFT_H

#include <reg51.h>

#define USE_LANDSCAPE//测试程序横竖屏切换，横屏请开启此宏，竖屏请注释该宏

//接线
sbit bl        =P2^4;//接模块BL引脚
sbit scl       =P2^5;//接模块CLK引脚
sbit sda       =P2^3;//接模块DIN/MOSI引脚
sbit rs        =P2^2;//接模块D/C引脚
sbit cs        =P2^0;//接模块CE引脚
sbit reset     =P2^1;//接模块RST引脚

//定义常用颜色
#define RED  	0xf800
#define GREEN	0x07e0
#define BLUE 	0x001f
#define WHITE	0xffff
#define BLACK	0x0000
#define YELLOW  0xFFE0
#define GRAY0   0xEF7D   
#define GRAY1   0x8410      	
#define GRAY2   0x4208  

/*************************************************
函数名：writeSPIData
功能：向SPI写入8位数据
入口参数：unsigned char Data 待写入数据
返回值：无
*************************************************/
void writeSPIData(unsigned char Data);

/*************************************************
函数名：writeTFTIndex
功能：向TFT写命令
入口参数：unsigned char Data 待写入命令
返回值：无
*************************************************/
void writeTFTIndex(unsigned char Data);		//写TFT命令

/*************************************************
函数名：writeTFTData8
功能：向TFT写8位数据
入口参数：unsigned char Data 待写入数据
返回值：无
*************************************************/
void writeTFTData8(unsigned char Data);		//写TFT数据8位

/*************************************************
函数名：writeTFTData16
功能：向TFT写16位数据
入口参数：unsigned int Data 待写入数据
返回值：无
*************************************************/
void writeTFTData16(unsigned int Data);		//写TFT数据16位

/*************************************************
函数名：resetTFT
功能：复位TFT
入口参数：无
返回值：无
*************************************************/
void resetTFT();							//重启TFT

/*************************************************
函数名：initTFT
功能：初始化TFT显示屏
入口参数：无
返回值：无
*************************************************/
void initTFT();			 					//初始化TFT

/*************************************************
函数名：setTFTRegion
功能：设置TFT显示区域，在此区域写点数据自动换行
入口参数：	unsigned int x_start,	//开始区域坐标x 
			unsigned int y_start, 	//开始区域坐标y
			unsigned int x_end,  	//结尾区域坐标x
			unsigned int y_end 		//结尾区域坐标y
返回值：无
*************************************************/
void setTFTRegion(unsigned int x_start, unsigned int y_start, unsigned int x_end, unsigned int y_end);	//设置显示区域

/*************************************************
函数名：renovateTFT
功能：用颜色刷新显示屏
入口参数：int color 颜色选择
返回值：无
*************************************************/
void renovateTFT(int color);   				//刷新TFT

/*************************************************
函数名：putPixel
功能：放置一个2*2的颜色区域块
入口参数：	unsigned int x_start,	放置坐标x
			unsigned int y_start,	放置坐标y
			unsigned int color	 	放置的颜色
返回值：无
*************************************************/
void putPixel(unsigned int x_start, unsigned int y_start, unsigned int color);	//放置颜色块

/*************************************************
函数名：displayASCII8X16
功能：显示ASCII码，大小为8*16像素
入口参数：	unsigned int x0,				放置坐标x 
			unsigned int y0, 				放置坐标y
			unsigned char *s, 				显示的字符串
			unsigned int forecolor, 		前景颜色
			unsigned int backgroundcolor	背景颜色
返回值：无
*************************************************/
void displayASCII8X16(unsigned int x0, unsigned int y0, unsigned char *s, unsigned int size, unsigned int forecolor, unsigned int backgroundcolor);//显示字符

#endif