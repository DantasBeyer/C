// Hier wird demonstriert den Datenaustausch über globale statische Variablen.

#include <stdio.h>

static int zahl;
void verdoppeln(void);
void halbieren(void);

void verdoppeln(void)
{
    zahl *= 2;
    printf("Verdoppelnt: %d\n", zahl);
}

void halbieren(void)
{
    zahl /= 2;
    printf("Halbieren: %d", zahl);
}

int main(void)
{
    int wahl;

    printf("Bitte geben Sie ene Zahl ein: ");
    scanf("%d", &zahl);
    printf("Wollen Sie diese Zahl\n");
    printf("\t1.)verdoppeln\n\t2.)halbieren\n\nIhre Wahl: ");
    scanf("%d", &wahl);

    switch (wahl)
    {
    case 1:
        verdoppeln();
        break;
    case 2:
        halbieren();
        break;

    default:
        printf("Unbekante Eingabe\n");
    }

    return 0;
}
