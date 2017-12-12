#include <stdio.h>

/* 
 * 課題：saga_of_tanya_the_evil変数の値を、megaman_battle_networkの変数を使って出力させなさい
 * ただし、ポインタをたどる際の回数と、文字列表示には注意すること
 */

int main(void){
	unsigned int *********megaman_starforce;unsigned int **osomatsu_san;unsigned int ****please_mymelody;unsigned int **********megaman_battle_network;unsigned int *******the_world_of_god_only_knows;unsigned int ******ghost_in_the_shell;unsigned int ***newgame;unsigned int *princess_principal;unsigned int saga_of_tanya_the_evil = 0x444f4f47;unsigned int ********working;unsigned int *****eden_of_the_east;

	princess_principal = &saga_of_tanya_the_evil;
	osomatsu_san = &princess_principal;
	newgame = &osomatsu_san;
	please_mymelody = &newgame;
	eden_of_the_east = &please_mymelody;
	ghost_in_the_shell = &eden_of_the_east;
	the_world_of_god_only_knows = &ghost_in_the_shell;
	working = &the_world_of_god_only_knows;
	megaman_starforce = &working;
	megaman_battle_network = &megaman_starforce;

	printf("%s\n",(char *)/*here*/*********megaman_battle_network/*here*/);
	return 0;
}
