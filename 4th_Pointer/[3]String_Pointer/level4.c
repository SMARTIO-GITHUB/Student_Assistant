#include <stdio.h>
#include <string.h>

/*
 * 課題：bufに対し、sの内容と同一であるかどうかを確認する機構を実装せよ
 */


char *s = "COMPARE_ME";


int main(void){
	char buf[50];
	printf("\"*s\" in %p\n",&s);
	printf("\"*s\" is %p\n",s);
	printf("\"*s\" reference \"%s\"\n",s);

	printf("Input string: ");
	scanf("%s",buf);

	if(/*here*/strcmp(buf,s)/*here*/ == 0){
		printf("OK! Match!\n");
	}else{
		printf("NO!\n");
	}
	
	return 0;
}
