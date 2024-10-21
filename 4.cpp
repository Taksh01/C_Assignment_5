#include <iostream>
using namespace std;

int main()
{
    int no;
    cout << "enter number:";
    cin >> no;

    try
    {
        if (no < 0 || no >= 100)
        {
            throw " a number  should be greater than equal to zero and should be less than to 100";
        }

        cout << "Number is:" << no;
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}