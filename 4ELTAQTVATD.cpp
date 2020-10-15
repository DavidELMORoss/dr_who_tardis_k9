/*
This program must be exported to MCUXPresso and you will have to 
STEP OVER the instructions to see what colours are changed on the 
screen as each fflush after the printf is STEPPED OVER
*/

#include "mbed.h"
int main(void)
{
 printf("\e[0m\e[2J\e[1;1H\e[41m\e[2J");    // keep track of the screen colours
 fflush(stdout);
 printf("\e[0m\e[2J\e[1;1H\e[44m\e[2J");    // keep track of the screen colours
 fflush(stdout);  
 printf("\e[0m\e[2J\e[1;1H\e[43m\e[2J");    // keep track of the screen colours
 fflush(stdout);
 printf("\e[0m\e[2J\e[1;1H\e[45m\e[2J");    // keep track of the screen colours
 fflush(stdout);  
 printf("\e[0m\e[2J\e[1;1H\e[46m\e[2J");    // keep track of the screen colours
 fflush(stdout); 
 for(;;);   
}