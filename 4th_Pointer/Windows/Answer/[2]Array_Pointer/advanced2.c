#include <stdio.h>

/*
 * �ۑ�F2�����z��array2d��1�����z��Ƒ����āA
 * for����1�����g���Ă��ׂĂ̒l���o�͂��Ȃ���
 * ������for���̒��Ɏg����C���f�b�N�X�ϐ���i�݂̂ŁAj�Ȃǂ͎g���܂���
 */

int main(void){
	int array2d[9][9] = {{1,2,3,4,5,6,7,8,9},
			{2,4,6,8,10,12,14,16,18},
			{3,6,9,12,15,18,21,24,27},
			{4,8,12,16,20,24,28,32,36},
			{5,10,15,20,25,30,35,40,45},
			{6,12,18,24,30,36,42,48,54},
			{7,14,21,28,35,42,49,56,63},
			{8,16,24,32,40,48,56,64,72},
			{9,18,27,36,45,54,63,72,81}};

	printf("[+]Size of 2darray = %ld\n",sizeof(array2d));
	printf("[+]Size of element of 2darray = %ld\n",sizeof(array2d[0][0]));
	

	int i;
	int *array1d = /*here*/(int *)array2d/*here*/;
	for(i = 0; i < sizeof(array2d) / sizeof(array2d[0][0]); i++){
		printf("[+]array[%d] = %d\n",i,/*here*/array1d[i]/*here*/);
	}
	return 0;
}
