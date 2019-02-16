#include<stdio.h>
#include"PA1.h"

void main(void){

	char buffer[120];
	char A[120];
	char B[120];
	while(1==1){	
		printf("\nEnter text: ");
		fgets(buffer, 120, stdin);
		to_set(buffer, A);//Convert buffer to set and store in A
		print_set(A);		
		//buffer[0]='\0';//Clear buffer 
		//printf("\nEnter set B: ");
		//fgets(buffer, 120, stdin);
		//printf("original B: %s\n", A);
		//to_set(buffer, B);//Convert buffer to set and store in B
		
		//printf("printf A: %s\n", A);
		//print_set(A);//Print set A
		//printf("printf B: %s\n", B);
		//print_set(B);//Print set B
		
		//A[0]='\0';//Clear A
		//B[0]='\0';//Clear B
		 
	}
}
