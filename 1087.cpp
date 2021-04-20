#include <iostream>
using namespace std;

int main() {
    int k;
    double Sn=0;
    int n=0;
    cin>>k;
    while(Sn<=k){
        n++;
        Sn+=1/(double)n;
    }
    cout<<n<<endl;
    return 0;
}
