//Exercício 17
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char sexo[20];
	float altura, peso;
	printf("Insira sua altura: ");
	scanf("%f", &altura);
	printf("Insira seu sexo (masculino/feminino): ");
	scanf("%s", &sexo);
	//
	if (strcmp(sexo, "masculino") == 0){
		peso = (72.7*altura) - 58;
		printf("\nSe você tem %.2f m de altura, seu peso ideal é %.2f kg\n", altura, peso);
	}
	else if(strcmp(sexo, "feminino") == 0){
		peso = (62.1*altura) - 44.7;
		printf("\nSe você tem %.2f m de altura, seu peso ideal é %.2f kg.\n", altura, peso);
	}
	else{
		printf("\nInsira uma das opções dadas. Tente novamente!\n");
	}
	system("PAUSE");
}
