#include <iostream>
using namespace std;

int main() {
    int n,m,i,cnt=0;
    cin >> n;
    int a[n];
    for(i=0;i<n;i++)
    cin>>a[i];
    cin >>m;
    for(i=0;i<n;i++){
        if(a[i]==m) cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}
