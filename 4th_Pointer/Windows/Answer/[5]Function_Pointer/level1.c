#include <stdio.h>

/*
 * �ۑ�FprintMessage�֐����֐��|�C���^���g���ČĂяo��
 */

void printMessage(){
	printf("Hello Function Pointer!\n");
	return;
}


int main(void){
	void (*pointer)();
	/*here*/pointer = printMessage/*here*/;

	pointer();

	return 0;
}
	
