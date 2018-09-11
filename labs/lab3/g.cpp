#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];


    int minn = 1000*1000*1000, maxn = -minn;
    //minn is initial minimum number, maxn is initial maximum number

    for(int i = 0; i < n; i++){
     	maxn = max(maxn, a[i]);
     	minn = min(minn, a[i]);
    }

    for(int i = 0; i < n; i++){
     	if(a[i] == maxn)a[i] = minn;
     	cout<<a[i]<<' ';
    }
    
}
