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
    system("cls");
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
	printf("	-PADR�O: AS PERGUNTAS COME�AM NO MODO F�CIL E V�O     \n");
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
	system("cls");
    setlocale(LC_ALL, "PORTUGUESE");
	
	int op;
	
	printf("_____________________________________________________\n");
	printf("|                                                    |\n");  
	printf("|       QUAL SER� SEU MODO DE JOGO:                  |\n"); 
	printf("|                                                    |\n"); 
	printf("|                                                    |\n");
	printf("|       1 - PADR�O                                   |\n"); 
	printf("|       2 - F�CIL                                    |\n");
	printf("|       3 - M�DIO                                    |\n");
	printf("|       4 - DIF�CIL                                  |\n");
	printf("|       5 - ALEAT�RIO                                |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|	                                             |\n");
	printf("|____________________________________________________|\n");
	printf("OP��O: ");
	scanf("%d", &op);
}



void jogoPadrao(){
	int pontuacao;
	
	
	
	
	
	
	
	
	
	
	
	
}


int pergunta1(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d               | \n ", pontuacao);
	printf("O que � um smartphone e para que ele � usado?                                                         |\n");
	printf("a) Um tipo de geladeira                                                                                | \n");
	printf("b) Um dispositivo m�vel usado para fazer chamadas telef�nicas e enviar mensagens                       | \n");
	printf("c) Uma ferramenta de jardinagem                                                                        | \n");
	printf("d) Uma linguagem de programa��o                                                                        | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�nss :) !!!!");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta2(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual � a diferen�a entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos s�o a mesma coisa                                                                             | \n");
	printf("b) Um navegador web � usado para procurar informa��es na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web � usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta3(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("O que a sigla 'URL' significa ?                                                                       | \n");
	printf("a) Uniform Resource Locator                                                                            | \n");
	printf("b) Universal Resource Language                                                                         | \n");
	printf("c) Underlying                                                                                          | \n");
	printf("d) Uniform Resource Link                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta4(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("O que significa a sigla 'HTML' na programa��o web ?                                                   | \n");
	printf("a) HyperText Markup Language                                                                           | \n");
	printf("b) High-Tech Modern Language                                                                           | \n");
	printf("c) Hyperlink Text Management Language                                                                  | \n");
	printf("d) Hyperlink and Text Markup Language                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta5(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual destes termos est� relacionado � armazenagem de dados em servidores remotos pela internet ?      | \n");
	printf("a) Wi-fi                                                                                               | \n");
	printf("b) Cloud Computing                                                                                     | \n");
	printf("c) Bluetooth                                                                                           | \n");
	printf("d) Firewall                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta6(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual � o navegador de internet desenvolvido pela Google ?                                             | \n");
	printf("a) Firefox                                                                                             | \n");
	printf("b) Safari                                                                                              | \n");
	printf("c) Edge                                                                                                | \n");
	printf("d) Chrome                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta7(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual � o sistema operacional m�vel desenvolvido pela Apple ?                                          | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) iOS                                                                                                 | \n");
	printf("c) Windows Mobile                                                                                      | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta8(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes dispositivos � usado para imprimir documentos e imagens ?                                  | \n");
	printf("a) Roteador                                                                                            | \n");
	printf("b) Scanner                                                                                             | \n");
	printf("c) Impressora                                                                                          | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta9(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que � um arquivo de extens�o '.PDF' comumente usado para ?                                           | \n");
	printf("a) �udio                                                                                               | \n");
	printf("b) V�deo                                                                                               | \n");
	printf("c) Texto e gr�ficos                                                                                    | \n");
	printf("d) Aplicativos m�veis                                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta10(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: F�CIL                                                      PONTUA��O: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destas empresas � conhecida por produzir o sistema operacional Windows ?                          | \n");
	printf("a) Apple                                                                                               | \n");
	printf("b) Google                                                                                              | \n");
	printf("c) Amazon                                                                                              | \n");
	printf("d) Microsoft                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta16(int pontuacao){
	//m�dio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: M�DIO                                                       PONTUA��O: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual � a fun��o da CPU (Unidade Central de Processamento) em um computador ?                           | \n");
	printf("a) Exibir imagens na tela                                                                              | \n");
	printf("b) Armazena dados permanentemente                                                                      | \n");
	printf("c) Processar dados e executar instru��es                                                               | \n");
	printf("d) Conectar dispositivos externos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
		printf("A pr�xima quest�o n�o valer� pontos !");
	}
	
	return pontuacao;
}

int pergunta17(int pontuacao){
	//m�dio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual � a diferen�a entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos s�o a mesma coisa                                                                             | \n");
	printf("b) Um navegador web � usado para procurar informa��es na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web � usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 15;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}

int pergunta18(int pontuacao){
	//m�dia
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUA��O: %d                | \n ", pontuacao);
	printf("Qual � a diferen�a entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos s�o a mesma coisa                                                                             | \n");
	printf("b) Um navegador web � usado para procurar informa��es na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web � usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OP��O: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Voc� acertou parab�ns :)");
	}else{
		system("cls");
		printf("Voc� errou :(");
	}
	
	return pontuacao;
}


void pergunta(int jogo){
	/*switch(jogo){
		case 1:{
			int i, pontuacao = 0;
			pontucao = pergunta1(pontuacao);
			pontucao = pergunta2(pontuacao);
			
			
			
			
			
			break;
		}
		
		
		
	}*/
	
	
}












void main(){
   /*switch(menuInicial()){
    }
	menuRegrasPt1();
	menuRegrasPt2();*/
	//menuJogar();
	pergunta8(0);
}

