//Exercício 10
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char dia[20], tipoFita[20];
	float valorB, valorF;
	//
	printf("\nInsira o preço normal da fita: ");
	scanf("%f", &valorB);
	printf("Digite a categoria da fita alugado (comum | lançamento): ");
	scanf("%s", &tipoFita);
	printf("Insira o dia da semana em que a fita foi alugada: ");
	scanf("%s", &dia);
	//
	if (strcmp(dia, "segunda") == 0 || strcmp(dia, "terça") == 0 || strcmp(dia, "quinta") == 0){
		if(strcmp(tipoFita, "comum") == 0){
			valorF = valorB - (valorB*.4);
			printf("\nO valor final a ser pago pelo aluguel da fita será de R$ %.2f.\n", valorF);
		}
		else{
			valorF = valorB + (valorB*.15) - (valorB*.4);
			printf("\nO valor final a ser pago pelo aluguel da fita será de R$ %.2f.\n", valorF);
		}	
	}
	//
	if (strcmp(dia, "quarta") == 0 || strcmp(dia, "sexta") == 0 || strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0){
		if(strcmp(tipoFita, "comum") == 0){
			valorF = valorB;
			printf("\nO valor final a ser pago pelo aluguel da fita será de R$ %.2f.\n", valorF);
		}
		else{
			valorF = valorB + (valorB*.15);
			printf("\nO valor final a ser pago pelo aluguel da fita será de R$ %.2f.\n", valorF);
		}	
	}
	system("PAUSE");
}
