#include <stdio.h>

/* 
 * 課題：ポインタが指し示す値を表示しなさい
 * ただし、printf関数の中ではvariable変数は使えないとする
 */

int main(void){
	int variable = 100;
	int *pointer = &variable;

	printf("variable is %d\n",/*here*/*pointer/*here*/);
	return 0;
}
