#include<cstdio>
using namespace std;
int main()
{
    int n,x,y;
    int i,j;
    
    scanf("%d %d %d",&n,&x,&y);//输入棋盘大小n,棋子所在行列（x，y）
    
    for(i=1;i<=n;i++)//输出同一行的位置
        printf("(%d,%d) ",x,i);
    printf("\n");
    for(i=1;i<=n;i++)//输出同一列的位置
        printf("(%d,%d) ",i,y);
    printf("\n");
    
    for(i=1;i<=n;i++)//输出左上到右下对角线的位置
        for(j=1;j<=n;j++)
            if(x-y==i-j)
                printf("(%d,%d) ",i,j);
    printf("\n");
    for(i=n;i>=1;i--)//输出左下到右上对角线的位置
        for(j=n;j>=1;j--)
            if(x+y==i+j)
                printf("(%d,%d) ",i,j);
    printf("\n");
    return 0;
}
