#include<iostream>
#include<conio.h>
void main()
{
    int i=1,n=1,a=1;
    clrscr();
      printf("enter value:");
      scanf("%d",&n);
      while(i<=n)
      {
      printf("%d ",i*a);
      a=a*2;
      i++;

      }
      getch();
}