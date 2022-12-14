/* teste um subprograma que recebe um número inteiro e retorna
o resultado da soma de 1 a n, onde n > 0.  */

#include <stdio.h>
#include <stdlib.h>
int soma_recursivo(int n); //declaração de uma função
int main()
{  int num;
   
   printf("Informe um numero inteiro > 0, n = ");
   scanf("%d",&num);
   printf("Resultado da soma de 1 a %d = %d\n",num,soma_recursivo(num));
   
   system("pause");
   return 0;
}
//subprograma: uma função 
int soma_recursivo(int n)
{  
   if (n == 1) // ponto de parada
       return 1;
   else
       return soma_recursivo(n-1) + n;
}

soma_seq_recursivo.c
