#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float n;
    cin >> n ;
    if(n>=0){
        cout <<setiosflags(ios::fixed)<<setprecision(2)<< n << endl;
    }else{
        cout <<setiosflags(ios::fixed)<<setprecision(2)<< -n << endl;
    }
    return 0;
}
