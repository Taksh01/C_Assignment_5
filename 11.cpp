#include <iostream>
using namespace std;

void vowelFinder(string a)
{
    int count = 0;
    for (int i = 0; i < a.length(); i++)
    {
        if (a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u')
        {
            count++;
        }
    }
    if (count == 0)
    {
        throw "No vowel is present";
    }
}

int main()
{
    string s1;
    cout << "Enter string to check: ";
    cin >> s1;

    try
    {
        vowelFinder(s1);
        cout << "String with vowel is: " << s1;
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}