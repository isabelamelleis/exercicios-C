#include <stdio.h>

int palindrome(char palavra[], char inverso[]) {
    int i, j;
    for(i = 0; palavra[i] != '\0'; i++);
    for(j = 0, i--; i >= 0; j++, i--) {
        inverso[j] = palavra[i];
    }
    inverso[j] = '\0';
    for(i = 0, j = 0; palavra[i] != '\0'; i++, j++) {
        if(palavra[i] != inverso[j]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char palavra[20], inverso[20];
    printf("Escreva uma palavra: ");
    scanf("%s", palavra);
    
    if(palindrome(palavra, inverso)) {
        printf("A palavra digitada eh um palindrome.");
    } else {
        printf("A palavra digitada nao eh um palindrome.");
    }
    return 0;
}
