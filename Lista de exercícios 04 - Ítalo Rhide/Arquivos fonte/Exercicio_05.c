//Exercício 05
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float media;
	printf("---Bem vindo(a) ao programa de estudantes para bolsas!---");
	printf("\nInsira o nome do aluno: ");
	scanf("%s", &nome);
	printf("\nInsira a média do aluno (0 a 10): ");
	scanf("%f", &media);
	//
	if (media <= 10 && media >= 0){
		if(media >= 9){
			printf("\nO aluno %s é altamente recomendado.\n", nome);
		}
		else if(media < 9 && media >= 8){
			printf("\nO aluno %s é fortemente recomendado.\n", nome);
		}
		else if(media < 8 && media >= 7){
			printf("\nO aluno %s é recomendado.\n", nome);
		}
		else{
			printf("\nO aluno %s não é recomendado.\n", nome);
		}
	}
	else{
		printf("\nInsira um valor válido, tente novamente!\n");
	}

	system("PAUSE");
}
