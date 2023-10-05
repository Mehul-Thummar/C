#include<iostream>
#include<conio.h>
void main()
{
    char i, j;
    clrscr();
    
    for(i=1;i<=5;i++)
    {
       for (j=i;j>=1;j--)

	  {
	  printf("%c ",'A'+j-1);
	  }
	  printf("\n");
    }
    
    getch();
}