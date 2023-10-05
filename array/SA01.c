#include <iostream>

int main()
{

	char str[10];
	int total;

	printf("enter value:");
	scanf("%[^\n]s",&str);
	
	for(int i=0;str[i]!='\0';i++)
	{
		printf("str[%d]value is:%c\n",i,str[i]);
		total=i;
	}

     printf("total of the string:%d",total);    


return 0;
}