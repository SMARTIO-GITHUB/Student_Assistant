#include <stdio.h>

/* 
 * 課題：ポインタ変数pointerの指し示す値(variable)を表示しなさい
 */
int main(void){
	int variable = 100;
	int *pointer = /*here*/&variable/*here*/;
	
	printf("variable is %d\n",*pointer);
	return 0;
}
