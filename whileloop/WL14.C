#include<iostream>
#include<conio.h>
void main()
{
    int i=1,n,s=0;
    clrscr();
      printf("enter value:");
      scanf("%d",&n);
      while(i<=n)
      {
      s=s+i;
      printf("%d ",s);
      i+=2;
      }
      getch();
}