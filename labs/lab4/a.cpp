#include <iostream>
using namespace std;
int main () {
    int n;
    cin>>n;

    int a[n][n];


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];
        }
    }

    int ans = -100000;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            ans = max(ans, a[i][j]);
        }
    }

    cout<<ans;
    
}
