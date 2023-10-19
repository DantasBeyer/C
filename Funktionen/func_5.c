// Hier wird für >> i << immer die lokalste Variable Bevorzugt. Sie ist im Hauptprogramm 444 und nicht 111.

#include<stdio.h>

int i = 333;

void aendern(void){
    i = 111;
    printf("In der Funktoon aendern: %d\n", i); // 111
}

int main(void){
    int i = 444;

    printf("%d\n", i); // 444
    aendern();
    printf("%d\n", a); // 444
    return 0;
}