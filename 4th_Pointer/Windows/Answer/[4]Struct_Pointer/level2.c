#include <stdio.h>
#include <string.h>
/*
 * 課題：Game構造体を一つ作成したので、その中のメンバに適切な値を設定せよ。
 * ただし、設定する値は次のとおりとし、newgame_pointer変数以外は使ってはならない。
 * name:"MONSTER_HUNTER_WORLD"
 * price:8980
 * 尚、今回のデータはこちらから参照している。そのため、値段や名称等は変更される恐れがある。
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

	/*here*/newgame_pointer->price = 8980;/*here*/
	/*here*/strcpy(newgame_pointer->name,"MONSTER_HUNTER_WORLD");/*here*/
	printf("The name of game is %s\n",newgame_pointer->name);
	printf("The price of game is %d\n",newgame_pointer->price);

	return 0;
}
