#include <stdio.h>
#include <string.h>

/*
 * �ۑ�F������̔�r���s��mystrcmp����������B
 * �������Astrcmp�Ȃǂ͎g�����A���C�u���������Ŏ�������B
 */


//Hint 1 : ������̒������قȂ�ꍇ��-1��Ԃ�����
//Hint 2 : ������͈ꕶ������r���A�r���ňقȂ��-1��Ԃ�����
//Hint 3 : ��������Ō�܂Œ��ׂāA�ǂ���ɂ����ق��Ȃ����0��Ԃ�����
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
