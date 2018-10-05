#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int cnt[26];
    for(int i = 0; i < 26; i++){
        cnt[i] = 0;   
    }
    
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - 'a';
        cnt[a]++;
    }
    
    int pop = 0;
    char x = 0;
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - 'a';
        if(cnt[a] > pop){
            pop = cnt[a];
            x = 'a' + i;
        }
    }
    cout<<x;
}
