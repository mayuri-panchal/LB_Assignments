////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkZero
//  Description:    Accept number and check if it contains zero or not 
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL ChkZero(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo > 0)
   {
        iDigit = iNo % 10;

        if(iDigit == 0)
        {
            return 1;
            break;
        }
        iNo /= 10;
        
   }
    
} // End of ChkZero

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains zero");
    }
    else
    {
        printf("It contains no zero");
    }

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 735840    Output : It contains zero       
//  Input : -47580    Output : It contains zero                         
//  Input : 234       Output : It contains no zero         
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)  or O(1)