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

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t%d\t*\t",iCnt);
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
//  Input : 5     Output : #       1       *       #       2       *       #       3       *       #       4       *       #       5       *
//  Input : 3     Output : #       1       *       #       2       *       #       3       *              
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)