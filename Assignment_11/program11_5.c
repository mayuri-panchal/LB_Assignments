////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeDisplayRev
//  Description:    Accept range and display numbers in that range 
//                  in reverse order
//  Input:          Integer,Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           31/10/2025
//
////////////////////////////////////////////////////////////////////

void RangeDisplayRev(int iStart,int iEnd)
{
    int iCnt = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range");
    }

    for(iCnt = iEnd; iCnt >= iStart; iCnt--)
    {
        printf("%d\t",iCnt);
    }
} // End of  RangeDisplayRev

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

    RangeDisplayRev(iValue1,iValue2);

    return 0;

}  // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 85    Input2 : 95    Output : 95      94      93      92      91      90      89      88      87      86      85
//  Input1 : -1    Input2 : 9     Output : 9       8       7       6       5       4       3       2       1       0       -1 
//  Input1 : 12    Input2 : 12    Output : 12
//  Input1 : 98    Input2 : 75    Output : Invalid Range
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)