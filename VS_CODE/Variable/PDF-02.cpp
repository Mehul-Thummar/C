#include <iostream>
using namespace std;

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

    cout<< "Enter a value:";
    cin>> n;

    if (setdata(i,n)) 
    {
        cout<< n << " Is perfect number.";
    } 
    else 
    {
        cout<< n << " Is not perfect number.";
    }

    
}
