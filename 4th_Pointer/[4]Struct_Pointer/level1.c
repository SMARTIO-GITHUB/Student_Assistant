#include <stdio.h>
#include <string.h>
/*
 * 課題：Game構造体を一つ作成したので、その中のメンバに適切な値を設定せよ。
 * ただし、設定する値は次のとおりとする。
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

	/*here*/monster_hunter_new.price = 8980;/*here*/
	/*here*/strcpy(monster_hunter_new.name,"MONSTER_HUNTER_WORLD");/*here*/
	printf("The name of game is %s\n",monster_hunter_new.name);
	printf("The price of game is %d\n",monster_hunter_new.price);

	return 0;
}
