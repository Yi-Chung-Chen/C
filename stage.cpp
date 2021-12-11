#include <iostream>

using namespace std;
int stage(int n){
    int sum;
    if(n>0){
        sum=n*stage(n-1);
        return  sum;
    }
    else if (n==0){
        return 1;
    }
    else if (n<0){
        cout<<"error condition"<<endl;
    }
}
