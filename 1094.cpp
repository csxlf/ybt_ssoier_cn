#include <cstdio>
#include <math.h>
using namespace std;
int main(){
    int n,h=0;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%7==0){
        }else if(i%10==7){
        }else if(i/10==7){
        }else{
            h+=pow(i,2);
        }
    }printf("%d\n",h);
    return 0;
}
