#include <stdio.h>

/* 
 * �ۑ�F�|�C���^���w�������l��\�����Ȃ���
 * �������Aprintf�֐��̒��ł�variable�ϐ��͎g���Ȃ��Ƃ���
 */

int main(void){
	int variable = 100;
	int *pointer = &variable;

	printf("variable is %d\n",/*here*/*pointer/*here*/);
	return 0;
}
