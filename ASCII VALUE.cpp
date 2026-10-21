#include <iostream>
using namespace std;

void ascii(char ch)
{
    cout << "ASCII value = " << int(ch);
}

int main()
{
    char ch;

    cout << "Enter an alphabet: ";
    cin >> ch;

    ascii(ch);

    return 0;
}