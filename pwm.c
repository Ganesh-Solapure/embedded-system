#include<lpc214x.h>

 void pwm_init(void)

 PINSELO-0X8002;
 PWMPCR-0X600;
 PWMMR0-150000;
 PWMTCR=0X09;
 PWMMCR=0X02;

int main(void)
 {
 pwm init();
 while (1)
 {
 PWMMR1-75000;
 PWMMR2-10000;
 PWMLER=0x06;
}
}
