#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int sq = sqrt(n);
    if(sq * sq == n)cout<<"Yes";
    else cout<<"No";
}
