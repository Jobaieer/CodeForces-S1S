#include <bits/stdc++.h>
using namespace std;

int main()
{
    int nd, y, m, d;
    cin >> nd;

    y = nd / 365;
    nd = nd % 365;
    m = nd / 30;
    nd = nd % 30;
    d = nd;

    cout << y << " years" << endl
         << m << " months" << endl
         << d << " days";

    return 0;
}