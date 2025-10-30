////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Number  
//  Description:    Accept number and if number is less than 50 print small
//                  if greater than 50 and less than 100 then print medium 
//                  if greater than 100 print large
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Small");
    }
    else if(iNo >= 50 && iNo <= 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
    
} // End of Number

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

    Number(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 23    Output : Small
//  Input : 75    Output : Medium
//  Input : 105   Output : Large
//  Input : 50    Output : Medium
//  Input : 100   Output : Medium
//  Input : -99   Output : Small
//  Input : 0     Output : Small
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)