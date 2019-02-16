#include<stdio.h>
#include"PA1.h"

void print_set(char *set){
	int i=0;
	printf("{");
	while(set[i]!='\0'){
		printf("%c", set[i]);
		i++; 
		if(set[i]!='\0'){//Print comma and space between elements
		printf(", ");
		}
	}
	printf("}\n");
}
