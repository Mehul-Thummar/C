#include <iostream>
using namespace std;
class cookies
{

public:
    int suger;

    cookies(int suger)
    {
        this->suger = suger;
    }

    void print()
    {
        cout << "This cookies Calories is : " << suger << endl;
    }
};

int main()
{
    cookies chocochips(50);
    cookies Otschips(10);

    chocochips.print();
    Otschips.print();
}