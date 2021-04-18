#include <iostream>
using namespace std;

int main() {
    int n,max=0,g;
    cin >>n;
    for(int i=0;i<n;i++){
        cin >> g;
        if(max<g){
        max=g;
        }
    }
    cout<<max<<endl;
    return 0;
}
