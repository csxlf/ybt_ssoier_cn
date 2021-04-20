#include <iostream>
using namespace std;

int main() {
    int a[10];
    int h,i,g=0;
    for(i=0;i<10;i++)
    cin>>a[i];
    cin>>h;
    for(i=0;i<10;i++){
        if(a[i]<=h+30)
            g++;
    }cout<<g<<endl;
    return 0;
}
