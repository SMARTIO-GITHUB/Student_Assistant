#include <stdio.h>

#define INDEX 2

int main(void){
	char str[] = "Hello, do you understand pointer?";
	char c = str[INDEX];
	printf("str[INDEX] = %c\n",c);
	return 0;
}
