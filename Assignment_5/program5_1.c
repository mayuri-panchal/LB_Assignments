// Check Even or Odd

#include<stdio.h>

void CheckEvenOdd(int iNo)
{

    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    if(iNo % 2 == 0)
    {
        printf("It is Even");
    }
    else
    {
        printf("It is Odd");
    }
            
}

int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    CheckEvenOdd(iValue);

    return 0;

}