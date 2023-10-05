#include<iostream>
#include<conio.h>
void main()
{
    int i=1,n=0;
    clrscr();

      while(i<=10)
      {
      n=n+i;
      printf("%d ",i);
      i++;
      }
      printf("\ntotal is:%d",n);

      getch();
}