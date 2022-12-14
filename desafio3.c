/*Este programa é para mostrar os filmes e calcular o valor do ingressos */

#include<stdio.h> // Biblioteca padrão para entrada e saída de dados

int main() {
int filme, numIngressos; // Variaveis para entrada e saída de dados
double precoCompra; // Variavel para a saída de dados

printf("Seja bem vindo a bilheteria. Preço dos Ingressos R$ 12.50 \n");
printf("\n");

printf("Escolha o filme: \n");
printf("\n");

printf("Digite 1: Vingadores 4 - da Marvel \n");
printf("Digite 2: Como treinar o seu dragão 3 \n");
printf("Digite 3: Dumbo \n");
printf("Digite 4: Shazam! \n");
printf("\n");

scanf("%d", &filme);
printf("\n");

printf("Informe a quantidade de ingressos: \n");
scanf("%d",&numIngressos);

precoCompra = numIngressos * 12.50;
printf("\n");

printf("São %d ingressos(s) para o filme numero %d no valor total de %.2f", numIngressos, filme, precoCompra);
printf("\n");

printf("Obrigado, volte sempre!");
return 0;
}
