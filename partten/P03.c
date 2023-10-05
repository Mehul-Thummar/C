#include<iostream>
#include<conio.h>
void main()
{
    char i, j,k=65;
    clrscr();
    
    for(i=1;i<=5;i++)
    {
       for (j=1;j<=i;j++,k++)
       {
           if(i%2==0)
           {
               printf("%c ",k+32);
           }
           else
           {
               printf("%c ",k);
           }
       }
	  printf("\n");
    }
    
    getch();
}