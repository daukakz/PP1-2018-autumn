#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    
    /*
    
        https://cdn-images-1.medium.com/max/1600/1*DdgD00dAdXggzMdWDt7GSA.png
        
        look to ascii codes of small letters and capital letters of c++
        capitalLetter = smallLetter - 32;
        
        
    */
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] -= 32;   
        }
    }
    
    
    cout<<s;
    
}
