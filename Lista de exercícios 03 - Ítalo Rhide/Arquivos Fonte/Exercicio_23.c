//Exerc�cio 23
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char letras[3];
	int num, placa, milhar, centena, dezena;
	printf("Bem vindo ao verificador de placas da PRF!\n");
	printf("\nInsira as 3 letras da placa(XXX): ");
	scanf("%s", &letras);
	printf("\nInsira os 4 n�meros da placa (9999): ");
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
	printf("\nO ve�culo de placa %s-%d dever� ter o emplacamento renovado no m�s %d.\n", letras, placa, num);
	system("PAUSE");
}
