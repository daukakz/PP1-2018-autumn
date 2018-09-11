#include <iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n,m;
    cin>>n;
    
    int a[n];
    for(int i = 0; i < n; i++)cin>>a[i];
    
    cin>>m;
    int b[m];
    for(int i = 0; i < m; i++)cin>>b[i];
    
    int i = 0, j = 0;
    
    while(1){
        if(i == n && j == m)break;   
        
        if(i == n){
            while(j != m){
                cout<<b[j]<<' ';
                j++;
            }
            break;
        }
        if(j == m){
            while(i != n){
                cout<<a[i]<<' ';
                i++;
            }
            break;
        }
        
        
        if(a[i] <= b[j]){
            cout<<a[i]<<' ';
            i++;
        }
        else{
            cout<<b[j]<<' ';
            j++;
        }
    }
}
