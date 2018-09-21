#include <iostream>
using namespace std;
int main(){
    int n;
    
    cin>>n;

    int k = 0;
    
    if(n % 2 == 0)k++;
    if(n % 5 == 0)k++;
    if(n % 17 == 0)k++;
    if(n % 19 == 0)k++;
    
    if(k >= 2)cout<<"YES";
    else cout<<"NO";
}
