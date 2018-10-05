#include <iostream>
using namespace std;

bool check(int l, int r, string s){
    
    int j = r;
    for(int i = l; i <= r; i++){
        if(s[i] != s[j]){
            return false;   
        }
        j--;
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    
    int j = s.size()-1;
    bool allowed = 1;
    
    for(int i = 0; i < s.size()/2; i++){
        if(s[i] != s[j]){
            if(check(i+1, j, s)){
                cout<<"YES";
                exit(0);
            }   
            else if(check(i, j-1, s)){
               cout<<"YES";
               exit(0);
            }
            cout<<"NO";
        }
        j--;
    }
}
