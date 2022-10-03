#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// estado zero
int stateZero(char * word) {
    int i = 0;

    switch (word[i++]) {
    case '<':
        return stateOne(word, i);
    case '>':
        return stateFive(word, i);
        break;
    case '=':
        return stateFour(word, i);
    default:
        return 0;
    }
}

// estado um
int stateOne(char * word, int i) {
    switch (word[i++]) {
    case '>':
        return stateThree(word, i);
    case '=':
        return stateTwo(word, i);
    case '\0':
        printf("%s MENOR\n\n", word);
        return 1;
    default:
        return 0;
    }
}

// estado dois

int stateTwo(char * word, int i) {
    switch (word[i++]) {
    case '\0':
        printf("%s MENOR OU IGUAL\n", word);
        return 1;
    default:
        return 0;
    }
}

// estado três
int stateThree(char * word, int i) {
    switch (word[i++]) {
    case '\0':
        printf("%s DIFERENCA\n", word);
        return 1;
    default:
        return 0;
    }
}

// estado quatro
int stateFour(char * word, int i) {
    switch (word[i++]) {
    case '\0':
        printf("%s IGUAL\n", word);
        return 1;
    default:
        return 0;
    }
}

// estado cinco
int stateFive(char * word, int i) {
    switch (word[i++]) {
    case '=':
        return stateSix(word, i);
    case '\0':
        printf("%s MAIOR\n", word);
        return 1;
    default:
        return 0;
    }
}

// seis
int stateSix(char * word, int i) {
    switch (word[i++]) {
    case '\0':
        printf("%s MAIOR OU IGUAL\n", word);
        return 1;
    default:
        return 0;
    }
}


int main() {

        char operator[3];

        printf("Digite um operador: "); 
        scanf("%s", operator); 

        printf("\n");

        if (stateZero(operator) == 0) {
            printf("Operador nao aceito!\n");
        }
 


    return 0;
}
