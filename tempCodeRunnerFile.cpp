#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of array: ";
    cin >> n;
    int arr[n];

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
                arr[j] = arr[i];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }

    cout << "highest no is: " << arr[0];
    cout << "2nd highest no is: " << arr[1];
}