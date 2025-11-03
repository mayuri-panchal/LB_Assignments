////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  RangeSumEven
//  Description:    Accept range and print adddition of all even 
//                  numbers in that range
//  Input:          Integer,Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           31/10/2025
//
////////////////////////////////////////////////////////////////////

int RangeSumEven(int iStart,int iEnd)
{
    int iCnt = 0;
    int iSum = 0;

    if(iEnd < iStart)
    {
        printf("Invalid Range");
    }
    if(iStart < 0)
    {
        printf("Invalid Range");
    }

    for(iCnt = iStart ; iCnt <= iEnd && iStart >= 0; iCnt++)
    {
        if(iCnt % 2 == 0)
        {  
        //printf("%d\t",iCnt);
        iSum += iCnt;
        }
    }

    return iSum;
} // End of  RangeSumEven

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    int iRet = 0;
    
    printf("Enter Starting number:\n");
    scanf("%d",&iValue1);

    printf("Enter Ending number:\n");
    scanf("%d",&iValue2);

    iRet = RangeSumEven(iValue1,iValue2);

    printf("Addition of even numbers is : %d\n",iRet);

    return 0;

}  // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 43    Input2 : 90    Output : 1608
//  Input1 : -5    Input2 : 4     Output : Invalid Range
//  Input1 : 12    Input2 : 12    Output : 12
//  Input1 : 98    Input2 : 75    Output : Invalid Range
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(N)