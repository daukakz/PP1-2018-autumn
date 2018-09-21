#include <iostream>
using namespace std;
int main(){

    int n;
    cin>>n;
    
    int even, odd, cnt = 0;//cnt is a count of even numbers 
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        if(x % 2 == 0)even = i+1, cnt++;
        else odd = i+1;
    }

    if(cnt == n-1)cout<<odd;
    else cout<<even;
    
}
