//Exerc�cio 07
//�talo Rhide
#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h>
int main()
{
    //A locale.h permite que o n�mero float seja inserido com "," em vez de "." (execut�vel falha se utilizar ponto na presen�a da locale pt).
    setlocale(LC_ALL, "Portuguese");
	char mes[15];
	int ano, dia, anobi, fevbi;
	printf("\nDigite o dia atual: ");
	scanf("%d", &dia);
	//
	if (dia >= 32){
		printf("Nenhum m�s possui mais de 31 dias, digite a data corretamente.");
		exit(32);
	}
	else if (dia == 0){
		printf("Nenhum m�s possui o dia 0, digite a data corretamente.");
		exit(0);
	}
	//
	printf("\nDigite o m�s atual (por extenso): ");
	scanf("%s", &mes);
	//
	if (strcmp(mes, "fevereiro") == 0 && dia >= 30){
		printf("\nFevereiro n�o pode ter mais de 29 dias, tente novamente.\n");
		exit(0);
	}
	//
	printf("\nDigite o ano atual: ");
	scanf("%d", &ano);
	//
	if (ano % 4 == 0 ) {
	anobi = 366;
	fevbi = 29;
	}
	else {
	anobi = 365;
	fevbi = 28;
	}
	//
	if (strcmp(mes, "janeiro") == 0) {
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "fevereiro") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente %d dias e o ano com %d dias totais\n", ano, mes, fevbi, anobi);
	}
	//
	if (strcmp(mes, "mar�o") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "abril") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "maio") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "junho") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "julho") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "agosto") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "setembro") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "outubro") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "novembro") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 30 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	//
	if (strcmp(mes, "dezembro") == 0){
		printf("\nEstando em %d, o m�s de %s conta com atualmente 31 dias e o ano com %d dias totais\n", ano, mes, anobi);
	}
	system("PAUSE");
}
