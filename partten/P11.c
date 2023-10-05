#include<iostream>
#include<conio.h>
void main()
{
    char i, j, k;
    clrscr();
    
    k = 65;
 
    for(i=1; i<=5; i++)
    {
        for(j=1; j<=i; j++, k++)
        {
            printf("%-3c", k);
        }
        printf("\n");
        
    }
    getch();
}