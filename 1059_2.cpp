#include <cstdio>
using namespace std;

int main() {
    int n;
    scanf("%d",&n);
    float c,t=0;
    for(int i=0;i<n;i++){
        scanf("%f",&c);
        t=t+c;
    }
    printf("%0.2f\n",t/n);
    return 0;
}
