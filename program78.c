
#include<stdio.h>
#include<stdlib.h>
//step5= perform the operation on array
int CalculateFrequency(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency =0;

    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }   
    }
    return iFrequency;
    
   
}

int main()
{
    int *ptr =NULL;
    int iLength =0, i =0, iValue =0;
    int iRet=0;
    //Step 1 - Accept Size of array
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    //Step2= Alocate memory of array
    ptr = (int *)malloc(iLength * sizeof(int));
    //ptr = (int *)malloc(5* 4)

    //step3 = Accept the elemnt of array
    printf(" enter the elements :\n");
    for(i =0; i< iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    iRet=CalculateFrequency(ptr, iLength,iValue);

    printf("Frequency of %d\n", iValue,iRet);
    

    //step6 = Deallocate the memory
    free(ptr);

    return 0;

}

