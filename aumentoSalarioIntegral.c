/* Este programa recebe o salário bruto atual de um funcionário e calcular
o novo salario bruto com aumento de acordo com a faixa salarial e mostre 
o salario liquido a receber sabendo imposto a pagar 9.5%.
------------------------------------------------------------------------
 | para salario <= 3000.0 o aumento: 15.45%                         |
------------------------------------------------------------------------
 | para salario > 3000.0, mas o salario <= 5500.0 o aumento: 10.15% |
------------------------------------------------------------------------
 | para salario > 5500.0 o aumento: 7.5%                            |  
-----------------------------------------------------------------------*/
# include <stdio.h>
# include <stdlib.h>
// programa principal
int main()
{
    float sal_atual; // entrada de dados
    float sal_novo_bruto, sal_liquido, imposto, aumento; // saida de dados
    
    printf("Informe seu salario atual R$ = ");
    scanf("%f",&sal_atual);
    
    // uma estrutura condicional encadeada
    if (sal_atual <= 3000.0)
    {
    	aumento = sal_atual*15.45/100;    
    }
    else  // sal_atual > 3000.0
    {
    	if (sal_atual <= 5500.0)
    	{	         
	   aumento = sal_atual*10.15/100;    	   
	}
	else // sal_atual > 5500.0
	{
	   aumento = sal_atual*7.5/100;    	  
	}
    } 
    
    sal_novo_bruto = sal_atual + aumento; 
    
    imposto = sal_novo_bruto*9.5/100 ;
    sal_liquido = sal_novo_bruto - imposto ;    
    
    printf("Seu salario bruto com aumento = R$ %.2f\n",sal_novo_bruto);
    printf("Seu salario liquido a receber = R$ %.2f\n",sal_liquido);
	   	
    system("pause");
    return 0;	
}