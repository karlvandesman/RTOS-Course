# RTOS-Course
Projects and exercises from the "Embedded and Real Time System Development" course with Prof. Hermano Cabral at UFPE.

## Objetivos da disciplina
- Compreender as características de um sistema de tempo real
- Usar ferramentas e ambientes de desenvolvimento para sistemas operacionais de tempo real em sistemas embarcados
- Programas microcontroladores com um sistema operacional de tempo real usndo técnicas de programação paralela
- Realizar um projeto de sistema embarcado usando um sistema operacional de tempo real

## Hardware
- Arduino Nano Atmel ATMega328p
- STM32f103

## Software
- Chibios/RT

## Ambiente de desenvolvimento
- Kubuntu/Linux
- Terminal (Konsole)
- Editor de texto 

## Desenvolvimento cruzado
- Para gerar o sistema que queremos, usaremos o seguinte processo:
  - Edição do texto do programa em C;
  - Compilação, conversão do arquivo binário e carregamento no microcontrolador.
- A edição pode ser feita em qualquer editor (por exemplo, kate);
- A segunda parte é realizada por um Makefile, um arquivo com instruções para o programa *make*.

## Bibliografia
- Chibios/RT: http://www.chibios.org/dokuwiki/doku.php
- Programação Reativa: Miro Samek. Practical UML Statecharts in C/C++: Event-Driven Programming for Embedded Systems, 2a edição, CRC Press, 728p, 2008.
