#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    char output = 'a';
    
    for(int i = 0; i < s.size(); i++){
        output = max(s[i], output);   
    }
    
    cout<<output;
   
}
