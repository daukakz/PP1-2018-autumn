#include <iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;

    int sum = 0;
    
    for(int i = 2; i < n; i++){
        int x;
        cin >> x;
        if(x % 3 == 0 || x % 5 == 0 || x % 7 == 0)sum += x;
    }
    cout<<sum;
}
