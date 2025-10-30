////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Table
//  Description:    Accept number and print its table in reverse order
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

    for(iCnt = 10; iCnt >= 1; iCnt--)
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
//  Input1 : 8   Output : 80      72      64      56      48      40      32      24      16      8       
//  Input1 : -2  Output : 20      18      16      14      12      10      8       6       4       2                    
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)