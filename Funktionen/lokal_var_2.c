// Ich habe hier im Gegensatzt zum >> loka_var_1.c << den Wert der Variablen >> i << im >> if << Anweisungsblock auf 111 gesetzt, aber keine beue lokale Variable >> i << definiert.

#include <stdio.h>

int main(void){
    int i = 333;

    if(i == 333){
        i = 111;
        printf("%d\n",i);
    }
    printf("%d\n", i);
    return 0 ;
}