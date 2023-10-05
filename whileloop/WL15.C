#include<iostream>
#include<conio.h>
void main()
{
    int i=1,n=0;
    clrscr();

      printf("enter value:");
      scanf("%d",&n);
      while(i<=n)
      {
	   if(i%2==0)
	   {
	   printf("%d, ",i*i);
	   }
	   else
	   {
	   printf("%d, ",i);
	   }
      i++;
    }
 getch();
}