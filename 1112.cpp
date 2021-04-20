#include <cstdio>
using namespace std;
int main(){
  int x,m,max=-10001,min=10001;
  scanf("%d",&m);
  for(int i=0;i<m;i++){
    scanf("%d", &x);
    if(x>max) max=x;
    if(x<min) min=x;
  }
  printf("%d\n", max-min);
  return 0;
}
