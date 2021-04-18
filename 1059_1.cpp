#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    cin >> n;
    float c,t=0;
    for(int i=0;i<n;i++){
        cin >> c;
        t=t+c;
    }
    cout <<setiosflags(ios::fixed)<<setprecision(2)<< t/n<<endl;
    return 0;
}
