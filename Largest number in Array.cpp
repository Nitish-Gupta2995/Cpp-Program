
#include <iostream>
using namespace std;

int main()
{
    int a[5];

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    int large = a[0];

    for (int i = 1; i < 5; i++)
    {
        if (a[i] > large)
        {
            large = a[i];
        }
    }

    cout << "Largest number = " << large;

    return 0;
}
