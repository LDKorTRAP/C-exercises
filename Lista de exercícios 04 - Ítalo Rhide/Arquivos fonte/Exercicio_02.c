//Exerc�cio 02
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float n1, n2, media;
	printf("Digite o nome do aluno: ");
	scanf("%s", &nome);
	printf("\nDigite a nota 1 do aluno: ");
	scanf("%f", &n1);
	printf("\nDigite a nota 2 do aluno: ");
	scanf("%f", &n2);
	media = ((n1 * 2) + (n2 * 3))/5;
	//
	if (media >= 7){
		printf("\nO aluno %s obteve m�dia %.1f e est� aprovado!\n", nome, media);
	}
	else if(media < 7 && media >= 3){
		printf("\nO aluno %s obteve a m�dia %.1f e est� de recupera��o!\n", nome, media);
	}
	else{
		printf("\nO aluno %s obteve a m�dia de %.1f e est� reprovado!\n", nome, media);
	}
	system("PAUSE");
}
