
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

//step5= perform the operation on array
bool CheckOccurence(int Arr[], int iSize, int iNo)
{
    int iCnt =0, iFrequency =0;

    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iFrequency++;
        }   
    }
    if(iFrequency ==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    
    
   
}

int main()
{
    int *ptr =NULL;
    int iLength =0, i =0, iValue =0;
    bool bRet=0;
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
    bRet=CalculateFrequency(ptr, iLength,iValue);
    if(bRet == true)
    {
        printf("%d is occur in array\n",iValue);
    }
    else
    {
        printf("There is no %d is occur in array\n",iValue);
    }

    printf("Frequency of %d\n", iValue,bRet);
    

    //step6 = Deallocate the memory
    free(ptr);

    return 0;

}

