#include <stdio.h>
#include <string.h>

/*
 * �ۑ�Fbuf�ɑ΂��As�̓��e�Ɠ���ł��邩�ǂ������m�F����@�\����������
 */


char *s = "COMPARE_ME";


int main(void){
	char buf[50];
	printf("\"*s\" in %p\n",&s);
	printf("\"*s\" is %p\n",s);
	printf("\"*s\" reference \"%s\"\n",s);

	printf("Input string: ");
	scanf("%s",buf);

	if(/*here*//*here*/ == 0){
		printf("OK! Match!\n");
	}else{
		printf("NO!\n");
	}
	
	return 0;
}
