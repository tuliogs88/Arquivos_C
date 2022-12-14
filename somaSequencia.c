#include <stdio.h>
#include <stdlib.h>

int main(){	
    
    int soma, num;
    
    soma = 0;
    printf("Digite um numero inteiro para somar ou numero zero para finalizar !\n");
    scanf("%d",&num);
    while(num != 0){
    	soma = soma + num;
    	printf("Digite um numero inteiro para somar e numero zero para finalizar !\n");
        scanf("%d",&num);
    }
    printf("O resultado da soma = %d\n",soma); 
         
    return 0;    
}