//Exerc�cio 05
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float media;
	printf("---Bem vindo(a) ao programa de estudantes para bolsas!---");
	printf("\nInsira o nome do aluno: ");
	scanf("%s", &nome);
	printf("\nInsira a m�dia do aluno (0 a 10): ");
	scanf("%f", &media);
	//
	if (media <= 10 && media >= 0){
		if(media >= 9){
			printf("\nO aluno %s � altamente recomendado.\n", nome);
		}
		else if(media < 9 && media >= 8){
			printf("\nO aluno %s � fortemente recomendado.\n", nome);
		}
		else if(media < 8 && media >= 7){
			printf("\nO aluno %s � recomendado.\n", nome);
		}
		else{
			printf("\nO aluno %s n�o � recomendado.\n", nome);
		}
	}
	else{
		printf("\nInsira um valor v�lido, tente novamente!\n");
	}

	system("PAUSE");
}
