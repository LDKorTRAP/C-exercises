//Exerc�cio 05
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float altura, larguraB, volume;
	printf("\nDigite o valor da largura da base em m: ");
	scanf("%f", &larguraB);
	printf("Digite o valor da altura m: ");
	scanf("%f", &altura);
	//
	volume = (larguraB*altura)/3;
	printf("A piramide de base %.1f e altura %.1f tem volume total de %.1f m�.\n", larguraB, altura, volume);
	system("PAUSE");
}
