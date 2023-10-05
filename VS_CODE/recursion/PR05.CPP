#include<iostream>
using namespace std;

int a;
int sum=0;
int total(int a)
{
    if (a==4)
    {
        return 0;
    }
    return total(++a);
}
int main()
{
    for (int i = 0; i < 5; i++)
    {
        cout<< "enter value : ";
        cin>> a;
        sum=sum+a;
    }
    cout<< "total sum" <<sum;
}