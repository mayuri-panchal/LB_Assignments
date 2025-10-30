////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  KMToMeter
//  Description:    Accept distance in KM and convert it into Meter 
//                  1 KM = 1000 Meter 
//  Input:          Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

int KMToMeter(int iNo)
{
    int iMeter = 0;

    iMeter = iNo * 1000;

    return iMeter;
    
} // End of RectArea

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter distance in KM:");
    scanf("%d",&iValue);

    iRet = KMToMeter(iValue);

    printf("Distance in Meter is:%d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 7     Output : 7000
//  Input : 15    Output : 15000
// 
///////////////////////////////////////////////////////////////////


// Time Complexity : O(1)