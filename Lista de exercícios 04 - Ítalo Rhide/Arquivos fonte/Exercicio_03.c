//Exercício 03
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	int idade;
	printf("Insira o nome da pessoa: ");
	scanf("%s", &nome);
	printf("\nInsira a idade da pessoa: ");
	scanf("%d", &idade);
	//
	if (idade >= 18){
		printf("\n%s tem %d anos e é maior de idade.\n", nome, idade);
	}
	else{
		printf("\n%s tem %d anos e não é maior de idade.\n", nome, idade);
	}
	system("PAUSE");
}
