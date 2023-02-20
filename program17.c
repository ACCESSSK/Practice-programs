#include<stdio.h>

int Display(int iValue)
{
  int i = 0;
   for ( i= 1 ; i<=iValue ; i++)
   printf("Jay Ganesh...\n");
}

int main()
{
    int iNo=0;
    printf("Enter the number of iteration : \n");
    scanf("%d",&iNo);

  Display(iNo);
  return 0 ;
}