#include <iostream>
using namespace std;

class student
{
    int e, c, s, g, t;
    string n;
    float p;

public:
    student()
    {
        cout << "Name:";
        cin >> n;

        cout << "ENGLISH:";
        cin >> e;

        cout << "COMPUTER:";
        cin >> c;

        cout << "SCIENCE:";
        cin >> s;

        cout << "GUJARATI:";
        cin >> g;
        
    }

    student(int e, int c, int s, int g)
    {
        t = e + c + s + g;
        cout << "Total:" << t << endl;
    }

    student(float p)
    {
        p = t * 100 / 400;
        cout << "Percentage:" << p << endl;
    }
};

int main()
{
    int e, c, s, g,t;
    
    float p;
    student s1;
    student s2(e, c, s, g);
    student s3(p);

    return 0;
}