#include <stdio.h>

/*
 * �ۑ�F���ߍ\�����g�킸�ɔz��array��3�Ԗڂ̓��e���o�͂����Ȃ���
 */

int main(void){
	int array[5] = { 1,10,100,1000,10000};
	
	printf("array[2] = %d !\n",/*here*/*(array + 2)/*here*/);

	return 0;
}
