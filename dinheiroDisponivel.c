/* Este programa mostre se vc tem dinheiro suficiente para comprar um livro
   importado com valor em dolar.  */
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
// protótipos de subprogramas
float converter(float d, float td);
bool comparar(float disp, float livroReal);
void resultado(bool sufi, float livroReal, float disp);
//programa principal
int main(){
    
    float dinheiro_disp, livro_em_dolar, tx_dolar; //variáveis de entrada
    float livro_em_real; //variável de saida;
    bool suficiente; //0 - false; 1 - true 
    
    printf("Informe a quatidade de dinehiro diponivel: R$ ");
    scanf("%f",&dinheiro_disp);
    printf("O custo do livro em dolar: US$ ");
    scanf("%f",&livro_em_dolar);
    printf("O valor do dolar de hoje: R$ ");
    scanf("%f",&tx_dolar);
    
    //chamando a função converter(....)
    livro_em_real = converter(livro_em_dolar, tx_dolar) ;
    //chamando a função comparar(...) que atribue um valor booleano para variável suficiente
    suficiente = comparar(dinheiro_disp, livro_em_real) ;
    //chamando o procediemento resultado(....) para mostra o resultado
    resultado(suficiente, livro_em_real, dinheiro_disp);    
       
    system("pause");
    return 0;
}
// uma função para converter um valor em dolar para um valor em reais
float converter(float d, float td){
    float r;
    r = d * td;
    return r;	
}
// uma função retornar um valor booleano
bool comparar(float disp, float livroReal){
    return livroReal<=disp ;
}
// um procediemnto para mostar o resultado final
void resultado(bool sufi, float livroReal, float disp){
   //uma estrutura condicional composta if...else
    if (sufi){
    	printf("Tenha dinheiro suficiente para comprar este livo.\n");
	printf("O valor do livro em real: R$ %.2f.\n", livroReal);
	printf("O dinheiro disponivel: R$ %.2f.\n",disp);
    }	
    else
    {   printf("Nao tenha dinheiro suficiente para comprar este livo.\n");
	printf("O valor do livro em real: R$ %.2f.\n", livroReal);
	printf("O dinheiro disponivel: R$ %.2f.\n",disp);
    }  	
}