#include <stdio.h>
int main(){
    int date,month,year,sum;
    int t[] = {11,12,1,2,3,4,5,6,7,8,9,10};
	int i;
    //input
   printf(" Enter the day(format 01): ");scanf("%d",&date);
   printf("Enter the month(format 01): ");scanf("%d",&month);
   printf("Enter the year(format 2000): ");scanf("%d",&year);

   for(i=0;i<12;i++){
       int ans = t[i]*2.6 - 0.2;
       t[i]=ans%7;
   }
    //Sakamoto's algorithm
   if (month<3)
       year-=1;

   int day =(year + year/4 - year/100 + year/400 + t[month-1] + date)%7;

//result
switch (day) {
    case 0:
        printf("The day is Sunday");
        break;
    case 1:
        printf("The day is Monday");
        break;
     case 2:
         printf("The day is Tuesday");
         break;
     case 3:
         printf("The day is Wednesday");
         break;
     case 4:
         printf("The day is Thursday");
         break;
     case 5:
         printf("The day is Friday");
         break;
     case 6:
         printf("The day is Saturday");
         break;
}
 printf("\n-----------------------");
}
