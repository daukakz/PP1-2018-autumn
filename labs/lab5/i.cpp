#include <iostream>
using namespace std;
int main(){
    string s,t;
    cin>>s>>t;
    
    int cntS[26], cntT[26];
    for(int i = 0; i < 26; i++){
        cntS[i] = 0;   
        cntT[i] = 0;
    }
    
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - 'a';
        cntS[a]++;
    }
    
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - 'a';
        cntT[a]++;
    }
    
    for(int i = 0; i < 26; i++){
        if(cntS[i] != cntT[i]){
            cout<<"NO";
            exit(0);
        }
    }
    cout<<"YES";
    
}
