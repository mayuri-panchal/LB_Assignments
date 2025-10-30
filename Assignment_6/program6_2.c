////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkGreater  
//  Description:    Accept number and check whether number is 
//                  greater than 100 or not
//  Input:          Integer
//  Output:         Boolean
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

bool ChkGreater(int iNo)
{
    if(iNo > 100)
    {
        return true;
    }
    else
    {
        return false;
    }
    
} // End of  ChkGreater

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    bool bRet = false;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet ==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 105   Output : Greater(true)
//  Input : 48    Output : Smaller(false)
//  Input : -99   Output : Smaller(false)
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)