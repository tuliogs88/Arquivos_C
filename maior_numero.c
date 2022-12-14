#include <stdio.h>
#include <stdlib.h>

int main(){

int num1, num2, maior_num;

printf("Informe um número inteiro: n1 ");
scanf("%d", &num1);

printf("Informe um número inteiro: n2 ");
scanf("%d", &num2);

if (num1 > num2)
maior_num = num1;
else
maior_num = num2;

printf("O número maior = %d \n", maior_num);
printf("Fim do programa!!! \n");

system("pause");
return 0;
}
