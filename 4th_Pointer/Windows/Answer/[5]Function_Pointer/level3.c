#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * 課題：以下の関数を関数ポインタを使って呼び出せ
 */

void printMessage(int n){
	int i,j;
	printf("Here is # tower!\n");
	for(i = 0; i < n; i++){
		for(j = 0; j < i+1; j++){
			printf("#");
		}
		printf("\n");
	}	
	return;
}

int getrandomnumber(void){
	srand(time(NULL));
	return rand() % 101;
}

int main(void){
	int n;
	/*here*/int (*fpointer1)(void)/*here*/;
	void (*fpointer2)(int);
	fpointer1 = getrandomnumber;
	/*here*/fpointer2 = printMessage/*here*/;
	
	
	n = fpointer1();
	fpointer2(n);

	return 0;
}
	
