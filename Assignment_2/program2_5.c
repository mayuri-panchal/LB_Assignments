// Accept number and check whether number is even or odd

#include<stdio.h>
#include<stdbool.h>

bool ChkEven(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
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
    int iValue = 0;
    bool bRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkEven(iValue);

    if(bRet ==true)
    {
        printf("%d is Even",iValue);
    }
    else
    {
        printf("%d is Odd",iValue);
    }

    return 0;

}