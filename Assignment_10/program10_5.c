////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  SquareMeter
//  Description:    Accept area in square feet and convert it 
//                  into square meter
//                  (1 square feet  = 0.0929 square meter) 
//  Input:          Integer
//  Output:         Double
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

double SquareMeter(int iNo)
{
    double dMet = 0.0;

    dMet = iNo * 0.0929;

    return dMet;
    
} // End of SquareMeter

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue = 0;
    double dRet = 0.0;
    
    printf("Enter Area in square feet:");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);

    printf("Temperature in Celsius is:%lf",dRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 12    Output : 1.114800
//  Input : 9     Output : 0.836100
// 
///////////////////////////////////////////////////////////////////


// Time Complexity : O(1)