#include<iostream>
int main()
{
int i,n,s=0;


    printf("enter value:");
    scanf("%d",&n);

    for(i=1;i<=n;i+=2)
	{
	s=s+i;
	printf("%d, ",s);
	}

	printf("\ntotal is :%d",n);
	return 0;
}