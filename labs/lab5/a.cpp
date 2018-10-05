#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    /*
        https://cdn-images-1.medium.com/max/1600/1*DdgD00dAdXggzMdWDt7GSA.png
    */
    int cap = 0, sm = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            sm++;  
        }
        else{
            cap++;   
        }
    }
    
    cout<<sm<<' '<<cap;    
}
