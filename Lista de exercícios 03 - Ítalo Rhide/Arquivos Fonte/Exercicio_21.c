//Exerc�cio 21
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	int dia, mesNUM, ano;
	printf("Vamos inserir uma data.");
	printf("\nDigite o dia: ");
	scanf("%d", &dia);
	printf("Digite o m�s (n�mero): ");
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
			printf("O m�s de janeiro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 2){
		if(dia <=29){
			printf("\nData reformulada: %d de fevereiro de %d\n", dia, ano);
		}
		else{
			printf("O m�s de fevereiro possui at� 29 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 3){
		if(dia <=31){
			printf("\nData reformulada: %d de mar�o de %d\n", dia, ano);
		}
		else{
			printf("O m�s de mar�o possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 4){
		if(dia <=30){
			printf("\nData reformulada: %d de abril de %d\n", dia, ano);
		}
		else{
			printf("O m�s de abril possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 5){
		if(dia <=31){
			printf("\nData reformulada: %d de maio de %d\n", dia, ano);
		}
		else{
			printf("O m�s de maio possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 6){
		if(dia <=30){
			printf("\nData reformulada: %d de junho de %d\n", dia, ano);
		}
		else{
			printf("O m�s de junho possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 7){
		if(dia <=31){
			printf("\nData reformulada: %d de julho de %d\n", dia, ano);
		}
		else{
			printf("O m�s de julho possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 8){
		if(dia <=31){
			printf("\nData reformulada: %d de agosto de %d\n", dia, ano);
		}
		else{
			printf("O m�s de agosto possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 9){
		if(dia <=30){
			printf("\nData reformulada: %d de setembro de %d\n", dia, ano);
		}
		else{
			printf("O m�s de setembro possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 10){
		if(dia <=31){
			printf("\nData reformulada: %d de outubro de %d\n", dia, ano);
		}
		else{
			printf("O m�s de outubro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 11){
		if(dia <=30){
			printf("\nData reformulada: %d de novembro de %d\n", dia, ano);
		}
		else{
			printf("O m�s de novembro possui apenas 30 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else if(mesNUM == 12 ){
		if(dia <=31){
			printf("\nData reformulada: %d de dezembro de %d\n", dia, ano);
		}
		else{
			printf("O m�s de dezembro possui apenas 31 dias, insira a data corretamente.");
			exit(0);
		}
	}
	else{
		printf("\nInsira uma op��o v�lida, tente novamente!\n");
		exit(0);
	}
	system("PAUSE");
}
