#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <stdbool.h>

int menuInicial(){
	setlocale(LC_ALL, "PORTUGUESE");
	int menu = 0;
	system("cls");
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
 printf("|                        3 - SAIR                              |\n");
 printf(" _____________________________________________________________	\n"); 
 printf("OPÇÃO: ");
 scanf("%d", &menu);
 return menu;
}


void menuRegrasPt1(){
	
	setlocale(LC_ALL, "PORTUGUESE");
    system("cls");
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
	printf("	-PADRÃO: AS PERGUNTAS COMEÇAM NO MODO FÁCIL E VÂO     \n");
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
	printf("   ERRE UMA QUESTÃO DO NÍVEL MÉDIA PERDERÁ 5 PONTOS, E CASO     \n");
	printf("   VOCÊ ERRE UMA DIFÍCIL, PERDERÁ 10 PONTOS.                 \n"); 
	printf("                                                             \n");
	printf("                                                             \n");  
	printf("   BOM JOGO !!!!!!                                           \n");
	printf("                                                             \n");
	printf("   DIGITE 1 PARA COMEÇAR O JOGO:                             \n");
	scanf("%d", &menu);
	
	return menu;
}

int menuJogar(){
	system("cls");
    setlocale(LC_ALL, "PORTUGUESE");
    int op;
	printf("_____________________________________________________\n");
	printf("|                                                    |\n");  
	printf("|                                                    |\n"); 
	printf("|                                                    |\n"); 
	printf("|       QUAL SERÁ SEU MODO DE JOGO:                  |\n"); 
	printf("|                                                    |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n"); 
	printf("|       1 - PADRÃO                                   |\n"); 
	printf("|       2 - FÁCIL                                    |\n");
	printf("|       3 - MÉDIO                                    |\n");
	printf("|       4 - DIFÍCIL                                  |\n");
	printf("|       5 - ALEATÓRIO                                |\n"); 
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|                                                    |\n");
	printf("|	                                             |\n");
	printf("|____________________________________________________|\n");
	printf("OPÇÃO: ");
	scanf("%d", &op);
	return op;
}

int pergunta1(int pontuacao){
	//facil
	char opcao[10];
	int quantAjuda;
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                        PONTUAÇÃO: %d               | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um smartphone e para que ele é usado?                                                          |\n");
	printf("                                                                                                       | \n");
	printf("a) Um tipo de geladeira                                                                                | \n");
	printf("b) Um dispositivo móvel usado para fazer chamadas telefônicas e enviar mensagens                       | \n");
	printf("c) Uma ferramenta de jardinagem                                                                        | \n");
	printf("d) Uma linguagem de programação                                                                        | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	return pontuacao;
}

int pergunta2(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é a diferença entre um navegador web e um mecanismo de busca ?                                    | \n");
	printf("                                                                                                       | \n");
	printf("a) Ambos são a mesma coisa                                                                             | \n");
	printf("b) Um navegador web é usado para procurar informações na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web é usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}

	return pontuacao;
}


int pergunta3(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que a sigla 'URL' significa ?                                                                        | \n");
	printf("                                                                                                       | \n");
	printf("a) Uniform Resource Locator                                                                            | \n");
	printf("b) Universal Resource Language                                                                         | \n");
	printf("c) Underlying                                                                                          | \n");
	printf("d) Uniform Resource Link                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta4(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que significa a sigla 'HTML' na programação web ?                                                    | \n");
	printf("                                                                                                       | \n");
	printf("a) HyperText Markup Language                                                                           | \n");
	printf("b) High-Tech Modern Language                                                                           | \n");
	printf("c) Hyperlink Text Management Language                                                                  | \n");
	printf("d) Hyperlink and Text Markup Language                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta5(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes termos está relacionado à armazenagem de dados em servidores remotos pela internet ?       | \n");
	printf("                                                                                                       | \n");
	printf("a) Wi-fi                                                                                               | \n");
	printf("b) Cloud Computing                                                                                     | \n");
	printf("c) Bluetooth                                                                                           | \n");
	printf("d) Firewall                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta6(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o navegador de internet desenvolvido pela Google ?                                              | \n");
	printf("                                                                                                       | \n");
	printf("a) Firefox                                                                                             | \n");
	printf("b) Safari                                                                                              | \n");
	printf("c) Edge                                                                                                | \n");
	printf("d) Chrome                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta7(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o sistema operacional móvel desenvolvido pela Apple ?                                           | \n");
	printf("                                                                                                       | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) iOS                                                                                                 | \n");
	printf("c) Windows Mobile                                                                                      | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta8(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes dispositivos é usado para imprimir documentos e imagens ?                                  | \n");
	printf("                                                                                                       | \n");
	printf("a) Roteador                                                                                            | \n");
	printf("b) Scanner                                                                                             | \n");
	printf("c) Impressora                                                                                          | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta9(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um arquivo de extensão '.PDF' comumente usado para ?                                           | \n");
	printf("                                                                                                       | \n");
	printf("a) Áudio                                                                                               | \n");
	printf("b) Vídeo                                                                                               | \n");
	printf("c) Texto e gráficos                                                                                    | \n");
	printf("d) Aplicativos móveis                                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}

int pergunta10(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destas empresas é conhecida por produzir o sistema operacional Windows ?                          | \n");
	printf("                                                                                                       | \n");
	printf("a) Apple                                                                                               | \n");
	printf("b) Google                                                                                              | \n");
	printf("c) Amazon                                                                                              | \n");
	printf("d) Microsoft                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}  
int pergunta11(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes componentes de hardware é responsável pelo armazenamento de dados em um computador?        | \n");
	printf("                                                                                                       | \n");
	printf("a) CPU                                                                                                 | \n");
	printf("b) Disco rígido (HD)                                                                                   | \n");
	printf("c) Memória RAM                                                                                         | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
}  

int pergunta12(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual termo descreve um programa de computador projetado para fazer uma tarefa específica,              | \n");
	printf("como processamento de texto?                                                                           | \n");
	printf("                                                                                                       | \n");
	printf("a) Software                                                                                            | \n");
	printf("b) Firmware                                                                                            | \n");
	printf("c) Hardware                                                                                            | \n");
	printf("d) Shareware                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta13(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual destes dispositivos é usado para exibir informações visuais em um computador?                     | \n");
	printf("                                                                                                       | \n");
	printf("a) CPU                                                                                                 | \n");
	printf("b) Monitor                                                                                             | \n");
	printf("c) Roteador                                                                                            | \n");
	printf("d) Impressora                                                                                          | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta14(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual foi o sistema operacional desenvolvido por Linus Torvalds ?                                       | \n");
	printf("                                                                                                       | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) Windows                                                                                             | \n");
	printf("c) iOS                                                                                                 | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 

int pergunta15(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: FÁCIL                                                      PONTUAÇÃO: %d                 | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual tipo de dispositivo de entrada permite que você mova o cursor na tela de um computador ?          | \n");
	printf("                                                                                                       | \n");
	printf("a) Teclado                                                                                             | \n");
	printf("b) Mouse                                                                                               | \n");
	printf("c) Impressora                                                                                          | \n");
	printf("d) Monitor                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
	}
	
	return pontuacao;
} 



int pergunta16(int pontuacao){
	//médio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é a função da CPU (Unidade Central de Processamento) em um computador ?                           | \n");
	printf("                                                                                                       | \n");
	printf("a) Exibir imagens na tela                                                                              | \n");
	printf("b) Armazena dados permanentemente                                                                      | \n");
	printf("c) Processar dados e executar instruções                                                               | \n");
	printf("d) Conectar dispositivos externos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta17(int pontuacao){
	//médio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um SSD(Solid State Drive) em comparação com um HDD (Hard Disk Drive) ?                         | \n");
	printf("                                                                                                       | \n");
	printf("a) Um tipo de mouse                                                                                    | \n");
	printf("b) Um tipo de monitor                                                                                  | \n");
	printf("c) Uma unidade de armazenamento mais rápida e sem partes móveis                                        | \n");
	printf("d) Uma impressora a laser                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta18(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um 'software de código aberto' ?                                                               | \n");
	printf("                                                                                                       | \n");
	printf("a) Um software que não requer código-fonte                                                             | \n");
	printf("b) Um software que não pode ser modificado                                                             | \n");
	printf("c) Um software que só roda em sistemas Windows                                                         | \n");
	printf("d) Um software cujo código-fonte é público e pode ser modificado por qualquer pessoa                   | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta19(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o protocolo de rede amplamente usado para enviar e-mails ?                                      | \n");
	printf("                                                                                                       | \n");
	printf("a) TCP/IP                                                                                              | \n");
	printf("b) SMTP                                                                                                | \n");
	printf("c) HTTP                                                                                                | \n");
	printf("d) FTP                                                                                                 | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta20(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é 'realidade virtual' (VR) ?                                                                     | \n");
	printf("                                                                                                       | \n");
	printf("a) Uma linguagem de programação                                                                        | \n");
	printf("b) Uma tecnologia que cria ambientes virtuais imersivos                                                | \n");
	printf("c) Um tipo de monitor de alta resolução                                                                | \n");
	printf("d) Um dispositivo de armazenamento externo                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta21(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é a linguagem de programação amplamente usada para desenvolver aplicativos para Android ?         | \n");
	printf("                                                                                                       | \n");
	printf("a) Java                                                                                                | \n");
	printf("b) Swift                                                                                               | \n");
	printf("c) C++                                                                                                 | \n");
	printf("d) Python                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta22(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é 'cloud computing' ?                                                                            | \n");
	printf("                                                                                                       | \n");
	printf("a) Um sistema de armazenamento de dados offline                                                        | \n");
	printf("b) Uma tecnologia de comunicação por satélite                                                          | \n");
	printf("c) Uma abordagem de computação que utiliza servidores remotos pela Internet para processar             | \n");
	printf("   e armazenar os dados                                                                                | \n");
	printf("d) Um tipo de impressora a laser                                                                       | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta23(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o sistema operacional de código aberto baseado em Unix amplamente usado em servidores web ?     | \n");
	printf("                                                                                                       | \n");
	printf("a) Linux                                                                                               | \n");
	printf("b) Windows                                                                                             | \n");
	printf("c) macOS                                                                                               | \n");
	printf("d) Android                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta24(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um 'driver de dispositivo' em um computador ?                                                  | \n");
	printf("                                                                                                       | \n");
	printf("a) Um software que ajuda a controlar e gerenciar um dispositivo de hardware específico                 | \n");
	printf("b) Um tipo de dispositivo de entrada                                                                   | \n");
	printf("c) Uma função de um sistema operacional                                                                | \n");
	printf("d) Um tipo de rede sem fio                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta25(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é a 'nuvem' em tecnologia da informação ?                                                        | \n");
	printf("                                                                                                       | \n");
	printf("a) Uma forma de armazenamento físico de dados                                                          | \n");
	printf("b) Um tipo de computador muito poderoso                                                                | \n");
	printf("c) Um serviço de armazenamento online acessível pela internet                                          | \n");
	printf("d) Um programa de edição de fotos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta26(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual componente de hardware é frequentemente chamado de 'cérebro' do computador                        | \n");
	printf("devido à sua função de processamento?                                                                  | \n");
	printf("                                                                                                       | \n");
	printf("a) GPU                                                                                                 | \n");
	printf("b) Placa-mãe                                                                                           | \n");
	printf("c) CPU                                                                                                 | \n");
	printf("d) Disco SSD                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta27(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o termo para um conjunto de programas de software que permitem a execução                       | \n");
	printf("de tarefas específicas em um sistema operacional?                                                      | \n");
	printf("                                                                                                       | \n");
	printf("a) Interface de usuário                                                                                | \n");
	printf("b) Aplicativo                                                                                          | \n");
	printf("c) Kernel                                                                                              | \n");
	printf("d) Suite de aplicativos                                                                                | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta28(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que a sigla 'SSD' representa em relação ao armazenamento de dados em computadores?                   | \n");
	printf("                                                                                                       | \n");
	printf("a) Super Storage Device                                                                                | \n");
	printf("b) Solid State Drive                                                                                   | \n");
	printf("c) Software Storage Disk                                                                               | \n");
	printf("d) System Support Device                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta29(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: MÉDIO                                                       PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o nome do 'SO' de código aberto baseado em Linux que é amplamente usado em servidores?          | \n");
	printf("                                                                                                       | \n");
	printf("a) Ubuntu                                                                                              | \n");
	printf("b) Windows Server                                                                                      | \n");
	printf("c) Red Hat Enterprise Linux                                                                            | \n");
	printf("d) macOS                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 5; 
	}
	
	return pontuacao;
}

int pergunta30(int pontuacao){
	//dificil    
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é a 'Lei de Moore' no contexto da tecnologia de computadores ?                                   | \n");
	printf("                                                                                                       | \n");
	printf("a) Uma lei que restringe o uso de dispositivos de armazenamento externo                                | \n");
	printf("b) Uma lei que estabelece os padrões de qualidade para monitores de computador                         | \n");
	printf("c) Uma observação que sugere que o número de transistores em um chip de computador tende               | \n");
	printf("   a dobrar aproximadamente a cada dois anos                                                           | \n");
	printf("d) Uma lei que regula a velocidade da conexão à Internet                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta31(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é a 'Lei de Moore' no contexto da tecnologia de computadores ?                                   | \n");
	printf("                                                                                                       | \n");
	printf("a) Uma lei que restringe o uso de dispositivos de armazenamento externo                                | \n");
	printf("b) Uma lei que estabelece os padrões de qualidade para monitores de computador                         | \n");
	printf("c) Uma observação que sugere que o número de transistores em um chip de computador tende               | \n");
	printf("   a dobrar aproximadamente a cada dois anos                                                           | \n");
	printf("d) Uma lei que regula a velocidade da conexão à Internet                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta32(int pontuacao){
	
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf(" O que é 'machine learning' (aprendizado de máquina)?                                                  | \n");
	printf("                                                                                                       | \n");
	printf("a) Um tipo de linguagem de programação                                                                 | \n");
	printf("b) Um método de comunicação sem fio de curto alcance                                                   | \n");
	printf("c) Um campo da inteligência artificial que envolve sistemas                                            | \n");
	printf("  de computadores que podem aprender e melhorar com a experiência                                      | \n");
	printf("d)  Um sistema de armazenamento de dados em nuvem                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta33(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Dificil Qual é o nome do sistema de gerenciamento de banco de dados                                    | \n");
	printf("amplamente utilizado que usa a linguagem SQL (Structured Query Language)?                              | \n");
	printf("                                                                                                       | \n");
	printf("a) NoSQL                                                                                               | \n");
	printf("b) SQLite                                                                                              | \n");
	printf("c) Oracle                                                                                              | \n");
	printf("d) MongoDB                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta34(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é 'realidade aumentada' (AR)?                                                                    | \n");
	printf("                                                                                                       | \n");
	printf("a) Uma tecnologia que permite a visualização de objetos tridimensionais em um ambiente virtual         | \n");
	printf("b) Um tipo de sistema operacional móvel                                                                | \n");
	printf("c)  Uma forma de linguagem de programação                                                              | \n");
	printf("d) Uma técnica de criptografia avançada                                                                | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta35(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o nome do sistema operacional de código aberto amplamente usado,                                | \n");
	printf("baseado no kernel Linux, que é projetado principalmente para smartphones e tablets?                    | \n");
	printf("                                                                                                       | \n");
	printf("a)Android                                                                                              | \n");
	printf("b) iOS									                                                               | \n");
	printf("c) Windows Mobile                                                                                      | \n");
	printf("d)  BlackBerry OS                                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta36(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("O que é um 'algoritmo de busca' em motores de busca na web?                                            | \n");
	printf("                                                                                                       | \n");
	printf("a) Um método para ocultar resultados de busca indesejados                                              | \n");
	printf("b) Um tipo de software antivírus				                                                       | \n");
	printf("c) Um conjunto de regras que determinam como os resultados de busca são classificados e exibidos       | \n");
	printf("d) Uma técnica de criptografia avançada                                                                | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta37(int pontuacao){
 
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual tecnologia de armazenamento de dados oferece a maior velocidade de leitura e gravação,            | \n");
	printf("mas geralmente tem menor capacidade de armazenamento em comparação com outras opções?                  | \n");
	printf("                                                                                                       | \n");
	printf("a)Disco rígido (HD)                                                                                    | \n");
	printf("b) CD-ROM                       				                                                       | \n");
	printf("c) Pen Drive                                                                                           | \n");
	printf("d) SSD NVMe                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta38(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf(" Software: O que é um 'kernel' em um sistema operacional?                                              | \n");
	printf("                                                                                                       | \n");
	printf("a)Uma interface gráfica de usuário.                                                                    | \n");
	printf("b)Um programa antivírus.                       				                                           | \n");
	printf("c)O núcleo central do sistema operacional que gerencia recursos de hardware.                           | \n");
	printf("d)Um aplicativo de edição de imagem.                                                                   | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta39(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf(" Qual unidade de medida é usada para descrever a velocidade de um processador de computador?           | \n");
	printf("                                                                                                       | \n");
	printf("a)Megabytes por segundo (MB/s)                                                                         | \n");
	printf("b)Hertz (Hz)                                 				                                           | \n");
	printf("c)Pixels por polegada (PPI)                                                                            | \n");
	printf("d)Gigawatts (GW)                                                                                       | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta40(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf(" Qual é o nome do software de código aberto amplamente utilizado                                       | \n");
	printf(" para a criação e edição de páginas da web?                                                            | \n");
	printf("                                                                                                       | \n");
	printf("a)Photoshop                                                                                            | \n");
	printf("b) Dreamweaver                                 				                                           | \n");
	printf("c)Firefox                                                                                              | \n");
	printf("d)WordPress                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta41(int pontuacao){

	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf(" O que a sigla 'GPU' representa em relação ao hardware de um computador?                               | \n");
	printf("                                                                                                       | \n");
	printf("a)Graphics Processing Unit                                                                             | \n");
	printf("b)General Processing Unit                     				                                           | \n");
	printf("c)Global Positioning Unit                                                                              | \n");
	printf("d)Graphical Power Unit                                                                                 | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta42(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o principal desafio na criação de computadores quânticos altamente funcionais?                  | \n");
	printf("                                                                                                       | \n");
	printf("a) Resfriamento a temperaturas extremamente baixas                                                     | \n");
	printf("b) Desenvolvimento de algoritmos eficazes                                                              | \n");
	printf("c) Minimização da interferência quântica                                                               | \n");
	printf("d) Armazenamento de dados em bits quânticos                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta43(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é a principal diferença entre blockchain e tangle, duas tecnologias de registro distribuído?      | \n");
	printf("                                                                                                       | \n");
	printf("a) Blockchain é centralizado, enquanto o tangle é descentralizado                                      | \n");
	printf("b) Blockchain usa validação de transações por mineradores, enquanto o tangle usa validação colaborativa| \n");
	printf("c) Blockchain é mais escalável do que o tangle                                                         | \n");
	printf("d) Tangle é baseado em contratos inteligentes, enquanto o blockchain não é                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta44(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Quais são os principais desafios éticos relacionados à inteligência artificial (IA)?                   | \n");
	printf("                                                                                                       | \n");
	printf("a) Desenvolvimento de IA que seja muito autônoma                                                       | \n");
	printf("b) Privacidade e vigilância em massa                                                                   | \n");
	printf("c) Preconceito e discriminação algorítmica                                                             | \n");
	printf("d) Supressão da inovação tecnológica                                                                   | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int pergunta45(int pontuacao){
	//dificil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("  DIFICULDADE: DIFÍCIL                                                     PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("                                                                                                      | \n");
	printf("Qual é o propósito principal da Lei de Moore, e qual é a afirmação correta sobre sua                   | \n");
	printf("aplicabilidade atual?                                                                                  | \n");
	printf("                                                                                                       | \n");
	printf("a) A Lei de Moore prevê a duplicação do poder de processamento a cada dois anos, e ela ainda é válida  | \n");
	printf("b) A Lei de Moore prevê a duplicação do número de transistores em um chip a cada 18 meses,             | \n"); 
	printf("e ela não é mais aplicável                                                                             | \n");                                                                                                                                          
	printf("c) A Lei de Moore prevê a melhoria contínua das baterias, e ela está sendo constantemente superada     | \n");
	printf("d) A Lei de Moore prevê a diminuição constante no preço dos computadores pessoais,                     | \n");
	printf("e ela foi desacreditada                                                                                | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	int op = 0;
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		do{
			system("cls");
			printf("Você acertou parabénss :) !!!! \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op !=  0);
	}else{
		do{
			system("cls");
			printf("Você errou :( \n");
			printf("Digite 0 para continuar ");
			scanf("%d", &op);
		}while(op != 0);
		pontuacao = pontuacao - 10; 
	}
	
	return pontuacao;
}

int validaPontuacao(int pontuacao){
	setlocale(LC_ALL, "PORTUGUESE");
	int op;
	if(pontuacao == 225){
		system("cls");
		printf("PONTUAÇÃO: %d \n", pontuacao);
		printf("Meus parabéns, você atingiu 225 pontos :) , a quantidade de máxima de pontos \n");
		printf("isso significa que você zerou o quiz com maestria e mostrou que possui \n");
		printf("um conhecimento sólido na área da técnologia !!!! \n");
	}else if(pontuacao == 125){
		system("cls");
		printf("PONTUAÇÃO: %d \n", pontuacao);
		printf("Parabéns por chegar até aqui, não alcançõu a pontuação máxima :/ , porém mostrou \n");
		printf("que possui um bom conhecimento na área, mais sorte da próxima vez !! \n");
	}else{
		system("cls");
		printf("PONTUAÇÃO: %d \n", pontuacao);
		printf("Não foi dessa vez, infelizmente passou longe da pontuação máxima :( , porém \n");
		printf("continue firme no seus estudos e em sempre evoluir que concerteza conseguirá \n");
		printf("supera seus desafios, continue !! \n");
	}
	printf("1 - Para jogar novamente \n");
	printf("2 - Para sair do jogo \n");
	printf("OPÇÃO: ");
	scanf("%d", &op);
	return op;
}

int menuCreditos(){
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	int op;
	printf("------------------------------------------------------------------------------------------------------- \n");
	printf("Esse jogo foi desenvolvido por dois alunos da Unicesumar(Maringá/Paraná) \n");
	printf("do curso de ADS(Análise e Desenvolvimento de Sistemas), esses são: \n");
	printf("\n");
	printf("- Vitor Hugo Vieria de Lima | Linkedin: www.linkedin.com/in/vitor-hugo-vieira-de-lima-a2286a244 \n");
	printf("- Daniel Francis Rinaldi Araujo | Linkedin: https://www.linkedin.com/in/daniel-rinaldi-272907246 \n");
	printf("\n");
	printf("O projeto foi idealizado a partir de um trabalho da faculdade, o link do repositório com os códigos \n");
	printf("para melhor análise: https://github.com/vitorv1/projeto-quiz \n");
	printf("Obrigado por jogar :) \n");
	printf("Digite 0 para voltar para o menu inicial \n");
	printf("------------------------------------------------------------------------------------------------------- \n");
	printf("OPCÃO:");
	scanf("%d", &op);
	return op;
}

int pergunta(int jogo){
	switch(jogo){
		int pontuacao = 0;
		case 1:{
			pontuacao = 0;
			pontuacao = pergunta1(pontuacao);
			pontuacao = pergunta2(pontuacao);
			pontuacao = pergunta3(pontuacao);
			pontuacao = pergunta4(pontuacao);
			pontuacao = pergunta5(pontuacao);
			pontuacao = pergunta16(pontuacao);
			pontuacao = pergunta17(pontuacao);
			pontuacao = pergunta18(pontuacao);
			pontuacao = pergunta19(pontuacao);
			pontuacao = pergunta20(pontuacao);
			pontuacao = pergunta30(pontuacao);
			pontuacao = pergunta31(pontuacao);
			pontuacao = pergunta32(pontuacao);
			pontuacao = pergunta33(pontuacao);
			pontuacao = pergunta34(pontuacao);
			return validaPontuacao(pontuacao);
			break;
		}
		case 2 :{
			pontuacao = 0;
			pontuacao = pergunta1(pontuacao);
			pontuacao = pergunta2(pontuacao);
			pontuacao = pergunta3(pontuacao);
			pontuacao = pergunta4(pontuacao);
			pontuacao = pergunta5(pontuacao);
			pontuacao = pergunta6(pontuacao);
			pontuacao = pergunta7(pontuacao);
			pontuacao = pergunta8(pontuacao);
			pontuacao = pergunta9(pontuacao);
			pontuacao = pergunta10(pontuacao);
			pontuacao = pergunta11(pontuacao);
			pontuacao = pergunta12(pontuacao);
			pontuacao = pergunta13(pontuacao);
			pontuacao = pergunta14(pontuacao);
			pontuacao = pergunta15(pontuacao);
			return validaPontuacao(pontuacao);
			break;
		} 
		case 3 :{
			pontuacao = 0;
			pontuacao = pergunta16(pontuacao);
			pontuacao = pergunta17(pontuacao);
			pontuacao = pergunta18(pontuacao);
			pontuacao = pergunta19(pontuacao);
			pontuacao = pergunta20(pontuacao);
			pontuacao = pergunta21(pontuacao);
			pontuacao = pergunta22(pontuacao);
			pontuacao = pergunta23(pontuacao);
			pontuacao = pergunta24(pontuacao);
			pontuacao = pergunta25(pontuacao);
			pontuacao = pergunta26(pontuacao);
			pontuacao = pergunta27(pontuacao);
			pontuacao = pergunta28(pontuacao);
			pontuacao = pergunta29(pontuacao);
			pontuacao = pergunta30(pontuacao);
			return validaPontuacao(pontuacao);
			break;
		}
		case 4 :{
			pontuacao = 0;
			pontuacao = pergunta31(pontuacao);
			pontuacao = pergunta32(pontuacao);
			pontuacao = pergunta33(pontuacao);
			pontuacao = pergunta34(pontuacao);
			pontuacao = pergunta35(pontuacao);
			pontuacao = pergunta36(pontuacao);
			pontuacao = pergunta37(pontuacao);
			pontuacao = pergunta38(pontuacao);
			pontuacao = pergunta39(pontuacao);
			pontuacao = pergunta40(pontuacao);
			pontuacao = pergunta41(pontuacao);
			pontuacao = pergunta42(pontuacao);
			pontuacao = pergunta43(pontuacao);
			pontuacao = pergunta44(pontuacao);
			pontuacao = pergunta45(pontuacao);
			return  validaPontuacao(pontuacao);
			break;
		}
		case 5 :{
			pontuacao = 0;
			int i, num;
			for(i = 0; i < 15; i ++){
				srand(time(NULL));
				num = rand() % 51;
			
				switch(num){
					case 1: pontuacao = pergunta1(pontuacao); break;
					case 2: pontuacao = pergunta2(pontuacao); break;
					case 3: pontuacao = pergunta3(pontuacao); break;
					case 4: pontuacao = pergunta4(pontuacao); break;
					case 5: pontuacao = pergunta5(pontuacao); break;
					case 6: pontuacao = pergunta6(pontuacao); break;
					case 7: pontuacao = pergunta7(pontuacao); break;
					case 8: pontuacao = pergunta8(pontuacao); break;
					case 9: pontuacao = pergunta9(pontuacao); break;
					case 10: pontuacao = pergunta10(pontuacao); break;
					case 11: pontuacao = pergunta11(pontuacao); break;
					case 12: pontuacao = pergunta12(pontuacao); break;
					case 13: pontuacao = pergunta13(pontuacao); break;
					case 14: pontuacao = pergunta14(pontuacao); break;
					case 15: pontuacao = pergunta15(pontuacao); break;
					case 16: pontuacao = pergunta16(pontuacao); break;
					case 17: pontuacao = pergunta17(pontuacao); break;
					case 18: pontuacao = pergunta18(pontuacao); break;
					case 19: pontuacao = pergunta19(pontuacao); break;
					case 20: pontuacao = pergunta20(pontuacao); break;
					case 21: pontuacao = pergunta21(pontuacao); break;
					case 22: pontuacao = pergunta22(pontuacao); break;
					case 23: pontuacao = pergunta23(pontuacao); break;
					case 24: pontuacao = pergunta24(pontuacao); break;
					case 25: pontuacao = pergunta25(pontuacao); break;
					case 26: pontuacao = pergunta26(pontuacao); break;
					case 27: pontuacao = pergunta27(pontuacao); break;
					case 28: pontuacao = pergunta28(pontuacao); break;
					case 29: pontuacao = pergunta29(pontuacao); break;
					case 30: pontuacao = pergunta30(pontuacao); break;
					case 31: pontuacao = pergunta31(pontuacao); break;
					case 32: pontuacao = pergunta32(pontuacao); break;
					case 33: pontuacao = pergunta33(pontuacao); break;
					case 34: pontuacao = pergunta34(pontuacao); break;
					case 35: pontuacao = pergunta35(pontuacao); break;
					case 36: pontuacao = pergunta36(pontuacao); break;
					case 37: pontuacao = pergunta37(pontuacao); break;
					case 38: pontuacao = pergunta38(pontuacao); break;
					case 39: pontuacao = pergunta39(pontuacao); break;	
			    	case 40: pontuacao = pergunta40(pontuacao); break;
					case 41: pontuacao = pergunta41(pontuacao); break;
					case 42: pontuacao = pergunta42(pontuacao); break;
			  		case 43: pontuacao = pergunta43(pontuacao); break;
			  		case 44: pontuacao = pergunta44(pontuacao); break;
			  		case 45: pontuacao = pergunta45(pontuacao); break;
				}
		    }
		    return validaPontuacao(pontuacao);
		}	
	}
}

int menuPrincipal(int op){
	switch(op){
   		case 1:{
  			menuRegrasPt1();
	       	menuRegrasPt2();
    		return pergunta(menuJogar());
	   		break;
		}	
		case 2: menuCreditos(); 
    }
    return 0;
}

void main(){
	int op, op2;
	while(op != 1 && op != 3){
		op = menuInicial();
		if(op == 2)
			op = menuCreditos();
	}
	
	while(op2 < 2 && op != 3){
		op2 = menuPrincipal(op);
	}
	system("cls");
	printf("Tchau :)");

}

