#include <stdio.h>

/*
 * 課題：printMessage関数を関数ポインタを使って呼び出せ
 */

void printMessage(){
	printf("Hello Function Pointer!\n");
	return;
}


int main(void){
	void (*pointer)();
	/*here*//*here*/;

	pointer();

	return 0;
}
	
