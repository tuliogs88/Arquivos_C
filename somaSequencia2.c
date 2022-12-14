#include <stdio.h>
#include <stdlib.h>

int main(){	
    
    int soma, num;
    
    soma = 0;    
    do {    	
    	printf("Digite um numero inteiro para somar e numero zero para finalizar !\n");
        scanf("%d",&num);
        soma = soma + num;
    }while(num != 0);
    
    printf("O resultado da soma = %d\n",soma); 
         
    return 0;    
}