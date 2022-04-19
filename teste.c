#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Permite utilizar acentos:
    setlocale(LC_ALL,"");

    // Imprimindo Olá na tela:
    printf("Olá \n");

    // Declarando uma variável:
    int a = 5;
    int b = 6;
    //printf("%d",a);
    //printf("%d",a + b);
    printf ("O valor de A é: %d \n", a);
    printf ("O valor de B é: %d \n", b);
    printf ("%d + %d = %d \n", a, b, a+b);
}
