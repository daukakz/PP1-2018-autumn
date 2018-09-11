#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];
    
    int ans = -1000*(-1000)*(-1000);
    for(int i = 0; i < n; i++){
        ans = max(ans, a[i]);   
    }
    cout<<ans;
}
