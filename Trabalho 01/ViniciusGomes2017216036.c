// #################################################
//  Instituto Federal da Bahia
//  Salvador - BA
//  Curso de Análise e Desenvolvimento de Sistemas http://ads.ifba.edu.br
//  Disciplina: INF029 - Laboratório de Programação
//  Professor: Renato Novais - renato@ifba.edu.br

//  ----- Orientações gerais -----
//  Descrição: esse arquivo deve conter as questões do trabalho do aluno.
//  Cada aluno deve renomear esse arquivo para Aluno<MATRICULA>.c
//  O aluno deve preencher seus dados abaixo, e implementar as questões do trabalho

//  ----- Dados do Aluno -----
//  Nome: Vinicius de Castro Gomes 
//  email: viniciusdecastrogomes@gmail.com
//  Matrícula: 2017216036
//  Semestre:

//  Copyright © 2016 Renato Novais. All rights reserved.
// Última atualização: 20/06/2018 - 19/08/2016

// #################################################

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "ViniciusGomes2017216036.h"

/*
## função utilizada para testes  ##
 somar = somar dois valores
@objetivo
    Somar dois valores x e y e retonar o resultado da soma
@entrada
    dois inteiros x e y
@saida
    resultado da soma (x + y)
 */
int somar(int x, int y)
{
    int soma = 0;
    soma = x + y;
    printf("%d---", soma);
    return soma;
}

/*
## função utilizada para testes  ##
 fatorial = fatorial de um número
@objetivo
    calcular o fatorial de um número
@entrada
    um inteiro x
@saida
    fatorial de x -> x!
 */
int fatorial(int x)
{ //função utilizada para testes
    int fat = 1;
    return fat;
}

/*typedef struct DQ
{
    char sDia [3];
    char sMes [3];
    char sAno [3];
    int valido; // 0 se inválido, e 1 se válido 
} DataQuebrada;
DataQuebrada quebraData(char *data){
    //[ e , r  ,  /  ,    ,   ,  /  ,    ,     ,    ,      ,]
}*/
/*
 Q1 = validar data
@objetivo
    Validar uma data
@entrada
    uma string data. Formatos que devem ser aceitos: dd/mm/aaaa, onde dd = dia, mm = mês, e aaaa, igual ao ano. dd em mm podem ter apenas um digito, e aaaa podem ter apenas dois digitos.
@saida
    0 -> se data inválida
    1 -> se data válida
 @restrições
    Não utilizar funções próprias de string (ex: strtok)   
    pode utilizar strlen para pegar o tamanho da string
 */
int q1(char *data)
{
  int data_valida = 1;

    Data data_separada = divdata(data);
    data_valida = ValidaData(data_separada.dia,data_separada.mes,data_separada.ano);

    return (data_valida);}

  char dia[3];
	char mes[3];
	char ano[5];
	int slash=0, k=0, i=0;

Data divdata(char *data){
  	Data datainteira;

	while(data[i]!='\0'){
        if(data[i]=='/'){
            slash++;
            k=0;
        }
        if(slash==0){
            dia[k]=data[i];
            dia[k+1]='\0';
            k++;
        }
        else if(slash == 1){
            if(data[i]=='/'){
                i++;
            }
            mes[k]=data[i];
            mes[k+1]='\0';
            k++;
        }
        else if(slash == 2){
            if(data[i]=='/'){
                i++;
            }
            ano[k]=data[i];
            ano[k+1]='\0';
            k++;
        }
        i++;
    }

datainteira.dia=atoi(dia);
datainteira.mes=atoi(mes);
datainteira.ano=atoi(ano);

    if (datainteira.ano>=0 && datainteira.ano<=18){
        datainteira.ano += 2000;
    }
    else if (datainteira.ano>=19 && datainteira.ano<=99){
        datainteira.ano += 1900;
    }
    return datainteira;
}


int ValidaData(int dia, int mes, int ano){
    int validade = 1;

	if (mes > 12 || mes < 1 || dia < 1 || dia > 31){
		validade = 0;
	}
	else if ((dia < 1 && dia > 31) && (mes == 1||mes == 3||mes == 5||mes == 7||mes == 8||mes == 10||mes == 12)) {
		validade = 0;
	}
	else if ((dia < 1 && dia > 30) && (mes == 4|| mes == 6 || mes == 9 || mes == 11)){
        validade = 0;
    }
	else if (ano % 400 == 0 || (ano % 4 == 0 && ano % 100 != 0)) {
		if (mes == 2 && dia > 29) {
			validade = 0;
		}
	}
	else if (mes == 2 && dia > 28) {
		validade = 0;
	}

	return validade;
}
/*
 Q2 = diferença entre duas datas
 @objetivo
    Calcular a diferença em anos, meses e dias entre duas datas
 @entrada
    uma string datainicial, uma string datafinal. Além disso, a função tem três parâmetros qtdDias, qtdMeses e qtdAnos. Esses três parâmetros devem ser utilizados para guardar os resultados dos cálculos. Na chamada da função deve passar o valor -1 para os três
 @saida
    1 -> cálculo de diferença realizado com sucesso
    2 -> datainicial inválida
    3 -> datafinal inválida
    4 -> datainicial > datafinal
 */

int q2(char *datainicial, char *datafinal, int *qtdDias, int *qtdMeses, int *qtdAnos)
{

    //calcule os dados e armazene nas três variáveis a seguir
    int nDias, nMeses, nAnos;

    if (q1(datainicial) == 0)
        return 2;

    nDias = 4;
    nMeses = 10;
    nAnos = 2;

    /*mantenha o código abaixo, para salvar os dados em 
    nos parâmetros da funcao
    */
    *qtdDias = nDias;
    *qtdAnos = nAnos;
    *qtdMeses = nMeses;

    //coloque o retorno correto
    return 1;
}


/*
 Q3 = encontrar caracter em texto
 @objetivo
    Pesquisar quantas vezes um determinado caracter ocorre em um texto
 @entrada
    uma string texto, um caracter c e um inteiro que informa se é uma pesquisa Case Sensitive ou não. Se isCaseSensitive = 1, a pesquisa deve considerar diferenças entre maiúsculos e minúsculos.
        Se isCaseSensitive != 1, a pesquisa não deve  considerar diferenças entre maiúsculos e minúsculos.
 @saida
    Um número n >= 0.
 */
int q3(char *texto, char c, int isCaseSensitive){
    int aux = 0; 
    int tam = 0;
	int found = 0;

	tam = strlen(texto);

	if (isCaseSensitive == 1){
		aux = 0;

		while(aux <= tam){
			if(c == texto[aux]){
				found++;
			}
		aux++;
 		}
	}
	else if (isCaseSensitive != 1){
				aux = 0;
		while(aux <= tam){
			if(texto[aux] == toupper(c) || texto[aux] == tolower(c)){
				found++;
			}
		    	aux++;
 		}
	}
    return found;
}

/*
 Q4 = encontrar palavra em texto
 @objetivo
    Pesquisar todas as ocorrências de uma palavra em um texto
 @entrada
    uma string texto base (strTexto), uma string strBusca e um vetor de inteiros (posicoes) que irá guardar as posições de início e fim de cada ocorrência da palavra (strBusca) no texto base (texto).
 @saida
    Um número n >= 0 correspondente a quantidade de ocorrências encontradas.
    O vetor posicoes deve ser preenchido com cada entrada e saída correspondente. Por exemplo, se tiver uma única ocorrência, a posição 0 do vetor deve ser preenchido com o índice de início do texto, e na posição 1, deve ser preenchido com o índice de fim da ocorrencias. Se tiver duas ocorrências, a segunda ocorrência será amazenado nas posições 2 e 3, e assim consecutivamente. Suponha a string "Instituto Federal da Bahia", e palavra de busca "dera". Como há uma ocorrência da palavra de busca no texto, deve-se armazenar no vetor, da seguinte forma:
        posicoes[0] = 13;
        posicoes[1] = 16;
        Observe que o índice da posição no texto deve começar ser contado a partir de 1.
        O retorno da função, n, nesse caso seria 1;
 */
int q4(char *strTexto, char *strBusca, int posicoes[30]){
    int iCont, jCont, kCont, xCont, yCont, Cont01, Cont02, Cont3;
    int qtdOcorrencias; 
    
    xCont = yCont = jCont = kCont = Cont01 = Cont02 = qtdOcorrencias = 0;

    if(strlen(strBusca) == 1){
        for(iCont = 0; strTexto[i]!='\0'; iCont++){
            if(strTexto[iCont] == strBusca[0])
                Cont01++;
        }
        return Cont01;
    }

    for(iCont = 0; strTexto[iCont]!='\0'; iCont++){
        Cont01 = 0;
    if(strTexto[iCont] == -95 || strTexto[iCont] == -87 || strTexto[iCont] == -83 || strTexto[iCont] == -77 || strTexto[iCont] == -70 || strTexto[iCont] == -93 || strTexto[iCont] == -89)
       Cont3++;
        if(strTexto[iCont] == strBusca[jCont]){
            for(xCont = iCont + 1, kCont = jCont + 1; strBusca[kCont] == strTexto[xCont]; xCont++ ,kCont++)
                Cont01++;
        }
        if(Cont01 == strlen(strBusca)-1){
            posicoes[yCont++] = (iCont + 1)- Cont3;
            posicoes[yCont++] = xCont - Cont3;
            qtdOcorrencias++;
        }
    }
    return qtdOcorrencias;
}

/*
 Q5 = inverte número
 @objetivo
    Inverter número inteiro
 @entrada
    uma int num.
 @saida
    Número invertido
 */

int q5(int num){
    
   int reverse = 0, aux;
        
   while (num > 0){
    aux = num % 10;
    reverse = reverse * 10 + aux; 
    num /= 10;
   }
   return reverse;
}

/*
 Q6 = ocorrência de um número em outro
 @objetivo
    Verificar quantidade de vezes da ocorrência de um número em outro
 @entrada
    Um número base (numerobase) e um número de busca (numerobusca).
 @saida
    Quantidade de vezes que número de busca ocorre em número base
 */

int q6(int numerobase, int numerobusca){
   
   int aux, contador = 0, tam = 1;
   aux = numerobusca;

   while (aux != 0){
    tam = tam * 10;
    aux /= 10;
   }
   aux = numerobase;

   while (aux != 0){ 
    if (aux % tam == numerobusca){ 
        contador ++;
        aux = aux / tam;
   
   }else
        aux /= 10;
 }
   return contador;  
}