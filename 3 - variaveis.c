#include <stdio.h>
#define TAM 100

int qInicio ( char palavra[TAM] ){
    int contador = 0;
    q0( contador, palavra );
}

int q0( int contador, char palavra[TAM] ){
    if ( contador < TAM ){
        if ( palavra[contador] == 'f' ){
           q1( ++contador, palavra ); 

        }else if (palavra[contador] == 'c'){
           q8( ++contador, palavra ); 

        }else{
            qErro();
        }

    }
}

int q1( int contador, char palavra[TAM] ){
    if ( contador < TAM ){
        if ( palavra[contador] == 'l' ){
          q2( ++contador, palavra ); 

        }else if (palavra[contador] == 'o'){
           q3( ++contador, palavra ); 

        }else{
            qErro();
        }

    }
}

int q2( int contador, char palavra[TAM] ){
    if ( palavra[contador] == 'o' ) {
        q5 ( ++contador, palavra );
        
    } else {
        qErro();
    }
}

int q3( int contador, char palavra[TAM] ){
    if ( palavra[contador] == 'r' ) {
        q4 ( ++contador, palavra );
        
    } else {
        qErro();
    }
}

int q4( int contador, char palavra[TAM] ){
    qFim();
}

int q5( int contador, char palavra[TAM] ){
    if ( palavra[contador] == 'a' ) {
        q6 ( ++contador, palavra );
        
    } else {
        qErro();
    }
}

int q6( int contador, char palavra[TAM] ){
    if ( palavra[contador] == 't' ) {
        q7 ( ++contador, palavra );
        
    } else {
        qErro();
    }
}

int q7( int contador, char palavra[TAM] ){
    qFim();
}

int q8( int contador, char palavra[TAM] ){
    if ( contador < TAM ){
        if ( palavra[contador] == 'h' ){
          q9( ++contador, palavra ); 

        }else{
            qErro();
        }

    }
}

int q9( int contador, char palavra[TAM] ){
    if ( palavra[contador] == 'a' ) {
        q3 ( ++contador, palavra );
        
    } else {
        qErro();
    }
}


int qErro(){
    printf("Palavra rejeitada!\n");
}

int qFim(){
    printf("Palavra aceita!\n");
}

int main(){
	
	char palavra[TAM] = "";
	printf("Qual a palavra reservada voce quer?\n");
   	gets(palavra);
    qInicio(palavra);
    printf("Voce digitou: %s",palavra);
    
    return 0;
}
