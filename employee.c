#include<stdio.h>
int main()
{
    float salary,da,hra,ts;
    printf("\nenter the salary:");
    scanf("%f",&salary); 
    
    if(salary>50000)
    {
        da=0.1*salary;
        hra=0.1*salary;
        ts=salary+da+hra;
        printf("the total salary of employee is===>%f",ts);
    }
    if(salary>30000)
    {
        da=0.1*salary;
        hra=0.05*salary;
        ts=salary+da+hra;
        printf("the total salary of employee is====>%f",ts);
    }
    if(salary>20000)
    { 
        da=0.05*salary;
        hra=0.05*salary;
        ts=salary+da+hra;
        printf("the total salary of employee===>%f",ts);
    }
    if(salary<1000)
    {
         da=0.05*salary;
        ts=salary+da;
        printf("the total salary of employee===>%f",ts);
    }   
}