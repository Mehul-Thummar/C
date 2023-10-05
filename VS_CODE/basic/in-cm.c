#include<iostream>

void data(int in,int cm)
{
    int total;
    total = in*cm;
    printf("\n%d",total);
}

int main()
{
    int in,cm;
    printf("enter value:");
    scanf("%d",&in);
    printf("enter value:");
    scanf("%d",&cm);
    data(in,cm);


}



