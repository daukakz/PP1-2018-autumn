#include <iostream>
#include <cmath>
using namespace std;
int main(){
     
    int n;
    cin>>n;
    int zeros = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin>>x;
        
        while(x != 0){
            if(x % 10 == 0)zeros++;   
            x /= 10;
        }
        
    }   
    cout<<zeros;
}
