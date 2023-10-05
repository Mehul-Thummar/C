#include <iostream>
using namespace std;

int setdata(int n)
{
    int i=0,a;
    
    while (n != 0) 
    {
        a = n % 10;
        i = i * 10 + a;
        n = n / 10;
        
    }
    
    return i;
}

int main() 
{
    int i,n;
    
    cout<< "Enter a number:";
    cin>> n;
    
    i = setdata(n);
    
    cout<< "Reverse number is:" << i;
    
}
