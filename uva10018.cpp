#include<iostream>
#include<stdio.h>

using namespace std;


int pelendrom(long number){

    int n, reversedInteger = 0, remainder, originalInteger;


    n = number;

    originalInteger = n;

    // reversed integer is stored in variable
    while( n!=0 )
    {
        remainder = n%10;
        reversedInteger = reversedInteger*10 + remainder;
        n /= 10;
    }

    if (originalInteger == reversedInteger)
        return 1;
}
long reverce(int num){

    int n, reversedNumber = 0, remainder;

    n = num;

    while(n != 0)
    {
        remainder = n%10;
        reversedNumber = reversedNumber*10 + remainder;
        n /= 10;
    }

    return num+reversedNumber;

}

int main(){

    int n, ck = 0;

    long x;
    int y = 0;

    cin >> n;

    if(y==1){
        cout <<ck<<" " << x << endl;
    }
    else if(y == 0)
    {
        ++ck;
         x = reverce(n);
         y = pelendrom(x);
    }

    return 0;
}
