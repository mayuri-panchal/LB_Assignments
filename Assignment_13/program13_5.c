////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Sum_Even_Numbers
//  Description:    Print sum of even numbers up to N 
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


int Sum_Even_Numbers(int iLimit)
{
    int iCnt = 0;
    int iSum = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    for(iCnt = 0; iCnt <= iLimit; iCnt+=2)
    {
        iSum += iCnt;
    }
    return iSum;
    
} // End of Sum_Even_Numbers

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

    printf("%d",Sum_Even_Numbers(iValue));

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 10  Output : 30       
//  Input : -4  Output : 6                       
//  Input : 0   Output : 0
//  Input : 1   Output : 0      
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)