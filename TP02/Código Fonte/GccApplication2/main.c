#include "TimerOne.h"



void setup()
{  pinMode(10, OUTPUT);
	Timer1.initialize(500000);// initialize timer1, and set a 1/2 second period
	Timer1.pwm(9, 512); // setup pwm on pin 9, 50% duty cycle
	Timer1.attachInterrupt(callback);// attaches callback() as a timer overflow interrupt}
}
void callback()
{ 
	digitalWrite(10, digitalRead(10) ^ 1);
}

// -----------------------------------------------------------------------------------------------------------------------------//


#define ledPin 13

void setup()
{
	pinMode(ledPin, OUTPUT);
	
	// Configuração do timer1
	TCCR1A = 0;                        //confira timer para operação normal pinos OC1A e OC1B desconectados
	TCCR1B = 0;                        //limpa registrador
	TCCR1B |= (1<<CS10)|(1 << CS12);   // configura prescaler para 1024: CS12 = 1 e CS10 = 1
	
	TCNT1 = 0xC2F7;                    // inicia timer com valor para que estouro ocorra em 1 segundo
	// 65536-(16MHz/1024/1Hz) = 49911 = 0xC2F7

	TIMSK1 |= (1 << TOIE1);           // habilita a interrupção do TIMER1
}


void loop()
{
	//loop principal. a manipulação do led é feita na ISR
}


ISR(TIMER1_OVF_vect)                              //interrupção do TIMER1
{
	TCNT1 = 0xC2F7;                                 // Renicia TIMER
	digitalWrite(ledPin, digitalRead(ledPin) ^ 1); //inverte estado do led
}

//-------------------------------------------------------------------------------------------------------------------------------------------//

#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/wdt.h>
#include <util/delay.h>
// Prepare pino de LED
void PortInit (void)
{PORTD | = (1 << PD2); // LED inicialmente LIGADO
	DDRD | = (1 << PD2); // PD2 como saída
}
void WDT_Init (void) //inicializar watchdog
{cli (); // desativa interrupções
	wdt_reset (); // redefinir watchdog
	WDTCSR = (1 << WDCE) | (1 << WDE); // configurar interrupção WDT
	WDTCSR = (1 << WDIE) | (1 << WDE) | (1 << WDP3); // Inicia o cronômetro de watchdog com o prescaller 4s
	sei (); // Habilita interrupções globais

}
// Tempo limite do Watchdog ISR
ISR (WDT_vect)
{for (uint8_t i = 0; i <4; i ++) // Estouro de pulsos de 0,1 Hz
	{PORTD | = (1 << PD2); // LED ON
		_delay_ms (20); // ~ 0,1s de atraso
		PORTD & = ~ (1 << PD2); // LED apagado
		_delay_ms (80);
	}
}
int main (void)
{PortInit (); // Inicializar porta
	WDT_Init (); // inicializar watchdog
	_delay_ms (500); // demora para detectar o reset
	while (1)
	{PORTD | = (1 << PD2); // LED ON
		_delay_ms (20);
		PORTD & = ~ (1 << PD2); // LED apagado
		_delay_ms (500); // ~ 0,5s de atraso
	}
}
