#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("정수 하나를 입력하세요 : ");
	scanf("%d", &i); 
	
	if(i>=0) {
		printf("절대값 = %d\n ", i);
	}
	else {
		printf("절대값 = %d\n", -1*i);
	}
	 
	return 0;
}
