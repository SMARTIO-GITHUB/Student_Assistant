#include <stdio.h>

/*
 * 課題：bufに対し文字列として入力するように実装せよ
 */

int main(void){
	char buf[50];

	printf("Enter the string: ");
	scanf(/*here*//*here*/buf);
	printf("The entered string is \"%s\"\n",buf);

	return 0;
}
