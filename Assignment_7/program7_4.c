////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  OddDisplay  
//  Description:    It accept number and print all odd numbers upto 
//                  that number
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

void OddDisplay(int iNo)
{
    int iCnt = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iCnt % 2 != 0)
        {  
            printf("%d\t",iCnt);
        }
    }
    
} // End of  OddDisplay

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

    OddDisplay(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 6        Output : 1       3       5
//  Input1 : 18       Output : 1       3       5       7       9       
//                             11      13      15      17
//  Input1 : -15      Output : 1       3       5       7       9       
//                             11      13      15
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)