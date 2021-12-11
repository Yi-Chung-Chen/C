#include<iostream>

using namespace std;


int combination(int n, int r){ //Don't enter negative n and r value.If you don't want to make your math cry. 
    int result;
    if(n>r){
        result = stage(n)/(stage(n-r)*stage(r));
    return result;
    }
    else if (n==r){
        return 1;
    }
    
    else if (n<r){
        cout<<"error condition n must larger than r."<<endl;
    }
}
