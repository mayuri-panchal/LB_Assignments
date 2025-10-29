// Accept total marks and obtained marks and print its percentage 
 
#include<stdio.h>

float Percentage(float fNo1,float fNo2)
{
    float fPer = 0.0;

    fPer = (fNo2/fNo1) * 100;

    return fPer;
    
}

int main()
{
    float fValue1 = 0.0, fValue2 = 0.0;
    float fRet = 0.0;
    
    printf("Enter total marks:\n");
    scanf("%f",&fValue1);

    printf("Enter obtained marks:\n");
    scanf("%f",&fValue2);

    fRet = Percentage(fValue1,fValue2);

    printf("Percentage is:%f",fRet);

    return 0;

}

// Time Complexity : O(1)