#include <stdio.h>

void printMessage(){
	printf("Hello Function Pointer!\n");
	return;
}


int main(void){
	void (*pointer)();
	pointer = printMessage;

	pointer();

	return 0;
}
	
