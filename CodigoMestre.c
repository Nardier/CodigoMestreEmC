#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <windows.h>

int main(){

// Menu inicial 
//	######################### Operando com arquivos ######################################

  printf ("Bem vindo ao: Criador de codigos em 'C', intuitivo\n"); 
  getch();
//  printf("Arquivo já criado ?");
//  
//  printf("\nSim = 1 | Nao = 2 ?\n->");
//  int confirma_inicio;
//  scanf("%d", &confirma_inicio);
//  fflush(stdin);
//  if(confirma_inicio == 2){
//  	system("cls");
//	
 
  marca2:
  printf("Digite o nome da pasta para ser criada\n->"); 					//Criando Pasta ## INICIO ##
	char nome_pasta[80];  
 	gets(nome_pasta);
 printf("\n\nVocê escolheu -> %s\n\n", nome_pasta);
  printf("\nConfirma a pasta ?");								    	//Confirma extensao por meio de condição
  printf("\nSim = 1 | Nao = 2 ?");
  int confirma_pasta;
  scanf("%d", &confirma_pasta);
  fflush(stdin);
  if(confirma_pasta == 2){
  	system("cls");
	goto marca2;
 }else{
 	if (CreateDirectory (nome_pasta, NULL)){
        printf ("Pasta criada com sucesso!\n\n");
        getch();
    }
    else
    {
        printf ("Erro ao criar a pasta.\n\n");
        getch();
        goto marca2;
    }
}																				//Criando Pasta ## FIM ##
 system("cls");	
  marca:																	//Se não confirmar a extensão ## GOTO ##
  printf ("Diga qual a extensao de arquivo que voce quer criar ?\n");  		// Criando a extensão  ## INICIO ##
  char extensao_arquivo[2];
  scanf("%s", extensao_arquivo);
  printf("Você escolheu -> .%s", extensao_arquivo);
  printf("\nConfirma a extensao ?");								    	//Confirma extensao por meio de condição
  printf("\nSim = 1 | Nao = 2 ?");
  int confirma_extensao;
  scanf("%d", &confirma_extensao);
  fflush(stdin);
  if(confirma_extensao == 2){															
  	system("cls");
	goto marca;																// Criando a extensão ## FIM ##
 }else{
 	system("cls");
 	FILE *arquivo;
 	marca1:																	//Se não confirmar o arquivo ## GOTO ##
 	printf("Criar o nome do arquivo");							        	//Criando o nome do arquivo ## INICIO ##
 	char ponto[] = ".";
 	char diretorio[] = "C:\\Desktop\\";
 	char nome_arq[80];
 	printf("\nDigite um nome\n->");
 	gets(nome_arq);
 	printf("\n\n\n");
 	strcat(nome_arq, ponto);
 	strcat(nome_arq, extensao_arquivo);
 	char barra[] = "\\";
 	strcat(nome_pasta, barra);
 	strcat(nome_pasta, nome_arq);
  printf("\nConfirma a nome do arquivo ?");									//Confirmando arquivo via condição
  printf("\nSim = 1 | Nao = 2 ?");
  int confirma_arquivo;
  scanf("%d", &confirma_arquivo);
  fflush(stdin);
  if(confirma_arquivo == 2){
  	system("cls");
	goto marca1;
 }else {
 	 if (CreateFile (nome_pasta, GENERIC_READ, 0, NULL, CREATE_NEW, FILE_ATTRIBUTE_NORMAL, NULL)){
        printf ("Arquivo criado com sucesso!\n\n");
    }
    else
    {
        printf ("Erro ao criar o arquivo.\n\n");
    }
 }																						// Criando Arquivo ## FIM ##
 // ###################  Operação com arquivo finalizada #######################

}

system("cls");
fflush(stdin);
// ###################  Operação com Criação de codigo #######################
FILE *arquivo = fopen(nome_pasta, "r");
  int caractere, existe_linhas = 0;
  int quant_linhas = 0;
  
  while((caractere = fgetc(arquivo)) != EOF){
    existe_linhas = 3; 
    
    if(caractere == '\n'){ 
      quant_linhas++;             
    } 
  }

  if(existe_linhas)
    quant_linhas ++;

  printf("O arquivo possui %d linhas.\n",quant_linhas );
//}
 







}



// https://www.youtube.com/watch?v=cUZ6tUq4Cds
