////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  MutipleDisplay  
//  Description:    It accepts number and print first 5 multiples 
//                  of that number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

void MultipleDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 5; iCnt++)
    {
        printf("%d\t",(iCnt * iNo));
    }
    
} // End of  MultipleDisplay

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

    MultipleDisplay(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 5        Output : 5       10      15      20      25
//  Input1 : 25       Output : 25      50      75      100     125
//  Input1 : 17       Output : 17      34      51      68      85
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)