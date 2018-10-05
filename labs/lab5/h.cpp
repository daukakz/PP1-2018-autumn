#include <iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int cnt[10];
    for(int i = 0; i < 10; i++)cnt[i] = 0;
    /*
    cnt array counts how many times we met every digit in our string
    
    for example, if our string s is 23444
    
    cnt[2] = 1
    cnt[3] = 2
    cnt[4] = 3
    
    in start, every value of cnt[i] is equal to 0
    */
    
    for(int i = 0; i < s.size(); i++){
        int a = s[i] - '0';
        cnt[a]++;   
    }
    
    /*
    //you may print this cycle if you don't understand what cnt does
    for(int i = 0; i < 10; i++){
        cout<<"we meet a digit "<<i<<" "<<cnt[i]<<" times in our string\n"; 
    }
    */
    
    int a = -1;
    
    for(int i = 0; i < 10; i++){
        if(a == -1){
            if(cnt[i] > 0){
                a = cnt[i];   
            }
        }
        else{
            if(cnt[i] > 0 && a != cnt[i]){
                cout<<"NO";
                exit(0);
            }
        }
    }
    cout<<"YES";
}
