#include <iostream>
using namespace std;

void armstrongFinder(int a)
{
    int rem, sum = 0, originalNo;
    originalNo = a;
    while (a > 0)
    {
        rem = a % 10;
        sum = sum + rem * rem * rem;
        a = a / 10;
    }

    if (originalNo != sum)
    {
        throw "No is not armstrong no";
    }
}

int main()
{
    int no;
    cout << "Enter Number to check: ";
    cin >> no;

    try
    {
        armstrongFinder(no);
        cout << "No is Armstrong: " << no;
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}