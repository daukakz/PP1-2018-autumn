#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n;
	cin>>n;
	
	int a[n][n];
	
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];               
        }
    }

	int ans = -1000000000,x,y;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
            if(i == j && ans < a[i][j]){
				ans = a[i][j];
				x = i;
				y = j;
			}			
        }
    }
	cout<<"Maximum element is: "<<ans<<" with coordinates: "<<x+1<<';'<<y+1;
}
