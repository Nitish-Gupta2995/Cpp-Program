
#include <iostream>
using namespace std;

int main()
{
    int a[5], sum = 0;
    float avg;

    cout << "Enter 5 elements: ";

    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
        sum = sum + a[i];
    }

    avg = sum / 5.0;

    cout << "Average = " << avg;

    return 0;
}
