#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "portuguese");

    int i;
    int soma = 0;
    int contador = 0;
    int par;
    int impar;
    float media;

    do
    {
        printf("informe um numero:");
        scanf("%d", &i);

        if (i > 0)
        {
            soma += i;
            contador++;

            if (i % 2 == 0)
            {
                par++;
            }
            else
            {
                impar++;
            }
        }
    } while (i > 0);

    printf("Média: %.1f \n", &media);
    printf("quantidade de impar: %d \n", impar);
    printf("quantidade de par: %d \n", par);

    return 0;
}