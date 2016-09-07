#include <avr/io.h>

int freq=40000;

int main(void)
{
	DDRB = 1<<PB3;         // Configure PB3 (OC2) as output
	OCR2 = F_CPU/freq/2;   // Set Timer2 auto-reload value
	TCCR2 = (1<<COM20)|(1<<WGM21)|(1<<CS20);  // Run Timer2 at F_CPU, CTC mode, toggle OC2 on compare match	
	
    while(1){
        //TODO:: Please write your application code 

    }
}
