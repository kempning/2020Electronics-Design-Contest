#include<reg51.h>
#include<TFT.h>   
#include<stdio.h>
#include<math.h>

sbit trig = P1^2;
sbit echo = P1^3;
sbit pwm = P1^4;

void gpio();
  
void uart_send(unsigned char b);  
void delay(unsigned int z);  
void uart_init(void);
//void uart_isr(void);
//void uart_recieve(void);
void timer0_isr(void);
void PWMcontrol(unsigned char pw);
void turnndegree(unsigned char n);
//unsigned char txt[20]={"hello"};

unsigned char location[2];
unsigned char length,degree,fi_length; 
unsigned char LEN[2];
unsigned char target = 3;
unsigned char length_txt[3];
//unsigned char AH = 0x94,AL = 0x00;                     //最大值：0xE4
unsigned char percent = 0;

int main(void)  
{
    unsigned char k2 = 0;    
    uart_init();
    initTFT();	
	bl=1;
    renovateTFT(WHITE);	 	  
    while(1)  
    {  
        //uart_send(0x55);
        //length = LEN[0]*256 + LEN[1];
        gpio();
        delay(1000);
        if(length <= 1000 && length >= 100)
        {
        length = location[k2];
        k2++;
        if(k2 == 2)
        k2 = 0;
        fi_length = sqrt(location[0]*location[0] + location[1]*location[1] - 2*location[0]*location[1]*cos(degree));
        }
        length_txt[0] = fi_length/100;
        length_txt[1] = fi_length%100/10;
        length_txt[2] = fi_length/100;
        displayASCII8X16(0, 0, length_txt, 3, RED, WHITE);
          
     }  
    return 0;  
}  
  
void uart_init(void)  
{
    TH1 = 0xFD;
    TL1 = 0xFD;
    TMOD = 0x21;            
    TL0  = (65536 - 20000)%256;  
    TH0  = (65536 - 20000)/256;  
    ET1 = 1;
	ET0 = 1;
    TR0 = 1;               
    TR1 = 1;              
    SM0 = 0;                
    SM1 = 1;                               
                                           
    REN = 1;       
    ES = 1;        
    EA = 1;
	//RI = 0;

}  
 
  
void delay(unsigned int z)  
{  
    unsigned int x,y;  
    for(x=z;x>0;x--)  
        for(y=110;y>0;y--);  
}
void uart_send(unsigned char b){
     TI = 0;
	 SBUF = b;
	 while(!TI);

}
void uart_isr(void) //interrupt 4
{
    unsigned char temp,k;
	ES = 0;
	temp = 1;
    if(RI)
    {         
        temp = SBUF;
		//uart_send(temp);
        LEN[k] = temp;
        k++;
        if(k == 2)
        k = 0;
        length = LEN[0]*256+LEN[1];
    }   
    ES = 1;
	RI = 0;
}

void gpio()
{
    unsigned char tim;
    TH0 = 0;
	TL0 = 0;
	trig = 1;
    delay(10);
    while(!echo){}
	TR0 = 1;
    while(echo){}  
	TR0 = 0;
	tim = TH0*256 + TL0;
	TH0 = 0;
	TL0 = 0;
	length = tim*0.017;
}

void PWMcontrol(unsigned char pw)
{
    unsigned char percent = 0;
    TL0  = (65536 - 20000) % 256; 
    TH0  = (65536 - 20000) / 256;
    TR0 = 1;
    while(TL0 == 0xff && TH0 == 0xff)
    {
    percent++;
    if(percent <= pw)
    pwm = 1;
    else
    pwm = 0;        
    }
    TR0 = 1;    
}

void turnndegree(unsigned char n)
{
    PWMcontrol(450);
    delay(690/n);
}