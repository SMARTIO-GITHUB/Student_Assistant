#include <stdio.h>
#include <string.h>

/* 
 * 課題：bufに対し、sの文字列をコピーせよ
 */


char *s = "THIS_IS_LITERAL-POOL_STRING";


int main(void){
	char buf[50];
	printf("\"*s\" in %p\n",&s);
	printf("\"*s\" is %p\n",s);
	printf("\"*s\" reference \"%s\"\n",s);
	strcpy(/*here*//*here*/);
	strcat(buf," but copied");
	printf("\"buf\" in %p\n",buf);
	printf("\"buf\" hold %s\n",buf);
	return 0;
}
