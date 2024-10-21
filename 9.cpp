#include <iostream>
using namespace std;

int main()
{
    int age;

    cout << "\n enter age: ";
    cin >> age;

    try
    {

        if (age < 18)
        {
            throw "You are not eligible for License";
        }

        else
        {
            cout << "You are eligible for License";
        }
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}
