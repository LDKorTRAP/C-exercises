//Exerc�cio 20
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char moeda[10];
	float real, converse;
	printf("Bem vindo ao conversor de moedas internacionais! \nNossas atuais op��es de convers�o s�o: \n--Euro \n--Libra Esterlina \n--Dolar \n--Iene\n");
	printf("\nInsira a op��o desejada de convers�o (E | L | D | I): ");
	scanf("%s", &moeda);
	printf("\nDigite o valor em R$ a ser convertido: ");
	scanf("%f", &real);
	//
	if(strcmp(moeda, "E") == 0 || strcmp(moeda, "e") == 0 || strcmp(moeda, "euro") == 0 || strcmp(moeda, "Euro") == 0){
		converse = real * 2.617;
		printf("\nO valor de R$ %.2f em euros � de %.2f.\n", real, converse);
	}
	else if(strcmp(moeda, "L") == 0 || strcmp(moeda, "l") == 0 || strcmp(moeda, "Libra") == 0 || strcmp(moeda, "libra") == 0){
		converse = real * 3.816;
		printf("\nO valor de R$ %.2f em libras esterlinas � de %.2f.\n", real, converse);
	}
	else if(strcmp(moeda, "D") == 0 || strcmp(moeda, "d") == 0 || strcmp(moeda, "Dolar") == 0 || strcmp(moeda, "dolar") == 0){
		converse = real * 2.071;
		printf("\nO valor de R$ %.2f em d�lares � de %.2f.\n", real, converse);
	}
	else if(strcmp(moeda, "I") == 0 || strcmp(moeda, "i") == 0 || strcmp(moeda, "iene") == 0 || strcmp(moeda, "Iene") == 0){
		converse = real * 1.018;
		printf("\nO valor de R$ %.2f em ienes � de %.2f.\n", real, converse);
	}
	else{
		printf("\nInsira uma op��o v�lida, tente novamente!\n");
		exit(0);
	}
	system("PAUSE");
}
