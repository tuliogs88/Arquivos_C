/* Este programa é para calcuar imc de uma pessoa com
   entrada de peso e altura  */
#include <stdio.h> //bibloteca para entrada e saida padrão
#include <stdlib.h> //biblioteca para camando system("pause")
float pesoIdeal(float altura); //Protótipo da função
float calcularImc(float peso, float altura); //prototipo da função
void verificarImc(float imc); //protótipo do procediemento
// programa principal
int main(){
    //declaração de variáveis
    float peso1, peso2, altura1, altura2;  // variáveis de entrada
    float imc1, imc2;	// variável de saida
    float pesoIdeal1, pesoIdeal2;
    
    printf("Informe o seu peso: (Kg) ");    
    scanf("%f",&peso1); 
    printf("Informe a sua altura: (m) ");
    scanf("%f",&altura1);
    printf("Informe o peso da sua esposa: (Kg) ");    
    scanf("%f",&peso2); 
    printf("Informe a altura da sua esposa: (m) ");
    scanf("%f",&altura2);
    
    printf("Seu peso ideal = %2.f \n", pesoIdeal(altura1));
    imc1 = calcularImc(peso1, altura1); // chamando a função
    printf("Seu imc = %.2f \n",imc1);
    verificarImc(imc1);  // chamando o procediemnto   
    
    
    printf("Seu peso ideal da sua esposa = %2.f \n", pesoIdeal(altura2));  
    imc2 = calcularImc(peso2, altura2);    
    printf("Sua esposa imc = %.2f \n",imc2);  
    verificarImc(imc2);     
      
    system("pause");	
    return 0;
}
// uma função para calcular imc
float calcularImc(float peso, float altura){
    float imc; // variável local    
    imc = peso/(altura * altura);    
    return imc;
}
// um procedimento para verificar imc
void verificarImc(float imc){
    
    if (imc < 18.5)
       printf("A situacao: Magreza ! precisa alimentar melhor !\n");
    if ( (imc >= 18.5) && (imc <= 24.9)) // intervalo entre 18.5 e 24.9
       printf("A situacao: Peso normal: muito saude !\n");
    if ( (imc > 24.9) && (imc <= 29.9))  // intervalo entre 24.9 e 29.9 
       printf("A situacao: Sobrepeso: precisar magrecer pouco !\n");
    if ( (imc > 29.9) && (imc <= 34.9)) // intervalo entre 29.9 e 34.9 
       printf("A situacao: Obesidade de grau I: precisar magrecer mais !\n");
    if ( imc > 34.9 )
       printf("A situacao: Obesidade de grau II: precisar magrecer muito !\n");  

}
// uma função para calcular Peso Ideal
float pesoIdeal(float altura) {
float pesoIdeal; // Variavel local
pesoIdeal = 72.7 * altura - 58;
return pesoIdeal;
}
