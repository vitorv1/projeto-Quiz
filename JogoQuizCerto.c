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


void menuRegrasPt2(){
	setlocale(LC_ALL, "PORTUGUESE");
	
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
	
	
	
	
}
void menuJogar(){
	
	
	
	
	
	
}
void main(){
   /*switch(menuInicial()){
   	 case 1: printf("Metodo jogar"); break;
   	 case 2: printf("M�todo cr�ditos"); break;
    }*/
	menuRegrasPt1();
	menuRegrasPt2();
}
