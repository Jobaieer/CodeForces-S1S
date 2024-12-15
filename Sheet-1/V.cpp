#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int A, B;
    char Symbol;
    cin >> A >> Symbol >> B;

    if(Symbol == '>')
    {
        if(A > B)
            cout << "Right"<<endl;
        else
            cout << "Wrong"<<endl;
    }
    else if(Symbol == '=')
    {
        if(A == B)
            cout << "Right"<<endl;
        else
            cout << "Wrong"<<endl;
    }
    else{
        if(A < B)
            cout << "Right"<<endl;
        else
            cout << "Wrong"<<endl;
    }

    return 0;
}