#include<stdio.h>

int Display()
{
  int i = 0;
   for ( i= 1 ; i<=5 ; i++)
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
