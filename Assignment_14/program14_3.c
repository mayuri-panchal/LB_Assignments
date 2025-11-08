////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountTwo
//  Description:    Accept number and count frequency of 2 in it 
//  Input:          Long Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


int CountTwo(long int iNo)
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
        if(iDigit == 2)
        {
            iFrequency++;
        }
        iNo /= 10;
   }

   return iFrequency;
    
} // End of CountTwo

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

    iRet = CountTwo(iValue);
    printf("Frequency of two : %d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 76543222    Output : 3       
//  Input : 2222        Output : 4                       
//  Input : 2           Output : 1
//  Input : 7685        Output : 0
//  Input : -7525       Output : 1    
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)