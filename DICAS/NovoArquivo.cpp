#include <stdio.h>

//PONTEIROS


				/*
				3-Indiquei que ela RECEBERIA
				UM ENDERE�O DE MEMORIA
				      |
                  	  V                 */
void incrementador(int* valor){
											/*
											4-Falei para escrever o VALOR que
											est� ALOCADO NO ENDERE�O DE MEMORIA
													   |
													   V						*/
	printf("Antes de incrementar o valor era de %d\n", *valor);
						
											/*5-Falei para incrementar NO VALOR
											QUE EST� ALOCADO NA MEMORIA
												  	      |
													      V					*/
	printf("Depois de incrementar o valor virou %d\n", ++(*valor));
}

int main(int argc, char** argv)
{
	/*1-Declarei a variavel numero com valor 5
			   |
			   V							*/
	int numero=5;
	
	printf("\t**************************\n");
	printf("\t*** TESTE DE PONTEIROS ***\n");
	printf("\t**************************\n\n");
		
	/*2-Levei o ENDERE�O DE MEMORIA para a fun��o
			      |
			      V								*/
	incrementador(&numero);
	
											/*Aqui ser� apresentado o valor da variavel.
											Ap�s mudarmos o valor dela atraves do endere�o de memoria
											    |
			                                    V													*/
	printf("Entao o valor final deve ser %d\n", numero);	
	
	return 0;
}

/*
	6- EXPLICA��O DESSE CASO: 
	
	6.1-A variavel � inicializada com o valor 5.
	6.2-Com o "&" enviamos APENAS O ENDERE�O DE MEMORIA da varialvel.
	6.3-Ent�o na fun��o, informamos o recebimento APENAS DO ENDERE�O (Que carrega tamb�m o valor da variavel).
	6.4-Com o "*" falamos para escrever o VALOR que esta dentro do endere�o da variavel
	6.5-Falamos para incrementar em 1 no VALOR que esta alocado no endere�o da variavel
	6.6-O valor que aparecer� � o valor que est� dentro do endere�o da variavel incrementado em 1.
	
	Foi como se enviassemos uma carta(Endere�o de memoria) para a fun��o, 
	e a fun��o abriu a carta e mudou apenas o conteudo interno dela(Valor alocado dentro do endere�o)
	
	Quando se muda o valor do endere�o, o valor da variavel muda em todo o programa!
*/