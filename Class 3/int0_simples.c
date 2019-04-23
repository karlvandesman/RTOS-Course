#include <avr/io.h>
#include <avr/interrupt.h>


/* -------------------------------------*/
void setup_int0(void)
{
    /*
     * Para as macros abaixo e outras, veja o arquivo
     * usr/lib/avr/include/avr/iom328p.h
     */
}

/* -------------------------------------*/
void setup_main(void)
{
    sei(); /* Seta flag principal de habilitação de interrupções */
}

/* -------------------------------------*/
volatile uint8_t has_changed;

ISR(INT0_vect)
{
    has_changed = 1;
}

/* -------------------------------------*/
int main(void)
{
    setup_int0();
    setup_main();

    while(1)
        ;

    return 0;
}
