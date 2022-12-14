/* Este programa mostra se você tem dinheiro suficiente para comprar um livro importado com valor em dolar */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
float converter(float d, float td);
bool comparar(float dinheiro_disp, float livro_real);
void resultado(bool sufi, float livro_real, float dinheiro_disp);

int main(){
float dinheiro_disp, livro_dolar, tx_dolar; // Variavel de entrada
float livro_real; // Variavel de saída
bool suficiente;

printf("Informe a quantidade de dinheiro disponivel: R$ ");
scanf("%f", &dinheiro_disp);

printf("O custo do livro em dolar: US$ ");
scanf("%f", &livro_dolar);

printf("O valor do dolar de hoje: R$ ");
scanf("%f", &tx_dolar);

// Converter valor de Dólar para Reais
livro_real = converter(livro_dolar , tx_dolar);

// Atribuir um valor Booleano para a variavel suficiente
suficiente = comparar(dinheiro_disp, livro_real);

// Mostrar o resultado
resultado(suficiente, livro_real, dinheiro_disp);

system ("pause");
return 0;
}

// Função para converter Dólar para Real
float converter(float d, float td){
float r;
r = d * td;
return r;
}

// Função que retorna um valor booleano
bool comparar(float disp, float livro_real){
return livro_real <= disp;
}

// Um procedimento para mostrar resultado
void resultado(bool sufi, float livro_real, float dinheiro_disp){
if (sufi){
printf("tem dinheiro suficiente para realizar a compra. \n"); // Parte suficiente == True
printf("Valor convertido em real: R$ %.2f ", livro_real); 
printf("e dinheiro disponivel: R$ %.2f \n ", dinheiro_disp);
} else {
printf("Não tem dinheiro suficiente para compra. \n"); // Parte suficiente == False
printf("Valor convertido em real: R$ %.2f ", livro_real);
printf("e dinheiro disponivel: R$ %.2f \n ", dinheiro_disp);
}
}
