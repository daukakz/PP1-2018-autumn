#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin>>n>>l>>r;
    
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    
    l--, r--;

    long long sum = 0;
    for(int i = 0; i < n; i++){
        if(l <= i && i <= r)sum += a[i];
    }
    cout<<sum;
}
