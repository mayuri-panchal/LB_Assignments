///////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Pattern  
//  Description:    Accept number and display pattern
//  Input:          Integer
//  Output:         Void
//  Author:         Mayuri Shankar Panchal
//  Date:           21/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iNo)
{
    int iCnt = 0;
    char cLetter = '\0';

    cLetter = 65;
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%c\t",cLetter);
        cLetter++;
    }
    
} // End of  Pattern

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 5     Output : A       B       C       D       E
//  Input : 9     Output : A       B       C       D       E       F       G       H       I
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)