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
    float b = 5.5;
    //printf("%d",a);
    //printf("%d",a + b);
    printf ("O valor de A �: %d \n", a);
    printf ("O valor de B �: %f \n", b);
    printf ("%d + %f = %f \n", a, b, a+b);

    // Escaneando uma vari�vel:
    printf("Insira um novo valor para a vari�vel A:\n");
    scanf("%d", &a);
    printf ("O valor de A mudou para %d \n", a);
    printf ("%d + %f = %f \n", a, b, a+b);

    //Utilizando floats:
    printf ("Insira um novo valor para a vari�vel B:\n");
    scanf ("%f", &b);
    printf ("O valor de B mudou para %f\n", b);
    printf ("%d + %f = %f\n", a, b, a+b);



