#include <iostream>
using namespace std;

    int total = 0, mat, eng, guj, sci;
    float per;
void setdata1()
{
    cout<< "Enter maths marks: ";
    cin>> mat;

    cout<< "Enter english marks: ";
    cin>> eng;

    cout<< "Enter gujarati marks: ";
    cin>> guj;

    cout<< "Enter science marks: ";
    cin>> sci;
}

float setdata2()
{
    

    if (mat < 35 || eng < 35 || guj < 35 || sci < 35)    
    {
        cout<<("Student is fail");
    }
    else
    {
        total = mat + eng + guj + sci;
        
        per= total*100/400;
        
    }
}
void setdata3()
{
    cout<< "\nTOTAL MARKS: " << total;
    cout<< "\nPERCENTAGE IS: " <<per <<".00";

    if(per >= 95)
        {
            cout<<("\nGRADE A");
        }
        else if(per >= 80)
        {
            cout<<("\nGRADE B");
        }
        else if(per >= 60)
        {
            cout<<("\nGRADE C");
        }
        else if(per >= 40)
        {
            cout<<("\nGRADE D");
        }
}

int main()
{
setdata1();    
setdata2();
setdata3();

}

