
#include <iostream>
using namespace std;

int main()
{
    int a[5], sum = 0, choice;

    cout << "Enter 5 array elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "1. Sum of array";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            for (int i = 0; i < 5; i++)
            {
                sum = sum + a[i];
            }
            cout << "Sum = " << sum;
            break;

        default:
            cout << "Invalid choice";
    }

    return 0;
}
