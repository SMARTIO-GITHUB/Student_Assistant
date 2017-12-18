#include <stdio.h>

/*
 * ‰Û‘èF•Ï”variable‚Ì‚Â’l‚ğ•¶š‚Æ‚µ‚Äo—Í‚µ‚È‚³‚¢
 */

int main(void){
	unsigned int variable = 0x41;
	unsigned int *pointer = /*here*/&variable/*here*/;
	printf("variable character is %c\n",(char)*pointer);
	return 0;
}
