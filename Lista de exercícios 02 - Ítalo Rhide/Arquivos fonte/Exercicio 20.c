//Exercício 20
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float dist, temp, veloc, total, gas;
	printf("Digite o tempo total da viagem em horas: ");
	scanf("%f", &temp);
	printf("\nDigite a velocidade média do veículo em Km/h: ");
	scanf("%f", &veloc);
	//
	dist = temp * veloc;
	gas = dist / 12;
	total = gas * 2.90;
	//
	printf("\nO total com combustível a ser gasto na viagem será de R$ %.2f.\n", total);
	system("PAUSE");
}
