#include<bits/stdc++.h>
using namespace std;

int main(){
    double num;
    cin >> num;

    int integer = num;
    double decimal = num - integer;

    if(decimal <= 0)
    {
        cout << "int " << integer << endl;
    }
    else
    {
        cout << "float " << integer <<" "<< decimal << endl;
    }

    return 0;
}