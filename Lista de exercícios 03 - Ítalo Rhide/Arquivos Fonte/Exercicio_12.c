//Exerc�cio 12
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char tipo[10], pay[20];
	int nmrP;
	float valor, money, avistaC, parcelas, parcelado3;
	printf("Digite o valor de etiqueta do produto: ");
	scanf("%f", &valor);
	printf("Insira a forma de pagamento (avista | parcelado): ");
	scanf("%s", &tipo);
	if (strcmp(tipo, "avista") == 0){
		printf("\ndinheiro | cartao | cheque: ");
		scanf("%s", &pay);
		if (strcmp(pay, "dinheiro") == 0 || strcmp(pay, "cheque") == 0){
			money = valor - (valor*.1);
			printf("\nO produto, de valor original R$ %.2f, a ser pago com %s sair� no valor de R$ %.2f.\n", valor, pay, money);
		}
		else if (strcmp(pay, "cartao") == 0){
			avistaC = valor - (valor*.05);
			printf("\nO produto, de valor original R$ %.2f, a ser pago com %s sair� no valor de R$ %.2f.\n", valor, pay, avistaC);
		}
		else{
			printf("\nInsira uma op��o de pagamento v�lida. Tente novamente!\n");
		}
	}
	//
	else if (strcmp(tipo, "parcelado") == 0){
		printf("\nPodemos parcelar em 2 ou 3 vezes, insira a op��o desejada: ");
		scanf("%d", &nmrP);
		if (nmrP == 2){
			parcelas = valor/2;
			printf("\nParcelando em duas vezes, n�o haver� acr�scimos de juros e o valor ser� de R$ %.2f com duas parcelas de R$ %.2f.\n", valor, parcelas);
		}
		else if (nmrP == 3){
			parcelado3 = valor + (valor*.1);
			parcelas = valor/3;
			printf("\nCom o acr�scimo de 10 por cento de juros, o produto de valor R$ %.2f ir� custar um total de R$ %.2f com tr�s parcelas de %.2f.\n", valor, parcelado3, parcelas);
		}
		else{
			printf("\nInsira uma op��o v�lida. Tente novamente!\n");
		}
	}
	else{
		printf("\nInsira uma op��o v�lida. Tente novamente!\n");

	}
	system("PAUSE");
	}
