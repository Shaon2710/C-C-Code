#include<iostream>
#include<stdio.h>

using namespace std;

int main(){

  int s;
  scanf("%d", &s);
  for(int i =0; i<s; i++){

    int n;
    int ck=1;
    int h[101];
    scanf("%d", &n);

      for(int j=0; j<n;j++){
        scanf("%d", &h[j]);
      }

      int ha = n/2;
      for(int m=0; m < ha; m++){
        int ka = n-1;

        if(h[m]!= h[ka-m]){
          ck = 0;
          break;
        }
      }

      if(ck = 1){
        printf("yes \n");
      }
      else{
        printf("no \n");
      }

    }

  return 0;

}
