// Check positive negative or zero

#include<stdio.h>

void CheckNumberType(int iNo)
{

   if(iNo == 0)
   {
      printf("%d is Zero",iNo);
   }
   else if(iNo > 0)
   {
      printf("%d is Positive",iNo);

   }
   else
   {
      printf("%d is Negative",iNo);
   }
            
}

int main()
{
    int iValue = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    CheckNumberType(iValue);

    return 0;

}