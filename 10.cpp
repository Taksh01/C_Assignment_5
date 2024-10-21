#include <iostream>
using namespace std;

void oddFinder(int a)
{
    if (a % 2 != 0)
    {
        throw "Error,Number is Odd";
    }
}

int main()
{
    int no;
    cout << "Enter Number to check: ";
    cin >> no;

    try
    {
        oddFinder(no);

        cout << "No is Even: " << no;
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}