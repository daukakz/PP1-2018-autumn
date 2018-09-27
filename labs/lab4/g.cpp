#include <iostream>
using namespace std;
int main () {

    int n;
    cin>>n;

    char a[n][n];

    int p = n-1, m = 1;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(j == p)cout<<m, m++, p--;
            else cout<<'.';                
        }
        cout<<endl;
    }
    

}   
