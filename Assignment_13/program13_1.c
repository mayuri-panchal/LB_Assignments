////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Print_Numbers
//  Description:    Print all numbers from 1 to N 
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


void Print_Numbers(int iLimit)
{
    int iCnt = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    if(iLimit == 0)
    {
        printf("Invalid number");
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
} // End of Print_Numbers

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

    Print_Numbers(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 6   Output : 1       2       3       4       5       6       
//  Input : -4  Output : 1       2       3       4                       
//  Input : 0   Output : Invalid number
//  Input : 1   Output : 1      
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)