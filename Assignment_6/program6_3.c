////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkEqual  
//  Description:    Accept two numbers and check whether numbers 
//                  are equal or not
//  Input:          Integer,Integer
//  Output:         Boolean
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
} // End of  ChkEqual

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet ==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;

}  // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 12    Input2 : 12     Output : Equal(true)
//  Input1 : 4     Input2 : -4     Output : Not Equal(false)
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)