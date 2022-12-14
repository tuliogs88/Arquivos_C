#include<stdio.h>
#include<stdlib.h>

void menu();
void pagamento();

//Programa Principal
int main(){
 pagamento(); //Chamando subprograma
pagamento();

 system("pause");
 return 0;
}

//subprogramas
void menu(){
 printf("Bem - Vindo ao Sistema de combustivel \n");
 printf("1 - Gasolina \n");
 printf("2 - Alcool \n");
}

void pagamento(){
 int opcao; //variavel local
 float litros, valoraserpago; //variáveis locais
   
   menu(); // chamando subprograma menu()
   printf("Escolhe a sua opcao: ");
   scanf("%d",&opcao);
   switch(opcao){
	case 1:
		printf("Valor em litros do abastecimento: ");
		scanf("%f",&litros);
		//fflush(stdin); 
		valoraserpago = 5 * litros;			
		if(litros<=25)				
		     valoraserpago = valoraserpago - 0.07 * valoraserpago;		
		else				
		     valoraserpago = valoraserpago - 0.09 * valoraserpago;
		printf("Valor a ser pago: R$ %.2f\n", valoraserpago);
		break;
	case 2:
		printf("Valor em litros do abastecimento: ");
		scanf("%f",&litros);
		//fflush(stdin); 
		valoraserpago = 3.5 * litros;
		if(litros<=25)			
		     valoraserpago = valoraserpago - 0.05 * valoraserpago;			
		else
		     valoraserpago = valoraserpago - 0.075 * valoraserpago;			
		printf("Valor a ser pago: R$ %.2f\n", valoraserpago);
		break;

	default:
		printf("Tipo de combustivel invalido!!!!!\n");
	}	
}
