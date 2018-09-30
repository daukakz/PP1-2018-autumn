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

    for(int i = 0; i < n; i++){
        long long rowSum = 0;
		for(int j = 0; j < m; j++){
			rowSum += a[i][j];
		}
		cout<<endl<<"The sum of row number "<<i+1<<" is "<<rowSum;
    }

	for(int i = 0; i < m; i++){
		long long columnSum = 0;
        for(int j = 0; j < n; j++){
            columnSum += a[j][i];               
        }
		cout<<endl<<"The sum of column number "<<i+1<<" is "<<columnSum;
    }
	
}  
