#include <stdio.h>

int main(){



    int a[9][8][7];
    int i,j,k;
    for (i=0;i<9;i++){
        for (j=0;j<8;j++){
            for (k=0;k<7;k++){
                printf("a[%d][%d][%d]的值為=%d\t",i,j,k,i+j+k);
            }
        }
    }
    return 0;
}
