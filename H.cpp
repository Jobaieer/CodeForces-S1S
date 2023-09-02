#include <bits/stdc++.h>
using namespace std;

int main()
{
    double A, B, X;
    cin>>A>>B;
    X = A/B;
    cout<<"floor "<< A <<" / "<< B <<" = "<<floor(X)<<endl<<"ceil "<< A <<" / "<< B <<" = "<<ceil(X)<<endl<<"round "<< A <<" / "<< B <<" = "<<round(X);
    return 0;
}
