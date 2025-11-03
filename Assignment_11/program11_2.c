////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayEven  
//  Description:    Accept range and display even numbers in that range
//  Input:          Integer,Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           31/10/2025
//
////////////////////////////////////////////////////////////////////

void RangeDisplayEven(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        if(iCnt % 2 == 0)
        {  
            printf("%d\t",iCnt);
        }
    }
} // End of  RangeDisplayEven

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter Starting number:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending number:\n");
    scanf("%d",&iValue2);

    RangeDisplayEven(iValue1,iValue2);

    return 0;

}  // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 4    Input2 : 12    Output : 4       6       8       10      12
//  Input1 : -12  Input2 : 4     Output : -12     -10     -8      -6      -4      -2      0       2       4
//  Input1 : 12   Input2 : 12    Output : 12
//  Input1 : 98   Input2 : 75    Output : Invalid Range
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)