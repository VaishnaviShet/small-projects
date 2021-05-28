#include<stdio.h>
#include<string.h>

struct books {
	char author [20];
	char title[28];
	int isn; 
	int stock;
	int cost;
};


void main() {
	struct books b[5]= {   {"pushpa","english", 1111,3,450},
				{"kumar","technical",2341,5,345}, 
				{"balaguruswami","mathematics",5673,6,230},
				{"jagadeesh","hindi",7797,2,80},
				{"aish","stories",9909,5,75}
			    } ; 

	 char tit[20];
	 int flag=0, num, i; 

	 printf("title: \n"); 
	 gets(tit); 
	 
	 for (i=0;i<5;i++){
	 	if(!(strcmp(b[i].title,tit))) {
	 		flag=1; break;
	 	}
	 }
	 
	 if(flag == 1){
	 	printf("Book Present!");
	 	printf("Book details :\n\n");
	 	
	 	printf(" ISN : %d \n Author : %s \n Title : %s \n Cost : %d\n  ", b[i].isn, b[i].author, b[i].title,b[i].cost);
	 	printf("Enter the no of copies requried  ");
	 	scanf("%d", &num);
	 	
	 	if(num<=b[i].stock){
	 		printf("No of copies required are present \n ");
	 		printf("Total cost :%d \n", b[i].cost*num);
	 		
	 	} 
	 	else {
	 		printf("Required copies not available\n ");
	 	}
	 }
	 else{
	 	printf("Book not present\n");
	 }
 
 }
