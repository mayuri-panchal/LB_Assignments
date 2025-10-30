////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////
 
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Percentage  
//  Description:    Accept total marks and obtained marks and 
//                  print its percentage
//  Input:          Float,Float
//  Output:         Float
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

float Percentage(float fNo1,float fNo2)
{
    float fPer = 0.0;

    fPer = (fNo2/fNo1) * 100;

    return fPer;
    
} // End of  Percentage

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;
    
    printf("Enter total marks:\n");
    scanf("%f",&fValue1);

    printf("Enter obtained marks:\n");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1,fValue2);

    printf("Percentage is:%f",fRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 100         Input2 : 94.3       Output : 94.300003
//  Input1 : 500         Input2 : 375        Output : 75.000000
//  Input1 : 700.95      Input2 : 590.12     Output : 84.188599
//  Input1 : 900         Input2 : 870        Output : 96.666664
//
////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)