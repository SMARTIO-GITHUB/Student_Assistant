#include <stdio.h>
#include <string.h>
/*
 * 課題：Game構造体の配列を作成した。この中身をすべて出力せよ。
 * 尚、今回のデータはこちらから参照している。そのため、値段や名称等は変更される恐れがある。
 * http://www.capcom.co.jp/monsterhunter/world/
 * http://www.ubisoft.co.jp/wd2/about/index.html
 * https://www.nintendo.co.jp/switch/aab6a/index.html
 * https://ec.nintendo.com/JP/ja/titles/70010000000412
 * https://www.nintendo.co.jp/switch/aaaca/
 */


struct Game{
	int price;
	char name[100];
};

int main(void){
	struct Game wishlist[5];
	int i;
	strcpy(wishlist[0].name,"WATCH_DOGS_2");
	wishlist[0].price = 8400;
	strcpy(wishlist[1].name,"MONSTER_HUNTER_WORLD");
	wishlist[1].price = 8980;
	strcpy(wishlist[2].name,"SPLATOON_2");
	wishlist[2].price = 5980;
	strcpy(wishlist[3].name,"MINECRAFT");
	wishlist[3].price = 3888;
	strcpy(wishlist[4].name,"SUPER_MARIO_ODYSSAY");
	wishlist[4].price = 5980;
	
	printf("WISHLIST (MY WANT) GAMES\n");
	for(i = 0; i < sizeof(wishlist) / sizeof(wishlist[0]); i++){
		printf("[%d] The name of game is %s\n",i,/*here*//*here*/);
		printf("[%d] The price of game is %d\n",i,/*here*//*here*/);
	}

	return 0;
}
