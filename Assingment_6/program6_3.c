// Accept two numbers and check whether numbers are equal or not

#include<stdio.h>
#include<stdbool.h>

bool ChkEqual(int iNo1,int iNo2)
{
    if(iNo1 == iNo2)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}

int main()
{
    int iValue1 = 0, iValue2 = 0;
    bool bRet = false;
    
    printf("Enter first number:\n");
    scanf("%d",&iValue1);

    printf("Enter second number:\n");
    scanf("%d",&iValue2);

    bRet = ChkEqual(iValue1,iValue2);

    if(bRet ==true)
    {
        printf("Equal");
    }
    else
    {
        printf("Not Equal");
    }

    return 0;

}

// Time Complexity : O(1)