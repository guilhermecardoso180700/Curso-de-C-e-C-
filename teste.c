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
    float b = 5.5;
    //printf("%d",a);
    //printf("%d",a + b);
    printf ("O valor de A é: %d \n", a);
    printf ("O valor de B é: %f \n", b);
    printf ("%d + %f = %f \n", a, b, a+b);

    // Escaneando uma variável:
    printf("Insira um novo valor para a variável A:\n");
    scanf("%d", &a);
    printf ("O valor de A mudou para %d \n", a);
    printf ("%d + %f = %f \n", a, b, a+b);

    //Utilizando floats:
    printf ("Insira um novo valor para a variável B:\n");
    scanf ("%f", &b);
    printf ("O valor de B mudou para %f\n", b);
    printf ("%d + %f = %f\n", a, b, a+b);



