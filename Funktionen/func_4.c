// Hier zeigt, dass globale Variablen in sämtlichen Funktionen gültig sind.

#include<stdio.h>

 int i = 333; // globale Variable i 

 void aender(void){
    i = 111; // Ändert die globale Variable.
    printf("In der Funcion aendern: %d\n", i); // 111
 }

 int main(void){
    printf("%d\n",i); // 333
    aender();
    printf("%d\n",i); // 111
    return 0;
 }