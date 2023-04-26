#include <stdio.h>
#include <math.h>

int main() {
  float n1=0,n2=0,resultado=0;
  int operacao=0;
  //parte de escolha dos numeros do usuario
  printf("Digite o numero 1:");
  scanf("%f",&n1);
  printf("Digite o numero 2:");
  scanf("%f",&n2);
  //parte da escolha das operações
  printf("ESCOLHA UMA DAS 4 OPCOES:\n");
  printf("0 - adicao\n");
  printf("1 - subtracao\n");
  printf("2 - multiplicacao\n");
  printf("3 - divisao\n");

  scanf("%d",&operacao);
  
  switch (operacao)
  {
  //adição
  case 0:
    resultado= n1+n2;
    printf("%.2f + %.2f = %.2f",n1,n2,resultado);
    break;
  //subtração
  case 1:
    resultado= n1-n2;
    printf("%.2f - %.2f = %.2f",n1,n2,resultado);
    break;
  //multiplicação
  case 2:
    resultado= n1*n2;
    printf("%.2f * %.2f = %.2f",n1,n2,resultado);
    break;
  //divisão
  case 3:
    resultado= n1/n2;
    printf("%.2f / %.2f = %.2f",n1,n2,resultado);
    break;
  
  default:
  printf("opcao invalida");
    break;
  }
}