//Exercício 01
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int M, N;
	printf("\nVamos verificar se M é divisível por N!\n");
	printf("\nDigite um valor inteiro para M: ");
	scanf("%d", &M);
	printf("Digite um valor inteiro para N: ");
	scanf("%d", &N);
	//
	if(M % N == 0){
		printf("\nO valor %d é divisível por %d.\n", M, N);
	}
	else{
		printf("\nO valor %d não é divisível por %d.\n", M, N);
	}
	system("PAUSE");
}
