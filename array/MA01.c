#include <iostream>

int main()
{

int arr[3][3],i,j,total=0;

     for(i=0;i<3;i++)
     {
           for(j=0;j<3;j++)
           {
             printf("enter value od arr[%d][%d]:",i,j);
             scanf("%d",&arr[i][j]);
           }
     }

     for(i=0;i<3;i++)
     {
           for(j=0;j<3;j++)
           {
            total =total+ arr[i][j];
           }
        printf("\n");
     }
     printf("\nTotal is :%d\n",total);


return 0;



}