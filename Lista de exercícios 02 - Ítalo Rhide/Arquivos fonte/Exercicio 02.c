//Exerc�cio 02
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float tempC, rainP, tempF, rainMM;
	printf("\nFaremos a seguir algumas convers�es de temperatura e quantidade de chuva.");
	//
	printf("\nDigite o valor da temperatura em graus Celsius: ");
	scanf("%f", &tempC);
	tempF = (tempC*9)/5+32;
	printf("\nA temperatura de %.1f �C �, em fahrenheit, equivalente � %.1f �F.", tempC, tempF);
	//
	printf("\nDigite o valor da quantidade de chuva em polegadas: ");
	scanf("%f", &rainP);
	rainMM = rainP*25.4;
	printf("A chuva de %.1f polegadas �, em mm de chuva, equivalente � %.1f mm.\n", rainP, rainMM);
	//
	system("PAUSE");
}
