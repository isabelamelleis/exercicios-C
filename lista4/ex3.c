#include <stdio.h>

void concatena(char str1[], char str2[]) {
	int i, j;
	for(i = 0; str1[i] != '\0'; i++);
	for(j = 0; str2[j] != '\0'; j++) {
		str1[i+j] = str2[j];
	}
	str1[i+j] = '\0';
}

int main () {
	char str1[50], str2[20];
	printf("Digite uma palavra: ");
	scanf("%s", str1);
	printf("Digite uma segunda palavra: ");
	scanf("%s", str2);
	printf("\nPrimeira palavra: %s", str1);
	printf("\nSegunda palavra: %s", str2);
	concatena(str1, str2);
	printf("\nPrimeira palavra concatenada com a outra: %s", str1);
	printf("\nSegunda palavra continua igual: %s", str2);
}