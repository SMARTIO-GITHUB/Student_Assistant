#include <stdio.h>

/*
 * 課題：arrayという配列はint型の配列となっていますが、
 * これをchar型の配列だと捉えて、中にある文字を出力しなさい
 */

int main(void){
	int array[] = {0x676e6f43,
			0x217a6172,
			0x756f5920,
			0x6e616320,
			0x61657220,
			0x68742064,
			0x6d207369,
			0x61737365,
			0x61206567,
			0x68632073,
			0x61207261,
			0x79617272,
			0x21000000};

	printf("[+]sizeof(array) = %d\n",sizeof(array));
	printf("[+]sizeof(array[0]) = %d\n",sizeof(array[0]));
	printf("[+]sizeof(array) / sizeof(array[0]) = %d\n",sizeof(array) / sizeof(array[0]));

	char *str = (char *)array;
	int i;
	/*here*/
	for(i = 0; i < sizeof(array); i++){
		printf("%c",str[i]);
	}
	printf("\n");	
	/*here*/

	return 0;
}
