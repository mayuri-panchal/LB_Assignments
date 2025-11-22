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

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        printf("%d\t#\t",iCnt);
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
//  Input : 7     Output : 7       #       6       #       5       #       4       #       3       #       2       #       1       #
//  Input : 4     Output : 4       #       3       #       2       #       1       #
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)