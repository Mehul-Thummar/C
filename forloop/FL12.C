#include<iostream>
int main()
{
int i,n=0;

    for(i=1;i<=10;i+=2)
	{
	n=n+i;
	printf("%d, ",i);
	}

	printf("\ntotal is :%d",n);
	return 0;
}