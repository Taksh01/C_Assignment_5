#include <iostream>
using namespace std;

int main()
{
    try
    {
        int n;
        cout << "enter size of array: ";
        cin >> n;
        int arr[n];

        if (n < 2)
        {
            throw "Error enter size atleast of 2";
        }

        for (int i = 0; i < n; i++)
        {
            cout << "enter element for index " << i << ":";
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] < arr[j])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << "  ";
        }

        cout << "\n highest no is: " << arr[0];
        cout << "\n 2nd highest no is: " << arr[1];
    }
    catch (const char *msg)
    {
        cout << msg;
    }
}