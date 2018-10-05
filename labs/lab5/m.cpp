#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    char x;
    cin>>x;
    
    int n;
    cin>>n;
    
    
    int cnt[26];
    for(int i = 0; i < 26; i++)cnt[i] = 0;
    
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - 'a';
        cnt[a]++;
    }
    
    if(cnt[x-'a'] == n)cout<<"YES";
    else cout<<"NO";
    //if you don't understand, you may check what is value x-'a' with cout!
}
