#include<stdio.h>


int main()
{
    int Arr[5];
    int iCnt =0;

    printf("Enter the Element :");

    for(iCnt =0; iCnt < 5; iCnt++)
    {
        scanf("%d",&Arr[iCnt]);
    }
    

    printf("Elements from array are :");

    for(iCnt =0;iCnt <5; iCnt++)
    {
        printf("%d\n",Arr[iCnt]);
    }

    



    return 0;
}