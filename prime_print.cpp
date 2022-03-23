#include <stdio.h>
void prime_print(int a,int b){
    for (int i=a; i<b; i++){

        for (int j=2; j<i; j++){
            if (i % j == 0)
                break;
            else if (i == j+1)
                printf("%d ",i);
        }
    }
}
int main(){

    printf("輸入兩數值，輸出範圍內的所有質數，輸入格式(a,b)\n");

    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%c",&c);/*處理逗號輸入*/
    scanf("%d",&b);

    if(a==1){
    printf("1 ");/*處理當從1開始*/
    }
    if(a>b){/*處理當範圍由大到小輸入*/
        printf("%d到%d之間的質數有:",b,a);
        prime_print(b,a);
    }
    else{/*正常輸入 由小到大*/
        printf("%d到%d之間的質數有:",a,b);
        prime_print(a,b);
    }
    return 0;
}
