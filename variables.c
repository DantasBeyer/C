#include <stdio.h>


// variables = Allocated space in memory to store a value.
//             We need to declare what type of data we are storing.

int main(){

    int x;       // declaration
    x = 123;      // initialization
    int y = 321; // declaration + initialization

    int age = 32;        // integer
    float gpa = 2.05;     // floating point number
    char grade = 'C';     // single character
    char name[] = "Joao"; // array of characters

    printf("Hello %s,\n", name);
    printf("You are %d years old!\n", age);
    printf("Your aavarage grade is %c\n", grade);
    printf("Your gpa is %f\n",gpa);

    return 0;
} 