//Exerc�cio 01
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	//A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, aluminio, area, total;
	printf("\nDigite o valor do raio da lata em metros: ");
	scanf("%f", &raio);
	printf("\nDigite o valor da altura da lata em metros: ");
	scanf("%f", &altura);
	aluminio = 100;
	area = 2*3.14*raio*altura + 3.14*raio*raio*2;
	total = 100*area;
	printf("\nO custo total da lata de %.2f m� � de R$ %.2f.\n", area, total);
	system("PAUSE");
}
