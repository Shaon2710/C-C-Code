#include<iostream>
#include<cmath>
#include<cstring>
#include<cstdio>

using namespace std;

int main()
{
int t, te=1;

double u,v,d,t1,t2,p;

cin>>t;
while(t--)
{
    scanf("%lf%lf%lf",&d,&v,&u);
    if(v==0 || u == 0 || v >=u)
    {
        printf("Case %d: can't determine\n",t++);
        continue;
    }
    t1 = (1.0*d)/(u*1.0);
    t2 = (1.0*d)/(sqrt((u*u)-(v*v))*1.0);

    p = fabs(t2-t1);

    printf("Case %d: %.3lf\n",te++,p);
}

return 0;
}
