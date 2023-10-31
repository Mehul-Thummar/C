#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "Skillqode.";
    ofstream file("E:/fullstack/CPP/exam3.txt", ios::app);
    if (file.is_open())
    {
        file << str << endl; // using str direct.
        file << "Skillqode is a Institute." << endl;

        file.close();
    }

    return 0;
}