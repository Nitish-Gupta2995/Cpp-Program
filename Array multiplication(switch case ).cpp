
#include <iostream>
using namespace std;

int main()
{
    int a[5], mul = 1, choice;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "1. Multiplication";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                mul = mul * a[i];
            }

            cout << "Multiplication = " << mul;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
