#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n, m;
    cin>>n>>m;

	int a[n][m];
	
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin>>a[i][j];               
        }
    }

	cout<<"coordinates of min elements:\n";
	
	int sumOfMins = 0;
	for(int i = 0; i < m; i++){
		int minElement = 1000000001, x, y;
		for(int j = 0; j < n; j++){
            if(a[j][i] < minElement){
				minElement = a[j][i];
				x = j+1;
				y = i+1;
			}			
        }
		cout<<x<<';'<<y<<endl;
		sumOfMins += minElement;
    }
    cout<<endl<<"Their sum:\n";
	cout<<sumOfMins;
	
}  
