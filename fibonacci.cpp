#include <stdio.h>

int fib(int n){
    if(n==1||n==2){
        return 1;
    }
    else
        return fib(n-1)+fib(n-2);

}

void func(int num){
    for(int i=1;i<=num;i++){
        printf("%d ",fib(i));
    }
}

int main(){
    int N;
    printf("請輸入要產生的個數:");
    scanf("%d",&N);
    func(N);

    return 0;
}
