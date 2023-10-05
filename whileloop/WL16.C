#include<iostream>
#include<conio.h>
void main()
{
    int i=1,n,a=1;
    clrscr();
      printf("enter value:");
      scanf("%d",&n);
      printf("%d ",i);
      while(i<=n)
      {
      a=i*2;
      printf("%d ",a);
      i++;
      }
      getch();
}