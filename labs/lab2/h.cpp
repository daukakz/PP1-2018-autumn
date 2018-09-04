#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
     int evens = 0, odds = 0;
     
     for(int i = 0; i < n; i++){
      int x;
      cin>>x;
      
      if(x % 2 == 0)evens++;
      else odds++;
     }
  cout<<evens<<' '<<odds;    
}
