//Exercício 01
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main ()
{
	//A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
	setlocale(LC_ALL, "Portuguese");
	float raio, altura, aluminio, area, total;
	printf("\nDigite o valor do raio da lata em metros: ");
	scanf("%f", &raio);
	printf("\nDigite o valor da altura da lata em metros: ");
	scanf("%f", &altura);
	aluminio = 100;
	area = 2*3.14*raio*altura + 3.14*raio*raio*2;
	total = 100*area;
	printf("\nO custo total da lata de %.2f m² é de R$ %.2f.\n", area, total);
	system("PAUSE");
}
