////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactorialDiff
//  Description:    Accept number and find difference between even 
//                  and odd factorial 
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////


int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iFactOdd = 1;
    int iFactEven = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        if(iCnt % 2 != 0)
        {  
            iFactOdd *= iCnt;
        }
        else
        {
            iFactEven *= iCnt;
        }
    }

    return iFactEven - iFactOdd;
    
} // End of FactorialDiff

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactorialDiff(iValue);

    printf("Difference between Even and Odd Factorial of number is:%d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 15       Output : -1381905     
//  Input : 4        Output : 5                
//  Input : -11      Output : -6555     
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)