#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int num, resto ;
    
    printf("Informe um numero inteiro: ");
    scanf("%d",&num);
    resto = num%2;
    if (resto == 0)
    {  printf("O numero digitado: %d eh numero par !\n",num);
       printf("Resto de %d/2 = %d \n",num,resto); }
    else
    {  printf("O numero digitado: %d eh numero impar !\n",num);	
       printf("Resto de %d/2 = %d \n",num,resto); }
    system("pause");
    return 0;
}