// Accept number and check whether number is greater than 100 or not

#include<stdio.h>
#include<stdbool.h>

bool ChkGreater(int iNo)
{
    if(iNo > 100)
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
    bool bRet = false;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    bRet = ChkGreater(iValue);

    if(bRet ==true)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;

}

// Time Complexity : O(1)