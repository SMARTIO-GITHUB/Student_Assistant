#include <stdio.h>

/*
 * 課題：文字配列の中からdefine INDEXで宣言されている数字のインデックスにあたる文字だけを出力せよ
 */

#define INDEX 2

int main(void){
	char str[] = "Hello, do you understand pointer?";
	char c = /*here*//*here*/;
	printf("str[INDEX] = %c\n",c);
	return 0;
}
