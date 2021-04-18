#include <iostream>
using namespace std;

int main() {
    int k;
    cin >> k;
    int i,a,b,c;
    if(k<=2){
        cout <<1<<endl;
    }else{
        a=1;
        b=1;
        for(i=3;i<=k;i++){
            c=a+b;
            a=b;
            b=c;
        }cout <<c<<endl;
    }
    return 0;
}
