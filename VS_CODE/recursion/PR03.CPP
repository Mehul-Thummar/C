#include<iostream>
using namespace std;

int array[5][5];
int sum=0;
int arr(int a)
{
    if (a==4)
    {
        return 0;
    }
    return arr(++a);
   
}
int arr2(int b)
{
     if (b==4)
    {
        return 0;
    }
   return arr(++b);
}
int main()
{
    int i,j;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout <<"Enter Value Of A:[i],[j]";
            cin>> array[i][j];
        }
    }
    cout<<"\n";
    for (int i = 0; i <= 2; i++)
    {
        for (int j = 0; j <= 2; j++)
        {
            cout<< array[i][j];
        }   
          cout<< "\n";
    }
  
}