////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

float PI = 3.14;

////////////////////////////////////////////////////////////////////
//
//  Function Name:  CircleArea
//  Description:    Accept radius and print area of circle  
//  Input:          Float
//  Output:         Double
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;

    return dArea;
    
} // End of CircleArea

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    float fValue = 0.0;
    double dRet = 0.0;
    
    printf("Enter radius:");
    scanf("%f",&fValue);

    dRet = CircleArea(fValue);

    printf("Area of Circle is:%lf",dRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 7.8       Output : 191.037616     
//  Input : 3.87      Output : 47.027465                 
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(1)