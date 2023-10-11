#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
setlocale (LC_ALL, "portuguese");
   
   int codigo;
  printf  ("|Menu de comida caseira|");
  printf ("Pratos: \n 1 : Picanha \n 2 : Lasanha \n 3 : Bife Acebolado \n 4 : Strogonoff \n 5 : Pão com ovo \n");

  printf ("Digite um codigo:");
  scanf ("%d",&codigo);

  switch (codigo)
{
   case 1:
   printf ("Prato: Picanha \n valor: 25.00 \n codigo 1 \n");
   break;

   case 2:
   printf ("Prato: Lasanha \n valor: 20.00 \n codigo 2 \n");
   break;
   
   case 3:
   printf ("Prato: Bife Acebolado \n valor: 15.00 \n codigo 3 \n");
   break;

  case 4:
   printf ("Prato: Strogonoff \n valor: 18.00 \n codigo 4 \n");
   break;

  case 5:
   printf ("Prato: Pão com ovo \n valor: 5.00 \n codigo 5 \n");
   break;

   printf ("Obrigado pela preferencia, volte sempre.");
 
 default :
 printf ("Opção invalida");
   
}


   return 0;
}