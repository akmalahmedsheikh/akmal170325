#include<stdio.h>
int main()
{
    int id;
    char name[200];
    float salary;
    int attendance;
    printf("enter the id");
    scanf("%d",&id); 

    printf("enter the name");
    scanf("%s",name);

    printf("enter the salary");
    scanf("%f",&salary);

    printf("enter the attendance");
    scanf("%d",&attendance);
    
    //process
    float bonus=0.0f;
    float gross_salary=0.0f;
    char category[50]="excellent";

    //cal bonus
    if(attendance>25){
        bonus=(bonus/100.0f)*5.0f;
    }else if(attendance<10){ 
    bonus=(-1.0f*((bonus/100.0f)*50.0f));
    }
    //final salary
    gross_salary=(salary+bonus);
    //catagorize employee
    if(attendance>25){
    strcpy(category,"excellent");
    }else if(attendance<15){
    strcpy(category,"need improvement");
    }

    //display details
    printf("ID:%d\n",id);
    printf("NAME:%s\n",name);
    if(bonus>0){
        printf("bonus:%.2f\n",bonus);
    }
    printf("final salary:%.2f\n",gross_salary);
    printf("employee performance category:%s\n",category);
    return 0;
}