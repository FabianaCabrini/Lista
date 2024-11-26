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
	printf("Selecione a atividade que quer ver a resoluÃ§Ã£o:\n\n");

	scanf("%d",&op);
	system ("cls");
	switch(op){
		case 1: 
			float a,b,c,d,e;
			printf("1 -  Calcule o valor de cada expressÃ£o abaixo e indique o tipo do resultado (inteiro ou real):\na) (2015) / 2\nb) 2015/2 \nc) 2*5/20 + 30/15 * 2 \nd) 2* (5/20) + 30 / ( 15 * 2) \ne) 23 % 4 * 2\n");
			
			a = (2015)/2;
			b = 2015/2;
			c = 2*5/20 + 30/15 * 2; 
			d = 2* (5/20) + 30 / ( 15 * 2);
			e = 23 % 4 * 2;
			
			printf("\n\nRESOLUÃ‡ÃƒO\n\n");
			printf("a) %.2f\n",a);
			printf("b) %.2f\n",b);
			printf("c) %.2f\n",c);
			printf("d) %.2f\n",d);
			printf("e) %.2f\n",e);
		break;
		case 2:
			char opc[10];
			
			printf("2 -  Considerando as variÃ¡veis declaradas na tabela abaixo e de acordo com as expressÃµes a seguir. Preencha a tabela verdade, com Falso e Verdadeiro, aplicando a cada uma das expressÃµes as trÃªs combinaÃ§Ãµes de variÃ¡veis uma de cada vez. Como exemplo aplicamos o conjunto de variÃ¡veis 01 com a expressÃ£o A e preenchemos o primeiro resultado:\n\n");
			printf("VARIAVEIS\n");
			printf("     A | B  | NOME  | PROFISSÃƒO |\n01 | 3 | 16 | MARIA | ADVOGADO  |\n02 | 5 | 64 | PEDRO | PROFESSOR |\n03 |2.5|  9 | ANA   | ANALISTA  |\n\n");
			printf("A) (A + 1 >= B ) OU ( NOME <> 'ANA' )\nB) (A + 1 >= B) E (PROFISSAO == 'PROFESSOR') E (A + 1 >= B)\n C) ( NOME =! 'ANA' ) OU ( PROFISSAO D) ((A + 1) >= B) OU NÃƒO (PROFISSAO == 'PROFESSOR') E) NÃƒO (A + 1 >= B)\n\n");
			
			printf("TABELA VERDADE\n\n");
			printf("     A | B | C | D  | E  |\n01 | V | F | V | V  | V  |\n02 | F | F | V | F  | V  |\n03 | V | F | V | F  | V  | ");
			printf("\n");
			
			printf("\nEscolha a opção que esta correta:\n");
			printf("A) V, F, F,V, V / V, F, V, V \nB) F, V, F, V, F / V , V , V, F , V\nC) F, F, V, F, V/ F, V , F , V , V\n");
			printf("\nSelecione a opção: ");
			scanf("%s",&opc);
		
			if(strcmp(opc, "A") == 0 || strcmp(opc, "a") == 0){
				printf("\nOpção correta !!");	
			}else{
				printf("\nOpção incorreta, tente novamente!!");
			}
		break;
		case 3:
			printf("3. Com as declaraÃ§Ãµes:\ndouble soma, x;\nString nome, cor;\nboolean cod, teste, tudo;\n Assinale com um X os comandos de atribuiÃ§Ã£o vÃ¡lidos.");
			printf("( ) teste = cod || ((x)*2 <> soma)\n( ) tudo = soma;\n( ) x = nome >= cor;\n( cor== ) cod = cor == 'verde';\n( ) tudo! teste || cod && (soma < x) ");
		break;
		case 4:
			
			float area, raio;
			printf("4. FaÃ§a um algoritmo para calcular a Ã¡rea de uma circunferÃªncia, considerando a fÃ³rmula ÃREA = Ï€ * RAIO2. Utilize as variÃ¡veis AREA e RAIO, a constante Ï€ ( pi = 3,14159) e os operadores aritmÃ©ticos de multiplicaÃ§Ã£o. ");
			
			printf("\nDefina o valor do raio: ");
			scanf("%f",&raio);
			
			area = PI*raio*raio;
			
			printf("A área é = %.2f",area);
		break;
		case 5:
			
			float areaTriangulo,base,altura;
			
			printf("5. Faça um algoritmo que calcule a área de um triângulo, considerando a fórmula ÁREA =( BASE*ALTURA) / 2. Utilize as variáveis AREA, BASE e ALTURA e os operadores aritméticos de multiplicação e divisão.\n\n");
			
			printf("Insira o valor da base: ");
			scanf("%f",&base);
			
			printf("Defina a altura: ");
			scanf("%f",&altura);
			
			areaTriangulo = (base*altura)/2;
			
			printf("\n");
			printf("A área do triangulo é = %.2f",areaTriangulo);
		break;
		case 6:
			printf("6. Faça um algoritmo que:\na) Leia o nome\nb) Leia o sobrenome\nc) Concatene o nome com o sobrenome\nd) Apresente o nome completo.\n\n");
			
			printf("Digine seu nome: ");
			scanf("%s",&nome);
			printf("Digite seu sobrenome: ");
			scanf("%s",&sobrenome);
			printf("\n");
			printf("%s %s",nome,sobrenome);
		break;
		case 7:
			printf("7. Faça um algoritmo que:\na) Leia um número inteiro\nb) Leia um segundo número inteiro\nc) Efetue a adição dos dois valores\nd) Apresente o valor calculado.\n\n");
			printf("Insira um número inteiro: ");
			scanf("%d",&n2);
			printf("Insira outro número: ");
			scanf("%d",&n1);
			
			soma = n1+n2;
			printf("\nA soma dos dois valores %d + %d é igual a %d",n1,n2,soma);
		break;
		case 8:
			int ht;
			float valorht,pd,sb,desconto,liquido;
			printf("8. Faça um algoritmo que:na) Obtenha o valor para a variável HT (horas trabalhadas no mês)\nb) Obtenha o valor para a variável VH (valor hora trabalhada)\nc) Obtenha o valor para a variável PD (percentual de desconto)\nd) Calcule o salário bruto => SB = HT* VH\ne) Calcule o total de desconto => TD = (PD/100) * SB\ng) Apresente os valores de: Horas trabalhadas, Salário Bruto, Desconto, Salário Liquido.");
			
			printf("\n\nInsira suas horas trabalhadas no mês: ");
			scanf("%d",&ht);
			printf("Insira o valor da hora trabalhada: ");
			scanf("%f",&valorht);
			printf("Insira o percentual de desconto: ");
			scanf("%f",&pd);
			//sb =  salário bruto
			sb = ht*valorht;
			desconto = (pd/100)*sb;
			liquido = sb-desconto;
			
			printf("\nO total de horas trabalhadas: %d horas\nSalário bruto R$%.2f\nDesconto %.2f\nLíquido R$%.2f",ht,sb,desconto,liquido);
			
			break;
			
		case 9:
			
			printf("9. Faça um algoritmo que leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A fórmula de conversão é: F = (9* C + 160) / 5, na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius;");
			
			printf("\n\nInsira a temperatura em Celsius e apresentaresmos a converssão para Fahrenheit: ");
			scanf("%f",&C);
			
			F = (9*C +160)/5;
			
			printf("\n\nA temperatura inserida foi %.2fCº,convertendo para Fahrenheit é %.f2F",C,F);
			
		break;
		case 10:
			
			printf("10. Faça um algoritmo que leia uma temperatura em Fahrenheit e a apresente convertidal em graus Celsius. A fórmula de conversão é C = (F-32) * ( 5 / 9), na qual F é a temperatura em Fahrenheit e C é a temperatura em Celsius. ");
			printf("\n\nInsira a temperatura em  Fahrenheit e apresentaresmos a converssão para Celsius: ");
			scanf("%f", &F);
			
			C = (F-32) * ( 5.0 / 9.0);
			
			printf("\n\nA temperatura inserida foi %.2fFº,convertendo para Celsius é %.2fC",F,C);
		
		break;
		case 11:
			float volume,raiolata,alturalata;
			
			printf("11. Faça um algoritmo que calcule e apresente o valor do volume de uma lata de óleo, utilizando a fórmula VOLUME = pT * RAIO2 * ALTURA. Utilizando p ( pi = 3,14159 ). ");
			printf("\n\nInsira o valor do raio (em cm): ");
			scanf("%f",&raiolata);
			printf("Insira o valor da altura (em cm): ");
			scanf("%f",&alturalata);
			
			volume = PI*raiolata*raiolata*alturalata;
			printf("\nO volume é igual a %.2fcm³",volume);
			
		break;
		case 12:
			int tempo;
			float velocidade,distancia,litros_usados;
			
			printf("12. Faça um algoritmo que calcule a quantidade de litros de combustível gasta em uma viagem, por um automóvel que faz 12Km por litro. O usuário deve fornecer o tempo gasto e velocidade média da viagem. Calcule a distância percorrida com a fórmula: DISTANCIA = TEMPO * VELOCIDADE. Tendo o valor da distância, calcule o consumo de combustível da viagem com a fórmula: LITROS_USADOS DISTANCIA / 12 O programa deve apresentar os valores da velocidade média, tempo gasto na viagem, a distância percorrida e a quantidade de litros utilizada na viagem. ");
			
			printf("\n\nInforme o tempo gasto da viagem (em horas): ");
			scanf("%d",&tempo);
			printf("Informe a velocidade média da viagem (em km/h): ");
			scanf("%f",&velocidade);
			
			distancia = tempo*velocidade;
			litros_usados = distancia/12;
			
			printf("\n--- RESULTADOS DA VIAGEM ---\n");
			printf("Tempo gasto na viagem: %d horas\n", tempo);
    		printf("Velocidade média: %.2f km/h\n", velocidade);
			printf("\nValor da distancia %.2f\n",distancia);
			printf("Quantidade de litros usados para a viagem: %.2fL\n",litros_usados);			
			
		break;
		case 13:
			int temp;
			
			printf("13. Faça um algoritmo que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da variável A. Ao final apresente os valores trocados. ");
			printf("\n\nInsira um valor inteiro: ");
			scanf("%d",&A);
			printf("Insira um segundo valor: ");
			scanf("%d",&B);
			
			printf("\nValores antes da troca:\n");
    		printf("1º valor = %d, 2º valor = %d\n", A, B);
    		
    		temp = A; 
    		A = B;   
    		B = temp;
    		
    		printf("\nValores trocados:\n");
   			printf("1º valor = %d, 2º valor = %d\n", A, B);
   			
   		break;
   		case 14:
   			printf("14. Faça um algoritmo que leia quatro números e apresente os resultados de adição e multiplicação dos valores entre si, baseando-se na utilização da propriedade distributiva, ou seja, se forem lidas as variáveis A, B, C e D, devem ser somadas e multiplicadas A com B, A com C e A com D; B com C, B com D e por último C com D. ");
			printf("Digite o 1º número: ");
			scanf("%d",&n1);
			printf("Digite o 2º número: ");
			scanf("%d",&n2);
			printf("Digite o 3º número: ");
			scanf("%d",&n3);
			printf("Digite o 4º número: ");
			scanf("%d",&n4);
			
			printf("\nResultados das operações:\n");
			printf("n1 + n2 = %d, n1 * n2 = %d\n", n1 + n2, n1 * n2);
   			printf("n1 + n3 = %d, n1 * n3 = %d\n", n1 + n3, n1 * n3);
    		printf("n1 + n4 = %d, n1 * n4 = %d\n", n1 + n4, n1 * n4);
		    printf("n2 + n3 = %d, n2 * n3 = %d\n", n2 + n3, n2 * n3);
		    printf("n2 + n4 = %d, n2 * n4 = %d\n", n2 + n4, n2 * n4);
		    printf("n3 + n4 = %d, n3 * n4 = %d\n", n3 + n4, n3 * n4);	
		    
		case 15:
			printf("15. Faça um algoritmo que leia os valores de COMPRIMENTO, LARGURA e ALTURA e apresente o valor do volume de uma caixa retangular. Utilize para o cálculo a fórmula: VOLUME = COMPRIMENTO * LARGURA * ALTURA ");
			printf("\n\nInsira o comprimento:");
			scanf("%f",&comprimento);
			printf("Insira a largura:");
			scanf("%f",&largura);
			printf("Insira a altura:");
			scanf("%f",&altura);
			
			volume = comprimento*altura*largura;
			
			printf("O volume é %f",volume);
			
		break;
		case 16:
			printf("16. Faça um algoritmo que leia um valor inteiro e apresente os resultados do quadrado e do cubo do valor lido. ");
			printf("\n\nDigite um número inteiro: ");
			scanf("%d",&n1);
			
			quadrado = n1*n1;
			cubo = quadrado*n1;
			
			printf("\n----Resultado----\n\n");
			printf("O quadrado de %d é %d\n",n1,quadrado);
			printf("O cubo de %d é %d\n",n1,cubo);
			
		break;
		case 17:
			printf("17. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado do quadrado da soma dos valores lidos.\n\n");
			printf("Insira um valor inteiro: ");
			scanf("%d",&n1);
			printf("Insira outro valor inteiro: ");
			scanf("%d",&n2);
			
			soma = n1+n2;
			quadrado = soma*soma;
			
			printf("\n----Resultado----\n\n");
			printf("A soma de %d + %d é igual a %d\n.",n1,n2,soma);
			printf("O quadrado da soma %d é igual a %d.\n", soma, quadrado);
		
		break;
		case 18:
			int quadradon1,quadradon2,soman1,soman2;
			
			printf("18. Faça um algoritmo que leia dois valores inteiros (A e B) e apresente o resultado da soma do quadrado de cada valor lido.\n\n");
			printf("Insira um valor inteiro: ");
			scanf("%d",&n1);
			printf("Insira outro valor inteiro: ");
			scanf("%d",&n2);
			
			quadradon1 = n1*n1;
			soman1 = quadradon1+n1;
			
			
			quadradon2 = n2*n2;
			soman2 = quadradon2+n2;
			
			printf("\n----Resultado----\n\n");
			printf("O quadrado de %d é %d\n",n1,quadradon1);
			printf("A soma do quadrado de %d é %d\n",quadradon1, soman1);
			printf("O quadrado de %d é %d\n",n2,quadradon2);
			printf("A soma do quadrado de %d é %d\n",quadradon2, soman2);
		break;
		case 19:
			float val1,val2;
			
			printf("19. Faça um algoritmo que leia dois números nas variáveis Val1 e Val2, calcule sua média na variável Media e imprima seu valor.\n\n");
			printf("Insira um valor: ");
			scanf("%f",&val1);
			printf("Insira um segundo valor: ");
			scanf("%f",&val2);
			
			media = (val1+val2)/2;
			
			printf("\n----Resultado----\n\n");
			printf("A média entre os dois valores inseridos é %.2f",media);
		break;
		case 20:
			
			printf("20. Faça um algoritmo que leia dois números nas variáveis NumA e NumB, nessa ordem, e imprima em ordem inversa, isto é, se os dados lidos forem 5 e 9, por exemplo, devem ser impressos na ordem 9 e 5. \n\n");
			printf("Insira um valor: ");
			scanf("%d",&n1);
			printf("Insira um outro valor: ");
			scanf("%d",&n2);
			
			printf("\nA ordem original é %d %d\n",n1,n2);
			printf("A ordem alterada é %d %d\n",n2,n1);			
		break;		
			
			
		getch();	
	}


	}while(op =! 0);





	}
	
	
	
