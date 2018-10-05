#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    for(int i = 0; i < 26; i++){
        s[i]++;   
    }
    cout<<s;
    
}
