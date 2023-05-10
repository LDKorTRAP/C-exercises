//Exercício 21
//Ítalo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o número float seja inserido com "," em vez de "." (executável falha se utilizar ponto na presença da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int dia, mesNUM, ano;
	printf("Vamos inserir uma data.");
	printf("\nDigite o dia: ");
	scanf("%d", &dia);
	printf("Digite o mês (número): ");
	scanf("%d", &mesNUM);
	printf("Digite o ano: ");
	scanf("%d", &ano);
	//
	printf("\nData: %d/%d/%d\n", dia, mesNUM, ano);
	//
	if (mesNUM == 1){
		if(dia <=31){
			printf("\nData reformulada: %d de janeiro de %d\n", dia, ano);
		}
		else{
			printf("O mês de janeiro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 2){
		if(dia <=29){
			printf("\nData reformulada: %d de fevereiro de %d\n", dia, ano);
		}
		else{
			printf("O mês de fevereiro possui até 29 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 3){
		if(dia <=31){
			printf("\nData reformulada: %d de março de %d\n", dia, ano);
		}
		else{
			printf("O mês de março possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 4){
		if(dia <=30){
			printf("\nData reformulada: %d de abril de %d\n", dia, ano);
		}
		else{
			printf("O mês de abril possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 5){
		if(dia <=31){
			printf("\nData reformulada: %d de maio de %d\n", dia, ano);
		}
		else{
			printf("O mês de maio possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 6){
		if(dia <=30){
			printf("\nData reformulada: %d de junho de %d\n", dia, ano);
		}
		else{
			printf("O mês de junho possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 7){
		if(dia <=31){
			printf("\nData reformulada: %d de julho de %d\n", dia, ano);
		}
		else{
			printf("O mês de julho possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 8){
		if(dia <=31){
			printf("\nData reformulada: %d de agosto de %d\n", dia, ano);
		}
		else{
			printf("O mês de agosto possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 9){
		if(dia <=30){
			printf("\nData reformulada: %d de setembro de %d\n", dia, ano);
		}
		else{
			printf("O mês de setembro possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 10){
		if(dia <=31){
			printf("\nData reformulada: %d de outubro de %d\n", dia, ano);
		}
		else{
			printf("O mês de outubro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 11){
		if(dia <=30){
			printf("\nData reformulada: %d de novembro de %d\n", dia, ano);
		}
		else{
			printf("O mês de novembro possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 12 ){
		if(dia <=31){
			printf("\nData reformulada: %d de dezembro de %d\n", dia, ano);
		}
		else{
			printf("O mês de dezembro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else{
		printf("\nInsira uma opção válida, tente novamente!\n");
		exit(0);
	}
	system("PAUSE");
}
