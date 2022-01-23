/*concatenar as duas frases e colocar um espa�o entre elas, al�m disso
sua fun��o devolver� duas informa��es: o n�mero total de caracteres na string resultante e
tamb�m o n�mero de espa�os (entre as palavras) no resultado. Como as fun��es em C s�
permitem o retorno de um valor, o n�mero de espa�os dever� ser passado por uma vari�vel
que sua fun��o receber� como refer�ncia. As strings tamb�m ser�o recebidas por
refer�ncia.  */

#include <stdio.h>

int concatena(char* s1, char* s2, char* sres, int* espacos, int tamanho){
	int i,j;
	*espacos=1;
	tamanho=0;
	for(i=0; i<40;i++){
		if(s1[i]==' '){
			*espacos=*espacos+1;
		}
		
		if(s1[i]=='\0')
			break;		
		sres[i]=s1[i];
		
		tamanho++;
	}

	sres[i-1]=' ';
	
	for(j=0; j<40;j++){
		if(s2[j]==' '){
			*espacos=*espacos+1;
		}
		sres[i]=s2[j];
		if(s2[j]=='\0'){
			break;
		}
		i++;
		tamanho++;

	}
	
	sres[i-1]='\0';	
	return tamanho;
}

//Funcao para imprimir uma string
void print_string(char* str){
  int k = 0;
  while(str[k] != '\0'){
    printf("%c", str[k]);
    k++;
  }
  printf("\n");
}

int main(int argc, char * argv[]){
  char frase1[40];
  char frase2[40];
  char fraseResultado[80];
  int tamResultado;
  int espacos;

  fgets(frase1, 40, stdin);
  fgets(frase2, 40, stdin);
  
  tamResultado = concatena(frase1, frase2, fraseResultado, &espacos,tamResultado);
  
  print_string(fraseResultado);
  printf("String com %d caracteres e %d espacos.\n", tamResultado, espacos);
  
  return 0;
}
