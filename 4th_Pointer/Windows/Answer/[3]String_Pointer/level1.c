#include <stdio.h>

/*
 * �ۑ�F�����z��̒�����define INDEX�Ő錾����Ă��鐔���̃C���f�b�N�X�ɂ����镶���������o�͂���
 */

#define INDEX 2

int main(void){
	char str[] = "Hello, do you understand pointer?";
	char c = /*here*/str[INDEX]/*here*/;
	printf("str[INDEX] = %c\n",c);
	return 0;
}
