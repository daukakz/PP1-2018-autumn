#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    for(int i = 0; i < n; i++){
        int j = i+1;
        while(j != 0){
            cout<<"[*]";   
            j--;
        }
        cout<<endl;
    }


}
