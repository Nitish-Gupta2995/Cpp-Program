
#include <iostream>
using namespace std;

int main()
{
    int a[5], sub = 0, choice;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "1. Subtraction";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            sub = a[0];

            for (int i = 1; i < 5; i++)
            {
                sub = sub - a[i];
            }

            cout << "Subtraction = " << sub;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
