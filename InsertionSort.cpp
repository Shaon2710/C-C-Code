#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{

    int n;
    scanf("%d", &n);
    int arr[n+1];

    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<n; i++){
        int j=i;
        while(j>0 && arr[j] > arr[j-1]){
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }

    }
    for(int i=0;i<n;i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}
