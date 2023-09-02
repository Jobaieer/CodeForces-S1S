#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s1[100], s2[100], s3[100], s4[100];
    cin>>s1>>s2>>s3>>s4;
    //string compare syntax
    if(strcmp(s2,s4) == 0)
    {
        cout<<"ARE Brothers";
    }
    else{
        cout<<"NOT"; 
    }
    return 0;
}
