// Accept three numbers and print its multiplication 
 
#include<stdio.h>

int Multiply(int iNo1,int iNo2,int iNo3)
{
    int iMul = 0;

    if(iNo1 == 0 || iNo2 == 0 ||iNo3 == 0)
    {
        printf("Invalid input\n");
    }

    iMul = iNo1 * iNo2 * iNo3;

    return iMul;
    
}

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

}

// Time Complexity : O(1)