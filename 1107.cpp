#include <iostream>
using namespace std;

int main() {
    int L,M,i,h=0,l;
    cin>>L>>M;
    int a[L+1];
    int b[M],c[M];
    for(i=0;i<=L;i++){
        a[i]=1;
    }for(i=0;i<M;i++){
        cin>>b[i]>>c[i];
        for(l=b[i];l<=c[i];l++){
            a[l]=0;
        }
    }for(i=0;i<=L;i++){
        if(a[i]==1){
            h++;
        }
    }cout<<h<<endl;
    return 0;
}
