#include<stdio.h>

void data(int age)
{
    if(age >= 18)
    {
        printf("eligible for vote");
    }
    else
    {
        printf("not eligible for vote");
    }
}

int main()
{
    int age;

    printf("Enter your age :");
    scanf("%d",age);
    data(age);

}