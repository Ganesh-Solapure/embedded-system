#include<LPC214x.h>
void lcdcmd(unsigned int cmd);
void lcddata(unsigned int data);
void delay(unsigned int itime);

int main(){
	unsigned char array[]="Ganesh";
	unsigned int i=0;
	PINSEL0=0x00;
	PINSEL1=0x00;
	PINSEL2=0x00;
	IODIR0=0x00003FF00;
	lcdcmd(0x38);
	delay(100);
	lcdcmd(0x06);
	delay(100);
	lcdcmd(0x01);
	delay(100);
	lcdcmd(0x0e);
	delay(100);
	lcdcmd(0x80);
	delay(100);
	
	for(i=0;i<7;i++)
	{
		lcddata(array[i]);
		delay(100);
	}
	lcddata(0xC0);
	delay(100);
	
	return 0;
}

void delay(unsigned int itime){
	int i,j;
	for(i=0;i<itime;i++)
	for(j=0;j<200;j++);
}

void lcdcmd(unsigned int cmd ){
	IOCLR0=0x000FF00;
	cmd=cmd<<8;
	IOSET0=cmd;
	IOCLR0=0x1<<16;
	IOSET0=0x1<<17;
	delay(100);
	IOCLR0=0x1<<17;
}

void lcddata(unsigned int data ){
	IOCLR0=0x00FF00;
	data=data<<8;
	IOSET0=data;
	IOSET0=0x1<<16;
	IOSET0=0x1<<17;
	delay(100);
	IOCLR0=0x1<<17;
}

