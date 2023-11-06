#include <iostream>
using namespace std;

class Calculator
{
public:
    double num1, num2;

    int getInput()
    {
        cout << "Enter First numbers: ";
        cin >> num1;
        cout << "Enter Second numbers: ";
        cin >> num2;

        return num1, num2;
    }
};

class Addition : public Calculator
{
public:
    int caladd()
    {
        return num1 + num2;
    }
};

class Subtraction : public Calculator
{
public:
    int calsub()
    {
        return num1 - num2;
    }
};

class Multiplication : public Calculator
{
public:
    int calmul()
    {
        return num1 * num2;
    }
};

class Division : public Calculator
{
public:
    int caldiv()
    {
        return num1 / num2;
    }
};

int main()
{
    int choice;
    double result;
    Calculator c1;

    cout << "Select an operation:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice : ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        Addition();
        break;
    case 2:
        Subtraction();
        break;
    case 3:
        Multiplication();
        break;
    case 4:
        Division();
        break;
    default:
        cout << "Invalid choice." << endl;
        return 0;
    }

    
    result = c1.getInput();
    cout << "Result is : " << result << endl;

    return 0;
}


// result ma second number j batave chhe.