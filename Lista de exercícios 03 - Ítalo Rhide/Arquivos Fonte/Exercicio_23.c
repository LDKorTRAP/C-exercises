//Exercício 23
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char letras[3];
	int num, placa, milhar, centena, dezena;
	printf("Bem vindo ao verificador de placas da PRF!\n");
	printf("\nInsira as 3 letras da placa(XXX): ");
	scanf("%s", &letras);
	printf("\nInsira os 4 números da placa (9999): ");
	scanf("%i", &num);
	//
	placa = num;
	milhar = num/1000;
	num = num - (milhar*1000);
	centena = num/100;
	num = num - (centena*100);
	dezena = num / 10;
	num = num - (dezena*10);
	//
	printf("\nO veículo de placa %s-%d deverá ter o emplacamento renovado no mês %d.\n", letras, placa, num);
	system("PAUSE");
}
