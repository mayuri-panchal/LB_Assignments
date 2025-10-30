////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Table
//  Description:    Accept number and print its table 
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////


void Table(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= 10; iCnt++)
    {
        printf("%d\t",(iNo*iCnt));
    }

    
} // End of Table

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

    Table(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 4   Output : 4       8       12      16      20      24      28      32      36      40       
//  Input1 : -7  Output : 7       14      21      28      35      42      49      56      63      70                
//  Input1 : 87  Output : 87      174     261     348     435     522     609     696     783     870       
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)