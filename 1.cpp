#include <iostream>

using namespace std;

int main()
{
    int a,b;
    cout << "Enter two number" << endl;
    cin >> a ;
    cin >> b ;
    int c = a + b;
        if (c >= 10  && c <= 20)
       cout << "The sum of two numbers is between 10 and 20";
            else
        cout << "The sum of two numbers not within 10 and 20";
    return 0;
}
