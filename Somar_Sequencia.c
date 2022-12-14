/* testar um subprogrma que recebe um número inteiro n como
parâmetro e retorna um resultado da soma de 1 a n, onde n > 0 */
#include <stdio.h>
#include <stdlib.h>
//declaração de uma função
int somar_seq(int n); 
int main()
{
   int num;
   
   printf("Informe um numero inteiro > 0,  n = ");
   scanf("%d",&num);
   printf("A soma da sequencia de 1 a %d = %d \n",num,somar_seq(num));
   
   system("pause");
   return 0;
}

//subprograma como uma função: somar_seq(int n)
int somar_seq(int n)
{ int soma = 0, cont; //variáveis locais - somente para este escopo
  
  for(cont = 1; cont<=n; cont++)
  {   soma += cont;             }  //soma = soma + cont;       
  
  return soma;   
}
