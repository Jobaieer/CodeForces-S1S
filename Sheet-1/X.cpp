#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int L1, L2, R1, R2;
    cin>>L1>>R1>>L2>>R2;

    long long int L = max(L1, L2);
    long long int R = min(R1, R2);
    
    if(L > R){
        cout<<"-1"<<endl;
    }
    else{
        cout<<L<<" "<<R<<endl;
    }

    return 0;
}