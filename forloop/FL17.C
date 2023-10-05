#include<iostream>
int main()
{
     int i,n=1,a=1;

    

     printf("Enter value : ");
     scanf("%d",&n);

     for(i=1; i<=n; i++)
     {
	 printf("%d, ",i*a);

	 a=a*2;
     }

     return 0;
}