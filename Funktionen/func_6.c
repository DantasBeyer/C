#include <stdio.h>

void inkrement(void){
   static int i = 1;
    printf("Wert von i: %d\n", i);
    i++;
}

int main(void){

    inkrement();
    inkrement();
    inkrement();

    return 0;
}