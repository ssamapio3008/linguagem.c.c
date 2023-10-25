Atividade10.c

#include <stdio.h>

int main ()
{

int soma =0;
float media =0;
float qtd =0;
int valor =0;

while (valor >= 0) {

    printf ("Digite um valor:");
    scanf ("%d",&valor);
    if (valor >= 0)
    {

        qtd++;
        soma += valor;

    }
}

media = soma /(float)qtd;
printf ("A media dos valores é %f", media);




    return 0;
}
