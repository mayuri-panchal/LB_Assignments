// Max of two numbers

#include<stdio.h>

int FindMax(int iNo1,int iNo2)
{

   if(iNo1 > iNo2)
   {
      return iNo1;
   }
   else
   {
      return iNo2;
   }
            
}

int main()
{
    int iValue1 = 0,iValue2 = 0;
    int iRet = 0;
    
    printf("Enter first number:");
    scanf("%d",&iValue1);

    printf("Enter second number:");
    scanf("%d",&iValue2);


    iRet = FindMax(iValue1,iValue2);

    printf("Maximum number is:%d\n",iRet);

    return 0;

}