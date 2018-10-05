#include <iostream>
using namespace std;

void solve(int a[], int b[], int n){
	for(int i = 0; i < n; i++){
		cout<<abs(a[i] - b[i])<<' ';		
	}
}
int main(){
    int n;
    cin>>n;
    
    
    int a[n], b[n];
    
    for(int i = 0; i < n; i++)cin>>a[i];
    for(int i = 0; i < m; i++)cin>>b[i];
    
    solve(a,b,n);
    
}
