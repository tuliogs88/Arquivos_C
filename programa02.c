/* este programa é para calcular imc de uma pessoa com entrada de peso e altura */

#include<stdio.h> // Biblioteca de entrada e saída padrão
#include<stdlib.h> // Biblioteca para comando system("pause")

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
// Estrutura Condicional simples
if (imc < 18.5) // Menor que 18.5
printf("Sua situação: Magreza!, precisa se alimentar mais \n");
if ((imc >= 18.5) && (imc <= 24.9)) // Entre 18.5 e 24.9
printf("Sua situação: Peso Normal!, Muita saúde \n");
if ((imc > 24.9) && (imc <= 29.9)) // Entre 24.9 e 29.9
printf("Sua situação: Sobrepeso!, precisar emagrecer um pouco \n");
if ((imc > 29.9) && (imc <= 34.9)) // Entre 29.9 e 34.9
printf("Sua situação: Obesidade de grau I:, precisar emagrecer mais \n");
if (imc > 34.9) // Maior que 34.9
printf("Sua situação: Obesidade de grau II:, precisar emagrecer urgente \n");

system("pause");
return 0;
}
