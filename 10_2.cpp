#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "enter size of an array : ";
    cin >> n;

    int arr[n];

    try
    {
        for (int i = 0; i < n; i++)
        {

            cout << "enter unique value for index " << i << " : ";
            cin >> arr[i];
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; i++)
            {
                if (arr[i] == arr[j])
                {
                    throw "duplicate input detected !!";
                }
            }
        }
    }
    catch (const char *msg)
    {
        cout << msg;
    }

    return 0;
}

// runtime error detection
// int main()
// {
//     int n;
//     cout << "enter size of an array : ";
//     cin >> n;

//     int arr[n];

//     try
//     {
//         for (int i = 0; i < n; i++)
//         {
//             int inputs;
//             cout << "enter unique value for index " << i << " : ";
//             cin >> inputs;
//             for (int j = 0; j < i; j++)
//             {
//                 if (inputs == arr[j])
//                 {
//                     throw runtime_error("duplicate input detected !!");
//                 }
//             }
//             arr[i] = inputs;
//         }
//     }
//     catch (const runtime_error &e)
//     {
//         cout << e.what();
//     }

//     return 0;
// }