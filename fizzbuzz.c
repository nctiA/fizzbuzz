#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	
	for(i=1;i<=100;i++){
		if(i%3==0){
			if(i%5==0)
			printf("fizzbuzz\n");
			else
			printf("fizz\n");
		}
		else if (i%5==0){
			if(i%3==0)
			printf("fizzbuzz\n");
			else
			printf("buzz\n");
		}
	/*	else if (i%3==0 && i%5==0){
			printf("fizzbuzz\n");
		}*/
		else 
		printf("%d\n",i);
	}
	
	
	
	
	return 0;
}
