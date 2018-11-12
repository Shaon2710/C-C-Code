#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    int n, a[10][10], b[10][10],c[10][10];

    /// input the A matrix.....
    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &a[i][j]);
        }
    }

    /// input the B matrix.....
    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++){
            scanf("%d", &b[i][j]);
        }
    }

    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++){
            c[i][j]=0;
        }
    }

    ///  matrix multiply .......
    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++){
            for(int k=0; k<3; k++){
                c[i][j] = c[i][j]+ a[i][k]*b[k][j];
            }
        }
    }

    /// output the matrix....
    for(int i=0; i< 3; i++){
        for(int j=0; j<3; j++){
            printf("%d\t", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
