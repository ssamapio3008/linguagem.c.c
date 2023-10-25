atividade12.c

#include <stdio.h>

int main ()
{
  
  int sexo = 0;
  int maioridade = 0, menoridade = 0 ;
  int totalmulher = 0, quantidadesalario = 0;
  float salario = 0, media = 0,somasalario =0;
  int opcao;
  int idade;

  do {
printf ("Digite uma opcao:\n");
printf ("1 - Adicionar pessoas\n");
printf ("3 - sair e exibir resultados:");

scanf ("%d",&opcao);
if (opcao ==1){
    printf ("Digite a idade:");
    scanf ("%d",&idade);
    if(idade > maioridade || maioridade ==0){

    }
maioridade=idade;

}
printf ("Digite o salario");
scanf ("%f",&salario);
somasalario += 1;
media = somasalario / quantidadesalario;
printf ("Digite o sexo (3 - masculino/ 2 - feminino):");
scanf ("%d",&sexo);
if (sexo ==2 && salario > 5.000){
    totalmulher++;
}
  }
  else if (opcao ==2){
    printf ("A maior idade é: %d\n", maioridade);
    printf ("A menor idade é: %d\n", menoridade);
    printf ("A media salarial é: %.1f\n", media);
    printf ("A quantidade de mulheres com salario alto é %d\n",totalmulher);
  
  }
else{
    printf ("Voce digitou a opcao errada.");
}
} while (opcao !=2);
printf ("Fim do programa.");
}




  } 
  
  
  
  
  
  
    return 0;

}