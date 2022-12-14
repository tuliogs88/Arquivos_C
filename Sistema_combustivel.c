/* Álcool:
- Até 25 litros, desconto de 5%.
- Acima de 25, desconto de 7,5%.
  Gasolina:
- Até 25 litros, desconto de 7%.
- Acima de 25 litros, desconto de 9%. */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
//declaração de subprogramas 
void menu();
void valorSerPago();
// programa principal
int main(){
    bool continua = true;
    char op;
    
    while (continua){
    	
	valorSerPago(); //chamando subprograma valorSerPago();
    	
	printf("Deseja continuar ? (s/n) ");
    	scanf("%c",&op);
    	if ((op != 's')&&(op != toupper('s')))
    	   continua = false;
    }
        
    system("pause");
    return 0;
}
//subprogramas
void menu(){
    printf("**** Sistema de Combustivel ****\n");
    printf("1 - Gasolina\n");
    printf("2 - Alccol\n");
    printf("********************************\n");  
}
void valorSerPago(){
    int tipo;
    float valorLitros, valorPago;
    
    menu(); //chamando subprograma menu();
    printf("Escolhe a sua opcao: ");
    scanf("%d",&tipo);
    
    switch(tipo){
    	case 1:
    	     printf("Opcao escolhida: Gasolina\n");
	     printf("O valor em litros = ");
    	     scanf("%f",&valorLitros);
    	     fflush(stdin); //para limpar "enter"
    	     if (valorLitros <= 25.0){
    	     	valorPago = valorLitros*5.0 - valorLitros*5.0*0.07;
	     }
	     else{
	     	valorPago = valorLitros*5.0 - valorLitros*5.0*0.09;
	     }
	     printf("O valor pago = R$ %.2f\n", valorPago); 
	     break;
        case 2:
    	     printf("Opcao escolhida: Alcool\n");
	     printf("O valor em litros = ");
    	     scanf("%f",&valorLitros);
    	     fflush(stdin); //para limpar "enter"
    	     if (valorLitros <= 25.0){
    	     	valorPago = valorLitros*3.50 - valorLitros*3.50*0.05;
	     }
	     else{
	     	valorPago = valorLitros*3.50 - valorLitros*3.50*0.075;
	     }
	     printf("O valor pago = R$ %.2f\n", valorPago); 
	     break;
	default:
	     printf("Opcao invalida ! somente numeros 1 e 2\n");
	     valorSerPago(); // chamar seu subprograma recursivamente 
       
    }	
     	
}

