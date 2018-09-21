#include <iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;

    int k = 0;
    for(int i = 1; i <= n; i++){
        if(i % 7 == 0 || i % 7 == 2)k++;        
    }

    cout<<k;
}
