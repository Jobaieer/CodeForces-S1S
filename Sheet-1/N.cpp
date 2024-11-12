#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if(isupper(X)){
        X= tolower(X);
        cout<<X;
    }
    else if(islower(X)){
        X= toupper(X);
        cout<<X;
    }
    return 0;
}
