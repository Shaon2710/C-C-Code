#include<bits/stdc++.h>
using namespace std;


void marge_sort(int arr[], int low, int high);
void marge(int arr[], int low, int high);

int main(){

    int n;
    cin>> n;

    int arr[n];
    for(int i= 0; i<n; i++){
        cin>> arr[i];
    }
    marge_sort(arr,0,n);

    for(int i= 0; i<n; i++){
        cout << arr[i] << " ";
    }
}

void marge_sort(int arr[], int low, int high) {

    if(low == high) return;

    int mid = (low + high)/2;

    marge_sort(arr, low, mid);
    marge_sort(arr, mid+1, high);
    marge(arr,low,high);
}

void marge(int arr[], int low, int high) {
    int mid = (low + high)/2;
    int left[100];
    int right[100];
    int cnt = 0;
    for(int i = low; i <= mid; ++i){
        left[cnt] = arr[i];
        ++cnt;
    }
    left[cnt] = INT_MAX;

    cnt = 0;
    for(int i = mid + 1; i <= high; ++i){
        right[cnt] = arr[i];
        ++cnt;
    }
    right[cnt] = INT_MAX;

    int markLeft = 0, markRight = 0;
    for(int i = low; i<= high; i++){
        if(left[markLeft] <= right[markRight]){
            arr[i] = left[markLeft];
            markLeft++;
        } else {
            arr[i] = right[markRight];
            markRight++;
        }
    }
}

