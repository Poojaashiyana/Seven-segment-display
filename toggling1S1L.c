#include<LPC214X.h>
int main(){
while(1){
IODIR1&=(~(0x01<<16));//set direction as output
IODIR0|=(0x01<<2);
IODIR1&=(~(0x01<<17));//set direction as output
IODIR0|=(0x01<<3);
//set direction as output
if((0x01<<16)&IOPIN1)
{
IOSET0|=(0x01<<2);
}
else
{
IOCLR0|=(0x01<<2);
}
if((0x01<<17)&IOPIN1)
{
IOSET0|=(0x01<<3);
}
else
{
IOCLR0|=(0x01<<3);
}
	}	
}