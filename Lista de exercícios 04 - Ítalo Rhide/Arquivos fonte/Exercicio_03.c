//Exerc�cio 03
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	int idade;
	printf("Insira o nome da pessoa: ");
	scanf("%s", &nome);
	printf("\nInsira a idade da pessoa: ");
	scanf("%d", &idade);
	//
	if (idade >= 18){
		printf("\n%s tem %d anos e � maior de idade.\n", nome, idade);
	}
	else{
		printf("\n%s tem %d anos e n�o � maior de idade.\n", nome, idade);
	}
	system("PAUSE");
}
