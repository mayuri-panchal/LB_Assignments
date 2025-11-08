////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Sum_Natural_Numbers
//  Description:    Print sum of first Natural N  
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


int Sum_Natural_Numbers(int iLimit)
{
    int iCnt = 0;
    int iSum = 0;

    if(iLimit < 0)
    {
        iLimit = -iLimit;
    }

    if(iLimit == 0)
    {
        printf("Invalid number\n");
    }

    for(iCnt = 1; iCnt <= iLimit; iCnt++)
    {
        iSum += iCnt;
    }

    return iSum;
    
} // End of Sum_Natural_Numbers

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

    printf("Addition of natural numbers:%d",Sum_Natural_Numbers(iValue));

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 2   Output : 28       
//  Input : -6  Output : 21                              
//  Input : 0   Output : Invalid number
//  Input : 1   Output : 1      
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)