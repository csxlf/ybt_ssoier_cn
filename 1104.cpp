#include <iostream>
using namespace std;

int main() {
    float a[]={28.9,32.7,45.6,78,35,86.2,27.8,43,56,65};
    int i,b[10];
    float f=0;
    for(i=0;i<10;i++){
        cin>>b[i];
        f+=a[i]*b[i];
    }cout<<f<<endl;
    return 0;
}
