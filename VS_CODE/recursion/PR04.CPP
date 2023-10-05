#include<iostream>
using namespace std;

int largestno (int arr[],int num)
{
    int a= arr[0];
    for(int i=0 ; i< num ; i++)
    {
        if (a < arr[i])
        {
            a=arr[i];
        }
    }
    return a;
}

int smallestno (int arr[],int num)
{
    int b= arr[0];
    for(int i=0 ; i> num ; i++)
    {
        if (b < arr[i])
        {
            b=arr[i];
        }
    }
    return b;
}

int main()
{
    int arr[10]={1,2,3,4,5,6,7,8};
    int largest=largestno(arr,8);
    int smallest = smallestno(arr,20);

    cout<< ("Largest Nummber Is : ")<< largest <<"\n";
    cout<< ("Smallest Number Is : ")<< smallest;
    return 0 ;
}