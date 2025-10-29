// Program to print name accepted by user

#include<stdio.h>

int main()
{
    char cName[30];
    
    printf("Please enter full name:\n");
    scanf("%s",&cName);

    printf("Your name is:%s",cName);

    return 0;
}


// Time Complexity : O(1)