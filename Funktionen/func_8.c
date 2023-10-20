// Hier wird demonstriert die Wertübergabe an Funktionen durch Call-by-Value;

#include <stdio.h>

void verdoppeln(int);
void halbieren(int);

void halbieren(int zahl)
{
    zahl /= 2;

    printf("Halbiert %d", zahl);
}
void verdoppeln(int zahl)
{
    zahl *= 2;

    printf("Verdoppeln %d\n", zahl);
}

int main(void)
{

    int wahl, z;

    printf("Bitte  geben Sie eine Zahl ein : ");
    scanf("%d", &z);
    printf("Wollen Sie diese Zahln\n");
    printf("\t1.)verdoppeln\n\t2.)halbieren\n\nIhere Wahl : ");
    scanf("%d", &wahl);

    switch (wahl)
    {
    case 1:
        verdoppeln(z);
        break;
    case 2:
        halbieren(z);
        break;

    default:
        printf("Unbekannte Eingabe\n");
    }

    return 0;
}
