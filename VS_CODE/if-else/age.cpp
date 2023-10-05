#include<iostream>
using namespace std;

void data(int age)
{
    if(age >= 18)
    {
        cout<< "You are Eligible for vote";
    }
    else
    {
        cout<< "You are not Eligible for vote";
    }
}

int main()
{
    int age;

    cout<< "Enter your age :";
    cin >>age;
    data(age);

}