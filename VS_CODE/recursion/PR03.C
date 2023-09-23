#include<stdio.h>

int array[5][5];
int sum=0;
int arr(int a)
{
    if (a==4)
    {
        return 0;
    }
    return arr(++a);
   
}
int arr2(int b)
{
     if (b==4)
    {
        return 0;
    }
   return arr(++b);
}
int main()
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Enter Value Of A[%d][%d]: ",i,j);
            scanf("%d",&array[i][j]);
        }
    }
    printf("\n");
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d",array[i][j]);
        }   
          printf("\n");
    }
  
}