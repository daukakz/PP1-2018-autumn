#include <iostream>
using namespace std;
int main () {

    int n;
    cin>>n;

    int a[n][n], maxi = -1000000001, ansI, ansJ;

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin>>a[i][j];    
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxi){
                maxi = a[i][j];
                ansI = i;
                ansJ = j;
            }    
        }
    }
    cout<<ansI+1<<' '<<ansJ+1<<endl;

    

    



}   
