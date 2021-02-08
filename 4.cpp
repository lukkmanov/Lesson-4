#include <iostream>

using namespace std;

int main()
{
   int a;
   cout << "Enter the year" << endl ;
   cin >> a ;
   if (a % 4 !=0)
       cout << "The year is not a leap year" << endl ;
       else if( a % 100 == 0 && a % 400 !=0 )
       cout << "The year is not a leap year " << endl ;
   else
      cout << "Leap year" << endl;
    return 0;
}
