//Exerc�cio 01
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int M, N;
	printf("\nVamos verificar se M � divis�vel por N!\n");
	printf("\nDigite um valor inteiro para M: ");
	scanf("%d", &M);
	printf("Digite um valor inteiro para N: ");
	scanf("%d", &N);
	//
	if(M % N == 0){
		printf("\nO valor %d � divis�vel por %d.\n", M, N);
	}
	else{
		printf("\nO valor %d n�o � divis�vel por %d.\n", M, N);
	}
	system("PAUSE");
}
