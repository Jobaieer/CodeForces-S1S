#include <bits/stdc++.h>
using namespace std;

int main()
{
    short int X;
    cin >> X;
//condition run till X is greater than or equal 10
    while (X >= 10) 
    {
        X = X / 10;
    }
// condition checking is it even or odd
    if (X % 2 == 0) 
    {
        cout << "EVEN";
    }
    else
    {
        cout << "ODD";
    }
    return 0;
}