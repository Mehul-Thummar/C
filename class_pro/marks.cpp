#include <iostream>
using namespace std;

class student
{
private:
    int eng, com, sci, guj, total;
    string name;
    float per;

    int set()
    {
        int total;
        total = eng + com + sci + guj;
        return total;
    }

    int cal(int total)
    {
        int per = total * 100 / 300;
        return per;
    }

    // setter:

public:
    void setname(string n)
    {
        name = n;
    }
    void setmarks(int e, int c, int s, int g)
    {
        eng = e, com = c, sci = s, guj = g;
    }

    // getter:

    void getname()
    {
        cout << name << endl;
    }
    void getmarks()
    {
        cout << eng << "\n"
             << com << "\n"
             << sci << "\n"
             << guj << endl;
    }
};

int main()
{
    int e[5], c[5], s[5], g[5], i, t;
    string n[5];
    float p;

    for (i = 0; i <= 1; i++)
    {

        cout << "Name:";
        cin >> n[i];

        cout << "ENGLISH:";
        cin >> e[i];

        cout << "COMPUTER:";
        cin >> c[i];

        cout << "SCIENCE:";
        cin >> s[i];

        cout << "GUJARATI:";
        cin >> g[i];
        
        cout<< "total = " << t;
        cout<< "\nper = " << p <<".00" <<"\n";
    }
    student s1;

    s1.setname(n[0]);
    s1.setmarks(e[0], c[0], s[0], g[0]);

    s1.getname();
    s1.getmarks();

    student s2;
    s2.setname(n[0]);
    s2.setmarks(e[0], c[0], s[0], g[0]);

    s2.getname();
    s2.getmarks();

    return 0;
}
