#include<stdio.h>
//program to check given character is digit or not//
void main()
{
    char ch;
    printf("enter character");
    scanf("%c",&ch);
    if(ch>='0'&&ch<='9')
    {
    printf("character is digit ");
    }
    else 
    {
    printf("character is not digit ");
    }

}
