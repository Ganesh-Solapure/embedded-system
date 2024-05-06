#include<lpc214x.h>
void delay()
{
 int i;
 for(i=0;i<1000000;i++);
}

int main()
{

 int i;
 int a[]={0x3F0000,0x060000,0x5B0000,0x4F0000,0x660000,0x6D0000,0x7D0000,0x070000,0x7F0000,0x6F0000};
  PINSEL1 =0x00;
  IODIR1 =(1<<16)|(1<<17)|(1<<18)|(1<<19)|(1<<20)|(1<<21)|(1<<22)|(1<<23)|(1<<24)|(1<<25);
 
  while(1)
 {
 for(i=0;i<10;i++)
 {
 
  IOSET1 = a[i];
  delay();
  IOCLR1 = a[i];
  delay();
 }
 }  
}
