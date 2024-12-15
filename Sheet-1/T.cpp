#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int A, B, C, array[3];
    cin >> A >> B >> C;
    
    array[0] = A;
    array[1] = B;
    array[2] = C;

    sort(array, array+3);
    cout << array[0] << endl << array[1] << endl << array[2] << endl;
    cout<<endl;
    cout<< A << endl << B <<endl<< C << endl;
    return 0;
}