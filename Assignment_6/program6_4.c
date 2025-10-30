////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
//////////////////////////////////////////////////////////////////// 
 
#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Multiply  
//  Description:    Accept three numbers and print its multiplication
//  Input:          Integer,Integer,Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           29/10/2025
//
////////////////////////////////////////////////////////////////////

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMul = 0;

    if(iNo1 == 0 || iNo2 == 0 ||iNo3 == 0)
    {
        printf("Invalid input 0\n");
    }

    iMul = iNo1 * iNo2 * iNo3;

    return iMul;
    
} // End of  Multiply

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0, iValue3 = 0;
    int iRet = 0;
    
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    printf("Enter third number:\n");
    scanf("%d",&iValue3);

    iRet = Multiply(iValue1,iValue2,iValue3);

    printf("Multiplication of numbers is:%d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 37    Input2 : 28     Input3 : 12     Output : 12432
//  Input1 : 7     Input2 : 0      Input3 : 45     Output : Invalid input 0
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)