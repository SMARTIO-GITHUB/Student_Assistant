#include <stdio.h>

/*
 * �ۑ�F�ϐ�variable�̎��l�𕶎��Ƃ��ďo�͂��Ȃ���
 */

int main(void){
	unsigned int variable = 0x41;
	unsigned int *pointer = /*here*/&variable/*here*/;
	printf("variable character is %c\n",(char)*pointer);
	return 0;
}
