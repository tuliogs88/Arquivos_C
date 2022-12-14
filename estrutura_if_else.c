#include <stdio.h>
#include <stdlib.h>

int main(){

int num, num_par, num_impar;

printf("Informe um número inteiro: n ");
scanf("%d", &num);

if (num % 2 == 0)
num_par = num;
else
num_impar = num;

printf("O número digitado = %d \n", num);
printf("Fim do programa!!! \n");

system("pause");
return 0;
}
