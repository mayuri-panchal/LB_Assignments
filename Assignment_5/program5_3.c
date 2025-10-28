// Check leap year or not
/*
if year evenly divisible by 4 = leap (2024)
EXCEPTION : if divisible by 4 and also by 100 = not leap(1900)
          : if evenly divisible by 4,100,400 = leap(2000)
          : if evenly divisible by 400 = leap(2000)
          : if divisible by 4,100 but not 400 = not leap(2100)
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckLeapYear(int iYear)
{

  if(iYear % 4 == 0)
  {
   if(iYear % 100 == 0)
   {  
   if(iYear % 400 == 0)
   {
      return true;
   }
   }
    return true;
  }
  else
  {
   return false;
  }
            
}

int main()
{
    int iYr = 0;
    bool bRet = 0;
    
    printf("Enter Year:");
    scanf("%d",&iYr);

    bRet = CheckLeapYear(iYr);

    if(bRet == true)
    {
      printf("%d is Leap Year",iYr);
    }
    else
    {
      printf("%d is not Leap Year",iYr);
    }

    return 0;

}