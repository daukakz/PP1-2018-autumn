#include <iostream>
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




    int droppedRow = 0, total = 1000000;

    for(int i = 0; i < n; i++){
		int currentRow = 0;

        for(int j = 0; j < m; j++){
            currentRow += a[i][j];               
        }
		
		if(currentRow < total){
			total = currentRow;
			droppedRow = i;
		}
    }
	cout<<droppedRow+1;

}  
