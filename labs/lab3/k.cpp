#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n], printed[100001];

    for(int i = 0; i <= 100000; i++)printed[i] = 0;   

    for(int i = 0; i < n; i++)cin>>a[i];

    for(int i = 0; i < n; i++){
        if(printed[a[i]] == 0){
            printed[a[i]] = 1;
            cout<<a[i]<<' ';
        }
    }
}
