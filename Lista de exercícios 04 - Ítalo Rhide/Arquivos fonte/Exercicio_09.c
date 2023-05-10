//Exercício 09
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	float n1, n2, option, operation;
	printf("Insira o valor de n1: ");
	scanf("%f", &n1);
	printf("Digite o valor de n2: ");
	scanf("%f", &n2);
	printf("\nEscolha uma das operações abaixo:");
	printf("\n1 - retornar o quociente inteiro de uma divisão;\n \n2 - retornar a multiplicação de dois números;\n \n3 - retornar o soma de dois números;\n \n4 – retornar a subtração de dois números;\n");
	scanf("%f", &option);
	//
	if (option == 1){
		operation = n1/n2;
		printf("\nO quociente da divisão dos valores %.1f e %.1f é %.1f\n", n1, n2, operation);
	}
	else if(option == 2){
		operation = n1*n2;
		printf("\nA multiplicação dos valores %.1f e %.1f é %.1f\n",n1, n2, operation);
	}
	else if(option == 3){
		operation = n1+n2;
		printf("\nA multiplicação dos valores %.1f e %.1f é %.1f\n",n1, n2, operation);
	}
	else if(option == 4){
		operation = n1-n2;
		printf("\nA multiplicação dos valores %.1f e %.1f é %.1f\n",n1, n2, operation);
	}
	else{
		printf("\nInsira uma opção válida, tente novamente!\n");
		exit(0);
	}
	system("PAUSE");
}
