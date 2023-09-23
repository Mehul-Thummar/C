#include <stdio.h>


int setdata(int i,int n) 
{
    int s = 1;        

    for (i = 2; i * i <= n; i++) 
    {
        if (n % i == 0) 
        {
            s += i;
            
            if (i != (n / i)) 
            {
                s += (n / i);
            }
        }
    }

   
    return (s == n);
}

int main() 
{
    int i,n;

    printf("Enter a value:");
    scanf("%d", &n);

    if (setdata(i,n)) 
    {
        printf("%d Number is perfect.\n",n);
    } 
    else 
    {
        printf("%d Number is not perfect\n",n);
    }

    
}
