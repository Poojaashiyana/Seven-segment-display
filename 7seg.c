#include<LPC214X.h>
int main()
{
IODIR0|=(1<<9);
IODIR0|=(1<<10);
IODIR0|=(1<<15);
IODIR0|=(1<<11);
IODIR0|=(1<<12);
while(1)
{
		
		
		IOSET0|=(1<<9);
		IOSET0|=(1<<10);
		IOSET0|=(1<<15);
		IOSET0|=(1<<11);
		IOSET0|=(1<<12);
}
	
}

