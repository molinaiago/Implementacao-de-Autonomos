#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estado zero
int stateZero(char * word) {
    int i = 0;

    switch (word[i++]) {
    case '/':
        return stateOne(word, i);
    default:
        return 0;
    }
}

// estado um
int stateOne(char * word, int i) {
    switch (word[i++]) {
    case '*':
        return stateTwo(word, i);
    default:
        return 0;
    }
}

//estado dois
int stateTwo(char * word, int i) {
    switch (word[i++]) {
    case '*':
        return stateThree(word, i);
    case 'A':
        return stateTwo(word, i);
    case 'B':
        return stateTwo(word, i);
    case 'C':
        return stateTwo(word, i);
    case 'D':
        return stateTwo(word, i);
    case 'E':
    default:
        return 0;
    }
}

// estado três
int stateThree(char * word, int i) {
    switch (word[i++]) {
    case '*':
        return stateThree(word, i);
    case '/':
        return stateFour(word, i);
    case 'A':
        return stateTwo(word, i);
    case 'B':
        return stateTwo(word, i);
    case 'C':
        return stateTwo(word, i);
    case 'D':
        return stateTwo(word, i);
    case 'E':
        return stateTwo(word, i);
    default:
        return 0;
    }
}

//estado quatro
int stateFour(char * word, int i) {
    switch (word[i++]) {
    case '\0':
        printf("%s\n -> Seu comentario esta certo!", word);
        return 1;
    default:
        return 0;
    }
}

int main() {

        char comentario[20];

        printf("Digite uma frase no formato /* x */ com no max 20 carac de A ate E: "); 
        scanf("%s", comentario); 

        printf("\n");

        if (stateZero(comentario) == 0) {
            printf("Formato errado!\n\n");
        }
    
    return 0;
}
