//Exercício 02
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
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
		printf("\nO aluno %s obteve média %.1f e está aprovado!\n", nome, media);
	}
	else if(media < 7 && media >= 3){
		printf("\nO aluno %s obteve a média %.1f e está de recuperação!\n", nome, media);
	}
	else{
		printf("\nO aluno %s obteve a média de %.1f e está reprovado!\n", nome, media);
	}
	system("PAUSE");
}
