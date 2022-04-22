#include<stdio.h>
#include<string.h>
int main(){
    float salary,tax;
    char gender;
    char name[20];
    printf("Enter your Gender :");scanf("%c",&gender);
    printf("Enter your Name :");scanf("%s",&name);
    printf("Enter your Salary(USD) :");scanf("%f",&salary);
    if(salary>=300&&strcmp(gender,"m")==0)
    {
        tax=salary*0.1;
    }
    else if(salary<300&&salary>=200&&strcmp(gender,"m")==0)
    {
        tax=salary*0.05;
    }
    else if(salary<200&&strcmp(gender,"m")==0)
    {
        printf("No tax");
    }
    else if(salary>300&&strcmp(gender,"f")==0)
    {
       tax=salary*0.05;
    }
    else if(salary<300&&salary>=250&&strcmp(gender,"f")==0)
    {
        tax=salary*0.03;
    }
    else{
        printf("No tax");
    }
    printf("your Gender:%c\nyour Name:%s\nyour Salary:%.2f",gender,name,salary);
    printf("Hi %s, based on your given information, the tax salary that you need to pay is: %.2f USD.",name,tax);



}
