#include <cstdio>
using namespace std;
int f(int n){
    int i,sum=0;
    for(i=1;i<n;i++)
        if(n%i==0)sum+=i;
    return (sum==i);
}
int main(){
    int n,i;
    scanf("%d",&n);
    for(i=2;i<=n;i++)
        if(f(i))
            printf("%d\n",i);
    return 0;
}
