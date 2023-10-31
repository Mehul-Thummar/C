#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    string str = "The Exam is Based on OMR";
    ofstream file("E:/fullstack/CPP/exam2.txt");
    if (file.is_open())
    {
        file << str << endl; // using str direct.
        file << "30 Marks Totel." << endl;

        file.close();
    }

    return 0;
}