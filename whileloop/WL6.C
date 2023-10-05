#include<iostream>
#include<conio.h>
void main()
{
    char i=1,n;
    clrscr();
		printf("Enter value:");
		scanf("%d",&n);
      while(i<=n)
      {
      printf("%d ",i);
      i+=2;
      }


      getch();
}