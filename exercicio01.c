#include <stdio.h>
#include <stdlib.h>

int main(){
float salario_func, salario_liquido;
float imposto, inss , sindicato;

printf("Funcionario, informe seu salario: \n ");
scanf("%f", &salario_func);

imposto = salario_func * 0.11 - 100;
inss = salario_func * 0.08 - 100;
sindicato = salario_func * 0.05 - 100;

salario_liquido = salario_func - imposto - inss - sindicato;

printf("Salario Bruto: R$ %.2f \n", salario_func); 
printf("IR: R$ %.2f \n", imposto); 
printf("INSS: R$ %.2f \n", inss); 
printf("Sindicato: R$ %.2f \n", sindicato);
printf("Salario Liquido: R$ %.2f ", salario_liquido);
system("pause");
return 0;
}
