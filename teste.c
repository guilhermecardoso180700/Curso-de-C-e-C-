#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Permite utilizar acentos:
    setlocale(LC_ALL,"");

    // Imprimindo Ol� na tela:
    printf("Ol� \n");

    // Declarando uma vari�vel:
    int a = 5;
    int b = 6;
    //printf("%d",a);
    //printf("%d",a + b);
    printf ("O valor de A �: %d \n", a);
    printf ("O valor de B �: %d \n", b);
    printf ("%d + %d = %d \n", a, b, a+b);
}
