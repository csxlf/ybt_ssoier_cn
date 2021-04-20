#include <iostream>
using namespace std;

int main(){
    int a[5][5];
    int n,m;
    for(int i=0;i<5;i++)
        for(int j=0;j<5;j++)
            cin>>a[i][j];
    cin>>n>>m;
    for(int i=0;i<5;i++){
        int i1;
        if (i==n-1) i1=m-1;
        else if(i==m-1) i1=n-1;
        else i1=i;
        for(int j=0;j<5;j++)
            cout<<a[i1][j]<<" ";
        cout<<endl;
    }
    
    return 0;
}
