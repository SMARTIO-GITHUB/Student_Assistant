#include <stdio.h>
#include <string.h>
/*
 * �ۑ�FGame�\���̂���쐬�����̂ŁA���̒��̃����o�ɓK�؂Ȓl��ݒ肹��B
 * �������A�ݒ肷��l�͎��̂Ƃ���Ƃ���B
 * name:"MONSTER_HUNTER_WORLD"
 * price:8980
 * ���A����̃f�[�^�͂����炩��Q�Ƃ��Ă���B���̂��߁A�l�i�▼�̓��͕ύX����鋰�ꂪ����B
 * http://www.capcom.co.jp/monsterhunter/world/
 */


struct Game{
	int price;
	char name[100];
};

int main(void){
	struct Game monster_hunter_new;

	/*here*//*here*/
	/*here*//*here*/
	printf("The name of game is %s\n",monster_hunter_new.name);
	printf("The price of game is %d\n",monster_hunter_new.price);

	return 0;
}
