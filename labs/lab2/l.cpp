#include <iostream>
#include <cmath>
using namespace std;
int main(){
     
    long long n;
    cin>>n;
    
    long long i = 1;
    while(i <= n){
        cout<<i<<' ';
        i *= 2;
    }
}
