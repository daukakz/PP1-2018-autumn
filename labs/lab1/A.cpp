#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int  cathet1,  cathet2;
  cin>> cathet1>>cathet2;
  
  double hypotenuse = sqrt( cathet1* cathet1 +  cathet2* cathet2);
  cout<<hypotenuse;
}
