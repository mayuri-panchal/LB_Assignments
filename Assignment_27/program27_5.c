///////////////////////////////////////////////////////////////////
//
//  Required Header files
//
////////////////////////////////////////////////////////////////////

#include<stdio.h>

////////////////////////////////////////////////////////////////////
//
//  Function Name:  Pattern  
//  Description:    Accept number of rows and columns 
//                  and display pattern
//  Input:          Integer,Integer
//  Output:         Void
//  Author:         Mayuri Shankar Panchal
//  Date:           21/11/2025
//
////////////////////////////////////////////////////////////////////

void Pattern(int iRow,int iCol)
{
    int i = 0, j = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1; j <= iCol; j++)
        {
           printf("%d\t",i);
        }
        printf("\n\n");
    }
    
} // End of  Pattern

////////////////////////////////////////////////////////////////////
//
//  Entry point function for the application
//
////////////////////////////////////////////////////////////////////

int main()
{
    int iValue1 = 0, iValue2 = 0;
    
    printf("Enter number of rows:");
    scanf("%d",&iValue1);

    printf("Enter number of columns:");
    scanf("%d",&iValue2);

    Pattern(iValue1,iValue2);

    return 0;

} // End of main

////////////////////////////////////////////////////////////////////
//
//  Testcases successfully handled by the application
//  
//  Input1 : 5    Input2 : 4   Output :   1       1       1       1
//
//                                        2       2       2       2
//
//                                        3       3       3       3
//
//                                        4       4       4       4
//
//                                        5       5       5       5
//
//  Input1 : 7    Input2 : 5   Output :       1       1       1       1       1
//
//                                            2       2       2       2       2
//
//                                            3       3       3       3       3
//
//                                            4       4       4       4       4
//
//                                            5       5       5       5       5
//
//                                            6       6       6       6       6
//
//                                            7       7       7       7       7
//
///////////////////////////////////////////////////////////////////

// Time Complexity : O(NM)