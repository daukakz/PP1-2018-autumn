#include <iostream>
using namespace std;
int main () {

    int n;
    cin>>n;

    n++;
    string a[n][n];

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            a[i][j] = "[*]";    
        }
    }

    

    for(int i = 1; i < n; i++){
        for(int j = 0; j < i; j++){
            cout<<a[i][j];    
        }
        cout<<endl;
    }



}   
