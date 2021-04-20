#include <cstdio>
using namespace std;

int main(){
    int n,m,i,j,h=0;
    scanf("%d %d",&n,&m);
    int a[n][m],b[n][m];
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            h=a[i][j]+b[i][j];
            printf("%d ",h);
        }
        printf("\n");
    }
    return 0;
}
