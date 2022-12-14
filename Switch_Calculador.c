/* exemplo para usar comando switch() 
Este programa é um calculador simples que somente tem 
4 operações: somar, multiplicar, subtrair, dividir */

# include <stdio.h>
# include <stdlib.h>
// programa principal
int main()
{  
   int opcao; //variável de entrada
   float num1, num2;  // variáveis de entrada
   float result; // variável de saida
   
   // criação de um menu
   printf("Menu para um calulador simples:\n");
   printf("1 - Soma:\n");
   printf("2 - Multiplicacao:\n");
   printf("3 - Subtracao: \n");
   printf("4 - Divsao: \n");
   
   printf("Digite 1o numero para realizar uma operacao: ");
   scanf("%f",&num1);
   printf("Digite 2o numero para realizar uma operacao: ");
   scanf("%f",&num2);
   printf("Escolhe uma opcao:\n");
   scanf("%d",&opcao);
   // multiescolhe - switch() para validar a opção
   switch(opcao)
   {
   	case   1: 
	   	result = num1 + num2;
		printf("O resultado da soma = %.2f\n",result);
	   	break; // para sair do switch : obrigatoriamente
   	case   2:
	   	result = num1 * num2;
		printf("O resultado da multiplicacao = %.2f\n",result);
	   	break;
   	case   3:
	   	result = num1 - num2;
		printf("O resultado da subtracao = %.2f\n",result);
	   	break;
   	case   4:
	   	result = num1 / num2;
		printf("O resultado da divisao = %.2f\n",result);
	   	break;   
	
   	default: // em outros casos
   		printf("Opcao invalida !!! \n");
   }
   
   printf("Fim do programa.\n");
   system("pause");
   return 0;
	
}