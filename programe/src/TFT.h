#ifndef _TFT_H
#define _TFT_H

#include <reg51.h>

#define USE_LANDSCAPE//���Գ���������л��������뿪���˺꣬������ע�͸ú�

//����
sbit bl        =P2^4;//��ģ��BL����
sbit scl       =P2^5;//��ģ��CLK����
sbit sda       =P2^3;//��ģ��DIN/MOSI����
sbit rs        =P2^2;//��ģ��D/C����
sbit cs        =P2^0;//��ģ��CE����
sbit reset     =P2^1;//��ģ��RST����

//���峣����ɫ
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
��������writeSPIData
���ܣ���SPIд��8λ����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeSPIData(unsigned char Data);

/*************************************************
��������writeTFTIndex
���ܣ���TFTд����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeTFTIndex(unsigned char Data);		//дTFT����

/*************************************************
��������writeTFTData8
���ܣ���TFTд8λ����
��ڲ�����unsigned char Data ��д������
����ֵ����
*************************************************/
void writeTFTData8(unsigned char Data);		//дTFT����8λ

/*************************************************
��������writeTFTData16
���ܣ���TFTд16λ����
��ڲ�����unsigned int Data ��д������
����ֵ����
*************************************************/
void writeTFTData16(unsigned int Data);		//дTFT����16λ

/*************************************************
��������resetTFT
���ܣ���λTFT
��ڲ�������
����ֵ����
*************************************************/
void resetTFT();							//����TFT

/*************************************************
��������initTFT
���ܣ���ʼ��TFT��ʾ��
��ڲ�������
����ֵ����
*************************************************/
void initTFT();			 					//��ʼ��TFT

/*************************************************
��������setTFTRegion
���ܣ�����TFT��ʾ�����ڴ�����д�������Զ�����
��ڲ�����	unsigned int x_start,	//��ʼ��������x 
			unsigned int y_start, 	//��ʼ��������y
			unsigned int x_end,  	//��β��������x
			unsigned int y_end 		//��β��������y
����ֵ����
*************************************************/
void setTFTRegion(unsigned int x_start, unsigned int y_start, unsigned int x_end, unsigned int y_end);	//������ʾ����

/*************************************************
��������renovateTFT
���ܣ�����ɫˢ����ʾ��
��ڲ�����int color ��ɫѡ��
����ֵ����
*************************************************/
void renovateTFT(int color);   				//ˢ��TFT

/*************************************************
��������putPixel
���ܣ�����һ��2*2����ɫ�����
��ڲ�����	unsigned int x_start,	��������x
			unsigned int y_start,	��������y
			unsigned int color	 	���õ���ɫ
����ֵ����
*************************************************/
void putPixel(unsigned int x_start, unsigned int y_start, unsigned int color);	//������ɫ��

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
void displayASCII8X16(unsigned int x0, unsigned int y0, unsigned char *s, unsigned int size, unsigned int forecolor, unsigned int backgroundcolor);//��ʾ�ַ�

#endif