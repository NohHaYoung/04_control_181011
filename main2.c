#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i;
	
	printf("���� �ϳ��� �Է��ϼ��� : ");
	scanf("%d", &i); 
	
	if(i>=0) {
		printf("���밪 = %d\n ", i);
	}
	else {
		printf("���밪 = %d\n", -1*i);
	}
	 
	return 0;
}
