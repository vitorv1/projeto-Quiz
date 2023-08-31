#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menuInicial(){
	setlocale(LC_ALL, "PORTUGUESE");
	int menu = 0;
 printf("_______________________________________________________________\n");
 printf("|                                                              |\n");    
 printf("|      **********      ***       ***    ***   *************    |\n");
 printf("|     ************     ***       ***    ***   *************    |\n");
 printf("|    *****    *****    ***       ***    ***            ****    |\n");
 printf("|    ***        ***    ***       ***    ***           ****     |\n");
 printf("|   ****        ****   ***       ***    ***          ****      |\n");
 printf("|   ***          ***   ***       ***    ***         ****       |\n"); 
 printf("|   ***          ***   ***       ***    ***        ****        |\n");
 printf("|   ***          ***   ***       ***    ***       ****         |\n"); 
 printf("|   ***          ***   ***       ***    ***      ****          |\n");
 printf("|   ***          ***   ***       ***    ***     ****           |\n");
 printf("|   ****        ***    ***       ***    ***    ****            |\n"); 
 printf("|    ***       ****    ***       ***    ***   ****             |\n");
 printf("|    *****   *****     ****     ****    ***  ****              |\n"); 
 printf("|       ******* **      ***********     ***  **************    |\n");
 printf("|         ***    **      *********      ***  **************    |\n");
 printf("|                 **                                           |\n");
 printf("|                                                              |\n");
 printf("|                                                              |\n");
 printf("|                           DIGITE:                            |\n");
 printf("|                                                              |\n");
 printf("|                        1 - JOGAR                             |\n");
 printf("|                        2 - CRÉDITOS                          |\n");
 printf(" _____________________________________________________________	\n"); 
 printf("OPÇÃO: ");
 scanf("%d", &menu);
 return menu;
}


void menuRegrasPt1(){
	
	setlocale(LC_ALL, "PORTUGUESE");

	printf("    ____________________________________________________________\n");
	printf("                                                            \n");
	printf("	BEM VINDO AO QUIZ TECH, AQUI VOCÊ ENCONTRARÁ PERGUNTAS  \n");
	printf("	RELACIONADAS AO MUNDO DA TÉCNOLOGIA E QUE DESAFIARAM    \n");
	printf("	SEUS CONHECIMENTOS 										\n");
	printf("	BOA SORTE E QUE SE DIVIRTA :) !!!!!						\n");
	printf("    ----------------------------------------------------------- \n");
	printf("															\n");
	printf("	O QUIZ É DIVIDIDO EM TRÊS DIFICULDADE: FÁCIL, MÉDIO	    \n");
	printf("	DIFÍCIL. CADA DIFICULDADE TEM 5 PERGUNTAS.			    \n");
	printf("															\n");
	printf("	TEMOS A OPÇÃO DE TRÊS MODOS DE JOGO:					\n");
	printf("	 														\n");
	printf("	-PADRÃO: AS PERGUNTAS COMEÇAM NO MODO DÍFICIL E VÂO     \n");
	printf("	 ESCALANDO O NÍVEL DE DIFICULDADE.						\n");
	printf("															\n");
	printf("	-DIFICULDADE: AQUI VOCÊ PODE ESCOLHER EM QUAL			\n");
	printf("	 DIFICULDADE IRÁ JOGAR PARA O RESTO DO JOGO			    \n");
	printf("	                             							\n");
	printf("	-ALEATÓRIO: MODO RECOMENDADO PELOS DESENVOLVEDORES,	    \n");
	printf("	 NESSE MODO VIRAM PERGUNTAS ALEATÓRIAS, INCLUSIVES SUAS	\n");
	printf("	 DIFICULDADES.											\n");
	printf("															\n");
	printf("    -----------------------------------------------------------\n");	
}


void menuRegrasPt2(){
	setlocale(LC_ALL, "PORTUGUESE");
	
	printf("                             PONTOS                            \n");
	printf("                                                           \n");
	printf("         OS PONTOS DO QUIZ FUNCIONAM DE FORMA COERENTE COM A    \n");
	printf("	 DIFICULDADE DA QUESTÃO, QUESTÕES DO NÍVEL FÁCIL VALEM	\n");
 	printf("	 MENOS PONTOS QUE UMA QUESTÃO DO NÍVEL DIFÍCIL			\n");
 	printf("															\n");
 	printf("	                 TABELA DE PONTOS  				        \n");		
 	printf("															\n");
 	printf("                       --------------------					    \n");
 	printf("	                 QUESTÃO    PONTOS 						\n");
	printf("	               --------------------					    \n");
	printf("                          FÁCIL       10	  					    \n");
	printf("		          MÉDIA       15	  						\n");
	printf("		          DIFÍCIL     20	  						\n");
	printf("	               --------------------			                   					\n");
	printf("															\n");
	
	
	
	
}
void menuJogar(){
	
	
	
	
	
	
}
void main(){
   /*switch(menuInicial()){
   	 case 1: printf("Metodo jogar"); break;
   	 case 2: printf("Método créditos"); break;
    }*/
	menuRegrasPt1();
	menuRegrasPt2();
}
