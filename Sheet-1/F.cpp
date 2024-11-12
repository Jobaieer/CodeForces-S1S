#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, M;
    cin >> N >> M;
    //In last digit summation always (inputs[n,m] modulo by 10)
    cout << (N % 10) + (M % 10);
    return 0;
}
