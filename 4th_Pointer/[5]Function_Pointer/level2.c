#include <stdio.h>

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


int main(void){
	int n;
	void (*pointer)(int);
	pointer = printMessage;

	printf("Enter the number: ");
	scanf("%d",&n);

	pointer(n);

	return 0;
}
	
