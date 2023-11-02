#include <iostream>
using namespace std;
int main()
{
  int arr[5];
  int arr2[5] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++)
  {
    cout << "enter arr:";
    cin >> arr[i];
  }
  for (int i = 0; i < 5; i++)
  {
    cout<<arr[i]<<" ";
  }
  return 0;
}