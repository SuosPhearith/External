#include<stdio.h>
struct student{
	int id;
	char name[20];
	char gender[20];
};
int main(){
	struct student s1[3];
	int i;
	//printf("\nPlease inut the ID, name and gender: \n");
	for(i=0;i<3;i++)
	{
		printf("\nInput ID : ");
		scanf("%d",&s1[i].id);
		printf("\nInput name : ");
		scanf("%s",&s1[i].name);
		printf("\nInput gender : ");
		scanf("%s",&s1[i].gender);
	}
	printf("\n====================================\n");
	printf("\ID\t\tName\t\tgender\n");
	for(i=0;i<3;i++)
	{
		printf("\n%d\t\t%s\t\t%s\n",s1[i].id,s1[i].name,s1[i].gender);
	}
	
	
	
}
