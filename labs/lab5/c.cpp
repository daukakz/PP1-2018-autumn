#include <iostream>
using namespace std;
int main(){
    string s, t;
    cin>>s>>t;
    
    /*
        read about find function of string
        http://www.cplusplus.com/reference/algorithm/find/
    */
    
    if(s.find(t) >= 0 && s.find(t) < s.size())cout<<"YES";
    else cout<<"NO";
    
    
}
