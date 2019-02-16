#include<stdio.h>
#include"PA1.h"

int to_set(char *str, char *set){
	int i=0;
	int k=0;
	int p=0;
	int dupFlag=0;
	
	memset(set, 0, sizeof(set));//init set string
	
	for(i=0; i<strlen(str); i++){//Crawl through input string
		if(isspace(str[i])==0){//If current char is not a space
			for(p=0; p<strlen(set); p++){//Crawl trough set to look if char is a duplicate
				if(str[i]==set[p]){//If it is a duplicate
					dupFlag=1;
					//printf("Duplicate %c found\n", set[p]);
					break;		
				}
			}
			if(dupFlag==0){//If not a duplicate
				set[k]=str[i];//Place char in the set
				k++;//Move to next location in set	
			}
		}
		dupFlag=0;//Reset duplicate flag
	}
	set[k]='\0';//Null terminate the set string
	return 0;
}
