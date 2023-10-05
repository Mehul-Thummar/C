#include<iostream>
#include<conio.h>
void main()
{
    int i=65;
    clrscr();

      while(i<=90)
   {
      if(i%2!=0)
     {
       if(i%4!=1)
       {
       printf("%c,",i+32);
       }
       else
       {
       printf("%c,",i);
       }
      i+=2;

     }
   }
      getch();
}