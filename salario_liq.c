/*Este programa que recebem dois valores: quantidade de horas trabalhadas, 
o valor da hora, e calcular o salario liquido de um funcionario sabendo:
descontos:  11% imposto de renda, 8% inss, 5% sindicato.  */
#include <stdio.h>
#include <stdlib.h>
 // declaração de subprgramas 
float salario_bruto_calculado(float qt, float vh);
void salario_liq_calculado(float qt, float vh);
//programa principal
int main() 
{
   int quantidade_horas; //variavel de entrada
   float valor_hora; //variável de entrada   
   
   printf("Informe quantidade de horas trabalhadas por mes:  h =  ");
   scanf("%d",&quantidade_horas);
   printf("O valor da hora : R$ ");
   scanf("%f",&valor_hora);   
  
   //chamando subprograma salario_liq_calculado(....)
   salario_liq_calculado(quantidade_horas, valor_hora);     
   
   system("pause");
   return 0;   
}

// subprograma como uma função
float salario_bruto_calculado(float qt, float vh)
{
    return qt*vh;
}
// subprograma como um procediemento
void salario_liq_calculado(float qt, float vh)
{ 
   float sal_bruto, ir, inss, sind, desconto, sal_liquido; //variáveis locais
   
   //chamar subprograma salario_bruto_calculado(...)
   sal_bruto = salario_bruto_calculado(qt,vh);
   ir = 0.11 * sal_bruto;
   inss = 0.08 * sal_bruto;
   sind = 0.05 * sal_bruto;
   desconto = ir + inss + sind;   
   sal_liquido = sal_bruto - desconto;   
   
   printf("*************************************************\n");
   printf("*    Demonstracao da folha de Pagamaneto        *\n");
   printf("*************************************************\n");
   printf("+ Salario Bruto : R$ %.2f\n",sal_bruto);
   printf("- IR (11%%): R$ %.2f\n",ir);
   printf("- INSS (8%%): R$ %.2f\n",inss);
   printf("- sindicato (5%%) : R$ %.2f\n",sind);
   printf("= Salario liquido : R$ %.2f\n",sal_liquido);
   printf("*************************************************\n");
   
}

