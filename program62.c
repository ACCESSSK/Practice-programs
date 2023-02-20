#include<stdio.h>
#include<stdbool.h>

bool CheckPallindrome(int iNo)
{
    int iDigit = 0, iRev = 0;
    int iTemp = iNo;

    for (iRev = 0 ; iNo != 0; iNo = iNo / 10)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit; 
    }

    if (iRev == iTemp)
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
    bool iRet = 0;

    printf("Enter a Number : \n");
    scanf("%d",&iValue);

    iRet = CheckPallindrome(iValue);

    if (iRet == true)
    {
        printf("%d is a Pallindrome Number ",iValue);
    }
    else
    {
        printf("%d is not a Pallindrome Number ",iValue);
    }
    return 0;
}
