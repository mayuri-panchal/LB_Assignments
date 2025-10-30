////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  RectArea
//  Description:    Accept width,height and print area of rectangle  
//  Input:          Float,Float
//  Output:         Double
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

double RectArea(float fWidth,float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;

    return dArea;
    
} // End of RectArea

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    float fValue1 = 0.0f,fValue2 = 0.0f;
    double dRet = 0.0;
    
    printf("Enter Width:");
    scanf("%f",&fValue1);

    printf("Enter Height:");
    scanf("%f",&fValue2);

    dRet = RectArea(fValue1,fValue2);

    printf("Area of Rectangle is:%lf",dRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 7.5    Input2 : 9.1     Output : 68.250003
//  Input1 : 12     Input2 : 6.7     Output : 80.399998
// 
///////////////////////////////////////////////////////////////////


// Time Complexity : O(1)