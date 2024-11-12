#include <bits/stdc++.h>
using namespace std;

int main()
{
    char X;
    cin>>X;
    if((char) X >= 48 && (char)X <= 57){
        cout<<"IS DIGIT";
    }
    else if((char) X >= 65 && (char)X <= 90){
        cout<<"ALPHA"<<endl<<"IS CAPITAL";
    }
    else if((char) X >= 97 && (char)X <= 122){
        cout<<"ALPHA"<<endl<<"IS SMALL";
    }
    return 0;
}
