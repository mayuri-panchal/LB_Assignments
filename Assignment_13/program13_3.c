////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Print_Odd_Numbers
//  Description:    Print all odd numbers up to N 
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


void Print_Odd_Numbers(int iLimit)
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

    for(iCnt = 1; iCnt <= iLimit; iCnt+=2)
    {
        if(iCnt % 2 != 0)
        {  
             printf("%d\t",iCnt);
        }
    }
    
} // End of Print_Odd_Numbers

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

    Print_Odd_Numbers(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 9   Output : 1       3       5       7       9       
//  Input : -5  Output : 1       3       5                              
//  Input : 0   Output : Invalid number
//  Input : 1   Output : 1      
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)