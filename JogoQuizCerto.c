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
	printf("                                REGRAS                          \n");   
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


int menuRegrasPt2(){
	setlocale(LC_ALL, "PORTUGUESE");
	int menu;
	
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
	printf(" -----------------------------------------------------------\n");            
	printf("                      FORMA DE PONTUAÇÃO                    \n"); 
	printf("                                                            \n"); 
	printf("   A PONTUAÇÃO MÁXIMA É 225, PORÉM DURANTE O JOGO A FORMA   \n"); 
	printf("   DE PONTUAÇÃO VARIA UM POUCO, SE CASO VOCÊ ERRE UMA QUESTÃO\n"); 
	printf("   DE NÍVEL FÁCIL NADA DE MAIS IRA ACONTECER, AGORA CASO VOCÊ\n");
	printf("   ERRE UMA QUESTÃO DO NÍVEL MÉDIA A PRÓXIMA QUESTÃO NÃO     \n");
	printf("   VALERÁ PONTOS, A NÃO SER QUE SEJE UMA DIFÍCIL, E NO CASO  \n"); 
 	printf("   DE ERRAR UMA QUESTÃO DIFÍCIL, VOCÊ IRÁ PERDER 5 PONTOS.   \n");
	printf("                                                             \n");
	printf(" ------------------------------------------------------------\n");
	printf("                           AJUDAS                            \n");
	printf("                                                             \n");   
	printf("   DURANTE O JOGO VOCÊ PODERÁ RECORRER A ALGUMAS AJUDAS,     \n");         
	printf("   ELAS SÃO DICA, CHATGPT OU PULA:                           \n");
	printf("                                                             \n");
	printf("   - DICA: VOCÊ TERA UMA DICA SOBRE A QUESTÃO                \n");
	printf("                                                             \n");
	printf("   - CHATGPT: VOCÊ TERA ACESSO A UM CHATGPT EXCLUSIVO DO     \n");  
	printf("     QUIZ PARA SABER A RESPOSTA                              \n");
	printf("                                                             \n");
	printf("   - PULA: VOCÊ PODERA PULAR QUALQUER QUESTÃO SEM PERDER     \n");  
	printf("     PONTOS                                                  \n");
	printf("                                                             \n"); 
	printf("   VOCÊ INICIARA COM 1 DICA, 1 PULA. PARA GNAHAR O CHATGPT   \n");
	printf("   TERÁ QUE SER NA SORTE DURANTE O JOGO, A QUALQUER MOMENTO  \n");  
	printf("   PODERÁ GANHAR.                                            \n");
	printf("                                                             \n");  
	printf("   O PULAR VOCÊ PODE GANHAR SE ACERTA UMA QUESTÃO DÍFICIL,   \n");
	printf("   LEMBRANDO QUE TALVEZ GANHE, UMA QUESTÃO DE SORTE          \n");
	printf("                                                             \n");    
	printf("   A DICA VOCÊ SEMPRE IRÁ GANHAR AO ACERTA UMA DIFÍCIL OU    \n"); 
	printf("   A POSSIBILIDADE DE GANHAR AO ACERTAR UMA MÉDIA.           \n");
	printf("                                                             \n");  
	printf("   BOM JOGO !!!!!!                                           \n");
	printf("                                                             \n");
	printf("   DIGITE 1 PARA COMEÇAR O JOGO:                             \n");
	scanf("%d", &menu);
	
	return menu;
}
void menuJogar(){
    setlocale(LC_ALL, "PORTUGUESE");
	
	printf("_____________________________________________________\n");
	printf("|                                                    |\n");  
	printf("|                                                    |\n"); 
	printf("|                                                    |\n"); 
	printf("|                                                    |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|	                                             |\n");
	printf("|____________________________________________________|\n");
	
	
	
	
}
void main(){
   /*switch(menuInicial()){
   	 case 1: printf("Metodo jogar"); break;
   	 case 2: printf("Método créditos"); break;
    }
	menuRegrasPt1();
	menuRegrasPt2();*/
	menuJogar();
}
