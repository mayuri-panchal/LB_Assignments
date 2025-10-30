////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display  
//  Description:    Accept number and print numbers till that number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d\t",iCnt);
    }
    
} // End of  Display

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

    Display(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 7        Output : 1       2       3       4       5       6       7
//  Input1 : -6       Output : 1       2       3       4       5       6             
//  Input1 : 4        Output : 1       2       3       4       
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)