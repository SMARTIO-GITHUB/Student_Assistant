#include <stdio.h>

int add(int a, int b){
	return a + b;
}

int sub(int a, int b){
	return a - b;
}

int mul(int a, int b){
	return a * b;
}

int div(int a, int b){
	if(b == 0){
		return 0;
	}
	return a / b;
}

typedef int(*fptrOperation)(int,int);

int compute(fptrOperation operation, int num1, int num2){
	return operation(num1,num2);
}

int main(void){
	int a, b;

	printf("Enter the two number\na:");
	scanf("%d",&a);
	printf("b:");
	scanf("%d",&b);

	printf("[add] a + b = %d\n",compute(add,a,b));
	printf("[sub] a - b = %d\n",compute(sub,a,b));
	printf("[mul] a * b = %d\n",compute(mul,a,b));
	printf("[div] a / b = %d\n",compute(div,a,b));

	return 0;
}
