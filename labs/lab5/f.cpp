#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int l, r;
    cin>>l>>r;
    
    for(int i = l-1; i <= r; i++)cout<<s[i];
}
