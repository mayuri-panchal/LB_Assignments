////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////// 
 
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  DollToINR  
//  Description:    Accept amount in USD and return its value in INR
//                  1$ = 70 rs
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

int DollaeToINR(int iNo)
{
    int iINR = 0;

    iINR = iNo * 70;
    
    return iINR;
    
} // End of DollaeToINR

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number in USD:\n");
    scanf("%d",&iValue);

    iRet = DollaeToINR(iValue);

    printf("Value of INR is:%d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 50     Output : 3500
//  Input : 3      Output : 210
//  Input : 1200   Output : 84000
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)