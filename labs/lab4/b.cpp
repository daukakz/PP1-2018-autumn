#include <iostream>
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

    int max1 = -1000000001;


    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            max1 = max(ans, a[i][j]);
        }
    }

 
    int max2 = -1000000001; 

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] != max1)max2 = max(a[i][j], max2);
        }
    }

    if(max2 == -1000000001; )cout<<0;
    else cout<<max2;

}
