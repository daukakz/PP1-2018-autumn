#include <iostream>
using namespace std;
int main(){
    int n, l, r;
    cin>>n>>l>>r;
    
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    
    l--, r--;
    
    int j = r;

    for(int i = l; i <= r; i++){
    	if(i <= j){
    	 	swap(a[i], a[j]);
    	 	j--;
    	}
    	else break;
    }

    for(int i = 0; i < n; i++)cout<<a[i]<<' ';
}
