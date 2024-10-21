#include <iostream>
using namespace std;

int main()
{
    int no1, no2;
    char op;
    cout << "enter number 1:";
    cin >> no1;

    cout << "enter number 2:";
    cin >> no2;

    cout << "enter operator:";
    cin >> op;

    try
    {
        if (op != '+' && op != '-' && op != '*' && op != '/' && op != '%')
        {
            throw "Invalid operator";
        }

        else if (no2 == 0 && op == '/')
        {
            throw "enter correct divider";
        }
        else
        {
            switch (op)
            {
            case '+':
                cout << no1 + no2;
                break;

            case '-':
                cout << no1 - no2;
                break;

            case '*':
                cout << no1 * no2;
                break;

            case '/':
                cout << no1 / no2;
                break;

            case '%':
                cout << no1 % no2;
                break;
            }
        }
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}