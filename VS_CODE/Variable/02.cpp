#include<iostream>
using namespace std;

int getsub()
{
    int eng,guj,sci,total;
    cout<< "enter eng marks: ";
    cin>> eng;

    cout<< "enter guj marks: ";
    cin>> guj;
        
    cout<< "enter sci marks: ";
    cin>> sci;

    total=guj+eng+sci;
    return total;
}
int calcul(int totalmarks)
{
    int per=totalmarks*100/300;

    cout<< "total = " << totalmarks;
    cout<< "\nper = " << per <<".00";

    return per;
}
int main()
{
    int gettotal = getsub();
    int getper = calcul(gettotal);     
    return 0; 
}