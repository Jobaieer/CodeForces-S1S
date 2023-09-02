#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;;
    char ch;
    cin>>x>>ch>>y;
    if(ch == '+'){
        cout<<x+y;
    }
    else if(ch == '-'){
        cout<<x-y;
    }
    else if(ch == '*'){
        cout<<x*y;
    }
    else{
        cout<<x/y;
    }
    return 0;
}
