#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int ans=59;
	int i;
	int num=0;
	
	do
	{
		printf("Guess a number : ");
		scanf("%d", &i);
		num++;
		
		if(i>ans){
			printf("High!\n");
		}
		else if (i<ans){
		
			printf("Low!\n");
		}
		else {
			printf("Great!\n");
		}
	}
	while (ans>i || ans<i);
	
	printf("trial : %i", num);
	return 0;
}
