#include <stdio.h>
#include <string.h>
/*
 * �ۑ�FGame�\���̂���쐬�����̂ŁA���̒��̃����o�ɓK�؂Ȓl��ݒ肹��B
 * �������A�ݒ肷��l�͎��̂Ƃ���Ƃ��Anewgame_pointer�ϐ��ȊO�͎g���Ă͂Ȃ�Ȃ��B
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
	struct Game *newgame_pointer;

	newgame_pointer = &monster_hunter_new;

	/*here*//*here*/
	/*here*//*here*/
	printf("The name of game is %s\n",newgame_pointer->name);
	printf("The price of game is %d\n",newgame_pointer->price);

	return 0;
}
