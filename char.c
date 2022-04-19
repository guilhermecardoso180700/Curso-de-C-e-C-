#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main () {
    // Permitir caracteres especiais:
    setlocale(LC_ALL , "");

    // Trabalhando com char:
    char c = 't';
    printf ("Insira um valor para a variável C: ");

    scanf ("%c", &c);
    printf ("\O valor de c é: %c", c);

}

