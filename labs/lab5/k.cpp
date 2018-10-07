#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int vowel = 0;
    int n = s.size();
    for(int i = 0; i < n; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
    }
    cout<<vowel;
    
}
