//Interface and Control a DC Motor.
//Program:
#include <LPC214x.H>                       
int main (void) 
{
  IO1DIR &=	(0<<16)& (0<<17)&(0<<18);    
  IO0DIR = (1<<5)|(1<<6);
  while(1)
  {
  	if (!(IO1PIN & (1<<16)))	//Clock wise key pressed
		 {
		   IO0PIN = 0X00000040 ;
  		   }
		if (!(IO1PIN & (1<<18)))	//OFF key pressed
		 {
			IO0PIN = 0X00000060 ;
   		  }
		if (!(IO1PIN & (1<<17)))	// Counterclockwise key pressed
		 {
			IO0PIN = 0X00000020 ;
   		  }
	}
}
