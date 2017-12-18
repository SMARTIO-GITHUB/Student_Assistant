#include <stdio.h>
#include <string.h>

/*
 * 課題：文字列の長さを調べるmystrlenを実装せよ。
 * ただし、mystrlenの中ではstrlenなどは使えず、ライブラリ抜きで完成させること。
 */

int mystrlen(char *c){
	int len = 0;
	char *ptr = c;
	/*here*//*here*/
	return len;
}

int main(void){
	char buf[50];
	
	printf("Input the string: ");
	scanf("%s",buf);

	printf("The strlen return %ld. This is string length\n",strlen(buf));
	printf("The mystrlen return %d. This is string length\n",mystrlen(buf));

	return 0;
}
