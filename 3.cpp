#include <iostream>
using namespace std;

int main()
{
    int no;
    int arr[5] = {1, 2, 3, 4, 5};
    cout << "enter element to access:";
    cin >> no;

    try
    {
        if (no >= 5)
        {
            throw "Array out of index!";
        }

        cout << "array's " << no << "element is: " << arr[no];
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}