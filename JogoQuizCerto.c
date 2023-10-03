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
	system("cls");
    setlocale(LC_ALL, "PORTUGUESE");
	
	int op;
	
	printf("_____________________________________________________\n");
	printf("|                                                    |\n");  
	printf("|       QUAL SERÁ SEU MODO DE JOGO:                  |\n"); 
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
	printf("                                                                           PONTUAÇÃO: %d               | \n ", pontuacao);
	printf("O que é um smartphone e para que ele é usado?                                                         |\n");
	printf("a) Um tipo de geladeira                                                                                | \n");
	printf("b) Um dispositivo móvel usado para fazer chamadas telefônicas e enviar mensagens                       | \n");
	printf("c) Uma ferramenta de jardinagem                                                                        | \n");
	printf("d) Uma linguagem de programação                                                                        | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabénss :) !!!!");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta2(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual é a diferença entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos são a mesma coisa                                                                             | \n");
	printf("b) Um navegador web é usado para procurar informações na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web é usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta3(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("O que a sigla 'URL' significa ?                                                                       | \n");
	printf("a) Uniform Resource Locator                                                                            | \n");
	printf("b) Universal Resource Language                                                                         | \n");
	printf("c) Underlying                                                                                          | \n");
	printf("d) Uniform Resource Link                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta4(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("O que significa a sigla 'HTML' na programação web ?                                                   | \n");
	printf("a) HyperText Markup Language                                                                           | \n");
	printf("b) High-Tech Modern Language                                                                           | \n");
	printf("c) Hyperlink Text Management Language                                                                  | \n");
	printf("d) Hyperlink and Text Markup Language                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "a") == 0 || strcmp(opcao,"A") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta5(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual destes termos está relacionado à armazenagem de dados em servidores remotos pela internet ?      | \n");
	printf("a) Wi-fi                                                                                               | \n");
	printf("b) Cloud Computing                                                                                     | \n");
	printf("c) Bluetooth                                                                                           | \n");
	printf("d) Firewall                                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta6(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual é o navegador de internet desenvolvido pela Google ?                                             | \n");
	printf("a) Firefox                                                                                             | \n");
	printf("b) Safari                                                                                              | \n");
	printf("c) Edge                                                                                                | \n");
	printf("d) Chrome                                                                                              | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta7(int pontuacao){
	//facil
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual é o sistema operacional móvel desenvolvido pela Apple ?                                          | \n");
	printf("a) Android                                                                                             | \n");
	printf("b) iOS                                                                                                 | \n");
	printf("c) Windows Mobile                                                                                      | \n");
	printf("d) Linux                                                                                               | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
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
	printf("a) Roteador                                                                                            | \n");
	printf("b) Scanner                                                                                             | \n");
	printf("c) Impressora                                                                                          | \n");
	printf("d) Teclado                                                                                             | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
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
	printf("a) Áudio                                                                                               | \n");
	printf("b) Vídeo                                                                                               | \n");
	printf("c) Texto e gráficos                                                                                    | \n");
	printf("d) Aplicativos móveis                                                                                  | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
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
	printf("a) Apple                                                                                               | \n");
	printf("b) Google                                                                                              | \n");
	printf("c) Amazon                                                                                              | \n");
	printf("d) Microsoft                                                                                           | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "d") == 0 || strcmp(opcao,"D") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
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
	printf("a) Exibir imagens na tela                                                                              | \n");
	printf("b) Armazena dados permanentemente                                                                      | \n");
	printf("c) Processar dados e executar instruções                                                               | \n");
	printf("d) Conectar dispositivos externos                                                                      | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "c") == 0 || strcmp(opcao,"C") == 0){
		pontuacao = pontuacao + 15;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
		printf("A próxima questão não valerá pontos !");
	}
	
	return pontuacao;
}

int pergunta17(int pontuacao){
	//médio
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual é a diferença entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos são a mesma coisa                                                                             | \n");
	printf("b) Um navegador web é usado para procurar informações na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web é usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 15;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
	}
	
	return pontuacao;
}

int pergunta18(int pontuacao){
	//média
	char opcao[10];
	setlocale(LC_ALL, "PORTUGUESE");
	system("cls");
	printf("-------------------------------------------------------------------------------------------------------|\n");
	printf("                                                                           PONTUAÇÃO: %d                | \n ", pontuacao);
	printf("Qual é a diferença entre um navegador web e um mecanismo de busca ?                                   | \n");
	printf("a) Ambos são a mesma coisa                                                                             | \n");
	printf("b) Um navegador web é usado para procurar informações na internet,                                     | \n");
	printf("   equanto um mecanismo de busaca exibe paginas da web                                                 | \n");
	printf("c) Um navegador web é usado para cozinhar receitas                                                     | \n");
	printf("d) Nenhuma das alternativas                                                                            | \n");
	printf("-------------------------------------------------------------------------------------------------------| \n");
	printf("OPÇÃO: ");
	scanf("%s", &opcao);
	
	if(strcmp(opcao, "b") == 0 || strcmp(opcao,"B") == 0){
		pontuacao = pontuacao + 10;
		system("cls");
		printf("Você acertou parabéns :)");
	}else{
		system("cls");
		printf("Você errou :(");
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

