#include <stdio.h>

/*
 * ‰Û‘èF•Ï”variable‚Ì‚Â’l‚ğ•¶š‚Æ‚µ‚Äo—Í‚µ‚È‚³‚¢
 */

int main(void){
	unsigned int variable = 0x41;
	unsigned int *unsigned_int_pointer = /*here*/&variable/*here*/;
	char *char_pointer = (char *)unsigned_int_pointer;
	printf("variable character is %c\n",*char_pointer);
	return 0;
}
