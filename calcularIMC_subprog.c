/* Este programa é para calcuar imc de uma pessoa com
   entrada de peso e altura  */
#include <stdio.h> //bibloteca para entrada e saida padrão
#include <stdlib.h> //biblioteca para camando system("pause")
float calcularImc(float peso, float altura); //prototipo da função
// programa principal
int main(){
    //declaração de variáveis
    float peso1, peso2, altura1, altura2;  // variáveis de entrada
    float imc1, imc2;	// variável de saida
    
    printf("Informe o seu peso: (Kg) ");    
    scanf("%f",&peso1); 
    printf("Informe a sua altura: (m) ");
    scanf("%f",&altura1);
    printf("Informe o peso da sua esposa: (Kg) ");    
    scanf("%f",&peso2); 
    printf("Informe a altura da sua esposa: (m) ");
    scanf("%f",&altura2);
    
    imc1 = calcularImc(peso1, altura1);  //chamando a função calcularImc(...)
    imc2 = calcularImc(peso2, altura2);
    
    printf("Seu imc = %.2f \n",imc1); // mostar o imc calculado
    printf("Sua esposa imc = %.2f \n",imc2);     
      
    system("pause");	
    return 0;
}
// uma função para calcular imc
float calcularImc(float peso, float altura){
    float imc; // variável local    
    imc = peso/(altura * altura);    
    return imc;
}
