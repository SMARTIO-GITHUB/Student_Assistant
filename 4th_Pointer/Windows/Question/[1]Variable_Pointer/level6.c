#include <stdio.h>

/*
 * 課題：変数variableの持つ値を文字として出力しなさい
 */

int main(void){
	unsigned int variable = 0x41;
	unsigned int *unsigned_int_pointer = /*here*//*here*/;
	char *char_pointer = (char *)unsigned_int_pointer;
	printf("variable character is %c\n",*char_pointer);
	return 0;
}
