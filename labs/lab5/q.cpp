#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    
    
    string a = s;
    while(s.size() <= t.size()){
        if(s == t)cout<<"YES", exit(0);
        s += a;
    }
    cout<<"NO";    
}
