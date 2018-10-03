#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++)
    	for(int j=0;j<n;j++)a[i][j]=0;
    a[0][0]=1;
    a[0][1]=2;
    int i=0,j=1;
    int x=2;
    while(x!=n*n){
    if(a[i][j-1]==x-1){
        if(!a[i][j+1]&&j+1<n)j++;
    	else i++;
    }
    else if(a[i-1][j]==x-1){
        if(!a[i+1][j]&&i+1<n)i++;
        else j--;
    }
    else if(a[i][j+1]==x-1){
        if(!a[i][j-1]&&j>0)j--;
        else i--;
    }
    else {
        if(!a[i-1][j]&&i>0)i--;
        else j++;
    }
    x++;
    a[i][j]=x;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)cout<<a[i][j]<<" ";
        cout<<endl;}
    return 0;
}
