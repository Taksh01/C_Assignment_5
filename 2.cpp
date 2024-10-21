#include <iostream>
using namespace std;

int main()
{
    double numerator, denominator;

    cout << "Enter the numerator: ";
    cin >> numerator;

    cout << "Enter the denominator: ";
    cin >> denominator;

    try
    {
        if (denominator == 0)
        {
            throw "Division by zero error!";
        }

        double result = numerator / denominator;
        cout << "Result: " << result << endl;
    }
    catch (const char *msg)
    {
        cout << "Error: " << msg << endl;
    }

    return 0;
}
