/* Este programa é para calcuar imc de uma pessoa com
   entrada de peso e altura  */
#include <stdio.h> //bibloteca para entrada e saida padrão
#include <stdlib.h> //biblioteca para camando system("pause")
// programa principal
int main(){
    //declaração de variáveis
    float peso, altura;  // variáveis de entrada
    float imc;	// variável de saida
    
    printf("Informe o seu peso: (Kg) ");
    /* comando scanf("%f",&peso) é para receber um dado digitado por usuário e armazana
    na variável peso */
    scanf("%f",&peso); 
    printf("Informe a sua altura: (m) ");
    scanf("%f",&altura);
    
    imc = peso/(altura * altura);  // calcualr imc
    
    printf("Seu imc = %.2f \n",imc); // mostar o imc calculado
    
    // uma estrutura condicional simples
    if (imc < 18.5)
       printf("Sua situacao: Magreza ! precisa alimentar melhor !\n");
    if ( (imc >= 18.5) && (imc <= 24.9)) // intervalo entre 18.5 e 24.9
       printf("Sua situacao: Peso normal: muito saude !\n");
    if ( (imc > 24.9) && (imc <= 29.9))  // intervalo entre 24.9 e 29.9 
       printf("Sua situacao: Sobrepeso: precisar magrecer pouco !\n");
    if ( (imc > 29.9) && (imc <= 34.9)) // intervalo entre 29.9 e 34.9 
       printf("Sua situacao: Obesidade de grau I: precisar magrecer mais !\n");
    if ( imc > 34.9 )
       printf("Sua situacao: Obesidade de grau II: precisar magrecer muito !\n");   
   
    
    system("pause");	
    return 0;
}