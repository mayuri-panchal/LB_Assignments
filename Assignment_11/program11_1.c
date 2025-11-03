////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplay  
//  Description:    Accept range and display numbers in that range
//  Input:          Integer,Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           31/10/2025
//
////////////////////////////////////////////////////////////////////

void RangeDisplay(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range");
    }

    for(iCnt = iStart; iCnt <= iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
} // End of  RangeDisplay

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

    RangeDisplay(iValue1,iValue2);

    return 0;

}  // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 67    Input2 : 78    Output : 67      68      69      70      71      72      73      74      75      76      77      78
//  Input1 : -5    Input2 : 4     Output : -5      -4      -3      -2      -1      0       1       2       3       4
//  Input1 : 12    Input2 : 12    Output : 12
//  Input1 : 98    Input2 : 75    Output : Invalid Range
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)