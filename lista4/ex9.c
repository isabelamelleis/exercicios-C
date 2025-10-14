#include <stdio.h>

void trim(char s[]) {
	int n, i;
	for(n = 0; s[n] == ' '; n++);
	for(i = n; s[i] != '\0'; i++) {
		s[i-n] = s[i];
	}
	s[i-n] = '\0'; // desloca o \0 também
	
	for(i=i-n; s[i-1] == ' ' && i != 0; i--);  //detalhe importante o do &&
	
}

int main() {
	char str[30];
	printf("Digite uma palavra ou frase: ");
	scanf("%[^\n]", str);  //%[^\n] pega tudo, até menos os espaços das frases, mas não pega o \n do enter
	trim(str);
	printf("Palavra ou frase sem espacos antes e depois: \n%s", str);
}
