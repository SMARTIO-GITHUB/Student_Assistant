#include <stdio.h>

/* 
 * �ۑ�F�|�C���^�ϐ�pointer�̎w�������l(variable)��\�����Ȃ���
 */
int main(void){
	int variable = 100;
	int *pointer = /*here*/&variable/*here*/;
	
	printf("variable is %d\n",*pointer);
	return 0;
}
