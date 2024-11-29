#include <stdlib.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>
#include <string.h>

float Media(float notaportugues, float notamatematica, float notaconhecimentos){
	float resultado;
	resultado = (notaportugues + notamatematica + notaconhecimentos)/3;
	return resultado;
};


struct Aluno{
	char nome[50];
	float notamatematica,notaportugues,notaconhecimentos;
};

int main(){
	int op,n1,n2,n3,n4,soma,A,B,c,D,E,S,quadrado,cubo,quociente, resto;
	float F,C,comprimento,largura,altura,media,velocidade,nota1,nota2,nota3;
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
			float distancia,litros_usados;
			
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
		case 21:
			
			float ms;
			printf("21. Faça um algoritmo que leia a velocidade de um veículo em km/h e calcule e imprima a velocidade em m/s(metros por segundo).\n\n");
			printf("Insira a velocidade do seu veiculo(km/h): ");
			scanf("%f",&velocidade);
			ms = velocidade/3.6;
			printf("A velocidade do seu veiculo é %.2f, convertida para metros por segundo é igual a %.2f\n",velocidade,ms);
		break;
		case 22:
			int numero1,numero2;
			
			printf("22. Faça um algoritmo que leia dois números inteiros (Int1 e Int2) e imprima o quociente e o resto da divisão inteira de Int1 por Int2.\n\n");
			printf("Insira um número: ");
			scanf("%d",&numero1);
			fflush(stdin); 
			printf("Insira um segundo número: ");
			scanf("%d",&numero2);
			
			quociente = numero1/numero2;
			resto = numero1 % numero2;
			
			if(numero2 !=0 ){
			
				printf("\n\n--- Resultado ---\n\n");
				printf("O quociente de %d e %d é %d\n",numero1,numero2,quociente);
				printf("O resto da divisão entre %d e %d é %d",numero1,numero2, resto);	
						
			}else{	
			
				printf("Hmm, este valor não possui um resto, tente com outro !\n");	
			}
			
		break;
		case 23:
			//não imprime o case 23
			float bruto,descontoprevidencia;
			
			printf("23. Considere a seguinte situação: descontam-se inicialmente 10% do salário bruto do trabalhador como contribuição à previdência social. Após esse desconto, há um outro desconto de 5% sobre o valor restante do salário bruto, a título de um determinado imposto. Faça um algoritmo que leia o salário bruto de um cidadão e imprima o seu salário líquido.");		
			printf("Insira o valor do seu salário bruto: R$");
			scanf("%f",&bruto);
			
			descontoprevidencia = (bruto*0.10)/100;
			
			printf("\n\n--- Desconto do salário bruto ---\n\n");
			printf("O salário bruto é de R$%.2f\n",bruto);
			printf("Salário com o desconto de 10% da previdencia social R$%2.f",descontoprevidencia);
		break;
		case 24:
			int codigo, DigitoV;
		    printf("24. Leia um código de cinco algarismos (variável Código) e gere o digito verificador (DigitoV) módulo 7 para o mesmo. Supondo que os cinco algarismos do código são ABCDE, uma forma de calcular o dígito desejado, com módulo 7 é: DigitoV = resto da divisão de S por 7, onde S = 6*A + 5*B + 4*C + 3*D + 2*\n\n");
		    
		    printf("Digite um código de 5 dígitos: ");
		    scanf("%d", &codigo);
		
		    A = codigo / 10000;          
		    B = (codigo / 1000) % 10;    
		    c = (codigo / 100) % 10;     
		    D = (codigo / 10) % 10;     
		    E = codigo % 10;             
		
		    S = 6 * A + 5 * B + 4 * C + 3 * D + 2 * E;
		    DigitoV = S % 7;

		    printf("O dígito verificador é: %d\n", DigitoV);
		break;
		case 25:
			printf("25. Faça um algoritmo que leia dois números A e B e imprima o maior deles.\n\n");
			printf("Digite o primeiro número: ");
			scanf("%d",&n1);
			printf("Digite o segundo número: ");
			scanf("%d",&n2);
			
			printf("\n\n--- Verificando maior número ---\n\n");
			if(n1 > n2){
				printf("O número %d é maior que o número %d",n1,n2);
			}else{
				printf("O número %d é maior que o número %d",n2,n1);
			}
		break;
		case 26:
			
			int n;
			printf("26. Faça um algoritmo que leia um número N e imprima F1, F2 ou F3, conforme a condição: F1, se N <= 10 F, se N > 10 e N <= 100 F3, se N > 100\n\n");
			printf("Digite um número: ");
			scanf("%d",&n);
			
			if(n <= 10){
				printf("F1");
			}else if(n > 10){
				printf("F2");
			}else if(n > 100){
				printf("F3");
			}
		break;
		case 27:
			printf("27. O sistema de avaliação de determinada disciplina, é composto por três provas. A primeira prova tem peso 2, a segunda tem peso 3 e a terceira tem peso 5. Faça um algoritmo para calcular a média final de um aluno desta disciplina. ");
			printf("\n\nDigite o valor da 1º nota com peso 2: ");
			scanf("%f",&nota1);
			printf("\n\nDigite o valor da 2º nota com peso 3: ");
			scanf("%f",&nota2);
			printf("\n\nDigite o valor da 3º nota com peso 5: ");
			scanf("%f",&nota3);
			
			media = nota1+nota2+nota3/3;
			
			printf("\n\n--- Média aluno ---\n\n");
			printf("A média do alundo é igual a %.2f",media);
		break;
		case 28:
			printf("28. Construa um algoritmo que receba como entrada três valores e os imprima em ordem crescente.\n\n");
			printf("Insira um valor: ");
	    	scanf("%d",&n1);
	    	printf("Insira um valor: ");
	    	scanf("%d",&n2);
	    	printf("Insira um valor: ");
	    	scanf("%d",&n3);
	    	
	    	printf("\n\n--- Ordem crescente dos números inseridos ---\n\n");
			
			if( n1 <= n2 && n1 < n3){
				printf("%d %d %d",n1,n2,n3);
			}else if( n2 <= n1 && n2 <= n3){
				printf("%d %d %d",n2,n1,n3);
			}else if(n3 <= n1 && n3 <= n2){
				printf("%d %d %d",n3,n1,n2);
			}
		break;
		case 29:
			struct Aluno aluno;
			printf("29. Considere que o último concurso vestibular apresentou três provas: Português, Matemática e Conhecimentos Gerais. Considerando que para cada candidato tem-se um registro contendo o seu nome e as notas obtidas em cada uma das provas, construa um algoritmo que forneça: a) o nome e as notas em cada prova do candidato b) a média do candidato c) uma informação dizendo se o candidato foi aprovado ou não. Considere que um candidato é aprovado se sua média for maior que 7.0 e se não apresentou nenhuma nota abaixo de 5.0 ");
	
			printf("\n\nInsira o nome do aluno: ");
			scanf("%s",&aluno.nome);
			 		
			printf("\nInsira a nota de portugues: ");
			scanf("%f",&aluno.notaportugues);
			
			printf("Insira a nota de matemática: ");
			scanf("%f",&aluno.notamatematica);
			
			printf("Insira a nota de conhecimentos gerais: ");
			scanf("%f",&aluno.notaconhecimentos);
			
			printf("\n\n---Exibindo informações do aluno---\n\n");
			printf("Nome do aluno.............................: %s\n",aluno.nome);
			printf("Nota de portugues.........................: %.2f\n",aluno.notaportugues);
			printf("Nota de matemáta..........................: %.2f\n",aluno.notamatematica);
			printf("Nota conhecimentos gerais.................: %.2f\n",aluno.notaconhecimentos);
			
			float resultado = Media(aluno.notaportugues, aluno.notamatematica, aluno.notaconhecimentos);
			
			printf("Média do aluno............................: %.2f\n", resultado);
			
			if(resultado >= 7 && aluno.notaportugues >= 5.0 && aluno.notamatematica >= 5.0 && aluno.notaconhecimentos >= 5.0){
				printf("Aluno(a) aprovado(a) com média %f",resultado);
			}else if(resultado >= 5 && aluno.notaportugues >= 5.0 && aluno.notamatematica >= 5.0 && aluno.notaconhecimentos >= 5.0){
				printf("Aluno(a) para a recuperação com média %.2f",resultado);
			}else{
				printf("Aluno(a) reprovado(a) com média %.2f",resultado);
			}
			
		break;	
		case 30:
			printf("30. Uma empresa de vendas tem três corretores. A empresa paga ao corretor uma comissão calculada de acordo com o valor de suas vendas. Se o valor da venda de um corretor for maior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se o valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. Escreva um algoritmo que gere um relatório contendo nome, valor da venda e comissão de cada um dos corretores. O relatório deve mostrar também o total de vendas da empresa.");
		
	}


	}while(op =! 0);

	}
	
	
	
