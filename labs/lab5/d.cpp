#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    int j = s.size() - 1;
    
    for(int i = 0; i < s.size()/2; i++){
      if(j < i)break;
      if(s[j] != s[i]) cout<<"NO", exit(0);
      j--;
    }
    cout<<"YES";
}
