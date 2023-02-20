#include<stdio.h>
#include<stdlib.h>

// Step 5 : Perform the operation 
int CheckLastOccurence(int Arr[],int iSize, int iNo)
{
    int iCnt = 0 ;

    for(iCnt = iSize-1; iCnt >=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    return iCnt;
}
int main()
{
    int ptr = NULL;
    int iLength = 0 , i = 0 ;
    int iRet = 0;
    int iValue1 = 0;

    printf("Enter number of elements : \n");
    scanf("%d",&iLength);

    // Step 2 : Allocate memory for array
    ptr = (int)malloc(iLength * sizeof(int));

    // Step 3 : Accept the elements of array
    printf("Enter the elements : \n");

    for ( i = 0; i < iLength; i++)
    {
        scanf("%d",&ptr[i]);
    }

    printf("Enter the element : \n");
    scanf("%d",&iValue1);


    // Step 4 : Call the function
    iRet = ChkFrequency(ptr,iLength,iValue1);

    printf("Index id : %d",iRet);

    // Step 6 : Deallocate the memory
    free(ptr);


    return 0;
}
