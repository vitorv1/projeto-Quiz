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
 printf("|                        2 - CR�DITOS                          |\n");
 printf(" _____________________________________________________________	\n"); 
 printf("OP��O: ");
 scanf("%d", &menu);
 return menu;
}


void menuRegrasPt1(){
	
	setlocale(LC_ALL, "PORTUGUESE");

	printf("    ____________________________________________________________\n");
	printf("                                REGRAS                          \n");   
	printf("                                                            \n");
	printf("	BEM VINDO AO QUIZ TECH, AQUI VOC� ENCONTRAR� PERGUNTAS  \n");
	printf("	RELACIONADAS AO MUNDO DA T�CNOLOGIA E QUE DESAFIARAM    \n");
	printf("	SEUS CONHECIMENTOS 										\n");
	printf("	BOA SORTE E QUE SE DIVIRTA :) !!!!!						\n");
	printf("    ----------------------------------------------------------- \n");
	printf("															\n");
	printf("	O QUIZ � DIVIDIDO EM TR�S DIFICULDADE: F�CIL, M�DIO	    \n");
	printf("	DIF�CIL. CADA DIFICULDADE TEM 5 PERGUNTAS.			    \n");
	printf("															\n");
	printf("	TEMOS A OP��O DE TR�S MODOS DE JOGO:					\n");
	printf("	 														\n");
	printf("	-PADR�O: AS PERGUNTAS COME�AM NO MODO D�FICIL E V�O     \n");
	printf("	 ESCALANDO O N�VEL DE DIFICULDADE.						\n");
	printf("															\n");
	printf("	-DIFICULDADE: AQUI VOC� PODE ESCOLHER EM QUAL			\n");
	printf("	 DIFICULDADE IR� JOGAR PARA O RESTO DO JOGO			    \n");
	printf("	                             							\n");
	printf("	-ALEAT�RIO: MODO RECOMENDADO PELOS DESENVOLVEDORES,	    \n");
	printf("	 NESSE MODO VIRAM PERGUNTAS ALEAT�RIAS, INCLUSIVES SUAS	\n");
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
	printf("	 DIFICULDADE DA QUEST�O, QUEST�ES DO N�VEL F�CIL VALEM	\n");
 	printf("	 MENOS PONTOS QUE UMA QUEST�O DO N�VEL DIF�CIL			\n");
 	printf("															\n");
 	printf("	                 TABELA DE PONTOS  				        \n");		
 	printf("															\n");
 	printf("                       --------------------					    \n");
 	printf("	                 QUEST�O    PONTOS 						\n");
	printf("	               --------------------					    \n");
	printf("                          F�CIL       10	  					    \n");
	printf("		          M�DIA       15	  						\n");
	printf("		          DIF�CIL     20	  						\n");
	printf("	               --------------------			                   					\n");
	printf("															\n");
	printf(" -----------------------------------------------------------\n");            
	printf("                      FORMA DE PONTUA��O                    \n"); 
	printf("                                                            \n"); 
	printf("   A PONTUA��O M�XIMA � 225, POR�M DURANTE O JOGO A FORMA   \n"); 
	printf("   DE PONTUA��O VARIA UM POUCO, SE CASO VOC� ERRE UMA QUEST�O\n"); 
	printf("   DE N�VEL F�CIL NADA DE MAIS IRA ACONTECER, AGORA CASO VOC�\n");
	printf("   ERRE UMA QUEST�O DO N�VEL M�DIA A PR�XIMA QUEST�O N�O     \n");
	printf("   VALER� PONTOS, A N�O SER QUE SEJE UMA DIF�CIL, E NO CASO  \n"); 
 	printf("   DE ERRAR UMA QUEST�O DIF�CIL, VOC� IR� PERDER 5 PONTOS.   \n");
	printf("                                                             \n");
	printf(" ------------------------------------------------------------\n");
	printf("                           AJUDAS                            \n");
	printf("                                                             \n");   
	printf("   DURANTE O JOGO VOC� PODER� RECORRER A ALGUMAS AJUDAS,     \n");         
	printf("   ELAS S�O DICA, CHATGPT OU PULA:                           \n");
	printf("                                                             \n");
	printf("   - DICA: VOC� TERA UMA DICA SOBRE A QUEST�O                \n");
	printf("                                                             \n");
	printf("   - CHATGPT: VOC� TERA ACESSO A UM CHATGPT EXCLUSIVO DO     \n");  
	printf("     QUIZ PARA SABER A RESPOSTA                              \n");
	printf("                                                             \n");
	printf("   - PULA: VOC� PODERA PULAR QUALQUER QUEST�O SEM PERDER     \n");  
	printf("     PONTOS                                                  \n");
	printf("                                                             \n"); 
	printf("   VOC� INICIARA COM 1 DICA, 1 PULA. PARA GNAHAR O CHATGPT   \n");
	printf("   TER� QUE SER NA SORTE DURANTE O JOGO, A QUALQUER MOMENTO  \n");  
	printf("   PODER� GANHAR.                                            \n");
	printf("                                                             \n");  
	printf("   O PULAR VOC� PODE GANHAR SE ACERTA UMA QUEST�O D�FICIL,   \n");
	printf("   LEMBRANDO QUE TALVEZ GANHE, UMA QUEST�O DE SORTE          \n");
	printf("                                                             \n");    
	printf("   A DICA VOC� SEMPRE IR� GANHAR AO ACERTA UMA DIF�CIL OU    \n"); 
	printf("   A POSSIBILIDADE DE GANHAR AO ACERTAR UMA M�DIA.           \n");
	printf("                                                             \n");  
	printf("   BOM JOGO !!!!!!                                           \n");
	printf("                                                             \n");
	printf("   DIGITE 1 PARA COME�AR O JOGO:                             \n");
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
   	 case 2: printf("M�todo cr�ditos"); break;
    }
	menuRegrasPt1();
	menuRegrasPt2();*/
	menuJogar();
}
