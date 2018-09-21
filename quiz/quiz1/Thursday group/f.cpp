#include <iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;

    if(n == 1)cout<<"no", exit(0);
    
    for(int i = 2; i < n; i++){
        if(n % i == 0)cout<<"no", exit(0);
    }
    cout<"yes";
}
