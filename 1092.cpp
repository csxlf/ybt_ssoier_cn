#include <cstdio>
using namespace std;
int main(){
    int n,i;
    double e=1,mp=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mp*=i;
        e+=1/mp;
    }
    printf("%.10f\n",e);
    return 0;
}
