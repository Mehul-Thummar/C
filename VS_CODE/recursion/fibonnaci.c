#include <stdio.h>

int fibonnaci (int a)
{
    if(a==0)
    {
        return 0;
    }
    else if (a==1)
    {
        return 1;
    }
    return fibonnaci (a-1) + fibonnaci (a-2);
}

int main()
{
    for (int i=0;i<10;i++)
    {
        printf("%d, ",fibonnaci(i));
    }
}