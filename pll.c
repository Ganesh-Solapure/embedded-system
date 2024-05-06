#include<lpc214x.h>

void initpll()
{
	PLL0CON=0X01;
	PLL0CFG=0X41;
	PLL0FEED=0XAA;
	PLL0FEED=0X55;
	
	while(PLL0STAT&(0X400==0));
	PLL0CON=0x03;
	PLL0FEED=0XAA;
	PLL0FEED=0X55;
	VPBDIV=0X00;
}

int main(){
	initpll();
	
}
	
	