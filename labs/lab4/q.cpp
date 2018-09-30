#include <iostream>
#include <cmath>
using namespace std;

int main () {

    int n;
	cin>>n;
	
	int m = n*2-1;
	char a[n][m];

	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
			a[i][j] = '.';
		}
    }

	
	
    a[0][n-1] = '*';//we always have only one star in first row
	
	
	for(int i = 1; i < n; i++){
        for(int j = 0; j < m; j++){
			if(a[i-1][j] == '*' || a[i-1][j+1] == '*' || a[i-1][j-1] == '*'){
				a[i][j] = '*';
			}
		}
    }

	for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
			cout<<a[i][j];
		}
		cout<<endl;
    }

}  
