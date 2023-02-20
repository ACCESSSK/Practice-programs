#include<stdio.h>
#include<stdlib.h>
//step5= perform the operation on array
void DisplayEvenOddCount(int Arr[], int iSize)
{
    int iCnt =0, iEvenCnt =0, iOddCnt =0;

    for(iCnt =0; iCnt< iSize; iCnt++)
    {
        if(Arr[iCnt] % 2 == 0) 
        {
            iEvenCnt++;
        }
        else
        {
            iOddCnt++;
        }
    }
    printf("Number of even elements are : %d\n",iEvenCnt);
    printf("Number of Odd elements are : %d\n",iOddCnt);
   
}

int main()
{
    int *ptr =NULL;
    int iLength =0, i =0;
    int iRet=0;
    //Step 1 - Accept Size of array
    printf("Enter the number of elements :\n");
    scanf("%d",&iLength);

    //Step2= Alocate memory of array
    ptr = (int *)malloc(iLength * sizeof(int));
    //ptr = (int *)malloc(5* 4)

    //step3 = Accept the elemnt of array
    printf("Please enter the elements :\n");
    for(i =0; i< iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }
    
    DisplayEvenOddCount(ptr, iLength);
    

    //step6 = Deallocate the memory
    free(ptr);

    return 0;

}