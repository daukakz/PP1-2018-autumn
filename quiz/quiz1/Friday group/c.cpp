#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int ansA, ansB, a, b, dif = 100100; 
    
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            a = i;
            b = n/i;
            if(b-a < dif && b >= a){
                dif = b-a;
                ansA = a;
                ansB = b;
            }
        }
    }
    cout<<ansA<<' '<<ansB;    
}
