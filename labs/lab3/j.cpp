#include <iostream>
using namespace std;
int main(){
    int n, x;
    cin>>n>>x;
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];

    //exit(0) stops program 
    for(int i = 0; i < n; i++){
        if(a[i] == x)cout<<i+1, exit(0);   
        else if(x < a[i])cout<<i, exit(0); 
    }
    cout<<n;
}
