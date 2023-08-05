#include<bits/stdc++.h>
#include<iomanip>
using namespace std;

int main()
{
    double R, pi=3.141592653;
    //Take Input from Keyboard for (Radious [R])
    cin>> R ;
    //Print the result of the following equation (Area = π*R^2)
    cout<<fixed << setprecision(9)<<pi*pow(R,2);
    return 0;
}