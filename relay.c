#include<lpc214x.h>
int main () {
	PINSEL0=0x00;
	IODIR0=(0<<9)|(1<<13);
while(1)
{
	if(IOPIN0 &(1<<9))
	{
		IOCLR0=1<<13;
	}
	else
	{
		IOSET0=1<<13;
	}
 }
}
