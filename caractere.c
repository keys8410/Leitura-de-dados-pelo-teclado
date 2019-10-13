#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*    
	13 de outubro de 2019	

    Departamento de T.I., UniProje��o (Taguatinga, Campus I)
    
    Sistemas de Informa��o (2� semestre)
    Autor: Yan Almeida Garcia
	
	Leitura de dados pelo teclado
	
	Refer�ncias bibliogr�ficas:
		[01]. "ASCII table , ascii codes :", dispon�vel em: https://theasciicode.com.ar/
		
		[02]. "Loop infinito em C", dispon�vel em: http://linguagemc.com.br/loop-infinito-em-c/
		
		[03]. "Fun��es em C", dispon�vel em: http://linguagemc.com.br/funcoes-em-c/
		
		[04]. "Subalgoritmos (Fun��es)", dispon�vel em: https://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm
		
		[05]. "Entrada e sa�da; stdin", dispon�vel em: https://www.ime.usp.br/~pf/algoritmos/aulas/io.html
*/

// prot�tipo:
	// int // fun��o que retorna valor
int returnCar(int ch);

// vari�veis:
int ch; // somente retornar� o primeiro valor digitado

// main:
int main(){
	setlocale(LC_ALL, "portuguese");
   
   	returnCar(&ch);    	
 
 	// fim do programa
 	system("pause");	// similar ao 'getch();' - pausa para pr�xima execu��o
	return 0;   
}


// fun��es:
	// entrada de valor && retorno de caracter;
int returnCar(int ch){
	for(ch != 0; ;ch++){	// loop com saida ASCII 43; alt + 43: +
		printf("\n\t [+]. para sair\n");
   		
		printf("\n Digite algum caractere: ");
		ch = getchar();		// recebe caractere para convers�o na tabela ASCII
		fflush(stdin);
		    
    	if(ch == '+'){
    		printf("\n\t>>> exit <<<\n\n");
			break;
		}
		
		if(ch < 'A' || ch > 'z')
			printf("\n Op��o inv�lida\t[somente letras]\n\n");
   		else
	   		printf( "\t TECLA [%c].\n\t C�DIGO ASCII [%d].\n\n", ch, ch);
	   		
		system("pause");
		system("cls");
	}	
}
