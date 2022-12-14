#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int contador, num, n;

srand(time(NULL)); //Semente para gerar uma sequencia de números

printf("Informe quantidade de números para mega sena: \n");
scanf("%d", &n);
printf("Números gerados para Mega Sena: \n");

for(contador = 1; contador <= n; contador++){
// Gerar números da Mega Sena
num = 1 + rand()%60;
printf("%d ", num);
}

system("pause");
return 0;
}
