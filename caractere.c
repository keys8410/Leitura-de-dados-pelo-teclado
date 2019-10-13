#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*    
	13 de outubro de 2019	

    Departamento de T.I., UniProjeção (Taguatinga, Campus I)
    
    Sistemas de Informação (2º semestre)
    Autor: Yan Almeida Garcia
	
	Leitura de dados pelo teclado
	
	Referências bibliográficas:
		[01]. "ASCII table , ascii codes :", disponível em: https://theasciicode.com.ar/
		
		[02]. "Loop infinito em C", disponível em: http://linguagemc.com.br/loop-infinito-em-c/
		
		[03]. "Funções em C", disponível em: http://linguagemc.com.br/funcoes-em-c/
		
		[04]. "Subalgoritmos (Funções)", disponível em: https://www.inf.pucrs.br/~pinho/LaproI/Funcoes/AulaDeFuncoes.htm
		
		[05]. "Entrada e saída; stdin", disponível em: https://www.ime.usp.br/~pf/algoritmos/aulas/io.html
*/

// protótipo:
	// int // função que retorna valor
int returnCar(int ch);

// variáveis:
int ch; // somente retornará o primeiro valor digitado

// main:
int main(){
	setlocale(LC_ALL, "portuguese");
   
   	returnCar(&ch);    	
 
 	// fim do programa
 	system("pause");	// similar ao 'getch();' - pausa para próxima execução
	return 0;   
}


// funções:
	// entrada de valor && retorno de caracter;
int returnCar(int ch){
	for(ch != 0; ;ch++){	// loop com saida ASCII 43; alt + 43: +
		printf("\n\t [+]. para sair\n");
   		
		printf("\n Digite algum caractere: ");
		ch = getchar();		// recebe caractere para conversão na tabela ASCII
		fflush(stdin);
		    
    	if(ch == '+'){
    		printf("\n\t>>> exit <<<\n\n");
			break;
		}
		
		if(ch < 'A' || ch > 'z')
			printf("\n Opção inválida\t[somente letras]\n\n");
   		else
	   		printf( "\t TECLA [%c].\n\t CÓDIGO ASCII [%d].\n\n", ch, ch);
	   		
		system("pause");
		system("cls");
	}	
}
