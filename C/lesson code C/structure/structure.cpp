#include<stdio.h>
struct book{
		char *title[20];
		char *author[20];
		int price;		
	};
int main(){
	
	struct book b1;
	scanf("%s",&b1.title);
	scanf("%s",&b1.author);
	scanf("%d",&b1.price);
	
	printf("\n======================\n");
	printf("\nThe title is : %s",b1.title);
	printf("\nThe author is : %s",b1.author);
	printf("\nThe price is : %d",b1.price);
	
}
