//Exerc�cio 10
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char dia[20], tipoFita[20];
	float valorB, valorF;
	//
	printf("\nInsira o pre�o normal da fita: ");
	scanf("%f", &valorB);
	printf("Digite a categoria da fita alugado (comum | lan�amento): ");
	scanf("%s", &tipoFita);
	printf("Insira o dia da semana em que a fita foi alugada: ");
	scanf("%s", &dia);
	//
	if (strcmp(dia, "segunda") == 0 || strcmp(dia, "ter�a") == 0 || strcmp(dia, "quinta") == 0){
		if(strcmp(tipoFita, "comum") == 0){
			valorF = valorB - (valorB*.4);
			printf("\nO valor final a ser pago pelo aluguel da fita ser� de R$ %.2f.\n", valorF);
		}
		else{
			valorF = valorB + (valorB*.15) - (valorB*.4);
			printf("\nO valor final a ser pago pelo aluguel da fita ser� de R$ %.2f.\n", valorF);
		}	
	}
	//
	if (strcmp(dia, "quarta") == 0 || strcmp(dia, "sexta") == 0 || strcmp(dia, "sabado") == 0 || strcmp(dia, "domingo") == 0){
		if(strcmp(tipoFita, "comum") == 0){
			valorF = valorB;
			printf("\nO valor final a ser pago pelo aluguel da fita ser� de R$ %.2f.\n", valorF);
		}
		else{
			valorF = valorB + (valorB*.15);
			printf("\nO valor final a ser pago pelo aluguel da fita ser� de R$ %.2f.\n", valorF);
		}	
	}
	system("PAUSE");
}
