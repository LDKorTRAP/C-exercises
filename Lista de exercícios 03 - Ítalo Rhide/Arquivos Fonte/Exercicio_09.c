//Exerc�cio 09
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char tipo[20];
	float agua, conta;
	printf("Bem vindo(a) ao sistema de cobran�a da SANEAGO!");
	printf("\nDigite o seu tipo de consumo(residencial | comercial | industrial): ");
	scanf("%s", &tipo);
	printf("Digite o valor total de �gua gasto em m�: ");
	scanf("%f", &agua);
	//
	if(strcmp(tipo, "residencial") == 0){
		conta = (agua * 0,05) + 5;
		printf("O gasto de %.1f m� de �gua gerou um total a ser pago de R$ %.2f.", agua, conta);
	}
	else if(strcmp(tipo, "comercial") == 0){
		if(agua <= 80){
			conta = 500;
			printf("O gasto de %.1f m� de �gua gerou um total a ser pago de R$ %.2f.", agua, conta);
		}
		else{
			conta = 500 + (agua - 80)*0.25;
			printf("O gasto de %.1f m� de �gua gerou um total a ser pago de R$ %.2f.", agua, conta);
		}	
	}
	else{
		if(agua <= 100){
			conta = 800;
			printf("O gasto de %.1f m� de �gua gerou um total a ser pago de R$ %.2f.", agua, conta);
		}
		else{
			conta = 800 + (agua - 100)*0.04;
			printf("O gasto de %.1f m� de �gua gerou um total a ser pago de R$ %.2f.", agua, conta);
		}	
	}
}
