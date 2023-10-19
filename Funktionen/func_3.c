// Hier ziegt, dass die Variable >> i << innerhalb einer Funktion eine ganz andere Variable ist als im Hauptprogramm.  

#include <stdio.h>

void aendern(void){
    int i = 111;
    printf("In der Funktion aendern: %d\n", i); // 111
}

int main(void){
    int i = 333;

    printf("%d\n",i); // 333
    aendern(); 
    printf("%d\n",i); // 333
    return 0;
}
