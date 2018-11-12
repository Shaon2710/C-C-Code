#include<stdio.h>
#include<math.h>
int main(){
    int n;
    unsigned long long sum;
    scanf("%d", &n);
    sum = pow(6,n);
    printf("%lld\n", sum%10);
    return 0;
}
