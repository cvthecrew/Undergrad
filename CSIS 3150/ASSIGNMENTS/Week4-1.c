//Alexander Cannell
//CSIS 3150
//1.	Write a test driver for the following string methods: strcat, strcmp, strlen, strtok.


#include <stdio.h>
#include <string.h>

int main(){
	char a[1000] = "cat dog horse";
	char *b = "rubberbabybunkybumbers";
	char temp[1000];
	char *temp2;
	int choice = -1;
	
	while (choice != 0){
		printf("Enter either, 1.strcat\t 2.strcmp\t 3.strlen\t 4.strtok\n");
		scanf("%d", %choice);
		
		if(choice ==1){
			printf("%s",a);
			strcat(a,b);
			printf("After strcat, %s\n", a);			
		}
		
		if(choice ==2){
			printf("Please enter an animal");
			scanf("%s", &temp);
			
			while(strcmp(b, temp) != 0){
				printf("The strings dont match");
				scanf("%s", &temp);
			}
			printf("The Match is %s = %s.\n", b,temp);
		}
		
		if(choice ==3){
			int l = strlen(a);
			printf("The length %d\n", l);
		}
		
		if(choice ==4){
			printf("The tokens are");
			temp2 = strtok(a,""):
			
			while(temp2 != NULL){
				printf("\n%s\n", temp2);
				temp2 = strtok(NULL,"");
			}
		}
		
	}
}