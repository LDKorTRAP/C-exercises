//Exerc�cio 17
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
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
		printf("\nSe voc� tem %.2f m de altura, seu peso ideal � %.2f kg\n", altura, peso);
	}
	else if(strcmp(sexo, "feminino") == 0){
		peso = (62.1*altura) - 44.7;
		printf("\nSe voc� tem %.2f m de altura, seu peso ideal � %.2f kg.\n", altura, peso);
	}
	else{
		printf("\nInsira uma das op��es dadas. Tente novamente!\n");
	}
	system("PAUSE");
}
