#include <cstdio>
using namespace std;

int main(){
    int m,n,i,j;
    float l=0,h=0;
    scanf("%d %d",&m,&n);
    l=m*n;
    int a[m][n];
    int b[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(a[i][j]==b[i][j]){
                h++;
            }
        }
    }
    printf("%.2f\n",h/l*100);
    return 0;
}
