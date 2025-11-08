////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountFour
//  Description:    Accept number and count frequency of 4 in it 
//  Input:          Long Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


int CountFour(long int iNo)
{
    int iDigit = 0;
    int iFrequency = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

   while(iNo != 0)
   {
        iDigit = iNo % 10;
        if(iDigit == 4)
        {
            iFrequency++;
        }
        iNo /= 10;
   }

   return iFrequency;
    
} // End of CountFour

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    long int iValue = 0;
    int iRet = 0;
    
    printf("Enter number:");
    scanf("%ld",&iValue);

    iRet = CountFour(iValue);
    printf("Frequency of four : %d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 5643     Output : 1     
//  Input : -8765    Output : 0    
//  Input : 4344     Output : 3                     
//  Input : 0        Output : 0
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)