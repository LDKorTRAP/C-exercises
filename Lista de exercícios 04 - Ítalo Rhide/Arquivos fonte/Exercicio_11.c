//Exercício 11
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char nome[20];
	float acre, valorP, valorF;
	int tipo;
	printf("Bem vindo(a) à Companhia de Pulverização Faz Tudo LTDA!");
	printf("\nInsira seu nome: ");
	scanf("%s", &nome);
	printf("\nAqui oferecemos os seguintes planos de pulverização:\n \nTipo 1: pulverização contra ervas daninhas, R$ 5,00 por acre; \nTipo 2: pulverização contra gafanhotos, R$ 10,00 por acre; \nTipo 3: pulverização contra broca, R$ 15,00 por acre; \nTipo 4: pulverização contra tudo acima, R$ 25,00 por acre;\n");
	printf("\nInsira a área total a ser pulverizada em acres: ");
	scanf("%f", &acre);
	printf("\nDigite o plano desejado (1 | 2 | 3 | 4): ");
	scanf("%d", &tipo);
	//
	if (tipo == 1){
		valorP = acre*5;
	}
	else if (tipo == 2){
		valorP = acre*10;
	}
	else if (tipo == 3){
		valorP = acre*15;
	}
	else if (tipo == 4){
		valorP = acre*25;
	}
	else{
		printf("\nInsira uma opção válida, tente novamente!\n");
		exit(0);
	}
	//
	if (acre > 300){
		valorF = valorP*.95;
	}
	else{
		valorF = valorP;
	}
	if (valorP > 1750){
		valorF = valorF - ((valorF - 1750)*.1);
	}
	printf("\nValor atual do orçamento: R$ %.2f\n", valorP);
	printf("\n---Aplicando possíveis descontos---\n");
	printf("\nO fazendeiro, %s, pagará pelo serviço de pulverização de R$ %.2f.\n", nome, valorF);
	system("PAUSE");
}
