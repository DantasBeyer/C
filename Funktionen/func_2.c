//Korrekten Umgang mit Vorwärtsdeklarationen

#include <stdio.h>

void func1(void);
void func2(void);
void func3(void);


void func1(void){
    printf("primeira funcao\n");
    func2();
}
void func2(void){
    printf("segunda funcao\n");
    // func3(); << infinit loop 
}
void func3(void){
    printf("terceira funcao \n");
    func1();
}


int main (void){

    func3();
    func2();
    func1();
    return 0;
}