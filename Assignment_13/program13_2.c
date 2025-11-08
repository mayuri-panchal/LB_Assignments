////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Print_Even_Numbers
//  Description:    Print all even numbers up to N 
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


void Print_Even_Numbers(int iLimit)
{
    int iCnt = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 0; iCnt <= iLimit; iCnt+=2)
    {
        if(iCnt % 2 == 0)
        {  
             printf("%d\t",iCnt);
        }
    }
    
} // End of Print_Even_Numbers

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

    Print_Even_Numbers(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10  Output : 0       2       4       6       8       10       
//  Input : -6  Output : 0       2       4       6                       
//  Input : 0   Output : 0
//  Input : 1   Output : 0      
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)