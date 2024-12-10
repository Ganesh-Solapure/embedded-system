#include<1pc214x.h>

#include"delayms.h"
#include"pll.h"
 int main()
 {

IODIR1=1<<16;

pll();

while (1)
 {

IOSET1=1<<16;

delayms (1000);

IOCLR1=1<<16;
delayms (1000);
 }
}



delayms.h

void delayms (unsigned int milliseconds) }
TOCTCR 0X00; 
TOTCR=0X01:
TOPR-59999; 
TOTC=0X00;
while (T0TC<milliseconds);
TOTCR 0X00;
}



pll.h

void pll (void)
PLLOCFG=0x24:
PLLOCON=0x01;
PLLOFEED-OXAA;
PLLOFEED=0X55;
while ((PLLOSTAT & 0x400)==0);
PLLOCON-0X03;
VPBDIV-OX01;
PLLOFEED ΟΚΑΑ;
PLLOFEED 0X55;
}
