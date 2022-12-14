#include <stdio.h>
#include <stdlib.h>
int main(){
	
    int num1, num2, maior_num;
    
    printf("Informe um numero inteiro: n1 = ");
    scanf("%d",&num1);
    printf("Informe outro numero inteiro n2 = ");
    scanf("%d",&num2);
    /*
    if (num1>num2)
       maior_num = num1;
    else 
       maior_num = num2; */
    maior_num = num1 > num2 ? num1 : num2 ;  // ternária   
    
    printf("O numero maior = %d\n",maior_num);
    printf("fim do programa!\n");
    return 0;
       
}