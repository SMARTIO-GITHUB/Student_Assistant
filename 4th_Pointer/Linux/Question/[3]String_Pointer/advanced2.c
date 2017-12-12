#include <stdio.h>
#include <string.h>

/*
 * 課題：文字列の比較を行うmystrcmpを実装せよ。
 * ただし、strcmpなどは使えず、ライブラリ抜きで実装せよ。
 */


//Hint 1 : 文字列の長さが異なる場合は-1を返すこと
//Hint 2 : 文字列は一文字ずつ比較し、途中で異なれば-1を返すこと
//Hint 3 : 文字列を最後まで調べて、どちらにも差異がなければ0を返すこと
int mystrcmp(char *c1, char *c2){
	char *ptr1, *ptr2;
	int i;
	
	ptr1 = c1;
	ptr2 = c2;

	if(strlen(ptr1) != strlen(ptr2)){
		return -1;
	}
	
	/*here*//*here*/
	
	return 0;
}

int main(void){
	char buf1[50],buf2[50];
	
	printf("Input the string1: ");
	scanf("%s",buf1);
	printf("Input the string2: ");
	scanf("%s",buf2);

	if(mystrcmp(buf1,buf2) == 0){
		printf("OK! Match!\n");
	}else{
		printf("NO!\n");
	}

	return 0;
}
