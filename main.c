#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) 
{
	int idade,contribuicao,ano_atual,ano_total;
	char sexo; char prof;
	
	printf("Qual seu sexo? \"M\" para masculino e \"F\" para feminino. ");
	sexo = getchar();
	printf("Voce e professor ou professora? Digite \"S\" para sim ou \"N\" para nao ");
	scanf("%s",&prof);
	printf("Por quantos anos voce ja contribuiu? ");
	scanf("%d", &contribuicao);
	printf("Digite o ano do seu nascimento: ");
	scanf("%d", &idade);
	printf("Digite o ano atual: ");
	scanf("%d", &ano_atual);
	
	ano_total = (ano_atual - idade) + contribuicao;	
	
	printf("Soma da idade com o tempo de contribuição: %d\n\n", ano_total);
	
	if((sexo=='m'|| sexo=='M')&& (prof=='s' || prof=='S') && (ano_total>=85))
		printf("Parabens professor a soma da sua idade com o valor de contrinuiçao corresponde a %d.Voce garantiu o seu direito de aposentadoria", ano_total);
	else if((sexo=='m'|| sexo=='M')&& (prof=='s' || prof=='S') && (ano_total<=84))
		printf("Professor a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a suacontribuicao deve ser maior que 84.", ano_total);

	
	if((sexo=='f'|| sexo=='F')&& (prof=='s' || prof=='S') && (ano_total>=75))
		printf("Parabens professora a soma da sua idade com o valor de contrinuiçao corresponde a %d. Voce garantiu o seu direito de aposentadoria", ano_total);
	else if((sexo=='f'|| sexo=='F')&& (prof=='s' || prof=='S') && (ano_total<=74))
		printf("Professora a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 74.", ano_total);
	
	
	if((sexo=='f'|| sexo=='F')&& (prof=='n' || prof=='N') && (ano_total>=85))
		printf("Parabens senhora a soma da sua idade com o valor de contrinuiçao corresponde a %d. Voce garantiu o seu direito de aposentadoria", ano_total);
	else if((sexo=='f'|| sexo=='F')&& (prof=='n' || prof=='N') && (ano_total<=84))
		printf("Senhora a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 84.", ano_total);
	
	if((sexo=='m'|| sexo=='M')&& (prof=='n' || prof=='N') && (ano_total>=95))
		printf("Parabens senhor a soma da sua idade com o valor de contrinuiçao corresponde a %d. Voce garantiu o seu direito de aposentadoria", ano_total);
	else if((sexo=='m'|| sexo=='M')&& (prof=='n' || prof=='N') && (ano_total<=94))
		printf("Senhor a soma da sua idade com sua contribuicao foi %d. Voce nao pode se aposentar pois o valor da soma da sua idade com a sua contribuicao deve ser maior que 94.", ano_total);


	
	printf("\n\n");
	system("pause");
	return 0;
}
