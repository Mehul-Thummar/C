#include<iostream>
#include<conio.h>
void main()
{
    int i,j,k;
clrscr();
	for(i=1;i<=5;i++)
       {
	  for (j=i;j<=5;j++)
	   {
	   printf(" ");
	   }
	   for (k=1;k<=i;k++)
	   {
	   printf("* ");
	   }
	  printf("\n");
       }
       for(i=1;i<=5;i++)
       {
	  for (j=1;j<=i;j++)
	   {
	   printf(" ");
	   }
	   for (k=i;k<=5;k++)
	   {
	   printf("* ");
	   }
	  printf("\n");
       }
       getch();
}