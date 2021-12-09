#include<iostream>

using namespace std;

int isprime(int n){
    for(int i=2;i<=n;i++){
        if(n%i!=0){
            return n;//is prime
        }
        else
            return 0;// not prime
    }

}
