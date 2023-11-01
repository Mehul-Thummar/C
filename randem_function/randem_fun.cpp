#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int max = 99999;
    int min = 55555;
    int x = rand();


    x = min + rand() + (max - min + 1);
    cout << "Randam Number is : " << x;

    return 0;
}