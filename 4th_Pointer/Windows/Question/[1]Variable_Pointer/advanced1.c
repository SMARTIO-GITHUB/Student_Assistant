#include <stdio.h>

/*
 * 課題：ASCIIコードを調べて、your_alphabet_here変数に対し好きな4文字を出力できるよう設定しなさい
 * 例："GOOD","BOMB","LOVE"など
 */

int main(void){
	unsigned int your_alphabet_here = /*here*//*here*/;//16進数として変数を宣言する場合は、数値の先頭に0xを付けるのがルールです
	printf("Your alphabet is %s\n",(char *)&your_alphabet_here);
	return 0;
}
