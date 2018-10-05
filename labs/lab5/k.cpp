#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int vowel = 0;
    for(int i = 0; i < 26; i++){
        if(s[i] == 'a' || s[i] == 'e' || s[i] == 'u' || s[i] == 'o' || s[i] == 'u'){
            vowel++;
        }
    }
    cout<<vowel;
    
}
