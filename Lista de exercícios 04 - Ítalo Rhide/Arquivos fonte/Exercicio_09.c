//Exerc�cio 09
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float n1, n2, option, operation;
	printf("Insira o valor de n1: ");
	scanf("%f", &n1);
	printf("Digite o valor de n2: ");
	scanf("%f", &n2);
	printf("\nEscolha uma das opera��es abaixo:");
	printf("\n1 - retornar o quociente inteiro de uma divis�o;\n \n2 - retornar a multiplica��o de dois n�meros;\n \n3 - retornar o soma de dois n�meros;\n \n4 � retornar a subtra��o de dois n�meros;\n");
	scanf("%f", &option);
	//
	if (option == 1){
		operation = n1/n2;
		printf("\nO quociente da divis�o dos valores %.1f e %.1f � %.1f\n", n1, n2, operation);
	}
	else if(option == 2){
		operation = n1*n2;
		printf("\nA multiplica��o dos valores %.1f e %.1f � %.1f\n",n1, n2, operation);
	}
	else if(option == 3){
		operation = n1+n2;
		printf("\nA multiplica��o dos valores %.1f e %.1f � %.1f\n",n1, n2, operation);
	}
	else if(option == 4){
		operation = n1-n2;
		printf("\nA multiplica��o dos valores %.1f e %.1f � %.1f\n",n1, n2, operation);
	}
	else{
		printf("\nInsira uma op��o v�lida, tente novamente!\n");
		exit(0);
	}
	system("PAUSE");
}
