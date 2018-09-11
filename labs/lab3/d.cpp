#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];
    
    int ans = -1000*(-1000)*(-1000), pos = -1;
    for(int i = 0; i < n; i++){
        if(a[i] > ans){
            ans = a[i];
            pos = i;
        }
    }
    cout<<pos+1;
}
