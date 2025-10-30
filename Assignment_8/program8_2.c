////////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description:    Accept single digit and print it into word
//  Input:          Integer
//  Output:         void
//  Author:         Mayuri Shankar Panchal
//  Date:           30/10/2025
//
////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    switch(iNo)
    {
        case 1 : printf("One");
                 break;
        case 2 : printf("Two");
                 break;
        case 3 : printf("Three");
                 break;
        case 4 : printf("Four");
                 break;
        case 5 : printf("Five");
                 break;
        case 6 : printf("Six");
                 break;
        case 7 : printf("Seven");
                 break;
        case 8 : printf("Eight");
                 break;
        case 9 : printf("Nine");
                 break;
        case 0 : printf("Zero");
                 break;
        default :printf("Invalid Number");         
    }
    
} // End of Display

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

    Display(iValue);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input : 7     Output : Seven
//  Input : 9     Output : Nine
//  Input : 0     Output : Zero
//  Input : -5    Output : Five
//  Input : 12    Output : Invalid Number
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(1)