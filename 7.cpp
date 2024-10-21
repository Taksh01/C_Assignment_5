#include <iostream>
using namespace std;

int main()
{
    int accNo, bal, with;
    cout << "enter account number: ";
    cin >> accNo;
    cout << "enter balance: ";
    cin >> bal;

    while (true)
    {
        cout << "\n enter withdrawal amount: ";
        cin >> with;

        try
        {

            if (with > bal)
            {
                throw "Withdrawal cannot be more than Balance";
            }
            else
            {
                cout << "Left balance after withdrawal: " << bal - with;
                break;
            }
        }
        catch (const char *msg)
        {
            cout << msg;
        }
    }
}