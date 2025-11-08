////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description:    Accept number and count frequency of number 
//                  which is less than 6 
//  Input:          Long Integer
//  Output:         Integer
//  Author:         Mayuri Shankar Panchal
//  Date:           08/11/2025
//
////////////////////////////////////////////////////////////////////


int Count(long int iNo)
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
        if(iDigit < 6)
        {
            iFrequency++;
        }
        iNo /= 10;
   }

   return iFrequency;
    
} // End of Count

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

    iRet = Count(iValue);
    printf("Frequency : %d",iRet);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 54321     Output : 5   
//  Input : 789       Output : 0
//  Input : -4398     Output : 2                     
//  Input : 0         Output : 0
//  
////////////////////////////////////////////////////////////////////

// Time Complexity : O(N)