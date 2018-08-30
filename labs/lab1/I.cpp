#include <iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  //179
  int firstNumber = n/100;
  int secondNumber = (n/10)%10;
  int thirdNumber = n%10;
  cout<<firstNumber + secondNumber + thirdNumber;
}
