#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int ans = -1000*(-1000)*(-1000);
    for(int i = 1; i <= n; i++){
        int x;
        cin>>x;
        ans = max(ans, x);
    }
    cout<<ans;
    
}
