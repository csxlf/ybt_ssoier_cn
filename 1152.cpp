#include <cstdio>
using namespace std;
double maximum( double x,double y, double z ) {
    double max = x;
    if (y>max) max = y;
    if (z>max) max = z;
    return max;
}
int main(){
    double a,b,c,m;
    scanf("%lf %lf %lf",&a,&b,&c);
    m=maximum(a, b, c)/(maximum(a+b, b, c)*maximum(a, b, b+c));
    printf("%0.3lf\n",m);
    return 0;
}
