// Accept number and print difference between summation of its factors and non factors 

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFact = 0;
    int iSumNonFact = 0;

    if(iNo <= 0)
    {
        iNo = -iNo;
    }


    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if(iNo % iCnt != 0)
        {
            iSumNonFact += iCnt;
        }
        else
        {
            iSumFact += iCnt;
        }

    }
    return iSumFact - iSumNonFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter number:");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("Difference is:%d",iRet);

    return 0;

}