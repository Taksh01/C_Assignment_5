#include <iostream>
using namespace std;

int main()
{
    string mail;
    cout << "Enter mail:";
    cin >> mail;

    try
    {

        bool atSymbol = false;
        for (int i = 0; i < mail.length(); i++)
        {
            if (mail[i] == '@')
            {
                atSymbol = true;
                break;
            }
        }
        if (atSymbol == false)
        {
            throw "@ symbol not present";
        }

        else
        {
            cout << "Correct email";
        }
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}