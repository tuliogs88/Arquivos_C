/* este programa é para calcular imc de uma pessoa com entrada de peso e altura */

#include<stdio.h> // Biblioteca de entrada e saída padrão
#include<stdlib.h> // Biblioteca para comando system("pause")
float programa02(float peso, float altura); // Prototipo do subprograma principal

// Programa Principal

int main(){
//Declaração das variáveis
float peso, altura; //Variaveis de entrada
float imc; //Variavel de saida

printf("Informe seu peso: (KG) ");
/*Comando scanf("%f", &peso) é para receber um dado digitado pelo usuario e armazena na variavel peso */
scanf("%f",&peso);
printf("Informe sua altura: (m) ");
scanf("%f",&altura);

// Calcular IMC
imc = peso / (altura * altura);

printf("Seu IMC = %.2f \n", imc); //Mostrar o resultado do imc calculado

system("pause");
return 0;

// funçao para calcular imc
float programa02(float peso, float altura){
float imc; //Variavel IMC

imc = peso / (altura * altura);
}
