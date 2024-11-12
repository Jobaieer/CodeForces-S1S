#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A, B;
    cin>>A>>B;
    //divisible [mod]
    if(A % B == 0){
        cout<<"Multiples";
    }
    else if(B % A == 0){
        cout<<"Multiples";
    }
    else{
        cout<<"No Multiples";
    }
    return 0;
}
