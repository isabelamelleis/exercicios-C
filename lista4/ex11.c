#include <stdio.h>

void apagar(char str[], char c) {
	int i, j;
	for(i = 0; str[i] != '\0'; i++) {
		if (str[i] == c) {
			for(j = i; str[j] != '\0'; j++) {
				str[j] = str[j+1];
			}
			i--;
		}
	}
}

int main() {
	char str[30], c;
	printf("Digite uma palavra: ");
	scanf("%s", str);
	printf("Digite uma letra: ");
	scanf(" %c", &c);
	apagar(str, c);
	printf("A palavra ficou: %s", str);
}
