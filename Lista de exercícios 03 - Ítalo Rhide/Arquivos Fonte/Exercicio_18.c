//Exerc�cio 18
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char ar[3], pintura[3], vidro[3], hidra[3];
	float valorB, valorF;
	//
	printf("Insira o pre�o inicial do carro: ");
	scanf("%f", &valorB);
	printf("\nA seguir vir�o as op��es que podem ser adicionadas ao carro. Use S/N para aceitar ou recusar.\n");
	//
	printf("\nAr condicionado (S/N): ");
	scanf("%s", &ar);
	if (strcmp(ar, "S") == 0 || strcmp(ar, "s") == 0){
		valorF = valorB + 1750;
	}
	else{
		valorF = valorB;
	}
	//
	printf("Pintura met�lica (S/N): ");
	scanf("%s", &pintura);
	if (strcmp(pintura, "S") == 0 || strcmp(pintura, "s") == 0){
		valorF = valorF + 800;
	}
	else{
		valorF = valorF;
	}
	//
	printf("Vidro el�trico (S/N): ");
	scanf("%s", &vidro);
	if (strcmp(vidro, "S") == 0 || strcmp(vidro, "s")== 0){
		valorF = valorF + 1200;
	}
	else{
		valorF = valorF;
	}
	//
	printf("Dire��o hidraulica (S/N): ");
	scanf("%s", &hidra);
	if (strcmp(hidra, "S") == 0 || strcmp(hidra, "s") == 0){
		valorF = valorF + 2000;
	}
	else{
		valorF = valorF;
	}
	//
	printf("\nO valor final do ve�culo ser� de R$ %.2f.\n", valorF);
	system("PAUSE");
}
