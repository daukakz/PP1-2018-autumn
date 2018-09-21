#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    long long sum = 0;
    while(n != 0){
        int x;
        cin>>x;
        if(x > 1000 || x < 100)sum+=x;
        n--;
    }
    cout<<sum;
}
