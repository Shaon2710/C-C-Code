#include <iostream>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;

int main() {

    double h,area,a,b,c,d,s,x, t;
    int test,cs=1;
    cin >> test;
    for(int i=1; i<=test; i++) {
        cin >> a >> b >> c >> d;
        x = fabs(a - c);
        s = 0.5*(x+b+d);
        t = sqrt(s*(s-x)*(s-b)*(s-d));
        h = (t*2)/x;
        area = (0.5*(a+c)*h);
        printf("Case %d: %.10lf\n",i,area);
    }

    return 0;
}
