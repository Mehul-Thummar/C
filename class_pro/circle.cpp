#include<iostream>
using namespace std;

class cir
{
    private:
        int red;

    public:
        int r=red;
       
        void area(int r)
        {
            cout <<3.14*r*r<<endl;
        }
        void cum(int r)
        {
            cout <<3.14*2*r<<endl;
        }
    
};

int main()
{
    int r1;
    cout <<"Enter r1";
    cin>>r1;
    cir mycir;

    mycir.area(r1);
    mycir.cum(r1);

    return 0;
}