#include <bits/stdc++.h>
using namespace std;
int main(){
    int v, t;
    cin>>v>>t;
   
    int ans;
    if(v>0)ans = (v*t)%109;
    else ans = 109-((-v)*t)%109;
   
    if(ans == 109)ans = 0;
    cout<<ans;
}
