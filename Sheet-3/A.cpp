#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    int arr[N];

    // array size N 
    cin>> N;

    // taking array elements as input
    for(int i = 0; i < N ; i++)
    {
        cin >> arr[i];
    }

    // calculating sum of array elements
    int sum=0;
    for(int i = 0; i < N; ++i)
    {

        sum += arr[i];

    }
    // printing absolute value of sum
    cout << abs(sum);
    return 0;
}