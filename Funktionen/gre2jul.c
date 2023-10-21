// Umrechung vom gregorianischen ins julianische Datum.
// Hier wird demosntriert anhang der Umrechnung des gregoriasnischen in den julianischen Kalender die Verwendung meherer Funkzionsparameter.

#include <stdio.h>

void greg2jul(long int tag, long int monat, long int jahr)
{
    long int k, l, jd;
    k = (monat - 14) / 12;
    l = jahr + k + 4800;
    jd = tag - 32075 + 1461 * l / 4 + 367 * ((monat - 2 - 12 * k) / 12) - 3 * ((l + 100) / 100) / 4;
    printf(" sind %ld Tage  e %ld Jahre vergagen\n", jd, l);
}

int main(void)
{
    long int tag, monat, jahr;

    printf("Eingabe (Tag) : ");
    scanf("%ld", &tag);
    printf("Eingabe (Monat) : ");
    scanf("%ld", &monat);
    printf("Eingabe (Jahr) : ");
    scanf("%ld", &jahr);

    printf("Seit 1.1.4713 v.Chr bis %2ld.%2ld.%4ld", tag, monat, jahr);
    greg2jul(tag, monat, jahr);

    return 0;
}

// Solicitar dados ao usuário.
// Armazenar os dados nas variáveis.
// Passar os dados como parâmetros para a função greg2jul.
// Dentro de greg2jul, usar esses dados para calcular o Julian Day.
// Imprimir o resultado.