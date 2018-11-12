#include<stdio.h>

int main(){

    int total,t1,t2,f,a, cls,c1,c2,c3;
    int t;
    scanf("%d", &t);
    for(int i=1;i<=t;i++){
        scanf("%d%d%d", &t1,&t2,&f);
        scanf("%d", &a);
        scanf("%d%d%d", &c1,&c2,&c3);
        if(c1<=c2 && c1<=c3)
        cls=(c2+c3)/2;
        else if(c2<=c1 && c2<=c3)
        cls=(c1+c3)/2;
        else if(c3<=c1 && c3<=c2)
        cls=(c1+c2)/2;
        total = t1+t2+f+a+cls;

        if( total >=90)printf("Case %d: A\n",i);
        else if(total >=80)printf("Case %d: B\n",i);
        else if(total >=70)printf("Case %d: C\n",i);
        else if( total >=60)printf("Case %d: D\n",i);
        else if( total <60 )printf("Case %d: F\n",i);
    }

    return 0;
}

