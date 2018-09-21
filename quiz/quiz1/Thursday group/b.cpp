#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    
    int w[n], v[n];
    //w[i] is a remaining water in i'th bottle, v[i] is a volume of i'th bottle
    
    int allWater = 0;
    
    for(int i = 0; i < n; i++)cin>>w[i], allWater += w[i];
    
    for(int i = 0; i < n; i++)cin>>v[i];
    
    int max1 = 0, max2 = 0, ind = -1;
    
    
    //finding first maximum
    for(int i = 0; i < n; i++){
        if(max1 < v[i]){
            max1 = v[i];
            ind = i;
        }
    }
    
    //finding second maximum
    for(int i = 0; i < n; i++){
        if(i != ind)max2 = max(v[i], max2);
    }
    
    
    if(max2 + max1 >= allWater)cout<<"YES";
    else cout<<"NO";

}
