#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "Enter the number" << endl;
    cin >> a;
    if (a%2)
        cout << "Number is natural prime";
    else
        cout << "Number is not natural prime";
    return 0;
}
