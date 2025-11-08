////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigits
//  Description:    Accept number display its digits in reverse order 
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


void DisplayDigits(int iNo)
{
    int iDigit = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
   {
        iDigit = iNo % 10;
        printf("%d",iDigit);
        iNo /= 10;
   }
    
} // End of DisplayDigits

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

    DisplayDigits(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 765    Output : 567       
//  Input : -4378  Output : 8734                       
//  Input : 5      Output : 5    
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)