/*
Altura mínima

Sua tarefa é ajudar Carlitos a descobrir o número de passeios que ele pode desfrutar em um
parque específico. Considerando sua altura e os requisitos mínimos de altura para cada	passeio, ortiente-o
a aproveitar ao maximo sua aventura no parque de diversões.

Entrada: 
    1. Número de Brinquedos
    2. Altura de Carlitos

Saída:
    1. Número de brinquedos que Carlitos pode brincar

Casos de testes:

    Entrada 1:
        1 100
        100
    Saída 1:
        1

    Entrada 2:
        6 120
        200 90 100 123 120 169

    Saída 2:
        3
*/

#include <stdio.h>

int main()
{

    int x = 0;
    int b = 0;
    int c = 0;
    int d = 0;
    scanf("%d", &x);
    scanf("%d", &b);

    for (size_t i = 0; i < x; i++)
    {
        scanf("%d", &d);

        if (d <= b)
            c++;
    }

    printf("%d", c);

    return 0;
}