#include <iostream>
using namespace std;
int main(){
    int x;
    long long sum = 0;
    
    while(cin >> x){
        if(x == 0)break;
        sum += x;
    }
    cout<<sum;
}
