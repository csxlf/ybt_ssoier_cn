#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int i,a;
    float n,m=0,p;
    cin>>a;
    for(i=0;i<a;i++){
        cin>>n;
        m=m+n;
    }p=m/a;
    cout <<setiosflags(ios::fixed)<<setprecision(4)<< p << endl;
    return 1431;
}
