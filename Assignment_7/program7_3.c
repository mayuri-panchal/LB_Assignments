////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display  
//  Description:    It accept number and print its number line
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

    for(iCnt = -iNo; iCnt <= iNo; iCnt++)
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
//  Input1 : 2        Output : -2      -1      0       1       2
//  Input1 : -3       Output : -3      -2      -1      0       1       2       3       
//  Input1 : 4        Output : -4      -3      -2      -1      0       1       2       3       4
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(2N)