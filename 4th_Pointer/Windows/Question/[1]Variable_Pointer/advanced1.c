#include <stdio.h>

/*
 * �ۑ�FASCII�R�[�h�𒲂ׂāAyour_alphabet_here�ϐ��ɑ΂��D����4�������o�͂ł���悤�ݒ肵�Ȃ���
 * ��F"GOOD","BOMB","LOVE"�Ȃ�
 */

int main(void){
	unsigned int your_alphabet_here = /*here*//*here*/;//16�i���Ƃ��ĕϐ���錾����ꍇ�́A���l�̐擪��0x��t����̂����[���ł�
	printf("Your alphabet is %s\n",(char *)&your_alphabet_here);
	return 0;
}
