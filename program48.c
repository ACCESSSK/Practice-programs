//Input : 751  - output :3
#include<stdio.h>
int CountDigits(int iNo)
{
    int iDigit =0;
    int iCnt =0;

    if(iNo == 0)            //Filter
    {
        return -1;
    }

    if(iNo < 0)            //updater
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit =iNo % 10;
        iNo =iNo / 10;
        iCnt++;
    }

    return iCnt;

}


int main()
{
    int iValue =0;
    int iRet =0;
    printf("please enter nuber :");
    scanf("%d",&iValue);

    iRet = CountDigits(iValue);

    printf("Number of digits are :%d\n",iRet);

    return 0;

}