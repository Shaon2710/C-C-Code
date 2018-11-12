#include<bits/stdc++.h>

using namespace std;

int callgcd(int a, int b)
{
    if(b==0)
        return a;
    else return callgcd(b, a%b);
}


int main()
{
    int t,arr[110];
    scanf("%d",&t);
    getchar();
    string st;
    while(t--)
    {
        getline(cin,st);
        stringstream is(st);
        int j=0;
        while(is>>arr[j])
               ++j;
        int gcd=0;
        for(int i=0; i<j; i++)
        {
            for(int l=i+1; l<j; l++)
            {
                gcd = max(gcd ,callgcd(arr[i], arr[l]));

            }
        }
        printf("%d\n",gcd);
    }
    return 0;
}
