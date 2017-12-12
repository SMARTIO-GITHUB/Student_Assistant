#include <stdio.h>

/*
 * 課題：ポインタ変数pointerの指し示す値を浮動小数点数の値として表示しなさい
 */

int main(void){
	int variable = 100;
	int *pointer = &variable;
	printf("variable is %f\n",/*here*/(float)/*here*/*pointer);
	return 0;
}
