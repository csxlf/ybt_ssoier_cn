#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    int a,b,d,i,j;
    char c;
    cin>>a>>b>>c>>d;
    for(i=0;i<b;i++){
        cout<<c;
    }cout<<endl;
    for(i=0;i<a-2;i++){
        cout<<c;
        for(j=0;j<b-2;j++){
            if(d==0) cout<<" ";
            else cout<<c;
        }cout<<c<<endl;
    }
    for(i=0;i<b;i++){
        cout<<c;
    }cout<<endl;
    return 0;
}
