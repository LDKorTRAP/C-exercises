//Exerc�cio 14
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float ident, n1, n2, n3, mediaE, mediaF;
	printf("Insira o n�mero de identifica��o do aluno: ");
	scanf("%f", &ident);
	printf("Digite a primeira nota do aluno: ");
	scanf("%f", &n1);
	printf("Digite a segunda nota do aluno: ");
	scanf("%f", &n2);
	printf("Digite a terceira nota do aluno: ");
	scanf("%f", &n3);
	printf("Insira a m�dia dos exerc�cios: ");
	scanf("%f", &mediaE);
	//
	mediaF = (n1 + (n2*2) + (n3*3) + mediaE)/7;
	//
	if(mediaF >= 9.1 && mediaF <= 10){
		printf("\nAluno: %.1f \nNotas: \nN1: %.1f \nN2: %.1f \nN3: %.1f \nM�dia dos exerc�cios: %.1f \nM�dia de aproveitamento: %.1f", ident, n1, n2, n3, mediaE, mediaF);
		printf("\nConceito: A \nSitua��o: Aprovado\n");
	}
	else if(mediaF < 9.1 && mediaF >= 7.6){
		printf("\nAluno: %.1f \nNotas: \nN1: %.1f \nN2: %.1f \nN3: %.1f \nM�dia dos exerc�cios: %.1f \nM�dia de aproveitamento: %.1f", ident, n1, n2, n3, mediaE, mediaF);
		printf("\nConceito: B \nSitua��o: Aprovado\n");
	}
	else if(mediaF < 7.6 && mediaF >= 6.1){
		printf("\nAluno: %.1f \nNotas: \nN1: %.1f \nN2: %.1f \nN3: %.1f \nM�dia dos exerc�cios: %.1f \nM�dia de aproveitamento: %.1f", ident, n1, n2, n3, mediaE, mediaF);
		printf("\nConceito: C \nSitua��o: Aprovado\n");
	}
	else if(mediaF < 6.1 && mediaF >= 4.1){
			printf("\nAluno: %.1f \nNotas: \nN1: %.1f \nN2: %.1f \nN3: %.1f \nM�dia dos exerc�cios: %.1f \nM�dia de aproveitamento: %.1f", ident, n1, n2, n3, mediaE, mediaF);
		printf("\nConceito: D \nSitua��o: Reprovado\n");
	}
	else{
			printf("\nAluno: %.1f \nNotas: \nN1: %.1f \nN2: %.1f \nN3: %.1f \nM�dia dos exerc�cios: %.1f \nM�dia de aproveitamento: %.1f", ident, n1, n2, n3, mediaE, mediaF);
		printf("\nConceito: E \nSitua��o: Reprovado\n");
	}
	system("PAUSE");
}
