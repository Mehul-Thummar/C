#include<iostream>
int main()
{
       char i;

  

       for(i=65;i<=90;i++)
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
     }
   }

return 0;
}