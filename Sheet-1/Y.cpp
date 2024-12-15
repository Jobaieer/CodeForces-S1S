#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int A,B,C,D;
    cin>>A>>B>>C>>D;

    A %= 100;
    B %= 100;
    C %= 100;
    D %= 100;

    long long int Result = A * B * C * D;
    long long int Final = Result % 100;

    if(Final < 10){
        cout<<0<<Final<<endl;
    }
    else{
        cout<<Final<<endl;
    }
    return 0;
}