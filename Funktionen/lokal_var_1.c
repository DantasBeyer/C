// Demonstriert den Geltungsbereich für lokale Variablen in unterschidlichen Anweisungsblöken. 

#include <stdio.h>

int main(void){
    int i = 333;

    if(i == 333){ //Anweisungsblök
        int i = 111;
        printf("%d\n",i);
    }
    printf("%d\n", i);
    return 0;
}