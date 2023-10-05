#include<iostream>
#include<conio.h>
void main()
{
    int n,i;
    clrscr();

      printf("Enter value:");
      scanf("%d",&n);
      i=-n;
      while(i<=n)
      {
      printf("%d,",i);
      i++;
      }


      getch();
}