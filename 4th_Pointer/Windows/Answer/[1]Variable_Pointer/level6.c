#include <stdio.h>

/*
 * �ۑ�F�ϐ�variable�̎��l�𕶎��Ƃ��ďo�͂��Ȃ���
 */

int main(void){
	unsigned int variable = 0x41;
	unsigned int *unsigned_int_pointer = /*here*/&variable/*here*/;
	char *char_pointer = (char *)unsigned_int_pointer;
	printf("variable character is %c\n",*char_pointer);
	return 0;
}
