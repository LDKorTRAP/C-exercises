//Exerc�cio 20
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float dist, temp, veloc, total, gas;
	printf("Digite o tempo total da viagem em horas: ");
	scanf("%f", &temp);
	printf("\nDigite a velocidade m�dia do ve�culo em Km/h: ");
	scanf("%f", &veloc);
	//
	dist = temp * veloc;
	gas = dist / 12;
	total = gas * 2.90;
	//
	printf("\nO total com combust�vel a ser gasto na viagem ser� de R$ %.2f.\n", total);
	system("PAUSE");
}
