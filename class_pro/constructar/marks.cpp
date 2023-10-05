#include <iostream>
using namespace std;

class student
{
private:
    int eng, com, sci, guj,total;
    string name;
    float per;

    
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
    int totalmarks(int e, int c, int s, int g)
    {
        total = e + c + s + g;
        return total;
    }

    int percentage(int total)
    {
        per = total * 100 / 400;
        return per;
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
    int e[5], c[5], s[5], g[5], i, t[5];
    string n[5];
    float p[5];

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
        
        
    }
    student s1;

    s1.setname(n[0]);
    s1.setmarks(e[0], c[0], s[0], g[0]);

   
    s1.getname();
    s1.getmarks();

    student s2;
    s2.setname(n[1]);
    s2.setmarks(e[1], c[1], s[1], g[1]);

    s2.getname();
    s2.getmarks();

 for (i = 0; i <= 1; i++)
    {
        t[i]=s1.totalmarks(e[i],c[i],s[i],g[i]);
        cout<<"Total:"<<t[i]<<endl;
        p[i]= s1.percentage(t[i]);
        cout<<"Percentage:"<<p[i]<<endl;
    }
    return 0;
}
