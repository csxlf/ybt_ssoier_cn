#include <iostream>
using namespace std;
int main() {
    double a;
    double t,h;
    cin >> a;
    h=a;
    t=a;
    int i=1;
    while(i<10){
        h=h/2;
        t=t+h*2;
        i++;
    }
    cout<<t<<endl;
    cout<<h/2<<endl;
    return 0;
}
