#include <cstdio>
using namespace std;
int main(){
    int n,i,mp=1,h=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        mp*=i;
        h+=mp;
    }
    printf("%d\n", h);
    return 0;
}
