#include <stdio.h>

int main(){
	printf(" Write a C program that accepts some text from the user and prints each word of that text on a separate line.\n\n");
	printf("Input some text:\n");
	int flag=0,count=0,i=0;
	char input[100];
	char *c;
	scanf("%[^\n]", input);
	do {
		c = &input[i];
		if(*c != ' ' && *c != '\t'){
		printf("%c", *c);
		}
		else {
			printf("\n");
		}
		i++;
	} while (*c != '\0');

	return 0;	
}
