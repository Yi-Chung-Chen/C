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

    printf("��J��ƭȡA��X�d�򤺪��Ҧ���ơA��J�榡(a,b)\n");

    int a,b;
    char c;
    scanf("%d",&a);
    scanf("%c",&c);/*�B�z�r����J*/
    scanf("%d",&b);

    if(a==1){
    printf("1 ");/*�B�z��q1�}�l*/
    }
    if(a>b){/*�B�z��d��Ѥj��p��J*/
        printf("%d��%d��������Ʀ�:",b,a);
        prime_print(b,a);
    }
    else{/*���`��J �Ѥp��j*/
        printf("%d��%d��������Ʀ�:",a,b);
        prime_print(a,b);
    }
    return 0;
}
