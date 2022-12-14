#include<stdio.h>
#include<stdlib.h>
int main(){
 int opcao; // Variavel entrada
 float litros; // Variavel entrada
 float pagamento; // Variavel saída

 printf("Bem - Vindo ao Sistema de combustivel \n");
 printf("1 - Gasolina \n");
 printf("2 - Alcool \n");
 
 printf("Escolha uma opção! \n");
 scanf("%d", &opcao); // Variavel irá receber o valor
 
 switch(opcao) {
  case 1: // Se Gasolina for escolhida
   printf("O valor em litros a ser pago R$: ");
   scanf("%f", &litros);
   if (litros <= 25.0) {
    pagamento = litros * 5.0 - litros * 5.0 * 0.07;
   }
   else{
    pagamento = litros * 5.0 - litros * 5.0 * 0.09;
   }
   break;
  case 2: // Se Alcool for escolhido
  printf("O valor em litros a ser pago R$: ");
  scanf("%f", &litros);
   if (litros <= 25.0) {
    pagamento = litros * 3.50 - litros * 3.50 * 0.05;
   }
   else{
    pagamento = litros * 3.50 - litros * 3.50 * 0.075;
   }
   break;
  default:
   printf("Opção invalida! (Digite Opção 1 ou 2!)");
   exit(0); // Sair do programa
 }
 
 printf("Cliente pagou R$ %.2f \n", pagamento);
 
system("pause");
return 0;
}
