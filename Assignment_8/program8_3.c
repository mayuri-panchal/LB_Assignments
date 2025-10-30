////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Factorial 
//  Description:    Accept number and find factorial 
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////


int Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 1;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        //printf("%d",iCnt);
        iFact *= iCnt;
    }

    return iFact;
    
} // End of Factorial

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

    iRet = Factorial(iValue);

    printf("Factorial of number is:%d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 11       Output : 39916800       
//  Input1 : -5       Output : 120                
//  Input1 : 0        Output : 1       
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)