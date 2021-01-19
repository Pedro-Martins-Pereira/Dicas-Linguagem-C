#include <stdio.h>

//PONTEIROS


				/*
				3-Indiquei que ela RECEBERIA
				UM ENDEREÇO DE MEMORIA
				      |
                  	  V                 */
void incrementador(int* valor){
											/*
											4-Falei para escrever o VALOR que
											está ALOCADO NO ENDEREÇO DE MEMORIA
													   |
													   V						*/
	printf("Antes de incrementar o valor era de %d\n", *valor);
						
											/*5-Falei para incrementar NO VALOR
											QUE ESTÁ ALOCADO NA MEMORIA
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
		
	/*2-Levei o ENDEREÇO DE MEMORIA para a função
			      |
			      V								*/
	incrementador(&numero);
	
											/*Aqui será apresentado o valor da variavel.
											Após mudarmos o valor dela atraves do endereço de memoria
											    |
			                                    V													*/
	printf("Entao o valor final deve ser %d\n", numero);	
	
	return 0;
}

/*
	6- EXPLICAÇÃO DESSE CASO: 
	
	6.1-A variavel é inicializada com o valor 5.
	6.2-Com o "&" enviamos APENAS O ENDEREÇO DE MEMORIA da varialvel.
	6.3-Então na função, informamos o recebimento APENAS DO ENDEREÇO (Que carrega também o valor da variavel).
	6.4-Com o "*" falamos para escrever o VALOR que esta dentro do endereço da variavel
	6.5-Falamos para incrementar em 1 no VALOR que esta alocado no endereço da variavel
	6.6-O valor que aparecerá é o valor que está dentro do endereço da variavel incrementado em 1.
	
	Foi como se enviassemos uma carta(Endereço de memoria) para a função, 
	e a função abriu a carta e mudou apenas o conteudo interno dela(Valor alocado dentro do endereço)
	
	Quando se muda o valor do endereço, o valor da variavel muda em todo o programa!
*/