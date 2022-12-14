#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
int contador , num;
srand(time(NULL)); //Semente para gerar uma sequencia de números
printf("Números gerados para Mega Sena: \n");
contador = 1;

while(contador <= 6){
// Gerar números da Mega Sena
num = 1 + rand()%60;
printf("%d ", num);
contador ++; // Contador = contador + 1
}

system("pause");
return 0;
}
