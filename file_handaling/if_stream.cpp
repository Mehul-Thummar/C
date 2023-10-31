#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str;
    ifstream file("E:/fullstack/CPP/exam.txt");
    if (file.is_open())
    {
        while (getline(file, str))
        {
            cout << str << endl;
        }
        file.close();
    }
    else
    {
        cout << "This File Is Cannot Open" << endl;
    }

    return 0;
}