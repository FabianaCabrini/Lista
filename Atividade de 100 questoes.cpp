#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>
#include <conio.h>

int main(){
	int op,n1,n2,n3,n4,soma,A,B,quadrado,cubo;
	float F,C,comprimento,largura,altura,media;
	const double PI = 3.14159;
	char nome[50],sobrenome[50];
	
	do{
	
	setlocale(LC_ALL,"Portuguese");
	printf("\n\n----------Bem vindo a nossa tabela de atividades---------- \n\n");
	printf("Selecione a atividade que quer ver a resolução:\n\n");

	scanf("%d",&op);
	system ("cls");
	switch(op){
		case 1: 
			float a,b,c,d,e;
			printf("1 -  Calcule o valor de cada expressão abaixo e indique o tipo do resultado (inteiro ou real):\na) (2015) / 2\nb) 2015/2 \nc) 2*5/20 + 30/15 * 2 \nd) 2* (5/20) + 30 / ( 15 * 2) \ne) 23 % 4 * 2\n");
			
			a = (2015)/2;
			b = 2015/2;
			c = 2*5/20 + 30/15 * 2; 
			d = 2* (5/20) + 30 / ( 15 * 2);
			e = 23 % 4 * 2;
			
			printf("\n\nRESOLUÇÃO\n\n");
			printf("a) %.2f\n",a);
			printf("b) %.2f\n",b);
			printf("c) %.2f\n",c);
			printf("d) %.2f\n",d);
			printf("e) %.2f\n",e);
		break;
		case 2:
			char opc[10];
			
			printf("2 -  Considerando as variáveis declaradas na tabela abaixo e de acordo com as expressões a seguir. Preencha a tabela verdade, com Falso e Verdadeiro, aplicando a cada uma das expressões as três combinações de variáveis uma de cada vez. Como exemplo aplicamos o conjunto de variáveis 01 com a expressão A e preenchemos o primeiro resultado:\n\n");
			printf("VARIAVEIS\n");
			printf("     A | B  | NOME  | PROFISSÃO |\n01 | 3 | 16 | MARIA | ADVOGADO  |\n02 | 5 | 64 | PEDRO | PROFESSOR |\n03 |2.5|  9 | ANA   | ANALISTA  |\n\n");
			printf("A) (A + 1 >= B ) OU ( NOME <> 'ANA' )\nB) (A + 1 >= B) E (PROFISSAO == 'PROFESSOR') E (A + 1 >= B)\n C) ( NOME =! 'ANA' ) OU ( PROFISSAO D) ((A + 1) >= B) OU NÃO (PROFISSAO == 'PROFESSOR') E) NÃO (A + 1 >= B)\n\n");
			
			printf("TABELA VERDADE\n\n");
			printf("     A | B | C | D  | E  |\n01 | V | F | V | V  | V  |\n02 | F | F | V | F  | V  |\n03 | V | F | V | F  | V  | ");
			printf("\n");
			
			printf("\nEscolha a op��o que esta correta:\n");
			printf("A) V, F, F,V, V / V, F, V, V \nB) F, V, F, V, F / V , V , V, F , V\nC) F, F, V, F, V/ F, V , F , V , V\n");
			printf("\nSelecione a op��o: ");
			scanf("%s",&opc);
		
			if(strcmp(opc, "A") == 0 || strcmp(opc, "a") == 0){
				printf("\nOp��o correta !!");	
			}else{
				printf("\nOp��o incorreta, tente novamente!!");
			}
		break;
		case 3:
			printf("3. Com as declarações:\ndouble soma, x;\nString nome, cor;\nboolean cod, teste, tudo;\n Assinale com um X os comandos de atribuição válidos.");
			printf("( ) teste = cod || ((x)*2 <> soma)\n( ) tudo = soma;\n( ) x = nome >= cor;\n( cor== ) cod = cor == 'verde';\n( ) tudo! teste || cod && (soma < x) ");
		break;
		case 4:
			
			float area, raio;
			printf("4. Faça um algoritmo para calcular a área de uma circunferência, considerando a fórmula ÁREA = π * RAIO2. Utilize as variáveis AREA e RAIO, a constante π ( pi = 3,14159) e os operadores aritméticos de multiplicação. ");
			
			printf("\nDefina o valor do raio: ");
			scanf("%f",&raio);
			
			area = PI*raio*raio;
			
			printf("A �rea � = %.2f",area);
		break;
		case 5:
			
			float areaTriangulo,base,altura;
			
			printf("5. Fa�a um algoritmo que calcule a �rea de um tri�ngulo, considerando a f�rmula �REA =( BASE*ALTURA) / 2. Utilize as vari�veis AREA, BASE e ALTURA e os operadores aritm�ticos de multiplica��o e divis�o.\n\n");
			
			printf("Insira o valor da base: ");
			scanf("%f",&base);
			
			printf("Defina a altura: ");
			scanf("%f",&altura);
			
			areaTriangulo = (base*altura)/2;
			
			printf("\n");
			printf("A �rea do triangulo � = %.2f",areaTriangulo);
		break;
		case 6:
			printf("6. Fa�a um algoritmo que:\na) Leia o nome\nb) Leia o sobrenome\nc) Concatene o nome com o sobrenome\nd) Apresente o nome completo.\n\n");
			
			printf("Digine seu nome: ");
			scanf("%s",&nome);
			printf("Digite seu sobrenome: ");
			scanf("%s",&sobrenome);
			printf("\n");
			printf("%s %s",nome,sobrenome);
		break;
		case 7:
			printf("7. Fa�a um algoritmo que:\na) Leia um n�mero inteiro\nb) Leia um segundo n�mero inteiro\nc) Efetue a adi��o dos dois valores\nd) Apresente o valor calculado.\n\n");
			printf("Insira um n�mero inteiro: ");
			scanf("%d",&n2);
			printf("Insira outro n�mero: ");
			scanf("%d",&n1);
			
			soma = n1+n2;
			printf("\nA soma dos dois valores %d + %d � igual a %d",n1,n2,soma);
		break;
		case 8:
			int ht;
			float valorht,pd,sb,desconto,liquido;
			printf("8. Fa�a um algoritmo que:na) Obtenha o valor para a vari�vel HT (horas trabalhadas no m�s)\nb) Obtenha o valor para a vari�vel VH (valor hora trabalhada)\nc) Obtenha o valor para a vari�vel PD (percentual de desconto)\nd) Calcule o sal�rio bruto => SB = HT* VH\ne) Calcule o total de desconto => TD = (PD/100) * SB\ng) Apresente os valores de: Horas trabalhadas, Sal�rio Bruto, Desconto, Sal�rio Liquido.");
			
			printf("\n\nInsira suas horas trabalhadas no m�s: ");
			scanf("%d",&ht);
			printf("Insira o valor da hora trabalhada: ");
			scanf("%f",&valorht);
			printf("Insira o percentual de desconto: ");
			scanf("%f",&pd);
			//sb =  sal�rio bruto
			sb = ht*valorht;
			desconto = (pd/100)*sb;
			liquido = sb-desconto;
			
			printf("\nO total de horas trabalhadas: %d horas\nSal�rio bruto R$%.2f\nDesconto %.2f\nL�quido R$%.2f",ht,sb,desconto,liquido);
			
			break;
			
		case 9:
			
			printf("9. Fa�a um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A f�rmula de convers�o �: F = (9* C + 160) / 5, na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius;");
			
			printf("\n\nInsira a temperatura em Celsius e apresentaresmos a converss�o para Fahrenheit: ");
			scanf("%f",&C);
			
			F = (9*C +160)/5;
			
			printf("\n\nA temperatura inserida foi %.2fC�,convertendo para Fahrenheit � %.f2F",C,F);
			
		break;
		case 10:
			
			printf("10. Fa�a um algoritmo que leia uma temperatura em Fahrenheit e a apresente convertidal em graus Celsius. A f�rmula de convers�o � C = (F-32) * ( 5 / 9), na qual F � a temperatura em Fahrenheit e C � a temperatura em Celsius. ");
			printf("\n\nInsira a temperatura em  Fahrenheit e apresentaresmos a converss�o para Celsius: ");
			scanf("%f", &F);
			
			C = (F-32) * ( 5.0 / 9.0);
			
			printf("\n\nA temperatura inserida foi %.2fF�,convertendo para Celsius � %.2fC",F,C);
		
		break;
		case 11:
			float volume,raiolata,alturalata;
			
			printf("11. Fa�a um algoritmo que calcule e apresente o valor do volume de uma lata de �leo, utilizando a f�rmula VOLUME = pT * RAIO2 * ALTURA. Utilizando p ( pi = 3,14159 ). ");
			printf("\n\nInsira o valor do raio (em cm): ");
			scanf("%f",&raiolata);
			printf("Insira o valor da altura (em cm): ");
			scanf("%f",&alturalata);
			
			volume = PI*raiolata*raiolata*alturalata;
			printf("\nO volume � igual a %.2fcm�",volume);
			
		break;
		case 12:
			int tempo;
			float velocidade,distancia,litros_usados;
			
			printf("12. Fa�a um algoritmo que calcule a quantidade de litros de combust�vel gasta em uma viagem, por um autom�vel que faz 12Km por litro. O usu�rio deve fornecer o tempo gasto e velocidade m�dia da viagem. Calcule a dist�ncia percorrida com a f�rmula: DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da dist�ncia, calcule o consumo de combust�vel da viagem com a f�rmula: LITROS_USADOS DISTANCIA / 12 O programa deve apresentar os valores da velocidade m�dia, tempo gasto na viagem, a dist�ncia percorrida e a quantidade de litros utilizada na viagem. ");
			
			printf("\n\nInforme o tempo gasto da viagem (em horas): ");
			scanf("%d",&tempo);
			printf("Informe a velocidade m�dia da viagem (em km/h): ");
			scanf("%f",&velocidade);
			
			distancia = tempo*velocidade;
			litros_usados = distancia/12;
			
			printf("\n--- RESULTADOS DA VIAGEM ---\n");
			printf("Tempo gasto na viagem: %d horas\n", tempo);
    		printf("Velocidade m�dia: %.2f km/h\n", velocidade);
			printf("\nValor da distancia %.2f\n",distancia);
			printf("Quantidade de litros usados para a viagem: %.2fL\n",litros_usados);			
			
		break;
		case 13:
			int temp;
			
			printf("13. Fa�a um algoritmo que leia dois valores para as vari�veis A e B e efetue a troca dos valores de forma que a vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da vari�vel A. Ao final apresente os valores trocados. ");
			printf("\n\nInsira um valor inteiro: ");
			scanf("%d",&A);
			printf("Insira um segundo valor: ");
			scanf("%d",&B);
			
			printf("\nValores antes da troca:\n");
    		printf("1� valor = %d, 2� valor = %d\n", A, B);
    		
    		temp = A; 
    		A = B;   
    		B = temp;
    		
    		printf("\nValores trocados:\n");
   			printf("1� valor = %d, 2� valor = %d\n", A, B);
   			
   		break;
   		case 14:
   			printf("14. Fa�a um algoritmo que leia quatro n�meros e apresente os resultados de adi��o e multiplica��o dos valores entre si, baseando-se na utiliza��o da propriedade distributiva, ou seja, se forem lidas as vari�veis A, B, C e D, devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por �ltimo C com D. ");
			printf("Digite o 1� n�mero: ");
			scanf("%d",&n1);
			printf("Digite o 2� n�mero: ");
			scanf("%d",&n2);
			printf("Digite o 3� n�mero: ");
			scanf("%d",&n3);
			printf("Digite o 4� n�mero: ");
			scanf("%d",&n4);
			
			printf("\nResultados das opera��es:\n");
			printf("n1 + n2 = %d, n1 * n2 = %d\n", n1 + n2, n1 * n2);
   			printf("n1 + n3 = %d, n1 * n3 = %d\n", n1 + n3, n1 * n3);
    		printf("n1 + n4 = %d, n1 * n4 = %d\n", n1 + n4, n1 * n4);
		    printf("n2 + n3 = %d, n2 * n3 = %d\n", n2 + n3, n2 * n3);
		    printf("n2 + n4 = %d, n2 * n4 = %d\n", n2 + n4, n2 * n4);
		    printf("n3 + n4 = %d, n3 * n4 = %d\n", n3 + n4, n3 * n4);	
		    
		case 15:
			printf("15. Fa�a um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o c�lculo a f�rmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA ");
			printf("\n\nInsira o comprimento:");
			scanf("%f",&comprimento);
			printf("Insira a largura:");
			scanf("%f",&largura);
			printf("Insira a altura:");
			scanf("%f",&altura);
			
			volume = comprimento*altura*largura;
			
			printf("O volume � %f",volume);
			
		break;
		case 16:
			printf("16. Fa�a um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido. ");
			printf("\n\nDigite um n�mero inteiro: ");
			scanf("%d",&n1);
			
			quadrado = n1*n1;
			cubo = quadrado*n1;
			
			printf("\n----Resultado----\n\n");
			printf("O quadrado de %d � %d\n",n1,quadrado);
			printf("O cubo de %d � %d\n",n1,cubo);
			
		break;
		case 17:
			printf("17. Fa�a um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da soma dos valores lidos.\n\n");
			printf("Insira um valor inteiro: ");
			scanf("%d",&n1);
			printf("Insira outro valor inteiro: ");
			scanf("%d",&n2);
			
			soma = n1+n2;
			quadrado = soma*soma;
			
			printf("\n----Resultado----\n\n");
			printf("A soma de %d + %d � igual a %d\n.",n1,n2,soma);
			printf("O quadrado da soma %d � igual a %d.\n", soma, quadrado);
		
		break;
		case 18:
			int quadradon1,quadradon2,soman1,soman2;
			
			printf("18. Fa�a um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado de cada valor lido.\n\n");
			printf("Insira um valor inteiro: ");
			scanf("%d",&n1);
			printf("Insira outro valor inteiro: ");
			scanf("%d",&n2);
			
			quadradon1 = n1*n1;
			soman1 = quadradon1+n1;
			
			
			quadradon2 = n2*n2;
			soman2 = quadradon2+n2;
			
			printf("\n----Resultado----\n\n");
			printf("O quadrado de %d � %d\n",n1,quadradon1);
			printf("A soma do quadrado de %d � %d\n",quadradon1, soman1);
			printf("O quadrado de %d � %d\n",n2,quadradon2);
			printf("A soma do quadrado de %d � %d\n",quadradon2, soman2);
		break;
		case 19:
			float val1,val2;
			
			printf("19. Fa�a um algoritmo que leia dois n�meros nas vari�veis Val1 e Val2, calcule sua m�dia na vari�vel Media e imprima seu valor.\n\n");
			printf("Insira um valor: ");
			scanf("%f",&val1);
			printf("Insira um segundo valor: ");
			scanf("%f",&val2);
			
			media = (val1+val2)/2;
			
			printf("\n----Resultado----\n\n");
			printf("A m�dia entre os dois valores inseridos � %.2f",media);
		break;
		case 20:
			
			printf("20. Fa�a um algoritmo que leia dois n�meros nas vari�veis NumA e NumB, nessa ordem, e imprima em ordem inversa, isto �, se os dados lidos forem 5 e 9, por exemplo, devem ser impressos na ordem 9 e 5. \n\n");
			printf("Insira um valor: ");
			scanf("%d",&n1);
			printf("Insira um outro valor: ");
			scanf("%d",&n2);
			
			printf("\nA ordem original � %d %d\n",n1,n2);
			printf("A ordem alterada � %d %d\n",n2,n1);			
		break;		
			
			
		getch();	
	}


	}while(op =! 0);





	}
	
	
	
