#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n;
	cin>>n;
	
	if(n == 2)cout<<2<<" is prime\n", exit(0);
	else if(n > 2)cout<<2<<" is prime\n";
	else exit(0);
	
	for(int i = 3; i <= n; i++){
	    bool prime = 1;
	    for(int j = 2; j <= sqrt(i); j++){
	        if(i % j == 0)prime = 0;
	    }
	    if(prime == 1)cout<<i<<" is prime\n";
	}
}  
